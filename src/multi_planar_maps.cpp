#include "mutli_planar_maps.h"

namespace multi_planar_maps {
    MultiPlanarMaps::MultiPlanarMaps(){
        _cloud_blob = new pcl::PointCloud<pcl::PointXYZ>;
    }

    MultiPlanarMap::~MultiPlanarMap() {}

    void MultiPlanarMap::InitializeWithCloud(pcl::PointCloud<pcl::PointXYZ>::Ptr& cloud){
        *_cloud_blob = cloud;
    }

    void MultiPlanarMap::Visualize(){
        pcl::Visualization::PCLVisualizer p ("Show case");
        
        p.addPointCloud<pcl::PointXYZ> (_cloud_blob,"cloud");
        p.setPointCloudRenderingProperties(pcl::visulization::PCL_VISUALIZATION_POINT_SIZE,1,"cloud");

        p.spin();
    }
}
