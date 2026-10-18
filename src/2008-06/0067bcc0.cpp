// from server: 30% by colin



typedef unsigned long DWORD;

struct OgreString {
    void* rep;
    OgreString(const char*);
    ~OgreString();
};

struct OgreVector3 {
    float x, y, z;
};

struct OgreAxisAlignedBox {
    OgreVector3 min;
    OgreVector3 max;
    OgreAxisAlignedBox();
    ~OgreAxisAlignedBox();
};

struct OgreMeshPtr {
    void* pRep;
    void* pUseCount;
};

struct OgreManualResourceLoader;

struct OgreMesh {
    void _setBounds(const OgreAxisAlignedBox&, bool);
    void _setBoundingSphereRadius(float);
};

struct OgreMeshManager {
    static OgreMeshManager& getSingleton();
    OgreMeshPtr createManual(const OgreString&, const OgreString&, OgreManualResourceLoader*);
};

struct OgreSceneNode {
    void setPosition(float, float, float);
    void setScale(float, float, float);
    void setVisible(bool);
};

struct OgreSceneNodePtr {
    OgreSceneNode* pRep;
};

struct OgreRbxSceneManagerFactory {
    void* field0;
    OgreSceneNodePtr* nodePtr;
    int createSceneNode(int, int, int, int, int, int, int, int, int, int);
};

extern "C" {
    extern void* __stdcall OgreStringCtor(void*, const char*);
    extern void __stdcall OgreStringDtor(void*);
    extern void* __stdcall OgreAxisAlignedBoxCtor(void*);
    extern void __stdcall OgreAxisAlignedBoxDtor(void*);
    extern void* __stdcall OgreMeshPtrCtor(void*, void*);
    extern void __stdcall OgreMeshPtrDtor(void*);
    extern void __stdcall OgreMeshSetBounds(void*, const void*, bool);
    extern void __stdcall OgreMeshSetBoundingSphereRadius(void*, float);
    extern void* __stdcall OgreMeshManagerCreateManual(void*, void*, const void*, const void*, void*);
    extern void* __stdcall OgreMeshManagerGetSingleton();
    extern void __stdcall OgreSceneNodeSetPosition(void*, float, float, float);
    extern void __stdcall OgreSceneNodeSetScale(void*, float, float, float);
    extern void __stdcall OgreSceneNodeSetVisible(void*, bool);
}

extern float g_defaultRadius;
extern float g_defaultMin;
extern float g_defaultMax;

struct OgreLock {
    void* handle;
    bool criticalSection;
    unsigned int count;
    void lock();
    void unlock();
};

extern OgreLock g_lock;

extern "C" float __stdcall sqrtf_helper(float);

int OgreRbxSceneManagerFactory::createSceneNode(
    int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    OgreString name((const char*)0x973984);
    OgreString group((const char*)0x54ab60);
    OgreMeshPtr meshPtr;
    OgreAxisAlignedBox box;
    OgreMesh* mesh;
    OgreSceneNode* node;
    float radius;

    g_lock.lock();

    OgreMeshManager& mgr = OgreMeshManager::getSingleton();
    OgreMeshPtr result = mgr.createManual(name, group, 0);
    mesh = (OgreMesh*)result.pRep;

    OgreStringDtor(&group);
    OgreStringDtor(&name);

    node = this->nodePtr->pRep;

    OgreAxisAlignedBoxCtor(&box);

    if (a9 != 0 && a10 != 0) {
        OgreVector3* v1 = (OgreVector3*)a9;
        OgreVector3* v2 = (OgreVector3*)a10;
        box.min = *v1;
        box.max = *v2;
        OgreMeshSetBounds(mesh, &box, true);
        OgreAxisAlignedBoxDtor(&box);

        float dx = v2->x - v1->x;
        float dy = v2->y - v1->y;
        float dz = v2->z - v1->z;
        radius = dx * dx + dy * dy + dz * dz;
        radius = sqrtf_helper(radius);
    } else {
        box.min.x = g_defaultMin;
        box.min.y = g_defaultMin;
        box.min.z = g_defaultMin;
        box.max.x = g_defaultMax;
        box.max.y = g_defaultMax;
        box.max.z = g_defaultMax;

        int count = a1 * 3;
        if (count > 0) {
            OgreVector3* pts = (OgreVector3*)a2;
            int n = (count - 1) / 3 + 1;
            for (int i = 0; i < n; i++) {
                if (pts[i].x < box.min.x) box.min.x = pts[i].x;
                if (pts[i].y < box.min.y) box.min.y = pts[i].y;
                if (pts[i].z < box.min.z) box.min.z = pts[i].z;
                if (pts[i].x > box.max.x) box.max.x = pts[i].x;
                if (pts[i].y > box.max.y) box.max.y = pts[i].y;
                if (pts[i].z > box.max.z) box.max.z = pts[i].z;
            }
        }

        OgreMeshSetBounds(mesh, &box, true);
        OgreAxisAlignedBoxDtor(&box);

        float dx = box.max.x - box.min.x;
        float dy = box.max.y - box.min.y;
        float dz = box.max.z - box.min.z;
        radius = dx * dx + dy * dy + dz * dz;
        radius = sqrtf_helper(radius);
    }

    OgreMeshSetBoundingSphereRadius(mesh, radius * g_defaultRadius);
    OgreSceneNodeSetVisible(node, false);

    g_lock.unlock();

    return (int)mesh;
}
