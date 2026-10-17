// from server: 35% by colin
struct OgreString {
    void* rep;
    OgreString(const char*);
    ~OgreString();
};

struct SharedPtr {
    void* p;
    int* refcount;
};

struct MaterialPtr {
    SharedPtr sp;
    MaterialPtr(const SharedPtr&);
    ~MaterialPtr();
};

struct MeshPtr {
    SharedPtr sp;
    MeshPtr(const SharedPtr&);
    ~MeshPtr();
};

struct SubMesh {
    const OgreString& getMaterialName() const;
};

struct Mesh {
    SubMesh* getSubMesh(unsigned short) const;
};

struct Material {
    void setSceneBlending(int, int);
    void setSceneBlending(int);
};

struct Billboard {
    void setColour(const float*);
};

struct ColourValue {
    float r, g, b, a;
};

struct MeshManager {
    static MeshManager& getSingleton();
    SharedPtr* getByName(const OgreString&, const char*);
};

struct MaterialManager {
    static MaterialManager& getSingleton();
    SharedPtr* getByName(const OgreString&, const char*);
};

struct SceneNode {
    virtual void setPosition(float, float, float);
};

struct Entity {
    unsigned char pad0[0xc];
    float f0c;
    float f10;
    unsigned char pad14[0x24];
    SceneNode* node38;
    unsigned char pad3c[0x8];
    void* obj44;
    unsigned char pad48[0x4];
    unsigned char b4c;
    unsigned char pad4d[0x1b];
    float f68;
    float f6c;
    float f70;
    float f74;
    float f78;
    unsigned char pad7c[0x9];
    unsigned char b85;
    unsigned char pad86[0x42];
    float fc8;
    float fcc;
    float fd0;

    void f(float, float);
};

extern float g_84e55c;
extern float g_84e550;
extern float g_82711c;
extern float g_8288b8;
extern float g_81e704;
extern float g_826cb4;

extern "C" void* __stdcall sub_802458(void*, const void*);
extern "C" void __stdcall sub_802468(void*);
extern "C" void* __stdcall sub_8042f8(void*, void*);
extern "C" void* __stdcall sub_8042fc();
extern "C" void* __stdcall sub_804588(void*);
extern "C" void* __stdcall sub_8045d8(void*);
extern "C" void __stdcall sub_8045dc(void*, int);
extern "C" void __stdcall sub_8045e0(void*, int, int);
extern "C" void __stdcall sub_804ca4(void*);
extern "C" void* __stdcall sub_804cbc(void*, int);
extern "C" void* __stdcall sub_804e60();
extern "C" void* __stdcall sub_804e64(void*, void*);
extern "C" void __stdcall sub_804e70(void*);

void Entity::f(float a, float b)
{
    if (g_84e55c == f78) {
        b85 = 0;
    } else {
        b85 = 1;

        OgreString name("starsMesh");
        MeshManager& mm = MeshManager::getSingleton();
        SharedPtr* sp = mm.getByName(name, 0);
        MeshPtr mp(*sp);

        if (mp.sp.p != 0) {
            if (f0c >= g_82711c && g_8288b8 >= f0c) {
                for (int i = 0; i < 3; i++) {
                    Mesh* mesh = (Mesh*)mp.sp.p;
                    SubMesh* sm = mesh->getSubMesh((unsigned short)i);
                    const OgreString& matName = sm->getMaterialName();
                    MaterialManager& matmgr = MaterialManager::getSingleton();
                    SharedPtr* msp = matmgr.getByName(matName, 0);
                    MaterialPtr mat(*msp);
                    mat.sp.p;
                    ((Material*)mat.sp.p)->setSceneBlending(4, 1);
                }
            } else {
                for (int i = 0; i < 3; i++) {
                    Mesh* mesh = (Mesh*)mp.sp.p;
                    SubMesh* sm = mesh->getSubMesh((unsigned short)i);
                    const OgreString& matName = sm->getMaterialName();
                    MaterialManager& matmgr = MaterialManager::getSingleton();
                    SharedPtr* msp = matmgr.getByName(matName, 0);
                    MaterialPtr mat(*msp);
                    ((Material*)mat.sp.p)->setSceneBlending(4);
                }
            }
        }
    }

    float* pos;
    if (b4c == 0)
        pos = &f68;
    else
        pos = &f74;

    float px = pos[0];
    float py = pos[1];
    float pz = pos[2];

    float t = 1.0f - f10 + g_81e704;
    float scale;
    if (1.0f > t)
        scale = t;
    else
        scale = 1.0f;

    float cx = px * g_826cb4;
    float cy = py * g_826cb4;
    float cz = pz * g_826cb4;

    void* obj = obj44;
    void** vt = *(void***)obj;
    typedef void (__thiscall* SetScaleFn)(void*, float, float, float);
    ((SetScaleFn)vt[0x68/4])(obj, cx, cy, cz);

    float col[4];
    col[0] = scale;
    col[1] = scale;
    col[2] = scale;
    col[3] = 1.0f;

    void* node = node38;
    void** nvt = *(void***)node;
    typedef void* (__thiscall* GetBillboardFn)(void*, int);
    void* bb = ((GetBillboardFn)nvt[0xf8/4])(node, 0);
    ((Billboard*)bb)->setColour(col);

    fc8 = col[0];
    fcc = col[1];
    fd0 = col[2];
}
