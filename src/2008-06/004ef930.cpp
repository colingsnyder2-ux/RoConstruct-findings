// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs-dll roc_part_mesh_native_float_extents9dff256d484cc2eb.cpp

// Candidate translation unit (score above; library headers required).
// Native004eb190, complete2849B owner. Names are codegen analogues.
// Opaque receivers have no allocation/sizeof claims; views use native accesses.
#include <G3D/ReferenceCount.h>
#include <G3D/Color3.h>
#include <G3D/Vector3.h>
#include <G3D/Vector4.h>
#include <G3D/g3dmath.h>
#include <util/NormalId.h>
#include <util/SurfaceType.h>
#include <v8datamodel/BrickColor.h>
#include <util/Name.h>
#include <util/StandardOut.h>
#include <boost/shared_ptr.hpp>
#include <vector>
#include <string>
#include <exception>

template<class T> static inline T& partField(void* p,unsigned offset) {
    return *reinterpret_cast<T*>(static_cast<char*>(p)+offset);
}
namespace RBX {
// ContentId's genuine historical32B declaration: checked string28 + Name*4.
class ContentId {
    std::string id;
    const Name* mimeTypePtr;
public:
    ContentId(); // Native0043d050, observed noninline boundary.
    ContentId& operator=(const ContentId&); // Native0043d0a0.
    bool isNull() const {return id.empty();}
    const Name& mimeType() const {return *mimeTypePtr;}
};
typedef char NativeContentIdSize[sizeof(ContentId)==32?1:-1];
// RTTI selectors only; no invented base offsets or complete object storage.
class Instance {public:virtual ~Instance();};
class ModelInstance {public:virtual ~ModelInstance();};
class Clothing {public:virtual ~Clothing();};
class SurfaceView {public:SurfaceType getSurfaceType() const;};
class SurfacesView {public:const SurfaceView& operator[](NormalId) const;};
class PartInstance {public:const SurfacesView& getSurfaces() const;const G3D::Vector3& getPartSizeXml() const;};
class ModelModifierQuery {public:void* findModelModifier();}; //004e7ff0, thiscall
class Humanoid {
public:
    static Humanoid* fromInstance(Instance*);
    PartInstance* getLeftArm() const;
    PartInstance* getRightArm() const;
    PartInstance* getTorso() const;
    PartInstance* getLeftLeg() const;
    PartInstance* getRightLeg() const;
};
class ContentProviderView {
public:
    static ContentProviderView* find(Instance*); //00465210, cdecl
    void requestFile(const ContentId&,int*,std::string&); //00562670, ret0xc
};
class SpecialShapeView {
public:
    ContentId getMeshId() const;
    ContentId getTextureId() const; //004e5f50, hidden result
    float getAlpha() const; //0059eca0
};
class TextureProxyBase : public G3D::ReferenceCountedObject {
public:
    virtual ~TextureProxyBase();
    // Native551c70/90 and551cb0/d0 establish these four accessors.
    virtual void setValue28(unsigned);
    virtual unsigned getValue28() const;
    virtual void setFloat2c(float);
    virtual float getFloat2c() const;
};
typedef G3D::ReferenceCountedPointer<TextureProxyBase> TextureProxyBaseRef;
namespace RenderBase {
class MaterialBase : public G3D::ReferenceCountedObject {
public:
    class Level {
    public:
        virtual bool isEmptyLevel() const;
        virtual ~Level();
    }; // Proven native virtual prefix; returned references only.
    virtual ~MaterialBase();
    virtual const Level& appendEmptyLevel();
    virtual const Level& appendLevel(TextureProxyBaseRef,G3D::Color3,float,float,float,float);
    virtual const Level& appendLevel(G3D::Color3,float,float,float,float);
};
}
typedef G3D::ReferenceCountedPointer<RenderBase::MaterialBase> PartMaterialRef;
class PartMaterialFactoryView {
public:
    struct Attributes {
        const BrickColor color;
        const float transparency;
        const float reflectance;
    };
    PartMaterialRef getMegaMaterial(Attributes);
    PartMaterialRef getMaterial(Attributes);
};
namespace ViewNew {
class Part {
public:
    PartMaterialRef getMaterial();
    void updateMesh();
    bool usesMegaTexture() const; //004e5f80
};
}
}
extern RBX::PartMaterialRef nativeEmptyPartMaterial;
extern RBX::RenderBase::MaterialBase* createPartMaterial(); //00551730
extern RBX::TextureProxyBase* createPartTexture(void*,const std::string&,bool); //00551920
extern std::string migrateAtlas(std::string,const RBX::Name&,bool,float); //005ef840

RBX::PartMaterialRef RBX::ViewNew::Part::getMaterial() {
#define part partField<PartInstance*>(this,0xbc)
#define material partField<PartMaterialRef>(this,0xc4)
#define invalid partField<bool>(this,0xc8)
#define view partField<void*>(this,0xd0)
#define special partField<SpecialShapeView*>(this,0xd4)
#define factory partField<PartMaterialFactoryView*>(view,0x10)
#define engine partField<void*>(view,0xc)
#define alpha (1.0f-(1.0f-partField<float>(part,0x1e8))*partField<float>(part,0x328))
#define reflectance partField<float>(part,0x1ec)
    if(nativeEmptyPartMaterial.isNull()) {
        nativeEmptyPartMaterial=createPartMaterial();
        nativeEmptyPartMaterial->appendLevel(TextureProxyBaseRef(),G3D::Color3::WHITE,0,0,0,0);
    }
    try {
        if(invalid) {
            PartMaterialFactoryView::Attributes attributes={partField<BrickColor>(part,0x1e4),alpha,reflectance};
            G3D::Color3 color=attributes.color.color3();
            std::string filename;
            Instance* parent=partField<Instance*>(part,0x104);
            if(parent) {
                ModelInstance* model=dynamic_cast<ModelInstance*>(parent);
                if(model && reinterpret_cast<ModelModifierQuery*>(model)->findModelModifier()) {
                    ContentId shirt,pants;
                    typedef std::vector<boost::shared_ptr<Instance> > Children;
                    const Children* children=partField<const Children*>(parent,0x108);
                    if(children) {
                        Children::const_iterator end=children->end();
                        for(Children::const_iterator it=children->begin();it!=end;++it) {
                            Clothing* clothing=dynamic_cast<Clothing*>(it->get());
                            if(clothing) {
                                if(shirt.isNull() && !partField<ContentId>(clothing,0x134).isNull())
                                    shirt=partField<ContentId>(clothing,0x134);
                                if(pants.isNull() && !partField<ContentId>(clothing,0x154).isNull())
                                    pants=partField<ContentId>(clothing,0x154);
                            }
                        }
                    }
                    if(!shirt.isNull() || !pants.isNull()) {
                        Humanoid* humanoid=Humanoid::fromInstance(parent);
                        if(humanoid) {
                            bool shirtPart=!shirt.isNull() && (part==humanoid->getLeftArm() || part==humanoid->getRightArm() || part==humanoid->getTorso());
                            bool pantsPart=!pants.isNull() && (part==humanoid->getLeftLeg() || part==humanoid->getRightLeg() || part==humanoid->getTorso());
                            int shirtStatus=1,pantsStatus=1;
                            if(shirtPart || pantsPart) {
                                material=0;
                                if(shirtPart) {
                                    ContentProviderView::find(reinterpret_cast<Instance*>(part))->requestFile(shirt,&shirtStatus,filename);
                                    if(shirtStatus==1) {
                                        std::string migrated=migrateAtlas(filename,shirt.mimeType(),false,1.0f);
                                        material=createPartMaterial();
                                        material->appendLevel(TextureProxyBaseRef(),color,0.9f,50.0f,reflectance,alpha);
                                        TextureProxyBase* texture=createPartTexture(engine,migrated,false);
                                        material->appendLevel(TextureProxyBaseRef(texture),G3D::Color3::WHITE,0.9f,50.0f,reflectance,alpha+0.001f);
                                        texture->setFloat2c(1.0f);
                                        if(pants.isNull() || part!=humanoid->getTorso()) invalid=false;
                                    }
                                }
                                if(pantsPart) {
                                    ContentProviderView::find(reinterpret_cast<Instance*>(part))->requestFile(pants,&pantsStatus,filename);
                                    if(pantsStatus==1) {
                                        std::string migrated=migrateAtlas(filename,pants.mimeType(),false,1.0f);
                                        if(part==humanoid->getTorso() && material.notNull()) {
                                            TextureProxyBase* texture=createPartTexture(engine,migrated,false);
                                            material->appendLevel(TextureProxyBaseRef(texture),G3D::Color3::WHITE,0.9f,50.0f,reflectance,alpha);
                                            texture->setFloat2c(1.0f);
                                        } else {
                                            material=createPartMaterial();
                                            material->appendLevel(TextureProxyBaseRef(),color,0.9f,50.0f,reflectance,alpha);
                                            TextureProxyBase* texture=createPartTexture(engine,migrated,false);
                                            material->appendLevel(TextureProxyBaseRef(texture),G3D::Color3::WHITE,0.9f,50.0f,reflectance,alpha+0.001f);
                                            texture->setFloat2c(1.0f);
                                        }
                                        invalid=false;
                                    }
                                }
                            }
                            if(!invalid) return material;
                            if((shirtPart && shirtStatus==0) || (pantsPart && pantsStatus==0)) {
                                if(material!=nativeEmptyPartMaterial) material=nativeEmptyPartMaterial;
                                return material;
                            }
                        }
                    }
                }
            }
            if(usesMegaTexture()) material=factory->getMegaMaterial(attributes);
            else if(special && partField<int>(special,0x130)==5) {
                std::string textureFile;
                int status;
                ContentProviderView::find(reinterpret_cast<Instance*>(part))->requestFile(special->getTextureId(),&status,textureFile);
                if(status!=1) {
                    material=factory->getMaterial(attributes);
                    return material;
                }
                G3D::Vector3 vertexColor=partField<G3D::Vector3>(special,0x180);
                float transparency=special->getAlpha();
                material=createPartMaterial();
                material->appendLevel(TextureProxyBaseRef(createPartTexture(engine,textureFile,false)),G3D::Color3(vertexColor),0,0.1f,0,transparency);
            } else material=factory->getMaterial(attributes);
            invalid=false;
        }
    } catch(const std::exception& error) {
        StandardOut::singleton()->print(MESSAGE_WARNING,error);
    }
    return material;
#undef part
#undef material
#undef invalid
#undef view
#undef special
#undef factory
#undef engine
#undef alpha
#undef reflectance
}

// Native004ef930: update geometry, preserving observed source-level dispatch.
// Native surface setter clears a16-bit mask before inserting the3-bit value.
namespace RBX { namespace ViewNew {
enum RenderSurfaceType {FLAT,STUDS,INLET,WELD,GLUE};
class RenderSurfaceTypes {
public:
    unsigned data;
    RenderSurfaceTypes():data(0) {}
    void setSurfaceType(NormalId id,RenderSurfaceType type) {
        data=(data&static_cast<unsigned short>(~(7u<<(3*id))))|(type<<(3*id));
    }
};
static inline RenderSurfaceType renderSurfaceType(SurfaceType type) {
    switch(type) {
    case RBX::STUDS:return STUDS;
    case RBX::INLET:return INLET;
    case RBX::WELD:return WELD;
    case RBX::GLUE:return GLUE;
    default:return FLAT;
    }
}
}}
namespace RBX { namespace RenderBase {
class Mesh : public G3D::ReferenceCountedObject {public:virtual ~Mesh();};
}}
typedef G3D::ReferenceCountedPointer<RBX::RenderBase::Mesh> NativePartMeshRef;
extern RBX::RenderBase::Mesh* createPartBlockMesh(const G3D::Vector3&,RBX::ViewNew::RenderSurfaceTypes);
extern RBX::RenderBase::Mesh* createPartSphereMesh(const G3D::Vector3&,RBX::ViewNew::RenderSurfaceTypes);
extern RBX::RenderBase::Mesh* createPartCylinderMesh(const G3D::Vector3&,RBX::ViewNew::RenderSurfaceTypes);
extern RBX::RenderBase::Mesh* createPartWedgeMesh(const G3D::Vector3&,RBX::ViewNew::RenderSurfaceTypes);
extern RBX::RenderBase::Mesh* createPartTorsoMesh(const G3D::Vector3&,RBX::ViewNew::RenderSurfaceTypes);
extern RBX::RenderBase::Mesh* createPartHeadMesh(const G3D::Vector3&,RBX::ViewNew::RenderSurfaceTypes);
extern NativePartMeshRef createPartBrickMesh(const G3D::Vector3&,RBX::ViewNew::RenderSurfaceTypes,RBX::BrickColor);
extern NativePartMeshRef createPartClothedMesh(const G3D::Vector3&,RBX::ViewNew::RenderSurfaceTypes,RBX::BrickColor,
                                            const unsigned*,const G3D::Vector4*,const unsigned*,float);
extern NativePartMeshRef createPartFileMesh(RBX::ContentProviderView*,const G3D::Vector3&,RBX::ContentId);
// Native six-face indices/flags and shared18 atlas rectangles, not encoded code.
extern const unsigned nativeTorsoAtlasIndices[6],nativeLeftLegAtlasIndices[6],nativeRightLegAtlasIndices[6];
extern const unsigned nativeLeftArmAtlasIndices[6],nativeRightArmAtlasIndices[6];
extern const unsigned nativeTorsoAtlasFlags[6],nativeLeftLegAtlasFlags[6],nativeRightLegAtlasFlags[6];
extern const unsigned nativeLeftArmAtlasFlags[6],nativeRightArmAtlasFlags[6];
extern const G3D::Vector4 nativeClothingAtlasRectangles[18];

void RBX::ViewNew::Part::updateMesh() {
#define part partField<PartInstance*>(this,0xbc)
#define mesh partField<NativePartMeshRef>(this,0xcc)
#define special partField<SpecialShapeView*>(this,0xd4)
    RenderSurfaceTypes surfaces;
    surfaces.setSurfaceType(NORM_X,renderSurfaceType(part->getSurfaces()[NORM_X].getSurfaceType()));
    surfaces.setSurfaceType(NORM_Y,renderSurfaceType(part->getSurfaces()[NORM_Y].getSurfaceType()));
    surfaces.setSurfaceType(NORM_Z,renderSurfaceType(part->getSurfaces()[NORM_Z].getSurfaceType()));
    surfaces.setSurfaceType(NORM_X_NEG,renderSurfaceType(part->getSurfaces()[NORM_X_NEG].getSurfaceType()));
    surfaces.setSurfaceType(NORM_Y_NEG,renderSurfaceType(part->getSurfaces()[NORM_Y_NEG].getSurfaceType()));
    surfaces.setSurfaceType(NORM_Z_NEG,renderSurfaceType(part->getSurfaces()[NORM_Z_NEG].getSurfaceType()));
    G3D::Vector3 size=part->getPartSizeXml();
    if(usesMegaTexture()) {
        Instance* parent=partField<Instance*>(part,0x104);
        if(parent) {
            ModelInstance* model=dynamic_cast<ModelInstance*>(parent);
            void* modifier=model?reinterpret_cast<ModelModifierQuery*>(model)->findModelModifier():0;
            Humanoid* humanoid=Humanoid::fromInstance(parent);
            if(modifier && humanoid) {
                ContentId shirt,pants;
                typedef std::vector<boost::shared_ptr<Instance> > Children;
                const Children* children=partField<const Children*>(parent,0x108);
                if(children) {
                    Children::const_iterator end=children->end();
                    for(Children::const_iterator it=children->begin();it!=end;++it) {
                        Clothing* clothing=dynamic_cast<Clothing*>(it->get());
                        if(clothing) {
                            if(shirt.isNull() && !partField<ContentId>(clothing,0x134).isNull())
                                shirt=partField<ContentId>(clothing,0x134);
                            if(pants.isNull() && !partField<ContentId>(clothing,0x154).isNull())
                                pants=partField<ContentId>(clothing,0x154);
                        }
                    }
                }
                if((part==humanoid->getTorso() && (!shirt.isNull() || !pants.isNull())) ||
                   (part==humanoid->getLeftLeg() && !pants.isNull()) ||
                   (part==humanoid->getRightLeg() && !pants.isNull()) ||
                   (part==humanoid->getLeftArm() && !shirt.isNull()) ||
                   (part==humanoid->getRightArm() && !shirt.isNull())) {
                    if(part==humanoid->getTorso())
                        mesh=createPartClothedMesh(size,RenderSurfaceTypes(),partField<BrickColor>(part,0x1e4),
                            nativeTorsoAtlasIndices,nativeClothingAtlasRectangles,nativeTorsoAtlasFlags,0.0063725486397743225f);
                    else if(part==humanoid->getLeftLeg())
                        mesh=createPartClothedMesh(size,RenderSurfaceTypes(),partField<BrickColor>(part,0x1e4),
                            nativeLeftLegAtlasIndices,nativeClothingAtlasRectangles,nativeLeftLegAtlasFlags,0.0063725486397743225f);
                    else if(part==humanoid->getRightLeg())
                        mesh=createPartClothedMesh(size,RenderSurfaceTypes(),partField<BrickColor>(part,0x1e4),
                            nativeRightLegAtlasIndices,nativeClothingAtlasRectangles,nativeRightLegAtlasFlags,0.0063725486397743225f);
                    else if(part==humanoid->getLeftArm())
                        mesh=createPartClothedMesh(size,RenderSurfaceTypes(),partField<BrickColor>(part,0x1e4),
                            nativeLeftArmAtlasIndices,nativeClothingAtlasRectangles,nativeLeftArmAtlasFlags,0.0063725486397743225f);
                    else if(part==humanoid->getRightArm())
                        mesh=createPartClothedMesh(size,RenderSurfaceTypes(),partField<BrickColor>(part,0x1e4),
                            nativeRightArmAtlasIndices,nativeClothingAtlasRectangles,nativeRightArmAtlasFlags,0.0063725486397743225f);
                } else mesh=createPartBrickMesh(size,surfaces,partField<BrickColor>(part,0x1e4));
            } else mesh=createPartBrickMesh(size,surfaces,partField<BrickColor>(part,0x1e4));
        } else mesh=createPartBrickMesh(size,surfaces,partField<BrickColor>(part,0x1e4));
    } else if(!special) {
        switch(partField<int>(part,0x1dc)) {
        case 0:mesh=createPartSphereMesh(size,surfaces);break;
        case 1:mesh=createPartBlockMesh(size,surfaces);break;
        case 2:mesh=createPartCylinderMesh(size,surfaces);break;
        }
    } else {
        size.x=partField<float>(special,0x134)*size.x;
        size.y=partField<float>(special,0x138)*size.y;
        size.z=partField<float>(special,0x13c)*size.z;
        switch(partField<int>(special,0x130)) {
        case 0:mesh=createPartHeadMesh(size,surfaces);break;
        case 1:mesh=createPartTorsoMesh(size,surfaces);break;
        case 2:mesh=createPartWedgeMesh(size,surfaces);break;
        case 3:mesh=createPartSphereMesh(size,surfaces);break;
        case 4:mesh=createPartCylinderMesh(size,surfaces);break;
        case 5:mesh=createPartFileMesh(ContentProviderView::find(reinterpret_cast<Instance*>(part)),
                                     partField<G3D::Vector3>(special,0x134),special->getMeshId());break;
        case 6:mesh=createPartBlockMesh(size,surfaces);break;
        }
    }
    float x=G3D::abs(size.x),y=G3D::abs(size.y),z=G3D::abs(size.z);
    partField<float>(this,0x1c)=G3D::max(G3D::max(x,y),z)*sqrt(2.0)*0.5f;
#undef part
#undef mesh
#undef special
}
