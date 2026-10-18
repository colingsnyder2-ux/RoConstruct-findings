// from server: 22% by colin
// roc 2008-06 0067c130  unit: Ogre::RbxSceneManagerFactory  size: 383 bytes

struct Mutex {
    void *handle;
    bool criticalSection;
    unsigned int count;
    void lock();
};

struct SubMesh {
    unsigned char storage[0xC4];
    SubMesh();
    ~SubMesh();
};

struct HardwareIndexBufferSharedPtr {
    void *p;
    HardwareIndexBufferSharedPtr& operator=(const HardwareIndexBufferSharedPtr&);
};

struct HardwareBufferManager {
    static HardwareBufferManager& getSingleton();
};

struct VertexData {
    unsigned char storage[0x58];
};

struct IndexData {
    unsigned char storage[0x10];
};

struct RenderOperation {
    unsigned char storage[0x2c];
};

struct SceneMgr {
    int f(int, int, int, int, int);
};

struct RbxSceneManagerFactory {
    int create(int, int, int, int, int, int, int);
};

extern "C" void __stdcall sub_557330(int, int);
extern "C" void __stdcall sub_563090(Mutex*);
extern "C" void* __stdcall sub_6a0920(unsigned int);
extern "C" void __stdcall sub_678470(void*);
extern "C" void* __stdcall sub_804364();
extern "C" void __stdcall sub_804444(void*, void*);

extern Mutex g_mutex;
extern float g_float_82d02c;
extern float g_float_82d030;

int RbxSceneManagerFactory::create(int a, int b, int c, int d, int e, int f, int g)
{
    sub_557330(0x54ab60, 0x973984);
    Mutex* m = &g_mutex;
    sub_563090(m);

    void* mem = sub_6a0920(0xf0);
    SubMesh* sm;
    if (mem) {
        sub_678470(mem);
        sm = (SubMesh*)mem;
    } else {
        sm = 0;
    }

    *(int*)((char*)sm + 0x58) = 0;
    int r = ((SceneMgr*)this)->f(a, b, c, d, e);
    *(int*)((char*)sm + 8) = r;
    *(unsigned char*)sm = 0;

    int idx = g * 3;

    void* mgr = sub_804364();
    void** vtbl = *(void***)mgr;
    void (*fn)(void*, void*, int, int, int, int, int) = (void (*)(void*, void*, int, int, int, int, int))vtbl[8];

    RenderOperation op;
    fn(mgr, &op, (f == 0) ? 1 : 0, idx, 5, 0, 0);

    int val = (f == 0) ? g : f;
    void* p = *(void**)((char*)sm + 0x20);
    void** vt2 = *(void***)p;
    void (*fn2)(void*, int, int, int, int) = (void (*)(void*, int, int, int, int))vt2[6];
    fn2(p, 0, *(int*)((char*)p + 4), val, 1);

    void* tmp;
    sub_804444(*(void**)((char*)sm + 0xc), &tmp);

    float f1 = g_float_82d030;
    void* id = *(void**)((char*)sm + 0xc);
    *(int*)((char*)id + 0x10) = idx;
    float f2 = g_float_82d02c;
    void* id2 = *(void**)((char*)sm + 0xc);
    *(int*)((char*)id2 + 0xc) = 0;

    int count = e * 3;
    if (count > 0) {
        int i = count - 1;
        unsigned int q = (unsigned int)i / 3;
        int j = q + 1;
        float* fp = (float*)((char*)d + 8);
        do {
            float v = fp[-2];
            if (!(v < f1)) {
                f1 = v;
            }
            fp += 3;
            j--;
        } while (j != 0);
    }

    return (int)sm;
}
