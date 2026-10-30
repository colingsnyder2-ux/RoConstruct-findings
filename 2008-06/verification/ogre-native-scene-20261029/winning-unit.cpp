#define _DLL
#undef OGRE_NONCLIENT_BUILD
#include <Ogre.h>

namespace Ogre {

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
    String mRbxSkyName;
    SharedPtr<RbxSky> mRbxSky;
    SceneNode* mRbxSkyNode;
    ShadowCasterSceneQueryListener* mShadowCasterQueryListener;
    SceneMgrQueuedRenderableVisitor* mActiveQueuedRenderableVisitor;
    SceneMgrQueuedRenderableVisitor mDefaultQueuedRenderableVisitor;

public:
    void injectMovableObject(MovableObject* object);
    void extractMovableObject(MovableObject* object);
    void extractMovableObject(const String& name, const String& typeName);
    bool hasMovableObject(const String& name, const String& typeName) const;
    MovableObject* getMovableObject(const String& name, const String& typeName) const;
protected:
    MovableObjectCollection* getMovableObjectCollection(const String& typeName);
    const MovableObjectCollection* getMovableObjectCollection(const String& typeName) const;
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
        std::puts("Factory metadata and SDK injection/query passed"); std::fflush(stdout);
        Ogre::SceneNode* child=scene.getRootSceneNode()->createChildSceneNode("child", Ogre::Vector3(1,2,3));
        if (child->getParentSceneNode()!=scene.getRootSceneNode()) return 1;
        std::puts("Scene child linked"); std::fflush(stdout);
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
