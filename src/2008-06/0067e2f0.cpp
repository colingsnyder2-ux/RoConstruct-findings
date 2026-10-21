// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs-dll roc_shadow_native_minimum_referenced609de8660cb65e5.cpp

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
class ShadowHistoryRecord;
class ShadowHistoryView {
public:
    //00678630: receiver count0, ring100/stride20 at8; pointer return,ret4.
    const ShadowHistoryRecord& previous(int) const;
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
