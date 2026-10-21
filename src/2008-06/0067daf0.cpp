// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs-dll roc_cull_native_value_growth_selectd1e618c65f87b800.cpp

// Candidate translation unit (score above; library headers required).
// Native0067e2f0 reconstruction. Names below are codegen analogues.
// Genuine Ogre1.4.5 values/bases; custom storage comes from native stores.
#undef OGRE_NONCLIENT_BUILD
#include "../../../libs/ogre-1.4.5/ogrenew/OgreMain/include/Ogre.h"
#include "../../../libs/ogre-1.4.5/ogrenew/OgreMain/include/OgrePlaneBoundedVolume.h"
#include <algorithm>
#include <vector>

using namespace Ogre;
template<class T> static inline T& shadowField(void* p,unsigned offset) {
    return *reinterpret_cast<T*>(static_cast<char*>(p)+offset);
}
struct ShadowHistoryRecord {float value[5];};
class ShadowHistoryView {
public:
    //00678630: receiver count0, ring100/stride20 at8; pointer return,ret4.
    ShadowHistoryRecord& previous(int);
    int count() const;
    float median(int) const;
    void append(const ShadowHistoryRecord&);
};
extern bool nativeShadowThrottle;
extern int nativeShadowMode;

namespace Ogre {
class RbxSubEntity : public SubEntity,public ShadowCaster {
public:
    virtual ~RbxSubEntity();
    virtual void setFloat138(float);
    virtual float getFloat138() const;
    //00685140 chooses native LOD pointer130 or genuine base mSubMesh54.
    SubMesh* activeMesh();
    SubMesh* getLodMesh(unsigned int);
};
class RbxEntity : public Entity {
    // Same binary-proven native declaration used by renderer recovery.
    void* field274;
    bool field278,field279,field27a;
    AxisAlignedBox field27c;
    float field29c;
    int field2a0;
    std::vector<unsigned char> field2a4;
public:
    RbxEntity();
    virtual ~RbxEntity();
    virtual void method67daf0(void*);
    virtual void setSubEntitiesVisible(bool);
    void collect(Camera*,Light*,std::vector<ShadowCaster*>&);
    ShadowHistoryView* history() {return static_cast<ShadowHistoryView*>(field274);}
};
}
struct RankedShadow {
    RbxSubEntity* sub;
    float priority;
    bool operator<(const RankedShadow& rhs) const {return priority<rhs.priority;}
};
typedef char RankedShadowSize[sizeof(RankedShadow)==8?1:-1];
typedef char NativeEntitySize[sizeof(RbxEntity)==0x2bc?1:-1];
typedef char NativeSubEntitySize[sizeof(SubEntity)==0xec?1:-1];

void RbxEntity::collect(Camera* camera,Light* light,std::vector<ShadowCaster*>& output) {
    output.erase(output.begin(),output.end());
    if(!field279) {
        method67daf0(camera);
        field279=true;
    }
    const Vector3& minimum=field27c.getMinimum();
    const Vector3* corners=field27c.getAllCorners();
    for(int i=0;i<8;++i)
        if(camera->isVisible(corners[i])) corners[i].distance(camera->getDerivedPosition());
    float farDistance;
    {
        std::vector<Plane> planes;
        planes.push_back(Plane(Vector3(1,0,0),Vector3(field27c.getMaximum().x,0,0)));
        planes.push_back(Plane(Vector3(-1,0,0),Vector3(minimum.x,0,0)));
        planes.push_back(Plane(Vector3(0,1,0),Vector3(0,field27c.getMaximum().y,0)));
        planes.push_back(Plane(Vector3(0,-1,0),Vector3(0,minimum.y,0)));
        planes.push_back(Plane(Vector3(0,0,1),Vector3(0,0,field27c.getMaximum().z)));
        planes.push_back(Plane(Vector3(0,0,-1),Vector3(0,0,minimum.z)));
        const Vector3* frustum=camera->getWorldSpaceCorners();
        Ray rays[4];
        for(int i=0;i<4;++i) {
            rays[i].setOrigin(frustum[i]);
            Vector3 direction=frustum[i+4]-frustum[i];
            direction.normalise();
            rays[i].setDirection(direction);
        }
        float distance=-1.0f;
        for(int i=0;i<4;++i) {
            float nearest=1000000000.0f;
            for(int j=0;j<6;++j) {
                if(planes[j].getSide(rays[i].getOrigin())==Plane::NEGATIVE_SIDE) {
                    std::pair<bool,Real> hit=Math::intersects(rays[i],planes[j]);
                    if(hit.first) nearest=std::min(nearest,hit.second);
                }
            }
            if(nearest!=1000000000.0 && nearest<10000.0f)
                distance=std::max(nearest,distance);
        }
        farDistance=camera->getNearClipDistance()+distance;
    }
    float oldFar;
    if(farDistance>0) {
        oldFar=camera->getFarClipDistance();
        camera->setFarClipDistance(farDistance);
    }
    // Native point-light branch only assigns these on its visible-volume paths.
    // Keep the observed source shape; initialization remains an audit item.
    bool lightVisible;
    const PlaneBoundedVolumeList* volumes;
    if(light->getType()==Light::LT_DIRECTIONAL) {
        AxisAlignedBox swept;
        const Vector3* frustum=camera->getWorldSpaceCorners();
        Vector3 shift=light->getDerivedDirection()*-10000.0f;
        Vector3 low=frustum[0],high=frustum[0];
        low.makeFloor(frustum[0]+shift);
        high.makeCeil(frustum[0]+shift);
        for(int i=1;i<8;++i) {
            low.makeFloor(frustum[i]);high.makeCeil(frustum[i]);
            low.makeFloor(frustum[i]+shift);high.makeCeil(frustum[i]+shift);
        }
        swept.setExtents(low,high);
        lightVisible=false;
        volumes=&light->_getFrustumClipVolumes(camera);
    } else {
        Sphere sphere(light->getDerivedPosition(),light->getAttenuationRange());
        if(camera->isVisible(sphere)) {
            lightVisible=camera->isVisible(light->getDerivedPosition());
            if(!lightVisible) volumes=&light->_getFrustumClipVolumes(camera);
            else volumes=0;
        }
    }
    for(int i=0;i<(int)getNumSubEntities();++i) {
        RbxSubEntity* sub=dynamic_cast<RbxSubEntity*>(mSubEntityList[i]);
        ShadowCaster* caster=sub;
        if(!caster->getCastShadows()) continue;
        if(sub->getMaterial()->getTechnique(0)->getPass(0)->isTransparent()) continue;
        if(nativeShadowMode==0) {
            if(sub->getFloat138()<1.0f) continue;
        } else if(nativeShadowMode==1) {
            if(sub->getFloat138()<0.5f) continue;
        }
        if(sub->isVisible()) output.push_back(caster);
        else {
            if(field2a4[i]==3) continue;
            if(lightVisible && light->getType()!=Light::LT_DIRECTIONAL) continue;
            for(PlaneBoundedVolumeList::const_iterator it=volumes->begin();it!=volumes->end();++it) {
                if(it->intersects(caster->getWorldBoundingBox())) {
                    output.push_back(caster);
                    break;
                }
            }
        }
    }
    if(farDistance>0) camera->setFarClipDistance(oldFar);
    if(nativeShadowThrottle && field274 && nativeShadowMode>=1) {
        const ShadowHistoryRecord& record=static_cast<ShadowHistoryView*>(field274)->previous(0);
        float previous4=shadowField<float>(const_cast<ShadowHistoryRecord*>(&record),4);
        float previous8=shadowField<float>(const_cast<ShadowHistoryRecord*>(&record),8);
        float ratio=previous8/previous4;
        int desired=(int)(output.size()*ratio);
        if((ratio<1.0f || desired>2*previous8) && output.size()+previous8>1000.0f) {
            std::vector<RankedShadow> order;
            for(int i=0;i<(int)output.size();++i) {
                RbxSubEntity* sub=static_cast<RbxSubEntity*>(output[i]);
                SubMesh* mesh=sub->activeMesh();
                float depth=Math::Sqrt(sub->getSquaredViewDepth(camera));
                RankedShadow item={sub,static_cast<float>(depth-shadowField<float>(mesh,0xec)
                    -(sub->getFloat138()==1.0f)*1000000.0-(sub->getFloat138()==0.5f)*100)};
                order.push_back(item);
            }
            std::sort(order.begin(),order.end());
            int guaranteed=0;
            for(int i=0;i<(int)order.size();++i) {
                if(!(order[i].priority>=1.0f)) break;
                ++guaranteed;
            }
            int keep=std::min(std::max(desired,guaranteed),2*(int)previous8);
            if(keep+previous8<1000.0f) keep=(int)(1000.0f-previous8);
            output.resize(keep,0);
            for(int i=0;i<keep;++i) output[i]=order[i].sub;
        }
    }
}

// Native0067daf0 method body. Recovered names are codegen analogues.
namespace Ogre {
class RbxSceneNode : public SceneNode {
    typedef std::map<unsigned long,Matrix4*> TransformMap;
    mutable TransformMap transforms;
public:
    RbxSceneNode(SceneManager*,const String&);
    virtual ~RbxSceneNode();
    virtual void setTransform(unsigned long,const Matrix4&);
    virtual const Matrix4& getTransform(unsigned long) const;
    virtual bool hasTransform(unsigned long) const;
    virtual void setSphere(unsigned long,const Sphere&);
    virtual const Sphere& getSphere(unsigned long) const;
};
}
typedef char NativeSceneNodeSize[sizeof(RbxSceneNode)==0x248?1:-1];
typedef char NativeHistorySampleSize[sizeof(ShadowHistoryRecord)==20?1:-1];
extern float nativeLodLowMs;
extern float nativeLodHighMs;
struct RankedSubIndex {
    unsigned index;
    float priority;
    bool operator<(const RankedSubIndex& rhs) const {return priority<rhs.priority;}
};

void RbxEntity::method67daf0(void* rawCamera) {
    Camera* camera=static_cast<Camera*>(rawCamera);
    RbxSceneNode* node=dynamic_cast<RbxSceneNode*>(getParentNode());
    std::vector<RankedSubIndex> order;
    bool adaptive=nativeShadowThrottle && field274;
    if(adaptive) {
        order.resize(mSubEntityList.size());
        order.erase(order.begin(),order.end());
    }
    if(mSubEntityList.size()) {
        field2a4.resize(mSubEntityList.size(),0);
        memset(&field2a4[0],0,field2a4.size());
    }
    for(int i=0;i<(int)mSubEntityList.size();++i) {
        RbxSubEntity* sub=dynamic_cast<RbxSubEntity*>(mSubEntityList[i]);
        Vector3 translation=shadowField<Matrix4>(sub,0xf0).getTrans();
        bool visible=true;
        SubMesh* mesh=sub->getSubMesh();
        if(!mesh) mesh=sub->getLodMesh(1);
        Sphere bounds=node->getSphere((unsigned long)mesh);
        bounds.setCenter(bounds.getCenter()+translation);
        if(field278) visible=camera->isVisible(bounds);
        sub->setVisible(visible);
        if(!visible) field2a4[i]=2;
        else {
            field2a4[i]=1;
            if(adaptive) {
                RankedSubIndex item;
                item.index=i;
                float depth=Math::Sqrt(sub->getSquaredViewDepth(camera));
                item.priority=static_cast<float>(depth-bounds.getRadius()
                    -(sub->getFloat138()==1.0f)*1000000.0);
                order.push_back(item);
            }
        }
    }
    if(!adaptive) return;
    int selected=order.size();
    if(history()->count()>30) {
        const ShadowHistoryRecord& last=history()->previous(0);
        float median=history()->median(20);
        float inverse=1.0f/median;
        float change=Math::Abs((median-last.value[0])*inverse);
        if(!(change<=0.2f)) {
            if(last.value[1]>last.value[2])
                selected=(int)std::min(static_cast<float>(order.size()),last.value[2]);
        } else {
            if(median>nativeLodLowMs) {
                // Native truncates this fraction before applying its budget math.
                int minimum=(int)(field29c*0.01f);
                if(median>nativeLodHighMs) selected=(int)(minimum*last.value[2]);
                else selected=(int)((1.0f-Math::Sin(
                    (median-nativeLodLowMs)*Math::HALF_PI/(nativeLodHighMs-nativeLodLowMs),false)
                    *(1.0f-minimum))*last.value[2]);
                if(selected<static_cast<float>(mSubEntityList.size())*minimum)
                    selected=(int)(static_cast<float>(mSubEntityList.size())*minimum);
                if(Math::Abs(last.value[2]-selected)<40.0f) selected=(int)last.value[2];
                if(selected<field2a0) selected=field2a0;
            } else {
                if(last.value[1]>last.value[2]) {
                    selected=(int)last.value[2];
                    float growth=(nativeLodLowMs-median)*inverse;
                    int grown=(int)((growth>1.2f?1.2f:growth)*selected);
                    if(grown>=selected+40) selected=grown;
                }
            }
            if(selected>(int)order.size()) selected=order.size();
        }
    }
    if(selected<(int)order.size()) {
        std::sort(order.begin(),order.end());
        for(int i=selected;i<(int)order.size();++i) {
            RbxSubEntity* sub=dynamic_cast<RbxSubEntity*>(mSubEntityList[order[i].index]);
            sub->setVisible(false);
            field2a4[order[i].index]=3;
        }
    }
    if(field27a) {
        ShadowHistoryRecord sample={{-1.0f,-1.0f,-1.0f,-1.0f,-1.0f}};
        history()->append(sample);
        ShadowHistoryRecord& last=history()->previous(0);
        last.value[1]=order.size();
        last.value[2]=selected;
    }
}
