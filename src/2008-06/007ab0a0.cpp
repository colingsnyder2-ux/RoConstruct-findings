// from server: 41% by colin
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.4.9 roc_unit_105bb71c3c1d10f4.cpp

// Candidate translation unit (score above; library headers required).
/*
 * Reconstructed high-level C++ from Roblox RenderScene (2008), 0x007AB0A0.
 * Real C++ only: no inline assembly or embedded machine code.
 * The Ogre declarations below are *interface placeholders* for a syntax check;
 * replace them with the correct versioned Ogre SDK headers before linking.
 * Roblox sub_... symbols require implementations/address bindings.
 * Not a verified byte-exact recreation.
 */

#include <string>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <stdexcept>

#if defined(_MSC_VER) && defined(_M_IX86)
#define __thiscall
#define RS_STDCALL __stdcall
#elif defined(__clang__) && defined(__i386__)
#define __attribute__((thiscall))
#define RS_STDCALL __attribute__((stdcall))
#else
#define RS_THISCALL
#define RS_STDCALL
#endif

#ifdef OGRE_NONCLIENT_BUILD
#undef OGRE_NONCLIENT_BUILD
#endif
#include <Ogre.h>

#if defined(_MSC_VER)
#define RS_FORCEINLINE __forceinline
#elif defined(__GNUC__) || defined(__clang__)
#define RS_FORCEINLINE inline __attribute__((always_inline))
#else
#define RS_FORCEINLINE inline
#endif


namespace rs {

typedef unsigned char u8;
typedef unsigned int u32;

template<class T>
inline T& At(void* p, unsigned offset) {
    return *reinterpret_cast<T*>(static_cast<unsigned char*>(p) + offset);
}

inline void* Addr(void* p, unsigned offset) {
    return static_cast<unsigned char*>(p) + offset;
}

struct VObj {};

template<class F>
inline F VSlot(void* p, unsigned slot) {
    union { void* raw; F fn; } u;
    u.raw = (*reinterpret_cast<void***>(p))[slot / 4];
    return u.fn;
}

template<class R>
inline R VCall(void* p, unsigned slot) {
    typedef R (VObj::*Fn)();
    return (static_cast<VObj*>(p)->*VSlot<Fn>(p, slot))();
}

template<class R, class A>
inline R VCall(void* p, unsigned slot, A a) {
    typedef R (VObj::*Fn)(A);
    return (static_cast<VObj*>(p)->*VSlot<Fn>(p, slot))(a);
}

template<class R, class A, class B>
inline R VCall(void* p, unsigned slot, A a, B b) {
    typedef R (VObj::*Fn)(A, B);
    return (static_cast<VObj*>(p)->*VSlot<Fn>(p, slot))(a, b);
}

template<class R, class A, class B, class C, class D, class E>
inline R VCall(void* p, unsigned slot, A a, B b, C c, D d, E e) {
    typedef R (VObj::*Fn)(A, B, C, D, E);
    return (static_cast<VObj*>(p)->*VSlot<Fn>(p, slot))(a, b, c, d, e);
}

template<class T>
class Ref {
public:
    T* m_pointer;
    Ref() : m_pointer(0) {}
    ~Ref() { zeroPointer(); }
    T* pointer() const { return m_pointer; }
    void zeroPointer() {
        if (m_pointer != 0) {
            if (m_pointer->refCount.decrement() == 0) {
                m_pointer->zeroWeakPointers();
                delete m_pointer;
            }
            m_pointer = 0;
        }
    }
};

struct V3 { float x, y, z; V3(float a, float b, float c) : x(a), y(b), z(c) {} };

struct WeakPtr { virtual ~WeakPtr(); virtual void objectCollected() = 0; };
struct WeakPtrLinkedList { WeakPtr* weakPtr; WeakPtrLinkedList* next; };
struct AtomicInt32 {
    long value;
    unsigned decrement() { return InterlockedDecrement(&value) != 0; }
};
class RefObject {
public:
    AtomicInt32 refCount;
    WeakPtrLinkedList* weakPointer;
    void zeroWeakPointers() {
        WeakPtrLinkedList* node = weakPointer;
        while (node != 0) {
            node->weakPtr->objectCollected();
            WeakPtrLinkedList* tmp = node;
            node = node->next;
            delete tmp;
        }
    }
    virtual ~RefObject() {}
};

} // namespace rs
namespace RBX {
class TextureProxyBase : public rs::RefObject {};
namespace RenderNew { class TextureProxy : public TextureProxyBase {}; }
namespace RenderBase { class MaterialBase { public: class Level { public: virtual ~Level(); }; }; }
namespace RenderNew { class Material { public: class Level : public RenderBase::MaterialBase::Level {}; }; }
class AdornRbxGfx { public: AdornRbxGfx(void* renderer, const std::string& name); };
class RbxEntity { public: RbxEntity(); };
}
namespace rs {

typedef Ref<RefObject> ObjRef;
typedef Ref<RBX::TextureProxyBase> TexRef;

template<class T>
inline Ref<T> GetRef(void* obj, unsigned slot) {
    typedef Ref<T> (VObj::*Fn)();
    return (static_cast<VObj*>(obj)->*VSlot<Fn>(obj, slot))();
}

struct Ext {
    void m5107B0(void* m);
    void m510B50(void* t);
    void m513220(void* v);
    void m67C520(Ogre::MeshPtr mesh);
    void m67C510(void* f);
    void* m67D9B0(void* mesh, int v);
    void m7A9C40(Ogre::AxisAlignedBox box);
    float* m7A9CE0(void* key);
    float* m7A9C90(void* key);
    void m548F80(void** result, float value);
    void m549A50(void* ctx, Ogre::AxisAlignedBox* box);
    void m549610(void* ctx, Ogre::AxisAlignedBox* box);
    void m54A920(void* ctx);
    int m6850D0(int d);
    void m6850B0(int d, void* mesh);
    void m6850F0(int d);
};
inline Ext* X(void* p) { return static_cast<Ext*>(p); }
extern void sub_5493E0(void* context);
extern void* sub_513E20();
extern std::string sub_55C4C0();

#if defined(_M_IX86) || defined(__i386__)
typedef char CheckAABBSize[(sizeof(Ogre::AxisAlignedBox) == 0x20) ? 1 : -1];
typedef char CheckMaterialHandleSize[(sizeof(Ogre::MaterialPtr) == 0x0c) ? 1 : -1];
typedef char CheckMeshHandleSize[(sizeof(Ogre::MeshPtr) == 0x0c) ? 1 : -1];
#endif

// These correspond to globals at 0x942EBC, 0x97F36C and 0x9738BC.
extern u8 gDebugRender;
extern unsigned gMaterialId;
extern Ogre::Mesh* gBaseMesh;

RS_FORCEINLINE Ogre::SubMesh* FindSubMesh(void* data) {
    if (!data || At<u8>(data, 0x1c) != 0)
        return 0;

    int index = At<int>(data, 0x20);
    if (index < 0 || !gBaseMesh)
        return 0;
    return gBaseMesh->getSubMesh(static_cast<unsigned short>(index));
}

// The virtual material-container method has five stack arguments in the
// original disassembly (index, 0, global, global, 0).
inline void* SelectMaterialEntry(void* container, int index) {
    return VCall<void*>(container, 0x14,
        index, 0,
        reinterpret_cast<void*>(0x96BDFCu),
        reinterpret_cast<void*>(0x96BE2Cu), 0);
}

inline RBX::RenderNew::Material::Level* GetLevel(void* item, int index) {
    return dynamic_cast<RBX::RenderNew::Material::Level*>(
        VCall<RBX::RenderBase::MaterialBase::Level*>(GetRef<RefObject>(item, 0x14).pointer(), 0x14, index));
}

RS_FORCEINLINE Ogre::TexturePtr GetSkyTexture() {
    Ogre::TextureManager& textures = Ogre::TextureManager::getSingleton();
    Ogre::TexturePtr texture = textures.getByName("skysphmap");
    if (texture.isNull()) {
        std::string rootPath = sub_55C4C0();
        Ogre::Image image;
        image.load(rootPath + "Sky\\skyspheremap.jpg", "General");
        texture = textures.create("skysphmap", "General");
        if (!texture.isNull())
            texture->loadImage(image);
    }
    return texture;
}

RS_FORCEINLINE void ConfigureSky(Ogre::Material* material, float intensity) {
    Ogre::Pass* pass = material->getTechnique(0)->createPass();
    pass->setDiffuse(intensity, intensity, intensity, intensity * 0.8f);
    pass->setAmbient(intensity, intensity, intensity);
    pass->setSceneBlending((Ogre::SceneBlendFactor)0, (Ogre::SceneBlendFactor)9);

    Ogre::TexturePtr sky = GetSkyTexture();
    if (!sky.isNull()) {
        Ogre::TextureUnitState* unit = pass->createTextureUnitState();
        unit->setTextureName(sky->getName(), (Ogre::TextureType)2);
        unit->setEnvironmentMap(true, (Ogre::TextureUnitState::EnvMapType)1);
    }
}

RS_FORCEINLINE void ConfigurePass(Ogre::Pass* pass, void* layer, void* item, void* info) {
    float* color = VCall<float*>(layer, 0x18);
    float alpha = 1.0f - VCall<float>(layer, 0x28);
    pass->setDiffuse(color[0], color[1], color[2], alpha);
    pass->setAmbient(color[0], color[1], color[2]);

    int type = At<int>(info, 0x84);
    if (type >= 1 && type <= 3) {
        float b = VCall<float>(layer, 0x1c, 1.0f);
        float g = VCall<float>(layer, 0x1c, b);
        float r = VCall<float>(layer, 0x1c, g);
        pass->setSpecular(r, g, b, 1.0f);
        pass->setShininess(type == 2 ? 40.0f : 18.0f);
    } else {
        pass->setSpecular(0.75f, 0.75f, 0.75f, 1.0f);
        pass->setShininess(10.0f);
    }

    pass->setDepthBias(At<float>(item, 0x18) * -16.0f, 0.0f);
    if (VCall<float>(layer, 0x28) > 0.0f || type == 4) {
        pass->setSceneBlending((Ogre::SceneBlendFactor)7, (Ogre::SceneBlendFactor)9);
        pass->setDepthWriteEnabled(false);
    }

    if (GetRef<RBX::TextureProxyBase>(layer, 0x0c).pointer() != 0) {
        Ogre::TexturePtr texture = *reinterpret_cast<Ogre::TexturePtr*>(Addr(
            dynamic_cast<RBX::RenderNew::TextureProxy*>(GetRef<RBX::TextureProxyBase>(layer, 0x0c).pointer()), 0x54));
        if (!texture.isNull()) {
            Ogre::TextureUnitState* unit = pass->createTextureUnitState();
            unit->setColourOperation((Ogre::LayerBlendOperation)2);
            unit->setTextureFiltering((Ogre::FilterOptions)2, (Ogre::FilterOptions)2, (Ogre::FilterOptions)2);
            unit->setTextureAddressingMode((Ogre::TextureUnitState::TextureAddressingMode)0, (Ogre::TextureUnitState::TextureAddressingMode)0, (Ogre::TextureUnitState::TextureAddressingMode)0);
            unit->setTextureBorderColour(Ogre::ColourValue(VCall<float*>(layer, 0x18)[0], VCall<float*>(layer, 0x18)[1], VCall<float*>(layer, 0x18)[2], 1.0f));
            unit->setTextureName(texture->getName(), (Ogre::TextureType)2);
            if (texture->isLoaded() && VCall<float>(layer, 0x28) > 0.0f && type == 2) {
                pass->setSceneBlending((Ogre::SceneBlendType)4);
                pass->setDepthWriteEnabled(true);
                pass->setAlphaRejectSettings((Ogre::CompareFunction)6, 1);
            }
        }
    }
}

// materialData is the internal engine material object returned by sub_6A17C6.
// Its Ogre::MaterialPtr is embedded at +0x2C, underlying pointer at +0x30.
RS_FORCEINLINE bool BuildItemMaterial(void* item, void* info, void* materialData) {
    if (!materialData || At<void*>(materialData, 0x30))
        return false;

    Ogre::MaterialPtr* material = reinterpret_cast<Ogre::MaterialPtr*>(Addr(materialData, 0x2c));
    char name[8];
#if defined(_MSC_VER)
    _snprintf(name, sizeof(name), "m%d", static_cast<int>(gMaterialId++));
#else
    std::snprintf(name, sizeof(name), "m%d", static_cast<int>(gMaterialId++));
#endif
    *material = Ogre::MaterialManager::getSingleton().create(name, "General");
    if (material->isNull())
        return false;

    for (int i = 0; i < VCall<int>(GetRef<RefObject>(item, 0x14).pointer(), 0x10); ++i) {
        RBX::RenderNew::Material::Level* layer = GetLevel(item, i);
        if (!layer)
            continue;
        GetRef<RBX::TextureProxyBase>(layer, 0x08);
        Ogre::Pass* pass = i == 0 ? (*material)->getTechnique(0)->getPass(0)
                                  : (*material)->getTechnique(0)->createPass();
        ConfigurePass(pass, layer, item, info);
    }

    float intensity = VCall<float>(materialData, 0x24);
    if (intensity > 0.0f)
        ConfigureSky(material->operator->(), VCall<float>(materialData, 0x24));
    return true;
}

// The pair passed to the backend has radius at +0 and center at +4.
// The previous conversion reversed these, changing the parameter layout.
struct BoundsInfo {
    float radius;
    Ogre::Vector3 center;
};

RS_FORCEINLINE void UpdateItemBounds(void* backend, void* itemRef, void* data,
                             void* ctx, bool special) {
    if (!data || At<u8>(data, 0x1c) == 0)
        return;

    Ogre::AxisAlignedBox box;
    if (special)
        X(itemRef)->m549610(ctx, &box);
    else
        X(itemRef)->m549A50(ctx, &box);

    BoundsInfo b = {box.getHalfSize().length(), box.getCenter()};
    void* mesh = special ? static_cast<void*>(FindSubMesh(data)) : At<void*>(data, 0x24);
    VCall<void>(backend, 0x1c4, mesh, &b);
}

RS_FORCEINLINE Ogre::Vector3 WorldPosition(void* item) {
    float* m = VCall<float*>(item, 0x1c);
    return Ogre::Vector3(m[9], m[10], m[11]);
}

// At 7AC6C0..7AC8C9 the original builds one of two AABBs, then merges
// it with the target's existing bounds. This was missing from the old code.
RS_FORCEINLINE void MergeItemBounds(void* backend, void* target, void* item,
                            void* data, void* selectedMesh) {
    Ogre::Vector3 pos = WorldPosition(item);
    if (std::fabs(pos.x) >= 10000.0f ||
        std::fabs(pos.y) >= 10000.0f ||
        std::fabs(pos.z) >= 10000.0f)
        return;

    Ogre::AxisAlignedBox box;
    if (selectedMesh != At<void*>(data, 0x24)) {
        float* bounds = VCall<float*>(backend, 0x1c8, selectedMesh);
        float r = bounds[0];
        Ogre::Vector3 center(pos.x + bounds[1], pos.y + bounds[2], pos.z + bounds[3]);
        box = Ogre::AxisAlignedBox(
            Ogre::Vector3(center.x-r, center.y-r, center.z-r),
            Ogre::Vector3(center.x+r, center.y+r, center.z+r));
    } else {
        void* mesh = At<void*>(data, 0x24);
        box = Ogre::AxisAlignedBox(
            Ogre::Vector3(pos.x + At<float>(mesh, 0xcc),
                          pos.y + At<float>(mesh, 0xd0),
                          pos.z + At<float>(mesh, 0xd4)),
            Ogre::Vector3(pos.x + At<float>(mesh, 0xd8),
                          pos.y + At<float>(mesh, 0xdc),
                          pos.z + At<float>(mesh, 0xe0)));
    }
    X(target)->m7A9C40(box);
}

inline float DetermineItemDistanceFlag(void* item, const unsigned char* poseData) {
    float* m = VCall<float*>(item, 0x1c);
    float x = m[9]  - At<float>(const_cast<unsigned char*>(poseData), 0x24);
    float y = m[10] - At<float>(const_cast<unsigned char*>(poseData), 0x28);
    float z = m[11] - At<float>(const_cast<unsigned char*>(poseData), 0x2c);
    float depth = -(x * At<float>(const_cast<unsigned char*>(poseData), 0x08) +
                    y * At<float>(const_cast<unsigned char*>(poseData), 0x14) +
                    z * At<float>(const_cast<unsigned char*>(poseData), 0x20));
    return !(depth < 80.0f) ? 1.0f : 0.0f;
}

RS_FORCEINLINE void AddPerVertexOffsets(void* info, void* data) {
    if (At<int>(data, 0x18) != 5 || At<int>(data, 0x10) != 4)
        return;
    void* raw = At<void*>(data, 0x0c);
    if (!raw)
        return;
    float* offset = X(info)->m7A9CE0(At<void*>(raw, 0));
    for (int i = 0; i < 4; ++i) {
        void* key = At<void*>(raw, i * 4);
        float* pos = X(info)->m7A9C90(key);
        pos[0] += offset[0] * 0.06f;
        pos[1] += offset[1] * 0.06f;
        pos[2] += offset[2] * 0.06f;
    }
}

RS_FORCEINLINE void UpdateEntityTransform(void* entity, void* item) {
    float* m = VCall<float*>(item, 0x1c);
    Ogre::Matrix3 rotation;
    std::memcpy(&rotation, m, sizeof(rotation));
    Ogre::Quaternion orientation;
    orientation.FromRotationMatrix(rotation);

    m = VCall<float*>(item, 0x1c);
    Ogre::Matrix4 transform;
    transform.makeTransform(
        Ogre::Vector3(m[9], m[10], m[11]),
        Ogre::Vector3(1.0f, 1.0f, 1.0f), orientation);
    std::memcpy(Addr(entity, 0xf0), &transform, sizeof(transform));
}

class RenderScene {
public:
    void Render(void* ctx, void* pose);
    void m7A9D30(void* ctx, bool flag);
};

void RenderScene::Render(void* ctx, void* pose) {
#define items At<void**>(this, 0x08)
#define count At<int>(this, 0x0c)
#define renderer At<void*>(ctx, 0x04)
#define enabled At<bool>(this, 0x2f4)
#define backend At<void*>(this, 0x268)
#define target At<void*>(this, 0x26c)
    Ogre::Camera* camera = At<Ogre::Camera*>(ctx, 0x08);

    unsigned char matrixData[0x80];
    X(pose)->m5107B0(matrixData);

    if (enabled) {
        VCall<void>(renderer, 0x268, 0x12);
        VCall<void, const Ogre::ColourValue&>(renderer, 0x278, Ogre::ColourValue(At<float>(this, 0x328),
            At<float>(this, 0x32c), At<float>(this, 0x330)));
    } else {
        VCall<void>(renderer, 0x268, 0);
    }

    Ogre::Quaternion cameraOrientation;
    cameraOrientation.FromRotationMatrix(*reinterpret_cast<Ogre::Matrix3*>(matrixData));
    camera->setOrientation(cameraOrientation);
    camera->setPosition(At<float>(matrixData, 0x24), At<float>(matrixData, 0x28),
                        At<float>(matrixData, 0x2c));

    VCall<void>(camera, 0x11c, At<float>(pose, 0x0c));
    VCall<void>(camera, 0x124, At<float>(pose, 0x10));
    VCall<void, const Ogre::Radian&>(At<void*>(ctx, 0x08), 0x114, Ogre::Radian(At<float>(pose, 0x04)));

    Ogre::Timer timer;
    timer.reset();

    if (!backend) {
        backend = new RBX::AdornRbxGfx(renderer, "rbxroot");
        void* registration = VCall<void*>(renderer, 0xb4);
        VCall<void>(registration, 0xc8, backend);
    }

    m7A9D30(ctx, At<bool>(this, 0x2f6));
    bool special = At<u8>(ctx, 0x7f5) != 0;

    Ogre::MaterialPtr* baseMaterial = reinterpret_cast<Ogre::MaterialPtr*>(Addr(this, 0x270));
    if (At<void*>(this, 0x274) == 0)
        *baseMaterial = Ogre::MaterialManager::getSingleton().getByName("BaseWhite");

    Ogre::MeshPtr* dummyMesh = reinterpret_cast<Ogre::MeshPtr*>(Addr(this, 0x27c));
    if (At<void*>(this, 0x280) == 0)
        *dummyMesh = Ogre::MeshManager::getSingleton().load("rbxdummymesh", "General");

    if (!target && count != 0) {
        target = new RBX::RbxEntity();
        VCall<void>(backend, 0x130, target);
        X(target)->m67C520(*dummyMesh);
    }

    // The first pass only obtains and releases each item's 0x18 reference.
    for (int i = 0; i < count; ++i) {
        if (!items[i])
            continue;
        GetRef<RefObject>(items[i], 0x18);
    }

    if (gDebugRender && count != 0 && special) {
        sub_5493E0(ctx);
        X(target)->m67C520(*dummyMesh);
        if (target && gBaseMesh && At<int>(target, 0x294) == 0)
            X(target)->m7A9C40(gBaseMesh->getBounds());
    }

    // Pose update and lazily initialized zero-vector cache at 0x96F044.
    unsigned char poseData[0x80];
    X(poseData)->m513220(sub_513E20());
    static const V3 zero(0.0f, 0.0f, 0.0f);
    At<V3>(poseData, 0x24) = zero;
    X(pose)->m510B50(poseData);

    for (int i = 0; i < count; ++i) {
        void* item = items[i];
        if (!item)
            continue;

        bool hasVisual = GetRef<RefObject>(item, 0x18).pointer() != 0;
        bool hasGeometry = GetRef<RefObject>(item, 0x14).pointer() != 0;
        if (!hasVisual || !hasGeometry)
            continue;

        bool rejected = VCall<int>(GetRef<RefObject>(item, 0x14).pointer(), 0x18, 0.0f) == 0;
        if (rejected)
            continue;

        ObjRef detail = GetRef<RefObject>(item, 0x18);
        void* info = detail.pointer();

        if (enabled && At<int>(info, 0x80) == 0)
            X(info)->m54A920(ctx);

        int distanceFlag = 0;
        if (At<int>(info, 0x10) == 2 && DetermineItemDistanceFlag(item, poseData) != 0.0f)
            distanceFlag = 1;

        void* data = 0;
        X(info)->m548F80(&data, static_cast<float>(distanceFlag));
        bool specialMaterial = At<int>(info, 0x84) == 4 && At<u8>(ctx, 0x806) == 0;
        if (specialMaterial && data && At<u8>(data, 0x1c)) {
            X(info)->m548F80(&data, 0.0f);
            AddPerVertexOffsets(info, data);
        }

        bool boundsUpdated = data && At<u8>(data, 0x1c) != 0;
        if (boundsUpdated)
            UpdateItemBounds(backend, info, data, ctx, special);

        void* materialData = GetLevel(item, 0);
        bool materialCreated = BuildItemMaterial(item, info, materialData);
        void* entity = At<void*>(item, 0x10);

        if (!entity) {
            void* mesh = special ? static_cast<void*>(FindSubMesh(data))
                                 : (data ? At<void*>(data, 0x24) : 0);
            if (!mesh) {
                throw std::exception("Please restart ROBLOX, if you changed your settings but have not restarted");
            }

            entity = X(target)->m67D9B0(mesh, distanceFlag);
            if (entity) {
                if (special)
                    At<u8>(entity, 0x13c) = 0;
                At<u32>(entity, 0x140) = At<u32>(info, 0x80);
                if ((At<int>(info, 0x80) == 0 && At<int>(info, 0x84) == 1) ||
                     At<int>(info, 0x84) == 4)
                    At<u8>(entity, 0x13c) = 0;
                At<void*>(item, 0x10) = entity;
                At<void*>(item, 0x0c) = target;

                VCall<void>(entity, 0x48, VCall<float>(item, 0x24));
                MergeItemBounds(backend, target, item, data, mesh);
            }
        } else {
            if (boundsUpdated || !X(entity)->m6850D0(distanceFlag)) {
                void* mesh = special ? static_cast<void*>(FindSubMesh(data))
                                     : (data ? At<void*>(data, 0x24) : 0);
                if (mesh)
                    X(entity)->m6850B0(distanceFlag, mesh);
            }
        }

        if (entity) {
            X(entity)->m6850F0(distanceFlag);
            VCall<void>(entity, 0x48, VCall<float>(item, 0x24));
            if (materialData && (materialCreated ||
                    At<void*>(VCall<void*>(entity, 0x04), 0x04) == At<void*>(this, 0x274))) {
                Ogre::Material* mat = At<Ogre::Material*>(materialData, 0x30);
                if (mat) {
                    Ogre::SubEntity* part = reinterpret_cast<Ogre::SubEntity*>(entity);
                    part->setMaterialName(mat->getName());
                }
            }
            UpdateEntityTransform(entity, item);
        }
    }

    if (special && gDebugRender) {
        sub_5493E0(ctx);
        if (target)
            X(target)->m67C520(*dummyMesh);
    }

    timer.getMicroseconds();
    timer.reset();
    if (target) {
        X(target)->m67C510(Addr(ctx, 0x18));
        At<u8>(target, 0x279) = 0;
        VCall<void>(target, 0xd8, 1);
        At<float>(target, 0x29c) = enabled ? 15.0f : 20.0f;
        At<int>(target, 0x2a0) = enabled ? 0x258 : 0x28a;
    }

    Ogre::Root& root = Ogre::Root::getSingleton();
    if (root._fireFrameStarted()) {
        VCall<void>(At<void*>(ctx, 0x0c), 0x18);
        root._fireFrameEnded();
        timer.getMicroseconds();
    }
}

#undef items
#undef count
#undef renderer
#undef enabled
#undef backend
#undef target
} // namespace rs

// Byte-match status: unmeasured; requires the original MSVC compiler and `roc check`.

