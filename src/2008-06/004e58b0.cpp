// from server: 42% by colin
// from server: 41% by colin
// roc 2008-06 004e58b0  unit: RBX::ViewNew::BrickMesh  size: 639 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004e58b0
//
// 004e58b0  6aff                 push -1
// 004e58b2  68afa47c00           push 0x7ca4af
// 004e58b7  64a100000000         mov eax, dword ptr fs:[0]
// 004e58bd  50                   push eax
// 004e58be  64892500000000       mov dword ptr fs:[0], esp
// 004e58c5  83ec24               sub esp, 0x24
// 004e58c8  53                   push ebx
// 004e58c9  55                   push ebp
// 004e58ca  56                   push esi
// 004e58cb  33f6                 xor esi, esi
// 004e58cd  89742410             mov dword ptr [esp + 0x10], esi
// 004e58d1  8b442448             mov eax, dword ptr [esp + 0x48]
// 004e58d5  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 004e58d9  57                   push edi
// 004e58da  8b7c2448             mov edi, dword ptr [esp + 0x48]
// 004e58de  d907                 fld dword ptr [edi]
// 004e58e0  6870289700           push 0x972870
// 004e58e5  d95c2424             fstp dword ptr [esp + 0x24]
// 004e58e9  6860534e00           push 0x4e5360
// 004e58ee  d94704               fld dword ptr [edi + 4]
// 004e58f1  89742444             mov dword ptr [esp + 0x44], esi
// 004e58f5  d95c242c             fstp dword ptr [esp + 0x2c]
// 004e58f9  89442434             mov dword ptr [esp + 0x34], eax
// 004e58fd  d94708               fld dword ptr [edi + 8]
// 004e5900  894c2438             mov dword ptr [esp + 0x38], ecx
// 004e5904  d95c2430             fstp dword ptr [esp + 0x30]
// 004e5908  e8231a0700           call 0x557330
// 004e590d  8b2d54279700         mov ebp, dword ptr [0x972754]
// 004e5913  8d4d20               lea ecx, [ebp + 0x20]
// 004e5916  83c408               add esp, 8
// 004e5919  894c2418             mov dword ptr [esp + 0x18], ecx
// 004e591d  e86ed70700           call 0x563090
// 004e5922  c644241c01           mov byte ptr [esp + 0x1c], 1
// 004e5927  8d542420             lea edx, [esp + 0x20]
// 004e592b  52                   push edx
// 004e592c  8bcd                 mov ecx, ebp
// 004e592e  c744244001000000     mov dword ptr [esp + 0x40], 1
// 004e5936  e84586ffff           call 0x4ddf80
// 004e593b  8bd8                 mov ebx, eax
// 004e593d  833b04               cmp dword ptr [ebx], 4
// 004e5940  750d                 jne 0x4e594f
// 004e5942  6a03                 push 3
// 004e5944  56                   push esi
// 004e5945  e836fe0200           call 0x515780
// 004e594a  83c408               add esp, 8
// 004e594d  eb26                 jmp 0x4e5975
// 004e594f  6a08                 push 8
// 004e5951  56                   push esi
// 004e5952  e829fe0200           call 0x515780
// 004e5957  83c408               add esp, 8
// 004e595a  89442448             mov dword ptr [esp + 0x48], eax
// 004e595e  83f803               cmp eax, 3
// 004e5961  c744241003000000     mov dword ptr [esp + 0x10], 3
// 004e5969  8d442448             lea eax, [esp + 0x48]
// 004e596d  7c04                 jl 0x4e5973
// 004e596f  8d442410             lea eax, [esp + 0x10]
// 004e5973  8b00                 mov eax, dword ptr [eax]
// 004e5975  8b742444             mov esi, dword ptr [esp + 0x44]
// 004e5979  8d448304             lea eax, [ebx + eax*4 + 4]
// 004e597d  c70600000000         mov dword ptr [esi], 0
// 004e5983  89442448             mov dword ptr [esp + 0x48], eax
// 004e5987  8b00                 mov eax, dword ptr [eax]
// 004e5989  50                   push eax
// 004e598a  8bce                 mov ecx, esi
// 004e598c  e80f360b00           call 0x598fa0
// 004e5991  833e00               cmp dword ptr [esi], 0
// 004e5994  c744241401000000     mov dword ptr [esp + 0x14], 1
// 004e599c  0f856a010000         jne 0x4e5b0c
// 004e59a2  803dc013940000       cmp byte ptr [0x9413c0], 0
// 004e59a9  c6055c27970000       mov byte ptr [0x97275c], 0
// 004e59b0  6888000000           push 0x88
// 004e59b5  0f8493000000         je 0x4e5a4e
// 004e59bb  d905806e8200         fld dword ptr [0x826e80]
// 004e59c1  d91d58279700         fstp dword ptr [0x972758]
// 004e59c7  e854af1b00           call 0x6a0920
// 004e59cc  83c404               add esp, 4
// 004e59cf  89442410             mov dword ptr [esp + 0x10], eax
// 004e59d3  c644243c02           mov byte ptr [esp + 0x3c], 2
// 004e59d8  85c0                 test eax, eax
// 004e59da  7420                 je 0x4e59fc
// 004e59dc  d9ee                 fldz 
// 004e59de  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 004e59e2  51                   push ecx
// 004e59e3  d91c24               fstp dword ptr [esp]
// 004e59e6  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 004e59ea  6a00                 push 0
// 004e59ec  6a00                 push 0
// 004e59ee  6a00                 push 0
// 004e59f0  51                   push ecx
// 004e59f1  52                   push edx
// 004e59f2  57                   push edi
// 004e59f3  8bc8                 mov ecx, eax
// 004e59f5  e8c6f9ffff           call 0x4e53c0
// 004e59fa  eb02                 jmp 0x4e59fe
// 004e59fc  33c0                 xor eax, eax
// 004e59fe  50                   push eax
// 004e59ff  8bce                 mov ecx, esi
// 004e5a01  c644244001           mov byte ptr [esp + 0x40], 1
// 004e5a06  e895350b00           call 0x598fa0
// 004e5a0b  d9ee                 fldz 
// 004e5a0d  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 004e5a11  d91d58279700         fstp dword ptr [0x972758]
// 004e5a17  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 004e5a1b  51                   push ecx
// 004e5a1c  52                   push edx
// 004e5a1d  57                   push edi
// 004e5a1e  6a00                 push 0
// 004e5a20  68f4139400           push 0x9413f4
// 004e5a25  6818149400           push 0x941418
// 004e5a2a  c6055c27970001       mov byte ptr [0x97275c], 1
// 004e5a31  8b06                 mov eax, dword ptr [esi]
// 004e5a33  6a00                 push 0
// 004e5a35  50                   push eax
// 004e5a36  e88bbd1b00           call 0x6a17c6
// 004e5a3b  83c414               add esp, 0x14
// 004e5a3e  8bc8                 mov ecx, eax
// 004e5a40  e83bd2ffff           call 0x4e2c80
// 004e5a45  c6055c27970000       mov byte ptr [0x97275c], 0
// 004e5a4c  eb4c                 jmp 0x4e5a9a
// 004e5a4e  d9ee                 fldz 
// 004e5a50  d91d58279700         fstp dword ptr [0x972758]
// 004e5a56  e8c5ae1b00           call 0x6a0920
// 004e5a5b  83c404               add esp, 4
// 004e5a5e  89442410             mov dword ptr [esp + 0x10], eax
// 004e5a62  c644243c03           mov byte ptr [esp + 0x3c], 3
// 004e5a67  85c0                 test eax, eax
// 004e5a69  7420                 je 0x4e5a8b
// 004e5a6b  d9ee                 fldz 
// 004e5a6d  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 004e5a71  51                   push ecx
// 004e5a72  d91c24               fstp dword ptr [esp]
// 004e5a75  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 004e5a79  6a00                 push 0
// 004e5a7b  6a00                 push 0
// 004e5a7d  6a00                 push 0
// 004e5a7f  51                   push ecx
// 004e5a80  52                   push edx
// 004e5a81  57                   push edi
// 004e5a82  8bc8                 mov ecx, eax
// 004e5a84  e837f9ffff           call 0x4e53c0
// 004e5a89  eb02                 jmp 0x4e5a8d
// 004e5a8b  33c0                 xor eax, eax
// 004e5a8d  50                   push eax
// 004e5a8e  8bce                 mov ecx, esi
// 004e5a90  c644244001           mov byte ptr [esp + 0x40], 1
// 004e5a95  e806350b00           call 0x598fa0
// 004e5a9a  8b06                 mov eax, dword ptr [esi]
// 004e5a9c  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 004e5aa0  50                   push eax
// 004e5aa1  e8fa340b00           call 0x598fa0
// 004e5aa6  ff03                 inc dword ptr [ebx]
// 004e5aa8  ff452c               inc dword ptr [ebp + 0x2c]
// 004e5aab  8b452c               mov eax, dword ptr [ebp + 0x2c]
// 004e5aae  99                   cdq 
// 004e5aaf  b964000000           mov ecx, 0x64
// 004e5ab4  f7f9                 idiv ecx
// 004e5ab6  85d2                 test edx, edx
// 004e5ab8  7552                 jne 0x4e5b0c
// 004e5aba  8b542448             mov edx, dword ptr [esp + 0x48]
// 004e5abe  8b02                 mov eax, dword ptr [edx]
// 004e5ac0  33ff                 xor edi, edi
// 004e5ac2  897c2410             mov dword ptr [esp + 0x10], edi
// 004e5ac6  85c0                 test eax, eax
// 004e5ac8  7410                 je 0x4e5ada
// 004e5aca  8bf8                 mov edi, eax
// 004e5acc  83c004               add eax, 4
// 004e5acf  50                   push eax
// 004e5ad0  897c2414             mov dword ptr [esp + 0x14], edi
// 004e5ad4  ff15b0218000         call dword ptr [0x8021b0]
// 004e5ada  c644243c04           mov byte ptr [esp + 0x3c], 4
// 004e5adf  e82cfcffff           call 0x4e5710
// 004e5ae4  c644243c01           mov byte ptr [esp + 0x3c], 1
// 004e5ae9  85ff                 test edi, edi
// 004e5aeb  741f                 je 0x4e5b0c
// 004e5aed  8d4704               lea eax, [edi + 4]
// 004e5af0  50                   push eax
// 004e5af1  ff15ac218000         call dword ptr [0x8021ac]
// 004e5af7  85c0                 test eax, eax
// 004e5af9  7511                 jne 0x4e5b0c
// 004e5afb  8bcf                 mov ecx, edi
// 004e5afd  e88e52f7ff           call 0x45ad90
// 004e5b02  8b07                 mov eax, dword ptr [edi]
// 004e5b04  8b10                 mov edx, dword ptr [eax]
// 004e5b06  6a01                 push 1
// 004e5b08  8bcf                 mov ecx, edi
// 004e5b0a  ffd2                 call edx
// 004e5b0c  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004e5b10  c644243c00           mov byte ptr [esp + 0x3c], 0
// 004e5b15  e8c6d50700           call 0x5630e0
// 004e5b1a  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 004e5b1e  5f                   pop edi
// 004e5b1f  8bc6                 mov eax, esi
// 004e5b21  5e                   pop esi
// 004e5b22  5d                   pop ebp
// 004e5b23  5b                   pop ebx
// 004e5b24  64890d00000000       mov dword ptr fs:[0], ecx
// 004e5b2b  83c430               add esp, 0x30
// 004e5b2e  c3                   ret 
#include <intrin.h>

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
    _ReadWriteBarrier();
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
