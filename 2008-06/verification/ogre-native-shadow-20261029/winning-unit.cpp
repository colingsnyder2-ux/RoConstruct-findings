#undef OGRE_NONCLIENT_BUILD
#include <Ogre.h>
#include <OgreDefaultHardwareBufferManager.h>
#include <cstring>
namespace Ogre {
class RbxSubEntity : public SubEntity, public ShadowCaster {
public:
class RbxSubEntityShadowRenderable : public ShadowRenderable
		{
		protected:

			// Shared link to position buffer
			HardwareVertexBufferSharedPtr mPositionBuffer;
			// Shared link to w-coord buffer (optional)
			HardwareVertexBufferSharedPtr mWBuffer;
			// Link to current vertex data used to bind (maybe changes)
			const VertexData* mCurrentVertexData;
			// Original position buffer source binding
			unsigned short mOriginalPosBufferBinding;
			/// Link to SubEntity, only present if SubEntity has it's own geometry
			SubEntity* mSubEntity;


		public:
			RbxSubEntityShadowRenderable(Entity* parent,
				HardwareIndexBufferSharedPtr* indexBuffer, const VertexData* vertexData,
				bool createSeparateLightCap, SubEntity* subent, bool isLightCap = false);
			~RbxSubEntityShadowRenderable();
			/// Overridden from ShadowRenderable
			void getWorldTransforms(Matrix4* xform) const;
			/// Overridden from ShadowRenderable
			const Quaternion& getWorldOrientation(void) const;
			/// Overridden from ShadowRenderable
			const Vector3& getWorldPosition(void) const;
			HardwareVertexBufferSharedPtr getPositionBuffer(void) { return mPositionBuffer; }
			HardwareVertexBufferSharedPtr getWBuffer(void) { return mWBuffer; }
			/// Rebind the source positions (for temp buffer users)
			void rebindPositionBuffer(const VertexData* vertexData, bool force);
			/// Overridden from ShadowRenderable
			bool isVisible(void) const;

		};

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
    {
        Ogre::DefaultHardwareBufferManager buffers;
        Ogre::VertexData vertices, alternate;
        vertices.vertexCount = alternate.vertexCount = 3;
        vertices.vertexDeclaration->addElement(0, 0, Ogre::VET_FLOAT3, Ogre::VES_POSITION);
        alternate.vertexDeclaration->addElement(0, 0, Ogre::VET_FLOAT3, Ogre::VES_POSITION);
        Ogre::HardwareVertexBufferSharedPtr positions = buffers.createVertexBuffer(
            3 * sizeof(float), 6, Ogre::HardwareBuffer::HBU_STATIC);
        Ogre::HardwareVertexBufferSharedPtr replacement = buffers.createVertexBuffer(
            3 * sizeof(float), 6, Ogre::HardwareBuffer::HBU_STATIC);
        const float data[18] = {0,0,0, 1,0,0, 0,1,0, 0,0,1, 1,0,1, 0,1,1};
        positions->writeData(0, sizeof(data), data);
        replacement->writeData(0, sizeof(data), data);
        float readback[18];
        positions->readData(0, sizeof(readback), readback);
        if (std::memcmp(data, readback, sizeof(data))) return 7;
        vertices.vertexBufferBinding->setBinding(0, positions);
        alternate.vertexBufferBinding->setBinding(0, replacement);
        Ogre::HardwareIndexBufferSharedPtr indices = buffers.createIndexBuffer(
            Ogre::HardwareIndexBuffer::IT_16BIT, 3, Ogre::HardwareBuffer::HBU_STATIC);
        const unsigned short indexData[3] = {0,1,2};
        indices->writeData(0, sizeof(indexData), indexData);
        typedef Ogre::RbxSubEntity::RbxSubEntityShadowRenderable NativeShadow;
        typedef bool (NativeShadow::*VisibilityGetter)() const;
        VisibilityGetter volatile visible = &NativeShadow::isVisible;
        for (int mode = 0; mode < 3; ++mode) {
            if (mode == 2) vertices.hardwareShadowVolWBuffer = buffers.createVertexBuffer(
                sizeof(float), 6, Ogre::HardwareBuffer::HBU_STATIC);
            const unsigned int positionRefs = positions.useCount();
            const unsigned int replacementRefs = replacement.useCount();
            const unsigned int indexRefs = indices.useCount();
            {
                NativeShadow shadow(0, &indices, &vertices, mode != 0, &entity);
                entity.setVisible(false);
                if ((shadow.*visible)()) return 8;
                entity.setVisible(true);
                if (!(shadow.*visible)()) return 9;
                Ogre::RenderOperation* op = shadow.getRenderOperationForUpdate();
                if (op->vertexData->vertexCount != 6 || op->indexData->indexStart != 0 ||
                    op->indexData->indexBuffer.get() != indices.get()) return 10;
                if (mode != 0) {
                    Ogre::RenderOperation cap;
                    shadow.getLightCapRenderable()->getRenderOperation(cap);
                    if (cap.vertexData->vertexCount != 3) return 11;
                }
                if (mode == 2 && op->vertexData->vertexBufferBinding->getBuffer(1).get() !=
                    vertices.hardwareShadowVolWBuffer.get()) return 12;
                shadow.rebindPositionBuffer(&alternate, false);
                shadow.rebindPositionBuffer(&alternate, true);
                if (shadow.getPositionBuffer().get() != replacement.get() ||
                    op->vertexData->vertexBufferBinding->getBuffer(0).get() != replacement.get()) return 13;
                if (mode != 0) {
                    Ogre::RenderOperation cap;
                    shadow.getLightCapRenderable()->getRenderOperation(cap);
                    if (cap.vertexData->vertexBufferBinding->getBuffer(0).get() != replacement.get()) return 14;
                }
            }
            if (positions.useCount() != positionRefs || replacement.useCount() != replacementRefs ||
                indices.useCount() != indexRefs) return 15;
        }
    }
    return entity.getCastShadows() ? 0 : 5;
}

namespace Ogre {
Real RbxSubEntity::getPointExtrusionDistance(const Light* light) const {
    return getExtrusionDistance(transform.getTrans(), light);
}
}

namespace Ogre {
RbxSubEntity::RbxSubEntityShadowRenderable::RbxSubEntityShadowRenderable(Entity* parent,
        HardwareIndexBufferSharedPtr* indexBuffer, const VertexData* vertexData,
        bool createSeparateLightCap, SubEntity* subent, bool isLightCap)
        : mSubEntity(subent)
    {
        // Save link to vertex data
        mCurrentVertexData = vertexData;

        // Initialise render op
        mRenderOp.indexData = new IndexData();
        mRenderOp.indexData->indexBuffer = *indexBuffer;
        mRenderOp.indexData->indexStart = 0;
        // index start and count are sorted out later

        // Create vertex data which just references position component (and 2 component)
        mRenderOp.vertexData = new VertexData();
        // Map in position data
        mRenderOp.vertexData->vertexDeclaration->addElement(0,0,VET_FLOAT3, VES_POSITION);
        mOriginalPosBufferBinding =
            vertexData->vertexDeclaration->findElementBySemantic(VES_POSITION)->getSource();
        mPositionBuffer = vertexData->vertexBufferBinding->getBuffer(mOriginalPosBufferBinding);
        mRenderOp.vertexData->vertexBufferBinding->setBinding(0, mPositionBuffer);
        // Map in w-coord buffer (if present)
        if(!vertexData->hardwareShadowVolWBuffer.isNull())
        {
            mRenderOp.vertexData->vertexDeclaration->addElement(1,0,VET_FLOAT1, VES_TEXTURE_COORDINATES, 0);
            mWBuffer = vertexData->hardwareShadowVolWBuffer;
            mRenderOp.vertexData->vertexBufferBinding->setBinding(1, mWBuffer);
        }
        // Use same vertex start as input
        mRenderOp.vertexData->vertexStart = vertexData->vertexStart;

        if (isLightCap)
        {
            // Use original vertex count, no extrusion
            mRenderOp.vertexData->vertexCount = vertexData->vertexCount;
        }
        else
        {
            // Vertex count must take into account the doubling of the buffer,
            // because second half of the buffer is the extruded copy
            mRenderOp.vertexData->vertexCount =
                vertexData->vertexCount * 2;
            if (createSeparateLightCap)
            {
                // Create child light cap
                mLightCap = new RbxSubEntityShadowRenderable(parent,
                    indexBuffer, vertexData, false, subent, true);
            }
        }

    }


    RbxSubEntity::RbxSubEntityShadowRenderable::~RbxSubEntityShadowRenderable()
    {
        delete mRenderOp.indexData;
        delete mRenderOp.vertexData;
 mRenderOp.indexData = 0;
 mRenderOp.vertexData = 0;
    }


    void RbxSubEntity::RbxSubEntityShadowRenderable::rebindPositionBuffer(const VertexData* vertexData, bool force)
    {
        if (force || mCurrentVertexData != vertexData)
        {
            mCurrentVertexData = vertexData;
            mPositionBuffer = mCurrentVertexData->vertexBufferBinding->getBuffer(
                mOriginalPosBufferBinding);
            mRenderOp.vertexData->vertexBufferBinding->setBinding(0, mPositionBuffer);
            if (mLightCap)
            {
                static_cast<RbxSubEntityShadowRenderable*>(mLightCap)->rebindPositionBuffer(vertexData, force);
            }
        }
    }


    bool RbxSubEntity::RbxSubEntityShadowRenderable::isVisible(void) const
    {
        return mSubEntity->isVisible();
    }

}

namespace Ogre {
void RbxSubEntity::RbxSubEntityShadowRenderable::getWorldTransforms(Matrix4* xform) const {
    mSubEntity->getWorldTransforms(xform);
}
const Quaternion& RbxSubEntity::RbxSubEntityShadowRenderable::getWorldOrientation() const {
    return mSubEntity->getWorldOrientation();
}
const Vector3& RbxSubEntity::RbxSubEntityShadowRenderable::getWorldPosition() const {
    return mSubEntity->getWorldPosition();
}
}
