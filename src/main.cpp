/* Author       : Srivathsan Murali
 * Description  : Uses Junhao Xiao's implementation of fast plane detection
 */

#include<iostream>

#include<pcl/io/pcd_io.h>
#include<pcl/io/ply_io.h>
#include<pcl/point_types.h>

#include<pcl/visualization/cloud_viewer.h>

#include<pcl/filters/voxel_grid.h>


using namespace std;

// visualizes the point cloud using the pclvisualizer
// PointXYZ cloud
void visualize(pcl::PointCloud<pcl::PointXYZ>::Ptr cloud){

    // Visualization of the cloud.. ptr : cloud
    pcl::visualization::PCLVisualizer p ("test cloud");

    p.addPointCloud<pcl::PointXYZ> (cloud,"cloud");
    p.setPointCloudRenderingProperties(pcl::visualization::PCL_VISUALIZER_POINT_SIZE,1,"cloud");
     
    while(!p.wasStopped()){
        p.spinOnce(100);
        boost::this_thread::sleep(boost::posix_time::microseconds(100000));
    }
}



int main(int argc, char** argv){
    cout<<"----- Plane detection -----"<<endl;

    cout<<"Reading point cloud from PLY file \n";
    pcl::PointCloud<pcl::PointXYZ>::Ptr cloud_blob (new pcl::PointCloud<pcl::PointXYZ>);
    
    pcl::PLYReader reader;
    reader.read("full_mesh.ply",*cloud_blob);
    cout<<"Read "<<cloud_blob->points.size()<<" data points.\n" ;


    // Visualizing the point cloud
    visualize(cloud_blob);
    return 0;
}
