#ifndef __MULTI_PLANAR_MAPS_H_
#define __MULTI_PLANAR_MAPS_H_

#include<iostream>
#include<pcl/io/ply_io.h>
#include<pcl/io/pcd_io.h>
#include<pcl/point_types.h>

#include<pcl/visualization/cloud_viewer.h>

namespace cvg {
    class MultiPlanarMap;
    typedef std::shared_ptr<MultiPlanarMap> MultiPlanarMapPtr;

    class MultiPlanarMap {
        public:
            MultiPlanarMap();
            virtual ~MultiPlanarMap();
            
            void InitializeWithCloud(pcl::PointCloud<pcl::PointXYZ>::ptr& cloud);
            void Visualize();

        private:
            pcl::PointCloud<pcl::PointXYZ> _cloud_blob;
    };
}

#endif
