// from server: 41% by colin
struct Vector3 {
    float x, y, z;
};

struct Mesh;

struct Face {
    int verts[4];
};

struct MeshData {
    unsigned char pad0[4];
    int *faces;
    unsigned char pad1[4];
    int numFaces;
};

struct Mesh {
    unsigned char pad0[4];
    int *vertices;
    unsigned char pad1[4];
    int numVertices;
    unsigned char pad2[4];
    int *faces;
    unsigned char pad3[4];
    int numFaces;
    unsigned char pad4[4];
    int *edges;
    unsigned char pad5[4];
    int numEdges;
};

struct RefCounted {
    int refCount;
    void *vtable;
};

struct SmartPtr {
    RefCounted *ptr;
};

struct Lock {
    int value;
    unsigned char flag;
    int count;
    void acquire();
    void release();
};

struct Guard {
    Lock *lock;
    bool held;
    Guard(Lock *);
    ~Guard();
};

inline Guard::Guard(Lock *p) : lock(p)
{
    lock->acquire();
    held = true;
}

inline Guard::~Guard()
{
    if (held)
        lock->release();
}

struct GlobalState {
    unsigned char pad0[0x20];
    Lock lock;
    unsigned char pad1[8];
    int counter;
};

extern GlobalState *g_state;
extern float g_float1;
extern float g_float2;
extern unsigned char g_flag1;
extern unsigned char g_flag2;

extern "C" int __stdcall InterlockedIncrement(int *);
extern "C" int __stdcall InterlockedDecrement(int *);
extern void *__cdecl __RTDynamicCast(void *, int, void *, void *, int);

extern void __cdecl func_557330(void *, void *);
extern void __cdecl func_563090(Lock *);
extern void __cdecl func_5630e0(Lock *);
extern void *__cdecl func_4ddf80(void *, void *);
extern void *__cdecl func_515780(int, int);
extern void __cdecl func_598fa0(SmartPtr *, void *);
extern void *__cdecl func_6a0920(unsigned int);
extern void *__cdecl func_4e53c0(void *, Vector3 *, int, int, int, int, int, float);
extern void __cdecl func_6a17c6(int, int, void *, void *, int, Vector3 *, int, int);
extern void __cdecl func_4e2c80(void *);
extern void __cdecl func_4e5710();
extern void __cdecl func_45ad90(void *);

struct BrickMesh {
    void build(Vector3 *size, int a, int b);
};

void BrickMesh::build(Vector3 *size, int a, int b)
{
    SmartPtr sp;
    sp.ptr = 0;

    float sx = size->x;
    float sy = size->y;
    float sz = size->z;

    func_557330((void *)0x972870, (void *)0x4e5360);

    GlobalState *st = g_state;
    Lock *lk = &st->lock;
    func_563090(lk);
    Guard guard(lk);

    int *facePtr = (int *)func_4ddf80(st, &sx);
    int idx;
    if (*facePtr == 4) {
        func_515780(0, 3);
        idx = 3;
    } else {
        int *r = (int *)func_515780(0, 8);
        int v = *r;
        int tmp = 3;
        if (v < 3)
            idx = v;
        else
            idx = tmp;
    }

    int *slot = facePtr + idx + 1;
    sp.ptr = 0;
    func_598fa0(&sp, (void *)*slot);

    if (sp.ptr != 0)
        goto cleanup;

    g_flag2 = 0;

    if (g_flag1 != 0) {
        g_float1 = g_float2;
        void *obj = func_6a0920(0x88);
        if (obj != 0) {
            void *r = func_4e53c0(obj, size, a, b, 0, 0, 0, 0.0f);
            func_598fa0(&sp, r);
        } else {
            func_598fa0(&sp, 0);
        }
        g_float1 = 0.0f;
        g_flag2 = 1;
        func_6a17c6(0, (int)sp.ptr, (void *)0x941418, (void *)0x9413f4, 0, size, b, a);
        func_4e2c80(sp.ptr);
        g_flag2 = 0;
    } else {
        g_float1 = 0.0f;
        void *obj = func_6a0920(0x88);
        if (obj != 0) {
            void *r = func_4e53c0(obj, size, a, b, 0, 0, 0, 0.0f);
            func_598fa0(&sp, r);
        } else {
            func_598fa0(&sp, 0);
        }
    }

    func_598fa0((SmartPtr *)slot, sp.ptr);

    (*facePtr)++;
    st->counter++;
    if (st->counter % 100 == 0) {
        RefCounted *rc = (RefCounted *)*slot;
        if (rc != 0) {
            InterlockedIncrement(&rc->refCount);
        }
        func_4e5710();
        if (rc != 0) {
            if (InterlockedDecrement(&rc->refCount) == 0) {
                func_45ad90(rc);
                void *vt = rc->vtable;
                ((void (__thiscall *)(RefCounted *, int))((void **)vt)[0])(rc, 1);
            }
        }
    }

cleanup:
    func_5630e0(lk);
}
