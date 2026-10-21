// from server: 62% by colin
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs-dll roc_renderer_native_shared_failure_46f8131dcf09fb6c.cpp

// Candidate translation unit (score above; library headers required).
// Caller-side 2008 declarations. Storage views below use native instruction offsets.
#undef OGRE_NONCLIENT_BUILD
#include "../../../libs/ogre-1.4.5/ogrenew/OgreMain/include/Ogre.h"
#include <G3D/GCamera.h>
#include <G3D/ReferenceCount.h>
#include <G3D/Color3.h>
#include <GLG3D/Texture.h>
#include <map>
#include <vector>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <exception>

namespace G3D { class RenderDevice; class GLight; }

template<class T> inline T& nativeField(void* p, unsigned offset) {
    return *reinterpret_cast<T*>(static_cast<char*>(p) + offset);
}

namespace Ogre {
class VisualEngine;
class RbxSubEntity : public SubEntity, public ShadowCaster {
public:
    virtual ~RbxSubEntity();
    // 0084e90c slots 48/4c; bodies 00685820/00685830.
    virtual void setFloat138(float);
    virtual float getFloat138() const;
    void setLodMesh(unsigned int, SubMesh*); // 006850b0
    SubMesh* getLodMesh(unsigned int);       // 006850d0
    void setLod(unsigned int);              // 006850f0
};
class RbxSceneNode : public SceneNode {
    typedef std::map<unsigned long, Matrix4*> TransformMap;
    mutable TransformMap transforms;
public:
    RbxSceneNode(SceneManager*, const String&);
    virtual ~RbxSceneNode();
    virtual void setTransform(unsigned long, const Matrix4&);
    virtual const Matrix4& getTransform(unsigned long) const;
    virtual bool hasTransform(unsigned long) const;
    virtual void setSphere(unsigned long, const Sphere&);
    virtual const Sphere& getSphere(unsigned long) const;
};
class RbxEntity : public Entity {
    void* field274;
    bool field278, field279, field27a;
    AxisAlignedBox field27c;
    float field29c;
    int field2a0;
    // 0067daf0 indexes one byte per entry, stores states 0..3.
    std::vector<unsigned char> field2a4;
public:
    RbxEntity();
    virtual ~RbxEntity();
    // Native 0084e45c tail after inherited SDK slots.
    virtual void method67daf0(void*);
    virtual void setSubEntitiesVisible(bool); // 0067c6a0
    void setMesh(MeshPtr);                 // 0067c520
    void setContext18(void*);              // 0067c510
    RbxSubEntity* addSubEntity(SubMesh*, unsigned int); // 0067d9b0
    void mergeBounds(AxisAlignedBox);      // 007a9c40
};
}

namespace RBX {
class TextureProxyBase : public G3D::ReferenceCountedObject {
public:
    virtual ~TextureProxyBase();
}; // Opaque: no direct TextureProxyBase virtual calls or allocations in this TU.
typedef G3D::ReferenceCountedPointer<TextureProxyBase> TextureProxyBaseRef;
namespace RenderBase {
class MaterialBase : public G3D::ReferenceCountedObject {
public:
    class Level {
    public:
        virtual bool isEmptyLevel() const;
        virtual ~Level();
        virtual G3D::ReferenceCountedPointer<G3D::Texture> baseTexture(Ogre::VisualEngine*) const;
        virtual TextureProxyBaseRef baseTexture() const;
        virtual void setBaseTexture(TextureProxyBaseRef);
        virtual G3D::ReferenceCountedPointer<G3D::Texture> matte(Ogre::VisualEngine*) const;
        virtual const G3D::Color3& color() const;
        virtual float specular() const;
        virtual float shiny() const;
        virtual float reflect() const;
        virtual float transparent() const;
    };
    virtual ~MaterialBase();
    virtual const Level& appendEmptyLevel();
    virtual const Level& appendLevel(G3D::Color3, float, float, float, float);
    virtual const Level& appendLevel(TextureProxyBaseRef, G3D::Color3, float, float, float, float);
    virtual size_t levelCount() const;
    virtual Level& getLevel(int);
    virtual const Level* detailLevel(float) const;
    virtual bool veryTransparent() const;
};
class Mesh : public G3D::ReferenceCountedObject {
public:
    class Level : public G3D::ReferenceCountedObject {
    public:
        // Native 549610/549a50 receive Level, not Mesh.
        void updateSpecialGeometry(Ogre::VisualEngine*, Ogre::AxisAlignedBox*);
        void updateGeometry(Ogre::VisualEngine*, Ogre::AxisAlignedBox*);
    };
    const G3D::ReferenceCountedPointer<Level> detailLevel(float) const;
    void updateShadowGeometry(Ogre::VisualEngine*);
    G3D::Vector3& position(unsigned int); // 007a9c90, static backing array
    G3D::Vector3& normal(unsigned int);   // 007a9ce0, static backing array
};
class Chunk : public G3D::ReferenceCountedObject {
public:
    virtual ~Chunk();
    virtual bool cachesShadows() const;
    virtual void renderShadows(G3D::RenderDevice*, const G3D::GLight&, bool, float);
    virtual bool castsShadows() const;
    virtual bool cullable() const;
    virtual G3D::ReferenceCountedPointer<MaterialBase> getMaterial();
    virtual G3D::ReferenceCountedPointer<Mesh> getMesh();
    virtual const G3D::CoordinateFrame& cframe();
    // PartChunk and AggregateChunk vtables share these native accessors.
    virtual void setFloat14(float); // 004e5b60
    virtual float getFloat14() const; // 004e5b70
};
}
namespace RenderNew {
class TextureProxy : public TextureProxyBase {}; // RTTI-only concrete receiver.
class Material {
public:
    class Level : public RenderBase::MaterialBase::Level {}; // RTTI + field2c view only.
};
class RenderScene {
public:
    void render(Ogre::VisualEngine*, const G3D::GCamera*);
    void updateLights(Ogre::VisualEngine*, bool); // 007a9d30
};
}
}

typedef char CheckSceneNode[(sizeof(Ogre::RbxSceneNode) == 0x248) ? 1 : -1];
typedef char CheckEntity[(sizeof(Ogre::RbxEntity) == 0x2bc) ? 1 : -1];
extern bool nativeDebugRender; // 00942ebc
extern unsigned nativeMaterialId; // 0097f36c
extern Ogre::MeshPtr nativeBaseMesh; // 009738b8
extern Ogre::Root* nativeRoot; // 0097db48
extern void nativeFlushGeometry(Ogre::VisualEngine*); // 005493e0
extern std::string nativeAssetPath(); // 0055c4c0

// Whole native renderer candidate. Binary-backed opaque views retain actual SDK value types.
using namespace Ogre;
using namespace G3D;
using RBX::RenderBase::Chunk;
typedef RBX::RenderBase::Mesh NativeMesh;
typedef RBX::RenderBase::MaterialBase NativeMaterial;
typedef RBX::RenderNew::Material::Level NativeLevel;

static __forceinline SubMesh* nativeSubMesh(NativeMesh::Level* level) {
    if (!nativeField<bool>(level, 0x1c) && nativeField<int>(level, 0x20) >= 0)
        return nativeBaseMesh->getSubMesh((unsigned short)nativeField<int>(level, 0x20));
    return 0;
}

void RBX::RenderNew::RenderScene::render(VisualEngine* ctx, const GCamera* pose) {
#define chunks nativeField<Chunk**>(this, 8)
#define count nativeField<int>(this, 0xc)
#define manager nativeField<SceneManager*>(ctx, 4)
#define root nativeField<RbxSceneNode*>(this, 0x268)
#define entity nativeField<RbxEntity*>(this, 0x26c)
#define shadows nativeField<bool>(this, 0x2f4)
#define dummy nativeField<MeshPtr>(this, 0x27c)
#define baseMaterial nativeField<MaterialPtr>(this, 0x270)
    Camera* camera = nativeField<Camera*>(ctx, 8);
    CoordinateFrame frame = pose->getCoordinateFrame();
    if (shadows) {
        manager->setShadowTechnique(SHADOWTYPE_STENCIL_MODULATIVE);
        manager->setShadowColour(ColourValue(nativeField<float>(this, 0x328),
            nativeField<float>(this, 0x32c), nativeField<float>(this, 0x330)));
    } else manager->setShadowTechnique(SHADOWTYPE_NONE);
    Ogre::Quaternion orientation;
    orientation.FromRotationMatrix(*reinterpret_cast<const Ogre::Matrix3*>(&frame.rotation));
    camera->setOrientation(orientation);
    camera->setPosition(frame.translation.x, frame.translation.y, frame.translation.z);
    nativeField<Camera*>(ctx, 8)->setNearClipDistance(-pose->getNearPlaneZ());
    nativeField<Camera*>(ctx, 8)->setFarClipDistance(-pose->getFarPlaneZ());
    nativeField<Camera*>(ctx, 8)->setFOVy(Radian((float)pose->getFieldOfView()));
    Timer timer;
    timer.reset();
    if (!root) {
        root = new RbxSceneNode(manager, "rbxroot");
        manager->getRootSceneNode()->addChild(root);
    }
    updateLights(ctx, nativeField<bool>(this, 0x2f6));
    bool special = nativeField<bool>(ctx, 0x7f5);
    if (baseMaterial.isNull()) baseMaterial = MaterialManager::getSingleton().getByName("BaseWhite");
    if (dummy.isNull()) dummy = MeshManager::getSingleton().load("rbxdummymesh", "General");
    if (!entity && count != 0) {
        entity = new RbxEntity;
        root->attachObject(entity);
        entity->setMesh(dummy);
    }
    for (int i = 0; i < count; ++i) if (chunks[i]) chunks[i]->getMesh();
    if (nativeDebugRender && count != 0 && special) {
        nativeFlushGeometry(ctx);
        entity->setMesh(nativeBaseMesh);
        if (nativeField<AxisAlignedBox>(entity, 0x27c).isNull())
            entity->mergeBounds(nativeBaseMesh->getBounds());
    }
    CoordinateFrame cameraFrame;
    pose->getCoordinateFrame(cameraFrame);
    for (int i = 0; i < count; ++i) {
        Chunk* chunk = chunks[i];
        if (!chunk) continue;
        bool hasMesh = chunk->getMesh().notNull();
        bool hasMaterial = chunk->getMaterial().notNull();
        if (!hasMesh || !hasMaterial) continue;
        bool rejected = chunk->getMaterial()->detailLevel(0.0f) == 0;
        if (rejected) continue;
        G3D::ReferenceCountedPointer<NativeMesh> mesh = chunk->getMesh();
        if (shadows && nativeField<int>(mesh.pointer(), 0x80) == 0) mesh->updateShadowGeometry(ctx);
        int lod = 0;
        if (nativeField<int>(mesh.pointer(), 0x10) == 2) {
            const G3D::Vector3& p = chunk->cframe().translation;
            float depth = -((p.x - cameraFrame.translation.x) * cameraFrame.rotation[0][2]
                + (p.y - cameraFrame.translation.y) * cameraFrame.rotation[1][2]
                + (p.z - cameraFrame.translation.z) * cameraFrame.rotation[2][2]);
            if (!(depth < 80.0f)) lod = 1;
        }
        G3D::ReferenceCountedPointer<NativeMesh::Level> geometry = mesh->detailLevel((float)lod);
        bool boundsChanged = false;
        if (nativeField<int>(mesh.pointer(), 0x84) == 4 && !nativeField<bool>(ctx, 0x806)
            && nativeField<bool>(geometry.pointer(), 0x1c)) {
            G3D::ReferenceCountedPointer<NativeMesh::Level> base = mesh->detailLevel(0.0f);
            if (nativeField<int>(base.pointer(), 0x18) == 5 && nativeField<int>(base.pointer(), 0x10) == 4) {
                unsigned* indices = nativeField<unsigned*>(base.pointer(), 0xc);
                const G3D::Vector3& normal = mesh->normal(indices[0]);
                for (int j = 0; j < 4; ++j) {
                    G3D::Vector3& p = mesh->position(nativeField<unsigned*>(base.pointer(), 0xc)[j]);
                    p += normal * 0.06f;
                }
            }
        }
        if (!special) {
            if (nativeField<bool>(geometry.pointer(), 0x1c)) {
                AxisAlignedBox box;
                geometry->updateGeometry(ctx, &box);
                float radius = box.getHalfSize().length();
                root->setSphere((unsigned long)nativeField<SubMesh*>(geometry.pointer(), 0x24), Ogre::Sphere(box.getCenter(), radius));
                boundsChanged = true;
            }
        } else if (nativeField<bool>(geometry.pointer(), 0x1c)) {
            AxisAlignedBox box;
            geometry->updateSpecialGeometry(ctx, &box);
            float radius = box.getHalfSize().length();
            root->setSphere((unsigned long)nativeSubMesh(geometry.pointer()), Ogre::Sphere(box.getCenter(), radius));
            boundsChanged = true;
        }
        NativeLevel* material = dynamic_cast<NativeLevel*>(&chunk->getMaterial()->getLevel(0));
        bool materialCreated = false;
        if (material && nativeField<MaterialPtr>(material, 0x2c).isNull()) {

    char name[8];
    _snprintf(name, 8, "m%d", nativeMaterialId++);
    nativeField<MaterialPtr>(material, 0x2c) = MaterialManager::getSingleton().create(name, "General");
    for (int i = 0; i < chunk->getMaterial()->levelCount(); ++i) {
        NativeLevel* level = dynamic_cast<NativeLevel*>(&chunk->getMaterial()->getLevel(i));
        if (level) {
            level->baseTexture(ctx);
            Pass* pass = i == 0 ? nativeField<MaterialPtr>(material, 0x2c)->getTechnique(0)->getPass(0)
                               : nativeField<MaterialPtr>(material, 0x2c)->getTechnique(0)->createPass();
            {
    const Color3& color = level->color();
    pass->setDiffuse(color.r, color.g, color.b, 1.0f - level->transparent());
    pass->setAmbient(color.r, color.g, color.b);
    int type = nativeField<int>(mesh.pointer(), 0x84);
    if (type == 1 || type == 2 || type == 3) {
        pass->setSpecular(level->specular(), level->specular(), level->specular(), 1.0f);
        pass->setShininess(type == 2 ? 40.0f : 18.0f);
    } else {
        pass->setSpecular(0.75f, 0.75f, 0.75f, 1.0f);
        pass->setShininess(10.0f);
    }
    pass->setDepthBias(nativeField<float>(chunk, 0x18) * -16.0f, 0.0f);
    if (level->transparent() > 0.0f || nativeField<int>(mesh.pointer(), 0x84) == 4) {
        pass->setSceneBlending((SceneBlendFactor)7, (SceneBlendFactor)9);
        pass->setDepthWriteEnabled(false);
    }
    if (level->baseTexture().notNull()) {
        TexturePtr texture = nativeField<TexturePtr>(
            dynamic_cast<RBX::RenderNew::TextureProxy*>(level->baseTexture().pointer()), 0x54);
        if (!texture.isNull()) {
            TextureUnitState* unit = pass->createTextureUnitState();
            unit->setColourOperation((LayerBlendOperation)2);
            unit->setTextureFiltering((FilterOptions)2, (FilterOptions)2, (FilterOptions)2);
            unit->setTextureAddressingMode((TextureUnitState::TextureAddressingMode)0,
                (TextureUnitState::TextureAddressingMode)0, (TextureUnitState::TextureAddressingMode)0);
            unit->setTextureBorderColour(ColourValue(level->color().r, level->color().g, level->color().b));
            unit->setTextureName(texture->getName(), (TextureType)2);
        }
        bool loaded = !texture.isNull() && texture->isLoaded();
        if (level->transparent() > 0.0f && loaded && nativeField<int>(geometry.pointer(), 0x18) == 2) {
            pass->setSceneBlending((SceneBlendType)4);
            pass->setDepthWriteEnabled(true);
            pass->setAlphaRejectSettings((CompareFunction)6, 1);
        }
    }

}
        }
    }
    if (material->reflect() > 0.0f) {
    TexturePtr texture = TextureManager::getSingleton().getByName("skysphmap");
    if (texture.isNull()) {
        texture = TextureManager::getSingleton().create("skysphmap", "General");
        Image image;
        std::string filename = nativeAssetPath() + "Sky\\" + "skyspheremap.jpg";
        image.load(filename, "General");
        texture->loadImage(image);
    }
    Pass* pass = nativeField<MaterialPtr>(material, 0x2c)->getTechnique(0)->createPass();
    float reflect = material->reflect();
    pass->setDiffuse(reflect, reflect, reflect, reflect * 0.8f);
    pass->setAmbient(reflect, reflect, reflect);
    pass->setSceneBlending((SceneBlendFactor)0, (SceneBlendFactor)9);
    TextureUnitState* unit = pass->createTextureUnitState();
    unit->setTextureName(texture->getName(), (TextureType)2);
    unit->setEnvironmentMap(true, (TextureUnitState::EnvMapType)1);

}
    materialCreated = true;

        }
        if (!nativeField<RbxSubEntity*>(chunk, 0x10)) {
            if ((special && !nativeSubMesh(geometry.pointer())) ||
                (!special && !nativeField<SubMesh*>(geometry.pointer(), 0x24)))
                throw std::exception("Please restart ROBLOX, if you changed your settings but have not restarted");
            SubMesh* selected;
            RbxSubEntity* sub;
            if (special) {
                selected = nativeSubMesh(geometry.pointer());
                sub = entity->addSubEntity(selected, lod);
                nativeField<bool>(sub, 0x13c) = false;
            } else {
                selected = nativeField<SubMesh*>(geometry.pointer(), 0x24);

                sub = entity->addSubEntity(selected, lod);
            }
            sub->setFloat138(chunk->getFloat14());
            nativeField<int>(sub, 0x140) = nativeField<int>(mesh.pointer(), 0x80);
            if (nativeField<int>(mesh.pointer(), 0x80) == 0 && nativeField<int>(mesh.pointer(), 0x84) == 1)
                nativeField<bool>(sub, 0x13c) = false;
            if (nativeField<int>(mesh.pointer(), 0x84) == 4) nativeField<bool>(sub, 0x13c) = false;
            nativeField<RbxSubEntity*>(chunk, 0x10) = sub;
            nativeField<RbxEntity*>(chunk, 0xc) = entity;
            {
    const G3D::Vector3& pos = chunk->cframe().translation;
    AxisAlignedBox bounds = nativeField<AxisAlignedBox>(entity, 0x27c);
    if (std::fabs(pos.x) < 10000.0f && std::fabs(pos.y) < 10000.0f && std::fabs(pos.z) < 10000.0f) {
        if (selected != nativeField<SubMesh*>(geometry.pointer(), 0x24)) {
            const Ogre::Sphere& sphere = root->getSphere((unsigned long)selected);
            float radius = sphere.getRadius();
            const G3D::Vector3& position = chunk->cframe().translation;
            AxisAlignedBox merged = nativeField<AxisAlignedBox>(entity, 0x27c);
            merged.merge(AxisAlignedBox(
                Ogre::Vector3(position.x + sphere.getCenter().x - radius,
                    position.y + sphere.getCenter().y - radius, position.z + sphere.getCenter().z - radius),
                Ogre::Vector3(position.x + sphere.getCenter().x + radius,
                    position.y + sphere.getCenter().y + radius, position.z + sphere.getCenter().z + radius)));
            entity->mergeBounds(merged);
        } else {
            SubMesh* sub = nativeField<SubMesh*>(geometry.pointer(), 0x24);
            AxisAlignedBox box(
                Ogre::Vector3(pos.x + nativeField<float>(sub, 0xcc), pos.y + nativeField<float>(sub, 0xd0),
                    pos.z + nativeField<float>(sub, 0xd4)),
                Ogre::Vector3(pos.x + nativeField<float>(sub, 0xd8), pos.y + nativeField<float>(sub, 0xdc),
                    pos.z + nativeField<float>(sub, 0xe0)));
            bounds.merge(box);
            entity->mergeBounds(bounds);
        }
    }

            }
        } else if (boundsChanged || !nativeField<RbxSubEntity*>(chunk, 0x10)->getLodMesh(lod)) {
            if (special) {
                if (nativeSubMesh(geometry.pointer()))
                    nativeField<RbxSubEntity*>(chunk, 0x10)->setLodMesh(lod, nativeSubMesh(geometry.pointer()));
            } else if (nativeField<SubMesh*>(geometry.pointer(), 0x24))
                nativeField<RbxSubEntity*>(chunk, 0x10)->setLodMesh(lod, nativeField<SubMesh*>(geometry.pointer(), 0x24));
        }
        nativeField<RbxSubEntity*>(chunk, 0x10)->setLod(lod);
        nativeField<RbxSubEntity*>(chunk, 0x10)->setFloat138(chunk->getFloat14());
        RbxSubEntity* sub = nativeField<RbxSubEntity*>(chunk, 0x10);
        if (material && (materialCreated || sub->getMaterial().getPointer() == baseMaterial.getPointer())) {
            Ogre::Material* mat = nativeField<MaterialPtr>(material, 0x2c).getPointer();
            if (mat) sub->setMaterialName(mat->getName());
        }
        Ogre::Quaternion q;
        q.FromRotationMatrix(*reinterpret_cast<const Ogre::Matrix3*>(&chunk->cframe().rotation));
        const G3D::Vector3& p = chunk->cframe().translation;
        Ogre::Matrix4 transform;
        transform.makeTransform(Ogre::Vector3(p.x, p.y, p.z), Ogre::Vector3(1, 1, 1), q);
        nativeField<Ogre::Matrix4>(nativeField<RbxSubEntity*>(chunk, 0x10), 0xf0) = transform;
    }
    if (special && nativeDebugRender) {
        nativeFlushGeometry(ctx);
        if (entity) entity->setMesh(nativeBaseMesh);
    }
    timer.getMicroseconds();
    timer.reset();
    if (entity) {
        entity->setContext18(&nativeField<char>(ctx, 0x18));
        nativeField<bool>(entity, 0x279) = false;
        entity->setSubEntitiesVisible(true);
        if (shadows) {
            nativeField<float>(entity, 0x29c) = 15.0f;
            nativeField<int>(entity, 0x2a0) = 0x258;
        } else {
            nativeField<float>(entity, 0x29c) = 20.0f;
            nativeField<int>(entity, 0x2a0) = 0x28a;
        }
    }
    if (nativeRoot->_fireFrameStarted()) {
        nativeField<RenderTarget*>(ctx, 0xc)->update();
        nativeRoot->_fireFrameEnded();
        timer.getMicroseconds();
    }
#undef chunks
#undef count
#undef manager
#undef root
#undef entity
#undef shadows
#undef dummy
#undef baseMaterial
}
