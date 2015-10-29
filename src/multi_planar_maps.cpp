#include "mutli_planar_maps.h"

namespace multi_planar_maps {
    MultiPlanarMaps::MultiPlanarMaps(){
        _cloud_blob = new pcl::PointCloud<pcl::PointXYZ>;
    }

    MultiPlanarMap::~MultiPlanarMap() {}

    void MultiPlanarMap::InitializeWithCloud(pcl::PointCloud<pcl::PointXYZ>::Ptr& cloud){
        *_cloud = cloud;
    }
}
