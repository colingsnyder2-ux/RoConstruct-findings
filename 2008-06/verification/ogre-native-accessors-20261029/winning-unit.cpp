#undef OGRE_NONCLIENT_BUILD
#include <Ogre.h>
namespace Ogre {
class RbxSubEntity : public SubEntity, public ShadowCaster {
public:
    Matrix4 transform;
    SubMesh* lodMeshes[1];
    unsigned int lodIndex;
    Real extrusionDistance;
    bool castShadows;
    ShadowRenderable* shadow;
    std::vector<ShadowRenderable*> shadows;
    RbxSubEntity(Entity* parent);
    RbxSubEntity(Entity* parent, SubMesh* mesh, unsigned int lod);
    ~RbxSubEntity();
    bool getCastShadows() const;
    const AxisAlignedBox& getWorldBoundingBox(bool derive = false) const;
    const AxisAlignedBox& getLightCapBounds() const;
    const AxisAlignedBox& getDarkCapBounds(const Light&, Real) const;
    ShadowRenderableListIterator getShadowVolumeRenderableIterator(
        ShadowTechnique, const Light*, HardwareIndexBufferSharedPtr*, bool, Real, unsigned long = 0);
    bool hasEdgeList();
    EdgeData* getEdgeList();
    const Vector3& getPosition() const;
    Real getPointExtrusionDistance(const Light* light) const;
    void setLodMesh(unsigned int lod, SubMesh* mesh);
    void setLodIndex(unsigned int lod);
    void setShadowExtrusionDistance(Real distance);
    Real getShadowExtrusionDistance() const;
};
RbxSubEntity::RbxSubEntity(Entity* parent)
    : SubEntity(parent, 0), lodIndex(0), castShadows(true) {
    shadow = 0;
    lodMeshes[0] = 0;
}
RbxSubEntity::RbxSubEntity(Entity* parent, SubMesh* mesh, unsigned int lod)
    : SubEntity(parent, 0), lodIndex(lod), castShadows(true) {
    lodMeshes[0] = 0;
    if (!lod) mSubMesh = mesh;
    else lodMeshes[lod - 1] = mesh;
    shadow = 0;
}
RbxSubEntity::~RbxSubEntity() {
    for (int i = 0; i < (int)shadows.size(); ++i) delete shadows[i];
    shadows.clear();
}
const Vector3& RbxSubEntity::getPosition() const {
    static Vector3 position = transform.getTrans();
    return position;
}
}

#include <exception>
namespace Ogre {
bool RbxSubEntity::getCastShadows() const {
    return castShadows;
}
EdgeData* RbxSubEntity::getEdgeList() {
    throw std::exception("RBX RbxSubEntity::getEdgeList(): should not be called");
}
bool RbxSubEntity::hasEdgeList() {
    throw std::exception("RBX RbxSubEntity::hasEdgeList(): should not be called");
}
}

namespace Ogre {
void RbxSubEntity::setLodMesh(unsigned int lod, SubMesh* mesh) {
    if (!lod) mSubMesh = mesh;
    else lodMeshes[lod - 1] = mesh;
}
void RbxSubEntity::setLodIndex(unsigned int lod) { lodIndex = lod; }
void RbxSubEntity::setShadowExtrusionDistance(Real distance) { extrusionDistance = distance; }
Real RbxSubEntity::getShadowExtrusionDistance() const { return extrusionDistance; }
}

extern "C" int native_subentity_accessors_smoke() {
    Ogre::LogManager logs;
    Ogre::ResourceGroupManager groups;
    Ogre::MaterialManager materials;
    Ogre::SubMesh primary, lod;
    Ogre::RbxSubEntity entity(0);
    typedef void (Ogre::RbxSubEntity::*MeshSetter)(unsigned int, Ogre::SubMesh*);
    typedef void (Ogre::RbxSubEntity::*IndexSetter)(unsigned int);
    typedef void (Ogre::RbxSubEntity::*DistanceSetter)(Ogre::Real);
    typedef Ogre::Real (Ogre::RbxSubEntity::*DistanceGetter)() const;
    MeshSetter volatile setMesh = &Ogre::RbxSubEntity::setLodMesh;
    IndexSetter volatile setIndex = &Ogre::RbxSubEntity::setLodIndex;
    DistanceSetter volatile setDistance = &Ogre::RbxSubEntity::setShadowExtrusionDistance;
    DistanceGetter volatile getDistance = &Ogre::RbxSubEntity::getShadowExtrusionDistance;
    (entity.*setMesh)(0, &primary);
    (entity.*setMesh)(1, &lod);
    if (entity.getSubMesh() != &primary || entity.lodMeshes[0] != &lod) return 1;
    (entity.*setIndex)(1);
    if (entity.lodIndex != 1) return 2;
    (entity.*setIndex)(0);
    if (entity.lodIndex != 0) return 3;
    const Ogre::Real distances[] = {0.0f, 7.5f, -2.0f};
    for (unsigned int i = 0; i < 3; ++i) {
        (entity.*setDistance)(distances[i]);
        if ((entity.*getDistance)() != distances[i]) return 4;
    }
    Ogre::Light point;
    point.setAttenuation(100.0f, 1.0f, 0.0f, 0.0f);
    entity.transform = Ogre::Matrix4::IDENTITY;
    entity.transform.setTrans(Ogre::Vector3(3.0f, 4.0f, 0.0f));
    typedef Ogre::Real (Ogre::RbxSubEntity::*PointGetter)(const Ogre::Light*) const;
    PointGetter volatile pointDistance = &Ogre::RbxSubEntity::getPointExtrusionDistance;
    if ((entity.*pointDistance)(&point) != 95.0f) return 6;
    return entity.getCastShadows() ? 0 : 5;
}

namespace Ogre {
Real RbxSubEntity::getPointExtrusionDistance(const Light* light) const {
    return getExtrusionDistance(transform.getTrans(), light);
}
}
