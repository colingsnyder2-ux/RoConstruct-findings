// from server: 93% by colin
// from server: 93% by king_originala
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD /fp:fast
// Genuine Ogre 1.4.5 consumer interfaces, reduced to the virtual declarations
// used to establish primary vtable dispatch. Existing pointers only; no object
// of these interface views is constructed and no whole-owner size is claimed.
#include <string>
#include <vector>
#include <cmath>
#include <stddef.h>
namespace Ogre {
typedef float Real;
typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned int uint32;
typedef unsigned long ulong;
typedef std::string String;
class Light; class EdgeData; class AxisAlignedBox; class Vector2; class Vector4;
class SceneManager; class ManualObject; class Camera; class Node; class SceneNode;
class RenderQueue; class UserDefinedObject; class MovableObjectFactory; class Any;
class Matrix4; class Sphere; class ShadowRenderable; class HardwareIndexBufferSharedPtr;
class HardwareVertexBufferSharedPtr; class AnimableValue; class Entity;
class RenderQueueGroup; class Pass; class Renderable; class RenderablePass;
class Viewport; class RenderQueueInvocationSequence; class ShadowCaster;
template<class T> class SharedPtr;
template<class T> class VectorIterator;
typedef SharedPtr<AnimableValue> AnimableValuePtr;
typedef std::vector<String> StringVector;
typedef std::vector<Light*> LightList;
enum ShadowTechnique
    {
        SHADOWTYPE_NONE = 0x00,
		SHADOWDETAILTYPE_ADDITIVE = 0x01,
		SHADOWDETAILTYPE_MODULATIVE = 0x02,
		SHADOWDETAILTYPE_INTEGRATED = 0x04,
		SHADOWDETAILTYPE_STENCIL = 0x10,
		SHADOWDETAILTYPE_TEXTURE = 0x20,
        SHADOWTYPE_STENCIL_MODULATIVE = 0x12,
        SHADOWTYPE_STENCIL_ADDITIVE = 0x11,
        SHADOWTYPE_TEXTURE_MODULATIVE = 0x22,
        SHADOWTYPE_TEXTURE_ADDITIVE = 0x21,
		SHADOWTYPE_TEXTURE_ADDITIVE_INTEGRATED = 0x25,
		SHADOWTYPE_TEXTURE_MODULATIVE_INTEGRATED = 0x26
    };
class QueuedRenderableCollection {public:enum OrganisationMode
		{
			OM_PASS_GROUP = 1,
			OM_SORT_DESCENDING = 2,
			OM_SORT_ASCENDING = 6
		};};
class __declspec(dllimport) Math { public: static const Real PI; };
class __declspec(dllimport) Vector3 {
public: Real x,y,z;
inline Vector3() {}
inline Vector3(const Real fX,const Real fY,const Real fZ):x(fX),y(fY),z(fZ){}
inline Vector3(const Vector3& rkVector):x(rkVector.x),y(rkVector.y),z(rkVector.z){}
inline Vector3& operator=(const Vector3& rkVector){x=rkVector.x;y=rkVector.y;z=rkVector.z;return *this;}
};
class __declspec(dllimport) ColourValue {public:float r,g,b,a;};
class RenderOperation {public:enum OperationType {
            OT_POINT_LIST = 1,
            OT_LINE_LIST = 2,
            OT_LINE_STRIP = 3,
            OT_TRIANGLE_LIST = 4,
            OT_TRIANGLE_STRIP = 5,
            OT_TRIANGLE_FAN = 6
        };};
class __declspec(dllimport) ShadowCaster {public:
typedef std::vector<ShadowRenderable*> ShadowRenderableList;
typedef VectorIterator<ShadowRenderableList> ShadowRenderableListIterator;
virtual ~ShadowCaster();
virtual bool getCastShadows(void) const = 0;
virtual EdgeData* getEdgeList(void) = 0;
virtual bool hasEdgeList(void) = 0;
virtual const AxisAlignedBox& getWorldBoundingBox(bool derive = false) const = 0;
virtual const AxisAlignedBox& getLightCapBounds(void) const = 0;
virtual const AxisAlignedBox& getDarkCapBounds(const Light& light, Real dirLightExtrusionDist) const = 0;
virtual ShadowRenderableListIterator getShadowVolumeRenderableIterator(
            ShadowTechnique shadowTechnique, const Light* light, 
            HardwareIndexBufferSharedPtr* indexBuffer, 
            bool extrudeVertices, Real extrusionDistance, unsigned long flags = 0 ) = 0;
virtual Real getPointExtrusionDistance(const Light* l) const = 0;
virtual void updateEdgeListLightFacing(EdgeData* edgeData, 
            const Vector4& lightPos);
virtual void generateShadowVolume(EdgeData* edgeData, 
            const HardwareIndexBufferSharedPtr& indexBuffer, const Light* light,
            ShadowRenderableList& shadowRenderables, unsigned long flags);
virtual void extrudeBounds(AxisAlignedBox& box, const Vector4& lightPos, 
            Real extrudeDist) const;
};
class __declspec(dllimport) AnimableObject {public:
virtual const String& getAnimableDictionaryName(void) const;
virtual void initialiseAnimableDictionary(StringVector&) const;
virtual ~AnimableObject();
virtual AnimableValuePtr createAnimableValue(const String& valueName);
};
class __declspec(dllimport) MovableObject : public ShadowCaster,public AnimableObject {public:
class Listener;
virtual ~MovableObject();
virtual void _notifyCreator(MovableObjectFactory* fact);
virtual MovableObjectFactory*  _getCreator(void) const;
virtual void _notifyManager(SceneManager* man);
virtual SceneManager* _getManager(void) const;
virtual const String& getName(void) const;
virtual const String& getMovableType(void) const = 0;
virtual Node* getParentNode(void) const;
virtual SceneNode* getParentSceneNode(void) const;
virtual void _notifyAttached(Node* parent, bool isTagPoint = false);
virtual bool isAttached(void) const;
virtual bool isInScene(void) const;
virtual void _notifyMoved(void);
virtual void _notifyCurrentCamera(Camera* cam);
virtual const AxisAlignedBox& getBoundingBox(void) const = 0;
virtual Real getBoundingRadius(void) const = 0;
virtual const AxisAlignedBox& getWorldBoundingBox(bool derive = false) const;
virtual const Sphere& getWorldBoundingSphere(bool derive = false) const;
virtual void _updateRenderQueue(RenderQueue* queue) = 0;
virtual void setVisible(bool visible);
virtual bool getVisible(void) const;
virtual bool isVisible(void) const;
virtual void setRenderingDistance(Real dist);
virtual Real getRenderingDistance(void) const;
virtual void setUserObject(UserDefinedObject* obj);
virtual UserDefinedObject* getUserObject(void);
virtual void setUserAny(const Any& anything);
virtual const Any& getUserAny(void) const;
virtual void setRenderQueueGroup(uint8 queueID);
virtual uint8 getRenderQueueGroup(void) const;
virtual const Matrix4& _getParentNodeFullTransform(void) const;
virtual void setQueryFlags(uint32 flags);
virtual void addQueryFlags(uint32 flags);
virtual void removeQueryFlags(unsigned long flags);
virtual uint32 getQueryFlags(void) const;
virtual void setVisibilityFlags(uint32 flags);
virtual void addVisibilityFlags(uint32 flags);
virtual void removeVisibilityFlags(uint32 flags);
virtual uint32 getVisibilityFlags(void) const;
virtual void setListener(Listener* listener);
virtual Listener* getListener(void) const;
virtual const LightList& queryLights(void) const;
virtual uint32 getTypeFlags(void) const;
};
class __declspec(dllimport) SceneManager {public:
typedef std::vector<ShadowCaster*> ShadowCasterList;
enum PrefabType {PT_PLANE,PT_CUBE,PT_SPHERE};
virtual void initRenderQueue(void);
virtual void setViewport(Viewport *vp);
virtual void renderVisibleObjectsDefaultSequence(void);
virtual void renderVisibleObjectsCustomSequence(RenderQueueInvocationSequence* s);
virtual void prepareRenderQueue(void);
virtual void renderSingleObject(const Renderable* rend, const Pass* pass, 
			bool doLightIteration, const LightList* manualLightList = 0);
virtual void findLightsAffectingFrustum(const Camera* camera);
virtual void initShadowVolumeMaterials(void);
virtual void ensureShadowTexturesCreated();
virtual void destroyShadowTextures(void);
virtual void prepareShadowTextures(Camera* cam, Viewport* vp);
virtual void renderShadowVolumesToStencil(const Light* light, const Camera* cam);
virtual void setShadowVolumeStencilState(bool secondpass, bool zfail, bool twosided);
virtual const ShadowCasterList& findShadowCastersForLight(const Light* light, 
            const Camera* camera);
virtual void renderBasicQueueGroupObjects(RenderQueueGroup* pGroup, 
			QueuedRenderableCollection::OrganisationMode om);
virtual void renderAdditiveStencilShadowedQueueGroupObjects(RenderQueueGroup* group, 
			QueuedRenderableCollection::OrganisationMode om);
virtual void renderModulativeStencilShadowedQueueGroupObjects(RenderQueueGroup* group, 
			QueuedRenderableCollection::OrganisationMode om);
virtual void renderTextureShadowCasterQueueGroupObjects(RenderQueueGroup* group, 
			QueuedRenderableCollection::OrganisationMode om);
virtual void renderTextureShadowReceiverQueueGroupObjects(RenderQueueGroup* group, 
			QueuedRenderableCollection::OrganisationMode om);
virtual void renderModulativeTextureShadowedQueueGroupObjects(RenderQueueGroup* group, 
			QueuedRenderableCollection::OrganisationMode om);
virtual void renderAdditiveTextureShadowedQueueGroupObjects(RenderQueueGroup* group, 
			QueuedRenderableCollection::OrganisationMode om);
virtual void renderObjects(const QueuedRenderableCollection& objs, 
			QueuedRenderableCollection::OrganisationMode om, 
            bool doLightIteration, const LightList* manualLightList = 0);
virtual void renderTransparentShadowCasterObjects(const QueuedRenderableCollection& objs, 
			QueuedRenderableCollection::OrganisationMode om, 
			bool doLightIteration, const LightList* manualLightList = 0);
virtual void updateRenderQueueSplitOptions(void);
virtual void updateRenderQueueGroupSplitOptions(RenderQueueGroup* group, 
			bool suppressShadows, bool suppressRenderState);
virtual ~SceneManager();
virtual const String& getTypeName(void) const = 0;
virtual Camera* createCamera(const String& name);
virtual Camera* getCamera(const String& name) const;
virtual bool hasCamera(const String& name) const;
virtual void destroyCamera(Camera *cam);
virtual void destroyCamera(const String& name);
virtual void destroyAllCameras(void);
virtual Light* createLight(const String& name);
virtual Light* getLight(const String& name) const;
virtual bool hasLight(const String& name) const;
virtual void destroyLight(const String& name);
virtual void destroyLight(Light* light);
virtual void destroyAllLights(void);
virtual void _notifyLightsDirty(void);
virtual const LightList& _getLightsAffectingFrustum(void) const;
virtual void _populateLightList(const Vector3& position, Real radius, LightList& destList);
virtual SceneNode* createSceneNode(void);
virtual SceneNode* createSceneNode(const String& name);
virtual void destroySceneNode(const String& name);
virtual SceneNode* getRootSceneNode(void) const;
virtual SceneNode* getSceneNode(const String& name) const;
virtual bool hasSceneNode(const String& name) const;
virtual Entity* createEntity(const String& entityName, const String& meshName);
virtual Entity* createEntity(const String& entityName, PrefabType ptype);
virtual Entity* getEntity(const String& name) const;
virtual bool hasEntity(const String& name) const;
virtual void destroyEntity(Entity* ent);
virtual void destroyEntity(const String& name);
virtual void destroyAllEntities(void);
virtual ManualObject* createManualObject(const String& name);
};
class __declspec(dllimport) ManualObject : public MovableObject {public:
class ManualObjectSection;
virtual ~ManualObject();
virtual void clear(void);
virtual void estimateVertexCount(size_t vcount);
virtual void estimateIndexCount(size_t icount);
virtual void begin(const String& materialName, 
			RenderOperation::OperationType opType = RenderOperation::OT_TRIANGLE_LIST);
virtual void setDynamic(bool dyn);
virtual bool getDynamic() const;
virtual void beginUpdate(size_t sectionIndex);
virtual void position(const Vector3& pos);
virtual void position(Real x, Real y, Real z);
virtual void normal(const Vector3& norm);
virtual void normal(Real x, Real y, Real z);
virtual void textureCoord(Real u);
virtual void textureCoord(Real u, Real v);
virtual void textureCoord(Real u, Real v, Real w);
virtual void textureCoord(const Vector2& uv);
virtual void textureCoord(const Vector3& uvw);
virtual void colour(const ColourValue& col);
virtual void colour(Real r, Real g, Real b, Real a = 1.0f);
virtual void index(uint16 idx);
virtual void triangle(uint16 i1, uint16 i2, uint16 i3);
virtual void quad(uint16 i1, uint16 i2, uint16 i3, uint16 i4);
virtual ManualObjectSection* end(void);
};
}
namespace Ogre {
// Existing receiver view: every field below is accessed by the native body.
class AdornQuadric {
public:
enum NormalStyle {Smooth=0,Flat=1,None=2};
enum Orientation {Outside=0,Inside=1};
enum DrawStyle {Point=0,Line=1,Fill=2,Silhouette=3};
NormalStyle normals;
bool textureCoords;
Orientation orientation;
DrawStyle drawStyle;
ColourValue colour;
Vector3 offset;
ManualObject* sphere(SceneManager*,const String&,ManualObject*,float,int,int);
};
ManualObject* AdornQuadric::sphere(SceneManager* manager,const String& name,ManualObject* object,float radius,int slices,int stacks){
if(!object)object=manager->createManualObject(name);
unsigned int index=0;

    int i,j;
    float sinCache1a[240];
    float cosCache1a[240];
    float sinCache2a[240];
    float cosCache2a[240];
    float sinCache3a[240];
    float cosCache3a[240];
    float sinCache1b[240];
    float cosCache1b[240];
    float sinCache2b[240];
    float cosCache2b[240];
    float sinCache3b[240];
    float cosCache3b[240];
    float angle;
    float zLow, zHigh;
    float sintemp1, sintemp2, sintemp3 = 0.0, sintemp4 = 0.0;
    float costemp1, costemp2 = 0.0, costemp3 = 0.0, costemp4 = 0.0;
    bool needCache2, needCache3;
    int start, finish;

    if (slices >= 240) slices = 240-1;
    if (stacks >= 240) stacks = 240-1;
    if (slices < 2 || stacks < 1 || radius < 0.0) {
	
	return 0;
    }

    
    
    
    needCache2 = needCache3 = false;

    if (normals == Smooth) {
	needCache2 = true;
    }

    if (normals == Flat) {
	if (drawStyle != Point) {
	    needCache3 = true;
	}
	if (drawStyle == Line) {
	    needCache2 = true;
	}
    }

    for (i = 0; i < slices; i++) {
	angle = 2 * Ogre::Math::PI * i / slices;
	sinCache1a[i] = sin(angle);
	cosCache1a[i] = cos(angle);
	if (needCache2) {
	    sinCache2a[i] = sinCache1a[i];
	    cosCache2a[i] = cosCache1a[i];
	}
    }

    for (j = 0; j <= stacks; j++) {
	angle = Ogre::Math::PI * j / stacks;
	if (needCache2) {
	    if (orientation == Outside) {
		sinCache2b[j] = sin(angle);
		cosCache2b[j] = cos(angle);
	    } else {
		sinCache2b[j] = -sin(angle);
		cosCache2b[j] = -cos(angle);
	    }
	}
	sinCache1b[j] = radius * sin(angle);
	cosCache1b[j] = radius * cos(angle);
    }
    
    sinCache1b[0] = 0;
    sinCache1b[stacks] = 0;

    if (needCache3) {
	for (i = 0; i < slices; i++) {
	    angle = 2 * Ogre::Math::PI * (i-0.5) / slices;
	    sinCache3a[i] = sin(angle);
	    cosCache3a[i] = cos(angle);
	}
	for (j = 0; j <= stacks; j++) {
	    angle = Ogre::Math::PI * (j - 0.5) / stacks;
	    if (orientation == Outside) {
		sinCache3b[j] = sin(angle);
		cosCache3b[j] = cos(angle);
	    } else {
		sinCache3b[j] = -sin(angle);
		cosCache3b[j] = -cos(angle);
	    }
	}
    }

    sinCache1a[slices] = sinCache1a[0];
    cosCache1a[slices] = cosCache1a[0];
    if (needCache2) {
	sinCache2a[slices] = sinCache2a[0];
	cosCache2a[slices] = cosCache2a[0];
    }
    if (needCache3) {
	sinCache3a[slices] = sinCache3a[0];
	cosCache3a[slices] = cosCache3a[0];
    }

    switch(drawStyle){case Fill:if (!textureCoords) {start=1;finish=stacks-1;
object->begin("", Ogre::RenderOperation::OT_TRIANGLE_FAN);
if (colour.r >= 0.0f) object->colour(colour);
index=0;
object->position(0.0 + offset.x, 0.0 + offset.y, radius + offset.z);
object->index(index++);
switch(normals) {
	      case Flat:
		sintemp3 = sinCache3b[1];
		costemp3 = cosCache3b[1];
		break;
	      case Smooth:
		sintemp3 = sinCache2b[1];
		costemp3 = cosCache2b[1];
		object->normal(sinCache2a[0] * sinCache2b[0],
			cosCache2a[0] * sinCache2b[0],
			cosCache2b[0]);
		break;
	      default:
		break;
	    }
sintemp2 = sinCache1b[1];
	    zHigh = cosCache1b[1];
	    
	    if (orientation == Outside) {
		for (i = slices; i >= 0; i--) {
		    object->position(sintemp2 * sinCache1a[i] + offset.x, sintemp2 * cosCache1a[i] + offset.y, zHigh + offset.z);
object->index(index++);
switch(normals) {
		      case Smooth:
			object->normal(sinCache2a[i] * sintemp3,
				cosCache2a[i] * sintemp3,
				costemp3);
			break;
		      case Flat:
			if (i != slices) {
			    object->normal(sinCache3a[i+1] * sintemp3,
				    cosCache3a[i+1] * sintemp3,
				    costemp3);
			}
			break;
		      case None:
		      default:
			break;
		    }
		    
		}
	    } else {
		for (i = 0; i <= slices; i++) {
		    object->position(sintemp2 * sinCache1a[i] + offset.x, sintemp2 * cosCache1a[i] + offset.y, zHigh + offset.z);
object->index(index++);
switch(normals) {
		      case Smooth:
			object->normal(sinCache2a[i] * sintemp3,
				cosCache2a[i] * sintemp3,
				costemp3);
			break;
		      case Flat:
			object->normal(sinCache3a[i] * sintemp3,
				cosCache3a[i] * sintemp3,
				costemp3);
			break;
		      case None:
		      default:
			break;
		    }
		    
		}
	    }
	    object->end();

	    
	    object->begin("", Ogre::RenderOperation::OT_TRIANGLE_FAN);
if (colour.r >= 0.0f) object->colour(colour);
index=0;
object->position(0.0 + offset.x, 0.0 + offset.y, -radius + offset.z);
object->index(index++);


	    if (orientation == Outside) {sintemp2 = sinCache1b[stacks-1];
	    zHigh = cosCache1b[stacks-1];
	    switch(normals) {
	      case Flat:
		sintemp3 = sinCache3b[stacks];
		costemp3 = cosCache3b[stacks];
		break;
	      case Smooth:
		sintemp3 = sinCache2b[stacks-1];
		costemp3 = cosCache2b[stacks-1];
		object->normal(sinCache2a[stacks] * sinCache2b[stacks],
			cosCache2a[stacks] * sinCache2b[stacks],
			cosCache2b[stacks]);
		break;
	      default:
		break;
	    }
		for (i = 0; i <= slices; i++) {
		    object->position(sintemp2 * sinCache1a[i] + offset.x, sintemp2 * cosCache1a[i] + offset.y, zHigh + offset.z);
object->index(index++);
switch(normals) {
		      case Smooth:
			object->normal(sinCache2a[i] * sintemp3,
				cosCache2a[i] * sintemp3,
				costemp3);
			break;
		      case Flat:
			object->normal(sinCache3a[i] * sintemp3,
				cosCache3a[i] * sintemp3,
				costemp3);
			break;
		      case None:
		      default:
			break;
		    }
		    
		}
	    } else {
		for (i = slices; i >= 0; i--) {
		    object->position(sinCache1b[1] * sinCache1a[i] + offset.x, sinCache1b[1] * cosCache1a[i] + offset.y, cosCache1b[1] + offset.z);
object->index(index++);
switch(normals) {
		      case Smooth:
			object->normal(sinCache2a[i] * sintemp3,
				cosCache2a[i] * sintemp3,
				costemp3);
			break;
		      case Flat:
			if (i != slices) {
			    object->normal(sinCache3a[i+1] * sintemp3,
				    cosCache3a[i+1] * sintemp3,
				    costemp3);
			}
			break;
		      case None:
		      default:
			break;
		    }
		    
		}
	    }
	    object->end();
	} else {start=0;finish=stacks;}
for (j = start; j < finish; j++) {
	    zLow = cosCache1b[j];
	    zHigh = cosCache1b[j+1];
	    sintemp1 = sinCache1b[j];
	    sintemp2 = sinCache1b[j+1];
	    switch(normals) {
	      case Flat:
		sintemp4 = sinCache3b[j+1];
		costemp4 = cosCache3b[j+1];
		break;
	      case Smooth:
		if (orientation == Outside) {
		    sintemp3 = sinCache2b[j+1];
		    costemp3 = cosCache2b[j+1];
		    sintemp4 = sinCache2b[j];
		    costemp4 = cosCache2b[j];
		} else {
		    sintemp3 = sinCache2b[j];
		    costemp3 = cosCache2b[j];
		    sintemp4 = sinCache2b[j+1];
		    costemp4 = cosCache2b[j+1];
		}
		break;
	      default:
		break;
	    }

	    std::vector<Ogre::Vector3> positions;
std::vector<Ogre::Vector3> normalsCache;
Ogre::Vector3 currentNormal;
if(j==start){object->begin("", Ogre::RenderOperation::OT_TRIANGLE_LIST);index=0;}
if(colour.r >= 0.0f)object->colour(colour);
	    for (i = 0; i <= slices; i++) {
		switch(normals) {
		  case Smooth:
		    currentNormal = Ogre::Vector3(sinCache2a[i] * sintemp3, cosCache2a[i] * sintemp3, costemp3);
		    break;
		  case Flat:
		  case None:
		  default:
		    break;
		}
		if (orientation == Outside) {
		    if (textureCoords) {
			object->textureCoord(1 - (float) i / slices,
				1 - (float) (j+1) / stacks);
		    }
		    {int count=positions.size();
if(positions.size()>=2){
if(count%2){object->position(positions[count-1]);object->index(index++);object->normal(normalsCache[count-1]);
object->position(positions[count-2]);object->index(index++);object->normal(normalsCache[count-2]);
object->position(sintemp2 * sinCache1a[i] + offset.x, sintemp2 * cosCache1a[i] + offset.y, zHigh + offset.z);
object->index(index++);
object->normal(currentNormal);
positions.push_back(Ogre::Vector3(sintemp2 * sinCache1a[i] + offset.x, sintemp2 * cosCache1a[i] + offset.y, zHigh + offset.z));
normalsCache.push_back(currentNormal);}else{object->position(positions[count-2]);object->index(index++);object->normal(normalsCache[count-2]);
object->position(positions[count-1]);object->index(index++);object->normal(normalsCache[count-1]);
object->position(sintemp2 * sinCache1a[i] + offset.x, sintemp2 * cosCache1a[i] + offset.y, zHigh + offset.z);
object->index(index++);
object->normal(currentNormal);
positions.push_back(Ogre::Vector3(sintemp2 * sinCache1a[i] + offset.x, sintemp2 * cosCache1a[i] + offset.y, zHigh + offset.z));
normalsCache.push_back(currentNormal);}
}else{positions.push_back(Ogre::Vector3(sintemp2 * sinCache1a[i] + offset.x, sintemp2 * cosCache1a[i] + offset.y, zHigh + offset.z));normalsCache.push_back(currentNormal);}};
		} else {
		    if (textureCoords) {
			object->textureCoord(1 - (float) i / slices,
				1 - (float) j / stacks);
		    }
		    {int count=positions.size();
if(positions.size()>=2){
if(count%2){object->position(positions[count-1]);object->index(index++);object->normal(normalsCache[count-1]);
object->position(positions[count-2]);object->index(index++);object->normal(normalsCache[count-2]);
object->position(sintemp1 * sinCache1a[i] + offset.x, sintemp1 * cosCache1a[i] + offset.y, zLow + offset.z);
object->index(index++);
object->normal(currentNormal);
positions.push_back(Ogre::Vector3(sintemp1 * sinCache1a[i] + offset.x, sintemp1 * cosCache1a[i] + offset.y, zLow + offset.z));
normalsCache.push_back(currentNormal);}else{object->position(positions[count-2]);object->index(index++);object->normal(normalsCache[count-2]);
object->position(positions[count-1]);object->index(index++);object->normal(normalsCache[count-1]);
object->position(sintemp1 * sinCache1a[i] + offset.x, sintemp1 * cosCache1a[i] + offset.y, zLow + offset.z);
object->index(index++);
object->normal(currentNormal);
positions.push_back(Ogre::Vector3(sintemp1 * sinCache1a[i] + offset.x, sintemp1 * cosCache1a[i] + offset.y, zLow + offset.z));
normalsCache.push_back(currentNormal);}
}else{positions.push_back(Ogre::Vector3(sintemp1 * sinCache1a[i] + offset.x, sintemp1 * cosCache1a[i] + offset.y, zLow + offset.z));normalsCache.push_back(currentNormal);}};
		}
		switch(normals) {
		  case Smooth:
		    currentNormal = Ogre::Vector3(sinCache2a[i] * sintemp4, cosCache2a[i] * sintemp4, costemp4);
		    break;
		  case Flat:
		    currentNormal = Ogre::Vector3(sinCache3a[i] * sintemp4, cosCache3a[i] * sintemp4, costemp4);
		    break;
		  case None:
		  default:
		    break;
		}
		if (orientation == Outside) {
		    if (textureCoords) {
			object->textureCoord(1 - (float) i / slices,
				1 - (float) j / stacks);
		    }
		    {int count=positions.size();
if(positions.size()>=2){
if(count%2){object->position(positions[count-1]);object->index(index++);object->normal(normalsCache[count-1]);
object->position(positions[count-2]);object->index(index++);object->normal(normalsCache[count-2]);
object->position(sintemp1 * sinCache1a[i] + offset.x, sintemp1 * cosCache1a[i] + offset.y, zLow + offset.z);
object->index(index++);
object->normal(currentNormal);
positions.push_back(Ogre::Vector3(sintemp1 * sinCache1a[i] + offset.x, sintemp1 * cosCache1a[i] + offset.y, zLow + offset.z));
normalsCache.push_back(currentNormal);}else{object->position(positions[count-2]);object->index(index++);object->normal(normalsCache[count-2]);
object->position(positions[count-1]);object->index(index++);object->normal(normalsCache[count-1]);
object->position(sintemp1 * sinCache1a[i] + offset.x, sintemp1 * cosCache1a[i] + offset.y, zLow + offset.z);
object->index(index++);
object->normal(currentNormal);
positions.push_back(Ogre::Vector3(sintemp1 * sinCache1a[i] + offset.x, sintemp1 * cosCache1a[i] + offset.y, zLow + offset.z));
normalsCache.push_back(currentNormal);}
}else{positions.push_back(Ogre::Vector3(sintemp1 * sinCache1a[i] + offset.x, sintemp1 * cosCache1a[i] + offset.y, zLow + offset.z));normalsCache.push_back(currentNormal);}};
		} else {
		    if (textureCoords) {
			object->textureCoord(1 - (float) i / slices,
				1 - (float) (j+1) / stacks);
		    }
		    {int count=positions.size();
if(positions.size()>=2){
if(count%2){object->position(positions[count-1]);object->index(index++);object->normal(normalsCache[count-1]);
object->position(positions[count-2]);object->index(index++);object->normal(normalsCache[count-2]);
object->position(sintemp2 * sinCache1a[i] + offset.x, sintemp2 * cosCache1a[i] + offset.y, zHigh + offset.z);
object->index(index++);
object->normal(currentNormal);
positions.push_back(Ogre::Vector3(sintemp2 * sinCache1a[i] + offset.x, sintemp2 * cosCache1a[i] + offset.y, zHigh + offset.z));
normalsCache.push_back(currentNormal);}else{object->position(positions[count-2]);object->index(index++);object->normal(normalsCache[count-2]);
object->position(positions[count-1]);object->index(index++);object->normal(normalsCache[count-1]);
object->position(sintemp2 * sinCache1a[i] + offset.x, sintemp2 * cosCache1a[i] + offset.y, zHigh + offset.z);
object->index(index++);
object->normal(currentNormal);
positions.push_back(Ogre::Vector3(sintemp2 * sinCache1a[i] + offset.x, sintemp2 * cosCache1a[i] + offset.y, zHigh + offset.z));
normalsCache.push_back(currentNormal);}
}else{positions.push_back(Ogre::Vector3(sintemp2 * sinCache1a[i] + offset.x, sintemp2 * cosCache1a[i] + offset.y, zHigh + offset.z));normalsCache.push_back(currentNormal);}};
		}
	    }
	    if(j==finish-1)object->end();
	}
	break;case Point:
	object->begin("", Ogre::RenderOperation::OT_POINT_LIST);
index=0;
if(colour.r >= 0.0f)object->colour(colour);
	for (j = 0; j <= stacks; j++) {
	    sintemp1 = sinCache1b[j];
	    costemp1 = cosCache1b[j];
	    switch(normals) {
	      case Flat:
	      case Smooth:
		sintemp2 = sinCache2b[j];
		costemp2 = cosCache2b[j];
		break;
	      default:
		break;
	    }
	    for (i = 0; i < slices; i++) {
		object->position(sintemp1 * sinCache1a[i] + offset.x, sintemp1 * cosCache1a[i] + offset.y, costemp1 + offset.z);
object->index(index++);
switch(normals) {
		  case Flat:
		  case Smooth:
		    object->normal(sinCache2a[i] * sintemp2,
			    cosCache2a[i] * sintemp2,
			    costemp2);
		    break;
		  case None:
		  default:
		    break;
		}

		zLow = j * radius / stacks;

		if (textureCoords) {
		    object->textureCoord(1 - (float) i / slices,
			    1 - (float) j / stacks);
		}
		
	    }
	}
	object->end();
	break;
      case Line:
      case Silhouette:
	for (j = 1; j < stacks; j++) {
	    sintemp1 = sinCache1b[j];
	    costemp1 = cosCache1b[j];
	    switch(normals) {
	      case Flat:
	      case Smooth:
		sintemp2 = sinCache2b[j];
		costemp2 = cosCache2b[j];
		break;
	      default:
		break;
	    }

	    object->begin("", Ogre::RenderOperation::OT_LINE_STRIP);
index=0;
if(colour.r >= 0.0f)object->colour(colour);
	    for (i = 0; i <= slices; i++) {
		object->position(sintemp1 * sinCache1a[i] + offset.x, sintemp1 * cosCache1a[i] + offset.y, costemp1 + offset.z);
object->index(index++);
switch(normals) {
		  case Flat:
		    object->normal(sinCache3a[i] * sintemp2,
			    cosCache3a[i] * sintemp2,
			    costemp2);
		    break;
		  case Smooth:
		    object->normal(sinCache2a[i] * sintemp2,
			    cosCache2a[i] * sintemp2,
			    costemp2);
		    break;
		  case None:
		  default:
		    break;
		}
		if (textureCoords) {
		    object->textureCoord(1 - (float) i / slices,
			    1 - (float) j / stacks);
		}
		
	    }
	    object->end();
	}
	for (i = 0; i < slices; i++) {
	    sintemp1 = sinCache1a[i];
	    costemp1 = cosCache1a[i];
	    switch(normals) {
	      case Flat:
	      case Smooth:
		sintemp2 = sinCache2a[i];
		costemp2 = cosCache2a[i];
		break;
	      default:
		break;
	    }

	    object->begin("", Ogre::RenderOperation::OT_LINE_STRIP);
index=0;
if(colour.r >= 0.0f)object->colour(colour);
	    for (j = 0; j <= stacks; j++) {
		object->position(sintemp1 * sinCache1b[j] + offset.x, costemp1 * sinCache1b[j] + offset.y, cosCache1b[j] + offset.z);
object->index(index++);
switch(normals) {
		  case Flat:
		    object->normal(sintemp2 * sinCache3b[j],
			    costemp2 * sinCache3b[j],
			    cosCache3b[j]);
		    break;
		  case Smooth:
		    object->normal(sintemp2 * sinCache2b[j],
			    costemp2 * sinCache2b[j],
			    cosCache2b[j]);
		    break;
		  case None:
		  default:
		    break;
		}

		if (textureCoords) {
		    object->textureCoord(1 - (float) i / slices,
			    1 - (float) j / stacks);
		}
		
	    }
	    object->end();
	}
	break;
      default:
	break;
    }

return object;
}
}

// Native used values and receiver member addresses; interface owner sizes are
// deliberately unspecified because this function only uses existing pointers.
typedef char sphere_vector_size[sizeof(Ogre::Vector3)==12?1:-1];
typedef char sphere_vector_x[offsetof(Ogre::Vector3,x)==0?1:-1];
typedef char sphere_vector_y[offsetof(Ogre::Vector3,y)==4?1:-1];
typedef char sphere_vector_z[offsetof(Ogre::Vector3,z)==8?1:-1];
typedef char sphere_colour_size[sizeof(Ogre::ColourValue)==16?1:-1];
typedef char sphere_colour_r[offsetof(Ogre::ColourValue,r)==0?1:-1];
typedef char sphere_colour_g[offsetof(Ogre::ColourValue,g)==4?1:-1];
typedef char sphere_colour_b[offsetof(Ogre::ColourValue,b)==8?1:-1];
typedef char sphere_colour_a[offsetof(Ogre::ColourValue,a)==12?1:-1];
typedef char sphere_receiver_normals[offsetof(Ogre::AdornQuadric,normals)==0?1:-1];
typedef char sphere_receiver_texture[offsetof(Ogre::AdornQuadric,textureCoords)==4?1:-1];
typedef char sphere_receiver_orientation[offsetof(Ogre::AdornQuadric,orientation)==8?1:-1];
typedef char sphere_receiver_draw[offsetof(Ogre::AdornQuadric,drawStyle)==12?1:-1];
typedef char sphere_receiver_colour[offsetof(Ogre::AdornQuadric,colour)==16?1:-1];
typedef char sphere_receiver_offset[offsetof(Ogre::AdornQuadric,offset)==32?1:-1];
typedef char sphere_cache_size[sizeof(std::vector<Ogre::Vector3>)==24?1:-1];
