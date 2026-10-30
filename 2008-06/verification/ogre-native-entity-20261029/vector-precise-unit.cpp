#define _DLL
#undef OGRE_NONCLIENT_BUILD
#pragma float_control(precise, on, push)
#include <OgreVector3.h>
#pragma float_control(pop)
#include <Ogre.h>

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
class RbxSceneNode : public SceneNode {};
class RbxSky;
class RbxSceneManagerFactory : public SceneManagerFactory {
protected:
    void initMetaData() const;
public:
    static const String FACTORY_TYPE_NAME;
    SceneManager* createInstance(const String& name);
    void destroyInstance(SceneManager* manager);
};

class RbxSceneManager : public SceneManager {
    class ShadowCasterSceneQueryListener : public SceneQueryListener {
        SceneManager* mSceneMgr;
        ShadowCasterList* mCasterList;
        bool mIsLightInFrustum;
        const PlaneBoundedVolumeList* mLightClipVolumeList;
        const Camera* mCamera;
        const Light* mLight;
        Real mFarDistSquared;

    public:
        explicit ShadowCasterSceneQueryListener(SceneManager* sceneManager)
            : mSceneMgr(sceneManager),
              mCasterList(0),
              mIsLightInFrustum(false),
              mLightClipVolumeList(0),
              mCamera(0)
        {
        }

        bool queryResult(MovableObject* object);
        bool queryResult(SceneQuery::WorldFragment* fragment);
    };

    class SceneMgrQueuedRenderableVisitor : public QueuedRenderableVisitor {
        const Pass* mUsedPass;

    public:
        SceneMgrQueuedRenderableVisitor()
            : transparentShadowCastersMode(false)
        {
        }

        ~SceneMgrQueuedRenderableVisitor()
        {
        }

        void visit(const Renderable* renderable);
        bool visit(const Pass* pass);
        void visit(const RenderablePass* renderablePass);

        SceneManager* targetSceneMgr;
        bool transparentShadowCastersMode;
        bool autoLights;
        const LightList* manualLightList;
    };

    bool mRbxVisibilityFlag;
    bool mRbxRenderFlag;
    String mRbxSkyName;
    SharedPtr<RbxSky> mRbxSky;
    SceneNode* mRbxSkyNode;
    ShadowCasterSceneQueryListener* mShadowCasterQueryListener;
    SceneMgrQueuedRenderableVisitor* mActiveQueuedRenderableVisitor;
    SceneMgrQueuedRenderableVisitor mDefaultQueuedRenderableVisitor;

public:
    MovableObject* createMovableObject(const String& name, const String& typeName, const NameValuePairList* params = 0);
    void destroyMovableObject(const String& name, const String& typeName);
    void destroyMovableObject(MovableObject* object);
    void destroyAllMovableObjectsByType(const String& typeName);
    void destroyAllMovableObjects();
    MovableObjectIterator getMovableObjectIterator(const String& typeName);
    void injectMovableObject(MovableObject* object);
    void extractMovableObject(MovableObject* object);
    void extractMovableObject(const String& name, const String& typeName);
    bool hasMovableObject(const String& name, const String& typeName) const;
    MovableObject* getMovableObject(const String& name, const String& typeName) const;
protected:
    MovableObjectCollection* getMovableObjectCollection(const String& typeName);
    const MovableObjectCollection* getMovableObjectCollection(const String& typeName) const;
public:
    bool hasCamera(const String& name) const;
    bool hasSceneNode(const String& name) const;
    Camera* createCamera(const String& name);
    void destroyCamera(Camera* camera);
    void destroyCamera(const String& name);
    void setWorldGeometry(const String& filename);
    void setWorldGeometry(DataStreamPtr& stream, const String& typeName = StringUtil::BLANK);
    void _renderScene(Camera* camera, Viewport* viewport, bool includeOverlays);
    const Pass* _setPass(const Pass* pass, bool evenIfSuppressed = false, bool shadowDerivation = true);
    const Pass* deriveShadowCasterPass(const Pass* pass);
    const Pass* deriveShadowReceiverPass(const Pass* pass);
    void findLightsAffectingFrustum(const Camera* camera);
    void _updateSceneGraph(Camera* camera);
    void _findVisibleObjects(Camera* camera, VisibleObjectsBoundsInfo* bounds, bool onlyShadowCasters);
    RenderQueue* getRenderQueue();
protected:
    void renderSingleObject(const Renderable* renderable, const Pass* pass, bool doLightIteration, const LightList* manualLights = 0);
    void useRenderableViewProjMode(const Renderable* renderable);
    void resetViewProjMode();
    void renderObjects(const QueuedRenderableCollection& objects, QueuedRenderableCollection::OrganisationMode mode, bool doLightIteration, const LightList* manualLights);
    void initRenderQueue();
    void prepareRenderQueue();
public:
    const String& getTypeName() const;
    explicit RbxSceneManager(const String& name);
    virtual ~RbxSceneManager();
    virtual void destroyAllCameras(void);
    virtual void clearScene(void);
};

RbxSceneManager::RbxSceneManager(const String& name)
    : SceneManager(name)
{
    mShadowCasterQueryListener = new ShadowCasterSceneQueryListener(this);
    mActiveQueuedRenderableVisitor = &mDefaultQueuedRenderableVisitor;
}

RbxSceneManager::~RbxSceneManager()
{
    clearScene();
    destroyAllCameras();

    for (MovableObjectCollectionMap::iterator item = mMovableObjectCollectionMap.begin();
         item != mMovableObjectCollectionMap.end(); ++item)
    {
        delete item->second;
    }
    mMovableObjectCollectionMap.clear();

    delete mShadowCasterQueryListener;
}

}

namespace Ogre {
void RbxSceneManager::SceneMgrQueuedRenderableVisitor::visit(const Renderable* r)
{
	// Give SM a chance to eliminate
	if (static_cast<RbxSceneManager*>(targetSceneMgr)->validateRenderableForRendering(mUsedPass, r))
	{
		// Render a single object, this will set up auto params if required
		static_cast<RbxSceneManager*>(targetSceneMgr)->renderSingleObject(r, mUsedPass, autoLights, manualLightList);
	}
}
bool RbxSceneManager::SceneMgrQueuedRenderableVisitor::visit(const Pass* p)
{
	// Give SM a chance to eliminate this pass
	if (!static_cast<RbxSceneManager*>(targetSceneMgr)->validatePassForRendering(p))
		return false;

	// Set pass, store the actual one used
	mUsedPass = static_cast<RbxSceneManager*>(targetSceneMgr)->_setPass(p);


	return true;
}
void RbxSceneManager::SceneMgrQueuedRenderableVisitor::visit(const RenderablePass* rp)
{
	// Skip this one if we're in transparency cast shadows mode & it doesn't
	// Don't need to implement this one in the other visit methods since
	// transparents are never grouped, always sorted
	if (transparentShadowCastersMode &&
		!rp->pass->getParent()->getParent()->getTransparencyCastsShadows())
		return;

	// Give SM a chance to eliminate
	if (static_cast<RbxSceneManager*>(targetSceneMgr)->validateRenderableForRendering(rp->pass, rp->renderable))
	{
		mUsedPass = static_cast<RbxSceneManager*>(targetSceneMgr)->_setPass(rp->pass);
		static_cast<RbxSceneManager*>(targetSceneMgr)->renderSingleObject(rp->renderable, mUsedPass, autoLights,
			manualLightList);
	}
}
bool RbxSceneManager::ShadowCasterSceneQueryListener::queryResult(
    MovableObject* object)
{
    if (object->getCastShadows() && object->isVisible() &&
		mSceneMgr->isRenderQueueToBeProcessed(object->getRenderQueueGroup()) &&
		// objects need an edge list to cast shadows (shadow volumes only)
		((mSceneMgr->getShadowTechnique() & SHADOWDETAILTYPE_TEXTURE) ||
		 (mSceneMgr->getShadowTechnique() & SHADOWDETAILTYPE_STENCIL) && object->hasEdgeList()
		)
	   )
    {
        if (mFarDistSquared)
        {
            // Check object is within the shadow far distance
            Vector3 toObj = object->getParentNode()->_getDerivedPosition()
                - mCamera->getDerivedPosition();
            Real radius = object->getWorldBoundingSphere().getRadius();
            Real dist =  toObj.squaredLength();
            if (dist - (radius * radius) > mFarDistSquared)
            {
                // skip, beyond max range
                return true;
            }
        }

        // If the object is in the frustum, we can always see the shadow
        if (mCamera->isVisible(object->getWorldBoundingBox()))
        {
            mCasterList->push_back(object);
            return true;
        }

        // Otherwise, object can only be casting a shadow into our view if
        // the light is outside the frustum (or it's a directional light,
        // which are always outside), and the object is intersecting
        // on of the volumes formed between the edges of the frustum and the
        // light
        if (!mIsLightInFrustum || mLight->getType() == Light::LT_DIRECTIONAL)
        {
            // Iterate over volumes
            PlaneBoundedVolumeList::const_iterator i, iend;
            iend = mLightClipVolumeList->end();
            for (i = mLightClipVolumeList->begin(); i != iend; ++i)
            {
                if (i->intersects(object->getWorldBoundingBox()))
                {
                    mCasterList->push_back(object);
                    return true;
                }

            }

        }
    }
    return true;
}
bool RbxSceneManager::ShadowCasterSceneQueryListener::queryResult(
    SceneQuery::WorldFragment* fragment)
{
    // don't deal with world geometry
    return true;
}
}

namespace Ogre {
const String RbxSceneManagerFactory::FACTORY_TYPE_NAME = "RbxSceneManager";
const String& RbxSceneManager::getTypeName() const { return RbxSceneManagerFactory::FACTORY_TYPE_NAME; }
void RbxSceneManagerFactory::initMetaData() const {
    mMetaData.typeName = FACTORY_TYPE_NAME;
    mMetaData.description = "The Roblox scene manager";
    mMetaData.sceneTypeMask = ST_GENERIC;
    mMetaData.worldGeometrySupported = false;
}
SceneManager* RbxSceneManagerFactory::createInstance(const String& name) { return new RbxSceneManager(name); }
void RbxSceneManagerFactory::destroyInstance(SceneManager* manager) { delete manager; }
}
#include <OgreDefaultHardwareBufferManager.h>
#include <cstdio>
extern "C" int native_ogre_scene_lifecycle() {
    Ogre::LogManager logs;
    Ogre::Root root("", "", "");
    root.loadPlugin("rgdx.dll");
    Ogre::RenderSystemList* renderers=root.getAvailableRenderers();
    if (renderers->empty()) return 14;
    root.setRenderSystem(renderers->front());
    std::puts("Native D3D9 plugin ready without render window"); std::fflush(stdout);
    std::puts("Root ready"); std::fflush(stdout);
    Ogre::DefaultHardwareBufferManager buffers;
    {
        Ogre::RbxSceneManager scene("native-scene");
        std::puts("RbxSceneManager constructed"); std::fflush(stdout);
        if (scene.getTypeName() != "RbxSceneManager") return 2;
        Ogre::RbxSceneManagerFactory factory;
        const Ogre::SceneManagerMetaData& meta=factory.getMetaData();
        if (meta.typeName!="RbxSceneManager" || meta.description!="The Roblox scene manager" ||
            meta.sceneTypeMask!=Ogre::ST_GENERIC || meta.worldGeometrySupported) return 3;
        Ogre::Light external("native-injected");
        scene.injectMovableObject(&external);
        if (!scene.hasMovableObject(external.getName(),external.getMovableType()) ||
            scene.getMovableObject(external.getName(),external.getMovableType())!=&external) return 4;
        scene.extractMovableObject(&external);
        if (scene.hasMovableObject(external.getName(),external.getMovableType())) return 5;
        Ogre::MovableObject* owned=scene.createMovableObject("native-owned", "Light");
        if (owned->_getManager()!=&scene || scene.getMovableObject("native-owned", "Light")!=owned) return 6;
        bool duplicate=false;
        try { scene.createMovableObject("native-owned", "Light"); }
        catch (const Ogre::Exception& error) { duplicate=error.getNumber()==Ogre::Exception::ERR_DUPLICATE_ITEM; }
        if (!duplicate) return 7;
        scene.destroyMovableObject("native-owned", "Light");
        if (scene.hasMovableObject("native-owned", "Light")) return 8;
        owned=scene.createMovableObject("native-pointer", "Light");
        scene.destroyMovableObject(owned);
        if (scene.hasMovableObject("native-pointer", "Light")) return 9;
        scene.createMovableObject("native-bulk-a", "Light");
        scene.createMovableObject("native-bulk-b", "Light");
        Ogre::SceneManager::MovableObjectIterator items=scene.getMovableObjectIterator("Light");
        unsigned count=0;
        while (items.hasMoreElements()) {
            if (items.getNext()->_getManager()!=&scene) return 10;
            ++count;
        }
        if (count!=2) return 11;
        scene.injectMovableObject(&external);
        scene.destroyAllMovableObjectsByType("Light");
        if (scene.getMovableObjectIterator("Light").hasMoreElements() || external.getName()!="native-injected") return 12;
        scene.createMovableObject("native-all-a", "Light");
        scene.createMovableObject("native-all-b", "Light");
        scene.injectMovableObject(&external);
        scene.destroyAllMovableObjects();
        if (scene.getMovableObjectIterator("Light").hasMoreElements() || external.getName()!="native-injected") return 13;
        std::puts("Factory allocation, duplicate rejection, iteration and all destroy paths passed"); std::fflush(stdout);
        std::puts("Factory metadata and SDK injection/query passed"); std::fflush(stdout);
        Ogre::Camera* camera=scene.createCamera("native-camera-name");
        if (scene.getCamera("native-camera-name")!=camera) return 15;
        scene.destroyCamera("native-camera-name");
        if (scene.hasCamera("native-camera-name")) return 16;
        camera=scene.createCamera("native-camera-pointer");
        scene.destroyCamera(camera);
        if (scene.hasCamera("native-camera-pointer")) return 17;
        scene.createCamera("native-camera-all-a");
        scene.createCamera("native-camera-all-b");
        scene.destroyAllCameras();
        if (scene.hasCamera("native-camera-all-a") || scene.hasCamera("native-camera-all-b")) return 18;
        bool filenameRejected=false,streamRejected=false;
        try { scene.setWorldGeometry("unsupported-native-world"); }
        catch (const Ogre::Exception& error) { filenameRejected=error.getNumber()==Ogre::Exception::ERR_INVALIDPARAMS && error.getLine()==1306; }
        Ogre::DataStreamPtr stream;
        try { scene.setWorldGeometry(stream); }
        catch (const Ogre::Exception& error) { streamRejected=error.getNumber()==Ogre::Exception::ERR_INVALIDPARAMS && error.getLine()==1315; }
        if (!filenameRejected || !streamRejected) return 19;
        std::puts("Native camera lifetime and distinct world-geometry signatures passed"); std::fflush(stdout);
        Ogre::SceneNode* child=scene.getRootSceneNode()->createChildSceneNode("child", Ogre::Vector3(1,2,3));
        if (child->getParentSceneNode()!=scene.getRootSceneNode()) return 1;
        std::puts("Scene child linked"); std::fflush(stdout);
        scene.createMovableObject("native-clear-light", "Light");
        scene.clearScene();
        if (scene.hasSceneNode("child") || scene.hasMovableObject("native-clear-light", "Light")) return 20;
        scene.getRootSceneNode()->createChildSceneNode("native-destructor-child");
        scene.createMovableObject("native-destructor-light", "Light");
        scene.createCamera("native-destructor-camera");
        std::puts("Explicit clearScene passed; destructor owns final scene objects"); std::fflush(stdout);
    }
    std::puts("RbxSceneManager destroyed"); std::fflush(stdout);
    return 0;
}

namespace Ogre {
void RbxSceneManager::injectMovableObject(MovableObject* m)
{
	MovableObjectCollection* objectMap = getMovableObjectCollection(m->getMovableType());
	{
		OGRE_LOCK_MUTEX(objectMap->mutex)

		objectMap->map[m->getName()] = m;
	}
}
void RbxSceneManager::extractMovableObject(MovableObject* m)
{
	extractMovableObject(m->getName(), m->getMovableType());
}
void RbxSceneManager::extractMovableObject(const String& name, const String& typeName)
{
	MovableObjectCollection* objectMap = getMovableObjectCollection(typeName);
	{
		OGRE_LOCK_MUTEX(objectMap->mutex)
		MovableObjectMap::iterator mi = objectMap->map.find(name);
		if (mi != objectMap->map.end())
		{
			// no delete
			objectMap->map.erase(mi);
		}
	}

}
bool RbxSceneManager::hasMovableObject(const String& name, const String& typeName) const
{
	OGRE_LOCK_MUTEX(mMovableObjectCollectionMapMutex)

	MovableObjectCollectionMap::const_iterator i =
		mMovableObjectCollectionMap.find(typeName);
	if (i == mMovableObjectCollectionMap.end())
		return false;

	{
		OGRE_LOCK_MUTEX(i->second->mutex)
		return (i->second->map.find(name) != i->second->map.end());
	}
}
MovableObject* RbxSceneManager::getMovableObject(const String& name, const String& typeName) const
{
	const MovableObjectCollection* objectMap = getMovableObjectCollection(typeName);

	{
		OGRE_LOCK_MUTEX(objectMap->mutex)
		MovableObjectMap::const_iterator mi = objectMap->map.find(name);
		if (mi == objectMap->map.end())
		{
#line 5429 ".\\RbxSceneManager.cpp"
			OGRE_EXCEPT(Exception::ERR_ITEM_NOT_FOUND,
				"Object named '" + name + "' does not exist.",
				"RbxSceneManager::getMovableObject");
		}
		return mi->second;
	}

}
RbxSceneManager::MovableObjectCollection* RbxSceneManager::getMovableObjectCollection(const String& typeName)
{
	// lock collection mutex
	OGRE_LOCK_MUTEX(mMovableObjectCollectionMapMutex)

	MovableObjectCollectionMap::iterator i =
		mMovableObjectCollectionMap.find(typeName);
	if (i == mMovableObjectCollectionMap.end())
	{
		// create
		MovableObjectCollection* newCollection = new MovableObjectCollection();
		mMovableObjectCollectionMap[typeName] = newCollection;
		return newCollection;
	}
	else
	{
		return i->second;
	}
}
const RbxSceneManager::MovableObjectCollection* RbxSceneManager::getMovableObjectCollection(const String& typeName) const
{
	// lock collection mutex
	OGRE_LOCK_MUTEX(mMovableObjectCollectionMapMutex)

	MovableObjectCollectionMap::const_iterator i =
		mMovableObjectCollectionMap.find(typeName);
	if (i == mMovableObjectCollectionMap.end())
	{
		OGRE_EXCEPT(Exception::ERR_ITEM_NOT_FOUND,
			"Object collection named '" + typeName + "' does not exist.",
			"RbxSceneManager::getMovableObjectCollection");
	}
	else
	{
		return i->second;
	}
}
}

namespace Ogre {
MovableObject* RbxSceneManager::createMovableObject(const String& name,
	const String& typeName, const NameValuePairList* params)
{
	MovableObjectFactory* factory =
		Root::getSingleton().getMovableObjectFactory(typeName);
	// Check for duplicate names
	MovableObjectCollection* objectMap = getMovableObjectCollection(typeName);

	{
		OGRE_LOCK_MUTEX(objectMap->mutex)

		if (objectMap->map.find(name) != objectMap->map.end())
		{
#line 5335 ".\\RbxSceneManager.cpp"
			OGRE_EXCEPT(Exception::ERR_DUPLICATE_ITEM,
				"An object of type '" + typeName + "' with name '" + name
				+ "' already exists.",
				"RbxSceneManager::createMovableObject");
		}

		MovableObject* newObj = factory->createInstance(name, this, params);
		objectMap->map[name] = newObj;
		return newObj;
	}

}
void RbxSceneManager::destroyMovableObject(const String& name, const String& typeName)
{
	MovableObjectCollection* objectMap = getMovableObjectCollection(typeName);
	MovableObjectFactory* factory =
		Root::getSingleton().getMovableObjectFactory(typeName);

	{
		OGRE_LOCK_MUTEX(objectMap->mutex)

		MovableObjectMap::iterator mi = objectMap->map.find(name);
		if (mi != objectMap->map.end())
		{
			factory->destroyInstance(mi->second);
			objectMap->map.erase(mi);
		}
	}
}
}

namespace Ogre {
void RbxSceneManager::destroyMovableObject(MovableObject* m)
{
	destroyMovableObject(m->getName(), m->getMovableType());
}
void RbxSceneManager::destroyAllMovableObjectsByType(const String& typeName)
{
	MovableObjectCollection* objectMap = getMovableObjectCollection(typeName);
	MovableObjectFactory* factory =
		Root::getSingleton().getMovableObjectFactory(typeName);

	{
		OGRE_LOCK_MUTEX(objectMap->mutex)
		MovableObjectMap::iterator i = objectMap->map.begin();
		for (; i != objectMap->map.end(); ++i)
		{
			// Only destroy our own
			if (i->second->_getManager() == this)
			{
				factory->destroyInstance(i->second);
			}
		}
		objectMap->map.clear();
	}
}
void RbxSceneManager::destroyAllMovableObjects(void)
{
	// Lock collection mutex
	OGRE_LOCK_MUTEX(mMovableObjectCollectionMapMutex)

	MovableObjectCollectionMap::iterator ci = mMovableObjectCollectionMap.begin();

	for(;ci != mMovableObjectCollectionMap.end(); ++ci)
	{
		MovableObjectCollection* coll = ci->second;

		// lock map mutex
		OGRE_LOCK_MUTEX(coll->mutex)

		if (Root::getSingleton().hasMovableObjectFactory(ci->first))
		{
			// Only destroy if we have a factory instance; otherwise must be injected
			MovableObjectFactory* factory =
				Root::getSingleton().getMovableObjectFactory(ci->first);
			MovableObjectMap::iterator i = coll->map.begin();
			for (; i != coll->map.end(); ++i)
			{
				if (i->second->_getManager() == this)
				{
					factory->destroyInstance(i->second);
				}
			}
		}
		coll->map.clear();
	}

}
RbxSceneManager::MovableObjectIterator
RbxSceneManager::getMovableObjectIterator(const String& typeName)
{
	MovableObjectCollection* objectMap = getMovableObjectCollection(typeName);
	// Iterator not thread safe! Warned in header.
	return MovableObjectIterator(objectMap->map.begin(), objectMap->map.end());
}
}

namespace Ogre {
#line 224 ".\\RbxSceneManager.cpp"
Camera* RbxSceneManager::createCamera(const String& name)
{
    // Check name not used
    if (mCameras.find(name) != mCameras.end())
    {
        OGRE_EXCEPT(
            Exception::ERR_DUPLICATE_ITEM,
            "A camera with the name " + name + " already exists",
            "RbxSceneManager::createCamera" );
    }

    Camera *c = new Camera(name, this);
    mCameras.insert(CameraList::value_type(name, c));

	// create visible bounds aab map entry
	mCamVisibleObjectsMap[c] = VisibleObjectsBoundsInfo();

    return c;
}
void RbxSceneManager::destroyCamera(Camera* cam)
{
    CamVisibleObjectsMap::iterator camVisObjIt = mCamVisibleObjectsMap.find(cam);
    if (camVisObjIt != mCamVisibleObjectsMap.end())
        mCamVisibleObjectsMap.erase(camVisObjIt);

    ShadowCamLightMapping::iterator camLightIt = mShadowCamLightMapping.find(cam);
    if (camLightIt != mShadowCamLightMapping.end())
        mShadowCamLightMapping.erase(camLightIt);

    for (CameraList::iterator i = mCameras.begin(); i != mCameras.end(); ++i)
    {
        if (i->second == cam)
        {
            mCameras.erase(i);
            mDestRenderSystem->_notifyCameraRemoved(cam);
            delete cam;
            return;
        }
    }
}
void RbxSceneManager::destroyCamera(const String& name)
{
    CameraList::iterator i = mCameras.find(name);
    if (i != mCameras.end())
    {
        mDestRenderSystem->_notifyCameraRemoved(i->second);
        delete i->second;
        mCameras.erase(i);
    }
}
void RbxSceneManager::destroyAllCameras(void)
{
    CameraList::iterator i = mCameras.begin();
    for (; i != mCameras.end(); ++i)
    {
        mDestRenderSystem->_notifyCameraRemoved(i->second);
        delete i->second;
    }
    mCameras.clear();
}
void RbxSceneManager::clearScene(void)
{
	destroyAllStaticGeometry();
	destroyAllMovableObjects();

	// Clear root node of all children
	mSceneRoot->removeAllChildren();
	mSceneRoot->detachAllObjects();

	// Delete all SceneNodes, except root that is
	for (SceneNodeList::iterator i = mSceneNodes.begin();
		i != mSceneNodes.end(); ++i)
	{
		delete i->second;
	}
	mSceneNodes.clear();
	mAutoTrackingSceneNodes.clear();



	// Clear animations
    destroyAllAnimations();

    // Remove sky nodes since they've been deleted
    mSkyBoxNode = mSkyPlaneNode = mSkyDomeNode = 0;
    mSkyBoxEnabled = mSkyPlaneEnabled = mSkyDomeEnabled = false;

	// Clear render queue, empty completely
	if (mRenderQueue)
		mRenderQueue->clear(true);

}
void RbxSceneManager::setWorldGeometry(const String& filename)
{
    // This default implementation cannot handle world geometry
#line 1304 ".\\RbxSceneManager.cpp"
    OGRE_EXCEPT(Exception::ERR_INVALIDPARAMS,
        "World geometry is not supported by the generic SceneManager.",
        "RbxSceneManager::setWorldGeometry");
}
void RbxSceneManager::setWorldGeometry(DataStreamPtr& stream,
	const String& typeName)
{
    // This default implementation cannot handle world geometry
#line 1313 ".\\RbxSceneManager.cpp"
    OGRE_EXCEPT(Exception::ERR_INVALIDPARAMS,
        "World geometry is not supported by the generic SceneManager.",
        "RbxSceneManager::setWorldGeometry");
}
bool RbxSceneManager::hasCamera(const String& name) const
{
	return (mCameras.find(name) != mCameras.end());
}
bool RbxSceneManager::hasSceneNode(const String& name) const
{
	return (mSceneNodes.find(name) != mSceneNodes.end());
}
}

#define RBX_TIMED_RENDER 1
static inline void rocAssign(Ogre::Vector3& d, const Ogre::Vector3& s) { d.x = s.x; d.y = s.y; d.z = s.z; }
static inline float rocSquaredLength(const Ogre::Vector3& v) { return v.x * v.x + v.y * v.y + v.z * v.z; }

namespace Ogre {
bool gRbxSceneRenderFlag;
void RbxSceneManager::_renderScene(Camera* camera, Viewport* vp, bool includeOverlays)
{
#ifdef RBX_TIMED_RENDER
    gRbxSceneRenderFlag = false;
#endif
    mRbxVisibilityFlag = true;
    mRbxRenderFlag = false;

    Root::getSingleton()._setCurrentSceneManager(this);
    mActiveQueuedRenderableVisitor->targetSceneMgr = this;
    mAutoParamDataSource.setCurrentSceneManager(this);

    if (isShadowTechniqueInUse())
    {
        initShadowVolumeMaterials();
    }

    if (isShadowTechniqueStencilBased() &&
        camera->getProjectionType() == PT_PERSPECTIVE &&
        camera->getFarClipDistance() != 0 &&
        mDestRenderSystem->getCapabilities()->hasCapability(RSC_INFINITE_FAR_PLANE) &&
        mShadowUseInfiniteFarPlane)
    {
        camera->setFarClipDistance(0);
    }

    mCameraInProgress = camera;

    ControllerManager::getSingleton().updateAllControllers();

    unsigned long thisFrameNumber = Root::getSingleton().getCurrentFrameNumber();
    if (thisFrameNumber != mLastFrameNumber)
    {
        _applySceneAnimations();
        mLastFrameNumber = thisFrameNumber;
    }

#ifdef RBX_TIMED_RENDER
    Timer renderTimer;
#endif

    {
        OGRE_LOCK_MUTEX(sceneGraphMutex)

#ifdef RBX_TIMED_RENDER
        renderTimer.reset();
#endif
        _updateSceneGraph(camera);
#ifdef RBX_TIMED_RENDER
        renderTimer.getMicroseconds();
#endif

        AutoTrackingSceneNodes::iterator atsni, atsniend;
        atsniend = mAutoTrackingSceneNodes.end();
        for (atsni = mAutoTrackingSceneNodes.begin(); atsni != atsniend; ++atsni)
        {
            (*atsni)->_autoTrack();
        }
        camera->_autoTrack();

        if (mIlluminationStage != IRS_RENDER_TO_TEXTURE && mFindVisibleObjects)
        {
            findLightsAffectingFrustum(camera);

            if (isShadowTechniqueInUse() && vp->getShadowsEnabled())
            {
                if (isShadowTechniqueTextureBased())
                {
                    prepareShadowTextures(camera, vp);
                    mCameraInProgress = camera;
                }
            }
        }

        if (camera->isReflected())
        {
            mDestRenderSystem->setInvertVertexWinding(true);
        }
        else
        {
            mDestRenderSystem->setInvertVertexWinding(false);
        }

        mAutoParamDataSource.setCurrentViewport(vp);
        setViewport(vp);

        mAutoParamDataSource.setCurrentCamera(camera);
        mAutoParamDataSource.setShadowDirLightExtrusionDistance(mShadowDirLightExtrudeDist);

        mAutoParamDataSource.setAmbientLightColour(mAmbientLight);
        mDestRenderSystem->setAmbientLight(mAmbientLight.r, mAmbientLight.g, mAmbientLight.b);

        mAutoParamDataSource.setCurrentRenderTarget(vp->getTarget());

        if (mDestRenderSystem->getCapabilities()->hasCapability(RSC_USER_CLIP_PLANES))
        {
            if (camera->isWindowSet())
            {
                const std::vector<Plane>& planeList = camera->getWindowPlanes();
                for (ushort i = 0; i < 4; ++i)
                {
                    mDestRenderSystem->enableClipPlane(i, true);
                    mDestRenderSystem->setClipPlane(i, planeList[i]);
                }
            }
            else
            {
                for (ushort i = 0; i < 4; ++i)
                {
                    mDestRenderSystem->enableClipPlane(i, false);
                }
            }
        }

#ifdef RBX_TIMED_RENDER
        renderTimer.reset();
#endif
        prepareRenderQueue();
#ifdef RBX_TIMED_RENDER
        renderTimer.getMicroseconds();
#endif

        if (mFindVisibleObjects)
        {
            CamVisibleObjectsMap::iterator camVisObjIt = mCamVisibleObjectsMap.find(camera);

            assert(camVisObjIt != mCamVisibleObjectsMap.end() &&
                   "Should never fail to find a visible object bound for a camera, "
                   "did you override RbxSceneManager::createCamera or something?");

            camVisObjIt->second.reset();

            _findVisibleObjects(camera, &(camVisObjIt->second),
                                mIlluminationStage == IRS_RENDER_TO_TEXTURE ? true : false);

            mAutoParamDataSource.setMainCamBoundsInfo(&(camVisObjIt->second));
        }

        if (vp->getOverlaysEnabled() && mIlluminationStage != IRS_RENDER_TO_TEXTURE)
        {
            OverlayManager::getSingleton()._queueOverlaysForRendering(camera, getRenderQueue(), vp);
        }

        if (vp->getSkiesEnabled() && mFindVisibleObjects &&
            mIlluminationStage != IRS_RENDER_TO_TEXTURE)
        {
            _queueSkiesForRendering(camera);
        }
    }

    mDestRenderSystem->_beginGeometryCount();
    if (mCurrentViewport->getClearEveryFrame())
    {
        mDestRenderSystem->clearFrameBuffer(
            mCurrentViewport->getClearBuffers(),
            mCurrentViewport->getBackgroundColour());
    }
    mDestRenderSystem->_beginFrame();

    mDestRenderSystem->_setPolygonMode(camera->getPolygonMode());

    mDestRenderSystem->_setProjectionMatrix(mCameraInProgress->getProjectionMatrixRS());
    mDestRenderSystem->_setViewMatrix(mCameraInProgress->getViewMatrix(true));

#ifdef RBX_TIMED_RENDER
    renderTimer.reset();
#endif
    _renderVisibleObjects();
#ifdef RBX_TIMED_RENDER
    renderTimer.getMicroseconds();
#endif

    mDestRenderSystem->_endFrame();

    camera->_notifyRenderedFaces(mDestRenderSystem->_getFaceCount());
    camera->_notifyRenderedBatches(mDestRenderSystem->_getBatchCount());
}
const Pass* RbxSceneManager::_setPass(const Pass* pass, bool evenIfSuppressed,
                                      bool shadowDerivation)
{
    if (!mSuppressRenderStateChanges || evenIfSuppressed)
    {
        mRbxVisibilityFlag = !!pass->getLightingEnabled();

        if (mIlluminationStage == IRS_RENDER_TO_TEXTURE && shadowDerivation)
        {
            pass = deriveShadowCasterPass(pass);
        }
        else if (mIlluminationStage == IRS_RENDER_RECEIVER_PASS && shadowDerivation)
        {
            pass = deriveShadowReceiverPass(pass);
        }

        mAutoParamDataSource.setCurrentPass(pass);
        bool passSurfaceAndLightParams = true;

        if (pass->hasVertexProgram())
        {
            mDestRenderSystem->bindGpuProgram(
                pass->getVertexProgram()->_getBindingDelegate());
            passSurfaceAndLightParams =
                pass->getVertexProgram()->getPassSurfaceAndLightStates();
        }
        else
        {
            if (mDestRenderSystem->isGpuProgramBound(GPT_VERTEX_PROGRAM))
            {
                mDestRenderSystem->unbindGpuProgram(GPT_VERTEX_PROGRAM);
            }
        }

        if (passSurfaceAndLightParams)
        {
            if (pass->getLightingEnabled())
            {
                mDestRenderSystem->_setSurfaceParams(
                    pass->getAmbient(),
                    pass->getDiffuse(),
                    pass->getSpecular(),
                    pass->getSelfIllumination(),
                    pass->getShininess(),
                    pass->getVertexColourTracking());
            }

            mDestRenderSystem->setLightingEnabled(pass->getLightingEnabled());
        }

        if (pass->hasFragmentProgram())
        {
            mDestRenderSystem->bindGpuProgram(
                pass->getFragmentProgram()->_getBindingDelegate());
        }
        else
        {
            if (mDestRenderSystem->isGpuProgramBound(GPT_FRAGMENT_PROGRAM))
            {
                mDestRenderSystem->unbindGpuProgram(GPT_FRAGMENT_PROGRAM);
            }
        }

        FogMode newFogMode;
        ColourValue newFogColour;
        Real newFogStart;
        Real newFogEnd;
        Real newFogDensity;
        if (pass->getFogOverride())
        {
            newFogMode = pass->getFogMode();
            newFogColour = pass->getFogColour();
            newFogStart = pass->getFogStart();
            newFogEnd = pass->getFogEnd();
            newFogDensity = pass->getFogDensity();
        }
        else
        {
            newFogMode = mFogMode;
            newFogColour = mFogColour;
            newFogStart = mFogStart;
            newFogEnd = mFogEnd;
            newFogDensity = mFogDensity;
        }
        mDestRenderSystem->_setFog(
            newFogMode, newFogColour, newFogDensity, newFogStart, newFogEnd);
        mAutoParamDataSource.setFog(
            mFogMode, mFogColour, mFogDensity, mFogStart, mFogEnd);

        mDestRenderSystem->_setSceneBlending(
            pass->getSourceBlendFactor(), pass->getDestBlendFactor());

        mDestRenderSystem->_setPointParameters(
            pass->getPointSize(),
            pass->isPointAttenuationEnabled(),
            pass->getPointAttenuationConstant(),
            pass->getPointAttenuationLinear(),
            pass->getPointAttenuationQuadratic(),
            pass->getPointMinSize(),
            pass->getPointMaxSize());

        mDestRenderSystem->_setPointSpritesEnabled(pass->getPointSpritesEnabled());

        Pass::ConstTextureUnitStateIterator texIter =
            pass->getTextureUnitStateIterator();
        size_t unit = 0;
        size_t shadowTexIndex = pass->getStartLight();
        while (texIter.hasMoreElements())
        {
            TextureUnitState* texture = texIter.getNext();
            if (!pass->getIteratePerLight() &&
                isShadowTechniqueTextureBased() &&
                texture->getContentType() == TextureUnitState::CONTENT_SHADOW)
            {
                TexturePtr shadowTexture;
                if (shadowTexIndex < mShadowTextures.size())
                {
                    shadowTexture = getShadowTexture(shadowTexIndex);
                    Camera* camera = shadowTexture->getBuffer()
                                         ->getRenderTarget()
                                         ->getViewport(0)
                                         ->getCamera();
                    texture->setProjectiveTexturing(
                        !pass->hasVertexProgram(), camera);
                    mAutoParamDataSource.setTextureProjector(camera, shadowTexIndex);
                }
                else
                {
                    shadowTexture = mNullShadowTexture;
                    texture->setProjectiveTexturing(false);
                    mAutoParamDataSource.setTextureProjector(0, shadowTexIndex);
                }
                texture->_setTexturePtr(shadowTexture);
                ++shadowTexIndex;
            }
            else if (mIlluminationStage == IRS_NONE && pass->hasVertexProgram())
            {
                TextureUnitState::EffectMap::const_iterator effect =
                    texture->getEffects().find(
                        TextureUnitState::ET_PROJECTIVE_TEXTURE);
                if (effect != texture->getEffects().end())
                {
                    mAutoParamDataSource.setTextureProjector(
                        effect->second.frustum, unit);
                }
            }
            mDestRenderSystem->_setTextureUnitSettings(unit, *texture);
            ++unit;
        }

        mDestRenderSystem->_disableTextureUnitsFrom(
            pass->getNumTextureUnitStates());
        mDestRenderSystem->_setDepthBufferFunction(pass->getDepthFunction());
        mDestRenderSystem->_setDepthBufferCheckEnabled(
            pass->getDepthCheckEnabled());
        mDestRenderSystem->_setDepthBufferWriteEnabled(
            pass->getDepthWriteEnabled());
        mDestRenderSystem->_setDepthBias(
            pass->getDepthBiasConstant(), pass->getDepthBiasSlopeScale());
        mDestRenderSystem->_setAlphaRejectSettings(
            pass->getAlphaRejectFunction(), pass->getAlphaRejectValue());

        bool colourWrite = pass->getColourWriteEnabled();
        mDestRenderSystem->_setColourBufferWriteEnabled(
            colourWrite, colourWrite, colourWrite, colourWrite);

        if (isShadowTechniqueTextureBased() &&
            mIlluminationStage == IRS_RENDER_TO_TEXTURE &&
            mShadowCasterRenderBackFaces &&
            pass->getCullingMode() == CULL_CLOCKWISE)
        {
            mDestRenderSystem->_setCullingMode(CULL_ANTICLOCKWISE);
        }
        else
        {
            mDestRenderSystem->_setCullingMode(pass->getCullingMode());
        }

        mDestRenderSystem->setShadingType(pass->getShadingMode());
        mDestRenderSystem->_setPolygonMode(pass->getPolygonMode());
        mAutoParamDataSource.setPassNumber(pass->getIndex());
    }

    return pass;
}
void RbxSceneManager::findLightsAffectingFrustum(const Camera* camera)
{
    // Basic iteration for this SM

    MovableObjectCollection* lights =
        getMovableObjectCollection(LightFactory::FACTORY_TYPE_NAME);


	{
		OGRE_LOCK_MUTEX(lights->mutex)

		// Pre-allocate memory
		mTestLightInfos.clear();
		mTestLightInfos.reserve(lights->map.size());

		MovableObjectIterator it(lights->map.begin(), lights->map.end());

		while(it.hasMoreElements())
		{
			Light* l = static_cast<Light*>(it.getNext());
			if (l->isVisible())
			{
				LightInfo lightInfo;
				lightInfo.light = l;
				lightInfo.type = l->getType();
				if (lightInfo.type == Light::LT_DIRECTIONAL)
				{
					// Always visible
					rocAssign(lightInfo.position, Vector3::ZERO);
					lightInfo.range = 0;
					mTestLightInfos.push_back(lightInfo);
				}
				else
				{
					// NB treating spotlight as point for simplicity
					// Just see if the lights attenuation range is within the frustum
					lightInfo.range = l->getAttenuationRange();
					rocAssign(lightInfo.position, l->getDerivedPosition());
					Sphere sphere(lightInfo.position, lightInfo.range);
					if (camera->isVisible(sphere))
					{
						mTestLightInfos.push_back(lightInfo);
					}
				}
			}
		}
	} // release lock on lights collection

    // Update lights affecting frustum if changed
    if (mCachedLightInfos != mTestLightInfos)
    {
        mLightsAffectingFrustum.resize(mTestLightInfos.size());
        LightInfoList::const_iterator i;
        LightList::iterator j = mLightsAffectingFrustum.begin();
        for (i = mTestLightInfos.begin(); i != mTestLightInfos.end(); ++i, ++j)
        {
            *j = i->light;
			// add cam distance for sorting if texture shadows
			if (isShadowTechniqueTextureBased())
			{
				Real dist = rocSquaredLength(camera->getDerivedPosition() - (*j)->getDerivedPosition());
				(*j)->tempSquareDist = dist;
			}
        }

		// Sort the lights if using texture shadows, since the first 'n' will be
		// used to generate shadow textures and we should pick the most appropriate
		if (isShadowTechniqueTextureBased())
		{
			// Allow a ShadowListener to override light sorting
			// Reverse iterate so last takes precedence
			bool overridden = false;
			for (ShadowListenerList::reverse_iterator ri = mShadowListeners.rbegin();
				ri != mShadowListeners.rend(); ++ri)
			{
				overridden = (*ri)->sortLightsAffectingFrustum(mLightsAffectingFrustum);
				if (overridden)
					break;
			}
			if (!overridden)
			{
				// default sort (stable to preserve directional light ordering
				std::stable_sort(
					mLightsAffectingFrustum.begin(), mLightsAffectingFrustum.end(),
					lightsForShadowTextureLess());
			}

		}

        // Use swap instead of copy operator for efficiently
        mCachedLightInfos.swap(mTestLightInfos);

        // notify light dirty, so all movable objects will re-populate
        // their light list next time
        _notifyLightsDirty();
    }

}
void RbxSceneManager::initRenderQueue(void)
{
    mRenderQueue = new RenderQueue();
    // init render queues that do not need shadows
    mRenderQueue->getQueueGroup(RENDER_QUEUE_BACKGROUND)->setShadowsEnabled(false);
    mRenderQueue->getQueueGroup(RENDER_QUEUE_OVERLAY)->setShadowsEnabled(false);
    mRenderQueue->getQueueGroup(RENDER_QUEUE_SKIES_EARLY)->setShadowsEnabled(false);
    mRenderQueue->getQueueGroup(RENDER_QUEUE_SKIES_LATE)->setShadowsEnabled(false);
}
void RbxSceneManager::prepareRenderQueue(void)
{
	RenderQueue* q = getRenderQueue();
	// Clear the render queue
	q->clear();

	// Prep the ordering options

	// If we're using a custom render squence, define based on that
	RenderQueueInvocationSequence* seq =
		mCurrentViewport->_getRenderQueueInvocationSequence();
	if (seq)
	{
		// Iterate once to crate / reset all
		RenderQueueInvocationIterator invokeIt = seq->iterator();
		while (invokeIt.hasMoreElements())
		{
			RenderQueueInvocation* invocation = invokeIt.getNext();
			RenderQueueGroup* group =
				q->getQueueGroup(invocation->getRenderQueueGroupID());
			group->resetOrganisationModes();
		}
		// Iterate again to build up options (may be more than one)
		invokeIt = seq->iterator();
		while (invokeIt.hasMoreElements())
		{
			RenderQueueInvocation* invocation = invokeIt.getNext();
			RenderQueueGroup* group =
				q->getQueueGroup(invocation->getRenderQueueGroupID());
			group->addOrganisationMode(invocation->getSolidsOrganisation());
			// also set splitting options
			updateRenderQueueGroupSplitOptions(group, invocation->getSuppressShadows(),
				invocation->getSuppressRenderStateChanges());
		}
	}
	else
	{
		// Default all the queue groups that are there, new ones will be created
		// with defaults too
		RenderQueue::QueueGroupIterator groupIter = q->_getQueueGroupIterator();
		while (groupIter.hasMoreElements())
		{
			RenderQueueGroup* g = groupIter.getNext();
			g->defaultOrganisationMode();
		}
		// Global split options
		updateRenderQueueSplitOptions();
	}

}
RenderQueue* RbxSceneManager::getRenderQueue(void)
{
    if (!mRenderQueue)
    {
        initRenderQueue();
    }
    return mRenderQueue;
}
void RbxSceneManager::_updateSceneGraph(Camera* cam)
{
	// Process queued needUpdate calls
	Node::processQueuedUpdates();

    // Cascade down the graph updating transforms & world bounds
    // In this implementation, just update from the root
    // Smarter SceneManager subclasses may choose to update only
    //   certain scene graph branches
    mSceneRoot->_update(true, false);


}
void RbxSceneManager::_findVisibleObjects(
	Camera* cam, VisibleObjectsBoundsInfo* visibleBounds, bool onlyShadowCasters)
{
    // Tell nodes to find, cascade down all nodes
    mSceneRoot->_findVisibleObjects(cam, getRenderQueue(), visibleBounds, true,
        mDisplayNodes, onlyShadowCasters);

}
}

#include <d3d9.h>
extern "C" int native_ogre_frame_smoke() {
    struct HiddenWindow {
        HWND handle;
        HiddenWindow() : handle(CreateWindowExA(0,"STATIC","RoConstruct native Ogre frame",WS_POPUP,0,0,64,64,0,0,GetModuleHandleA(0),0)) {}
        ~HiddenWindow() { if (handle) DestroyWindow(handle); }
    } host;
    if (!host.handle) return 1;
    try {
        Ogre::LogManager logs;
        logs.createLog("native-ogre-frame",true,false,true);
        Ogre::Root root("", "", "");
        root.loadPlugin("rgdx.dll");
        Ogre::RenderSystemList* systems=root.getAvailableRenderers();
        if (systems->empty()) return 2;
        root.setRenderSystem(systems->front());
        std::puts("Frame Root initialise"); std::fflush(stdout);
        root.initialise(false);
        Ogre::NameValuePairList options;
        options["externalWindowHandle"]=Ogre::StringConverter::toString((size_t)host.handle);
        options["vsync"]="false";
        options["FSAA"]="0";
        options["colourDepth"]="32";
        Ogre::RenderWindow* window=root.createRenderWindow("native-offscreen",64,64,false,&options);
        {
            Ogre::RbxSceneManager scene("native-frame-scene");
            Ogre::Camera* camera=scene.createCamera("native-frame-camera");
            camera->setPosition(0,0,3);
            camera->lookAt(0,0,0);
            camera->setNearClipDistance(0.1f);
            camera->setFarClipDistance(100);
            camera->setAspectRatio(1);
            Ogre::Viewport* viewport=window->addViewport(camera);
            viewport->setBackgroundColour(Ogre::ColourValue(1,0,1));
            viewport->setOverlaysEnabled(false);
            viewport->setSkiesEnabled(false);
            viewport->setShadowsEnabled(false);
            Ogre::MaterialPtr material=Ogre::MaterialManager::getSingleton().create("native-flat-red",Ogre::ResourceGroupManager::DEFAULT_RESOURCE_GROUP_NAME);
            material->setLightingEnabled(false);
            material->setCullingMode(Ogre::CULL_NONE);
            material->setAmbient(Ogre::ColourValue(1,0,0));
            material->setDiffuse(Ogre::ColourValue(1,0,0));
            material->setSelfIllumination(Ogre::ColourValue(1,0,0));
            Ogre::ManualObject* triangle=scene.createManualObject("native-triangle");
            triangle->begin("native-flat-red",Ogre::RenderOperation::OT_TRIANGLE_LIST);
            triangle->position(-1,-1,0);triangle->normal(0,0,1);triangle->colour(1,0,0);
            triangle->position(1,-1,0);triangle->normal(0,0,1);triangle->colour(1,0,0);
            triangle->position(0,1,0);triangle->normal(0,0,1);triangle->colour(1,0,0);
            triangle->end();
            scene.getRootSceneNode()->createChildSceneNode("native-triangle-node")->attachObject(triangle);
            Ogre::Light* directional=scene.createLight("native-frame-directional");
            directional->setType(Ogre::Light::LT_DIRECTIONAL);
            directional->setDirection(0,0,-1);
            Ogre::Light* point=scene.createLight("native-frame-point");
            point->setType(Ogre::Light::LT_POINT);
            point->setAttenuation(10,1,0,0);
            Ogre::Pass* nativePass=material->getTechnique(0)->getPass(0);
            for (unsigned mode=0;mode<4;++mode) {
                nativePass->setLightingEnabled(mode!=0);
                nativePass->setStartLight(mode==1?1:0);
                nativePass->setIteratePerLight(mode>=2,mode==3);
                nativePass->setLightCountPerIteration(1);
            std::puts("Frame scene update"); std::fflush(stdout);
            window->update(false);
            unsigned lightCount=triangle->getSection(0)->getLights().size();
            unsigned batches=camera->_getNumRenderedBatches();
            std::printf("Native render mode=%u lights=%u batches=%u\n",mode,lightCount,batches);
            if (lightCount!=2 || batches!=(mode==2?2:1)) return 21;
            IDirect3DDevice9* device=0;
            window->getCustomAttribute("D3DDEVICE",&device);
            IDirect3DSurface9* surface=0;
            if (FAILED(device->GetRenderTarget(0,&surface))) return 3;
            D3DSURFACE_DESC desc;
            surface->GetDesc(&desc);
            if (desc.Format!=D3DFMT_X8R8G8B8 && desc.Format!=D3DFMT_A8R8G8B8) {surface->Release();return 4;}
            IDirect3DSurface9* pixels=0;
            HRESULT copied=device->CreateOffscreenPlainSurface(desc.Width,desc.Height,desc.Format,D3DPOOL_SYSTEMMEM,&pixels,0);
            if (FAILED(copied)) {surface->Release();return 5;}
            copied=device->GetRenderTargetData(surface,pixels);surface->Release();
            if (FAILED(copied)) {pixels->Release();return 6;}
            D3DLOCKED_RECT locked;
            if (FAILED(pixels->LockRect(&locked,0,D3DLOCK_READONLY))) {pixels->Release();return 7;}
            unsigned char* centre=(unsigned char*)locked.pBits+(desc.Height/2)*locked.Pitch+(desc.Width/2)*4;
            unsigned char* corner=(unsigned char*)locked.pBits;
            bool red=centre[2]>200 && centre[1]<30 && centre[0]<30;
            bool magenta=corner[2]>200 && corner[1]<30 && corner[0]>200;
            std::printf("Native frame %ux%u centre RGB=%u,%u,%u corner RGB=%u,%u,%u\n",desc.Width,desc.Height,centre[2],centre[1],centre[0],corner[2],corner[1],corner[0]);
            pixels->UnlockRect();pixels->Release();
            if (!red || !magenta) return 8;
            }
            window->removeAllViewports();
        }
        std::puts("Native Ogre renderScene/setPass frame readback passed");
        return 0;
    } catch (const Ogre::Exception& error) { std::puts(error.getFullDescription().c_str()); return 9; }
}

namespace Ogre {
void RbxSceneManager::renderObjects(const QueuedRenderableCollection& objs,
								 QueuedRenderableCollection::OrganisationMode om,
								 bool doLightIteration,
                                 const LightList* manualLightList)
{
	mActiveQueuedRenderableVisitor->autoLights = doLightIteration;
	mActiveQueuedRenderableVisitor->manualLightList = manualLightList;
	mActiveQueuedRenderableVisitor->transparentShadowCastersMode = false;
	// Use visitor
	objs.acceptVisitor(mActiveQueuedRenderableVisitor, om);
}
}

namespace Ogre {
struct OutOfLineLightList : LightList { __declspec(noinline) iterator outOfLineBegin() { return LightList::begin(); } };
void RbxSceneManager::renderSingleObject(const Renderable* rend, const Pass* pass,
                                      bool doLightIteration, const LightList* manualLightList)
{
    unsigned short numMatrices;
    static RenderOperation ro;




    RbxSubEntity* sub=dynamic_cast<RbxSubEntity*>(const_cast<Renderable*>(rend));
    if(sub) {
        sub->getRenderOperation(ro);
        ro.srcRenderable=sub;
    } else {
        const_cast<Renderable*>(rend)->getRenderOperation(ro);
        ro.srcRenderable=rend;
    }
    RbxSceneNode* node = sub ? dynamic_cast<RbxSceneNode*>(sub->getParent()->getParentNode()) : 0;
    if(node)
        *mTempXform=sub->transform;
    else rend->getWorldTransforms(mTempXform);
    numMatrices = rend->getNumWorldTransforms();
    if (numMatrices > 1)
    {
        mDestRenderSystem->_setWorldMatrices(mTempXform, numMatrices);
    }
    else
    {
        mDestRenderSystem->_setWorldMatrix(*mTempXform);
    }


    useRenderableViewProjMode(rend);

    if (!(sub && mRbxVisibilityFlag==mRbxRenderFlag) && !mSuppressRenderStateChanges)
    {
        if(sub)mRbxRenderFlag=mRbxVisibilityFlag;
        bool passSurfaceAndLightParams = true;

        if (pass->isProgrammable())
        {

            mAutoParamDataSource.setCurrentRenderable(rend);

            mAutoParamDataSource.setWorldMatrices(mTempXform, numMatrices);
            pass->_updateAutoParamsNoLights(mAutoParamDataSource);
            if (pass->hasVertexProgram())
            {
                passSurfaceAndLightParams = pass->getVertexProgram()->getPassSurfaceAndLightStates();
            }
        }


        Pass::ConstTextureUnitStateIterator texIter =  pass->getTextureUnitStateIterator();
        size_t unit = 0;
        while(texIter.hasMoreElements())
        {
            TextureUnitState* pTex = texIter.getNext();
            if (pTex->hasViewRelativeTextureCoordinateGeneration())
            {
                mDestRenderSystem->_setTextureUnitSettings(unit, *pTex);
            }
            ++unit;
        }


        mDestRenderSystem->setNormaliseNormals(rend->getNormaliseNormals());




		PolygonMode reqMode = pass->getPolygonMode();
		if (rend->getPolygonModeOverrideable())
		{
            PolygonMode camPolyMode = mCameraInProgress->getPolygonMode();

			if (reqMode > camPolyMode)
			{

				reqMode = camPolyMode;
			}
		}
		mDestRenderSystem->_setPolygonMode(reqMode);

		mDestRenderSystem->setClipPlanes(rend->getClipPlanes());

		if (doLightIteration)
		{

            static OutOfLineLightList localLightList;






			const LightList& rendLightList = rend->getLights();

			bool iteratePerLight = pass->getIteratePerLight();



			int lightsLeft;
			if (iteratePerLight)
			{
				lightsLeft = static_cast<int>(rendLightList.size()) - pass->getStartLight();

				if (lightsLeft > static_cast<int>(pass->getMaxSimultaneousLights()))
				{
					lightsLeft = static_cast<int>(pass->getMaxSimultaneousLights());
				}

			}

			else lightsLeft=1;
			const LightList* pLightListToUse;

			size_t lightIndex = pass->getStartLight();

			while (lightsLeft > 0)
			{

				if (iteratePerLight)
				{
					localLightList.resize(pass->getLightCountPerIteration());

					LightList::iterator destit = localLightList.begin();
					unsigned short numShadowTextureLights = 0;
					for (; destit != localLightList.end()
							&& lightIndex < rendLightList.size();
						++lightIndex, --lightsLeft)
					{

						if (pass->getRunOnlyForOneLightType() &&
							pass->getOnlyLightType() != rendLightList[lightIndex]->getType())
						{

							continue;
						}

						*destit++ = rendLightList[lightIndex];


						if (isShadowTechniqueTextureBased() && lightIndex < mShadowTextures.size())
						{

							unsigned short tuindex =
								pass->_getTextureUnitWithContentTypeIndex(
								TextureUnitState::CONTENT_SHADOW, numShadowTextureLights);
							if (tuindex < pass->getNumTextureUnitStates())
							{

								TextureUnitState* tu =
									const_cast<TextureUnitState*>(
										pass->getTextureUnitState(tuindex));
								const TexturePtr& shadowTex = mShadowTextures[lightIndex];
								tu->_setTexturePtr(shadowTex);
								Camera *cam = shadowTex->getBuffer()->getRenderTarget()->getViewport(0)->getCamera();
								tu->setProjectiveTexturing(!pass->hasVertexProgram(), cam);
								mAutoParamDataSource.setTextureProjector(cam, numShadowTextureLights);
								++numShadowTextureLights;


								mDestRenderSystem->_setTextureUnitSettings(tuindex, *tu);
							}

						}



					}

					if (destit != localLightList.end())
					{
						localLightList.erase(destit, localLightList.end());
						lightsLeft = 0;
					}
					pLightListToUse = &localLightList;
				}
				else
				{

					if (pass->getStartLight())
					{

						if (pass->getStartLight() >= rendLightList.size())
						{
							lightsLeft = 0;
							break;
						}
						else
						{
							localLightList.clear();
							LightList::const_iterator copyStart = rendLightList.begin();
							std::advance(copyStart, pass->getStartLight());

							localLightList.insert(localLightList.outOfLineBegin(),
								copyStart, rendLightList.end());
							pLightListToUse = &localLightList;
						}
					}
					else
					{
						pLightListToUse = &rendLightList;
					}
					lightsLeft = 0;
				}



				if (pass->isProgrammable())
				{


					mAutoParamDataSource.setCurrentLightList(pLightListToUse);
					pass->_updateAutoParamsLightsOnly(mAutoParamDataSource);


					if (pass->hasVertexProgram())
					{
						mDestRenderSystem->bindGpuProgramParameters(GPT_VERTEX_PROGRAM,
							pass->getVertexProgramParameters());
					}
					if (pass->hasFragmentProgram())
					{
						mDestRenderSystem->bindGpuProgramParameters(GPT_FRAGMENT_PROGRAM,
							pass->getFragmentProgramParameters());
					}
				}


				if (pass->getLightingEnabled() && passSurfaceAndLightParams)
				{
					mDestRenderSystem->_useLights(*pLightListToUse, pass->getMaxSimultaneousLights());
				}


				mDestRenderSystem->setCurrentPassIterationCount(pass->getPassIterationCount());
				mDestRenderSystem->_render(ro);
			}
		}
		else
		{

			{

				if (pass->isProgrammable())
				{

					if (manualLightList)
					{

						mAutoParamDataSource.setCurrentLightList(manualLightList);
						pass->_updateAutoParamsLightsOnly(mAutoParamDataSource);
					}

					if (pass->hasVertexProgram())
					{
						mDestRenderSystem->bindGpuProgramParameters(GPT_VERTEX_PROGRAM,
							pass->getVertexProgramParameters());
					}
					if (pass->hasFragmentProgram())
					{
						mDestRenderSystem->bindGpuProgramParameters(GPT_FRAGMENT_PROGRAM,
							pass->getFragmentProgramParameters());
					}
				}


				if (manualLightList &&
					pass->getLightingEnabled() && passSurfaceAndLightParams)
				{
					mDestRenderSystem->_useLights(*manualLightList, pass->getMaxSimultaneousLights());
				}


				mDestRenderSystem->setCurrentPassIterationCount(pass->getPassIterationCount());
				mDestRenderSystem->_render(ro);
			}
		}

	}
	else
	{

		mDestRenderSystem->setCurrentPassIterationCount(1);
		mDestRenderSystem->_render(ro);
	}


    resetViewProjMode();

}
}

namespace Ogre {
void RbxSceneManager::useRenderableViewProjMode(const Renderable* pRend)
{
    // Check view matrix
    bool useIdentityView = pRend->getUseIdentityView();
    if (useIdentityView)
    {
        // Using identity view now, change it
        mDestRenderSystem->_setViewMatrix(Matrix4::IDENTITY);
        mResetIdentityView = true;
    }

    bool useIdentityProj = pRend->getUseIdentityProjection();
    if (useIdentityProj)
    {
        // Use identity projection matrix, still need to take RS depth into account.
        Matrix4 mat;
        mDestRenderSystem->_convertProjectionMatrix(Matrix4::IDENTITY, mat);
        mDestRenderSystem->_setProjectionMatrix(mat);

        mResetIdentityProj = true;
    }


}
void RbxSceneManager::resetViewProjMode(void)
{
    if (mResetIdentityView)
    {
        // Coming back to normal from identity view
        mDestRenderSystem->_setViewMatrix(mCameraInProgress->getViewMatrix(true));
        mResetIdentityView = false;
    }

    if (mResetIdentityProj)
    {
        // Coming back from flat projection
        mDestRenderSystem->_setProjectionMatrix(mCameraInProgress->getProjectionMatrixRS());
        mResetIdentityProj = false;
    }


}
}
