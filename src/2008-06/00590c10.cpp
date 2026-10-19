// from server: 76% by colin
// from server: 74% by king_originala
// roc 2008-06 00590c10  unit: RBX::RootInstance  size: 234 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00590c10
//
// 00590c10  64a100000000         mov eax, dword ptr fs:[0]
// 00590c16  6aff                 push -1
// 00590c18  68f01b7d00           push 0x7d1bf0
// 00590c1d  50                   push eax
// 00590c1e  64892500000000       mov dword ptr fs:[0], esp
// 00590c25  83ec18               sub esp, 0x18
// 00590c28  56                   push esi
// 00590c29  6a04                 push 4
// 00590c2b  8bf1                 mov esi, ecx
// 00590c2d  e8eefc1000           call 0x6a0920
// 00590c32  33c9                 xor ecx, ecx
// 00590c34  83c404               add esp, 4
// 00590c37  3bc1                 cmp eax, ecx
// 00590c39  7408                 je 0x590c43
// 00590c3b  8d542404             lea edx, [esp + 4]
// 00590c3f  8910                 mov dword ptr [eax], edx
// 00590c41  eb02                 jmp 0x590c45
// 00590c43  33c0                 xor eax, eax
// 00590c45  89442404             mov dword ptr [esp + 4], eax
// 00590c49  894c2410             mov dword ptr [esp + 0x10], ecx
// 00590c4d  894c2414             mov dword ptr [esp + 0x14], ecx
// 00590c51  894c2418             mov dword ptr [esp + 0x18], ecx
// 00590c55  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00590c59  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00590c5d  8d442404             lea eax, [esp + 4]
// 00590c61  50                   push eax
// 00590c62  51                   push ecx
// 00590c63  52                   push edx
// 00590c64  8bce                 mov ecx, esi
// 00590c66  c744243001000000     mov dword ptr [esp + 0x30], 1
// 00590c6e  e8cdf7ffff           call 0x590440
// 00590c73  8b442414             mov eax, dword ptr [esp + 0x14]
// 00590c77  2b442410             sub eax, dword ptr [esp + 0x10]
// 00590c7b  a9f8ffffff           test eax, 0xfffffff8
// 00590c80  7455                 je 0x590cd7
// 00590c82  f60550f0960001       test byte ptr [0x96f050], 1
// 00590c89  751b                 jne 0x590ca6
// 00590c8b  d9ee                 fldz 
// 00590c8d  830d50f0960001       or dword ptr [0x96f050], 1
// 00590c94  d91544f09600         fst dword ptr [0x96f044]
// 00590c9a  d91548f09600         fst dword ptr [0x96f048]
// 00590ca0  d91d4cf09600         fstp dword ptr [0x96f04c]
// 00590ca6  d90544f09600         fld dword ptr [0x96f044]
// 00590cac  6a01                 push 1
// 00590cae  83ec0c               sub esp, 0xc
// 00590cb1  8bc4                 mov eax, esp
// 00590cb3  d918                 fstp dword ptr [eax]
// 00590cb5  8d4c2414             lea ecx, [esp + 0x14]
// 00590cb9  d90548f09600         fld dword ptr [0x96f048]
// 00590cbf  89642440             mov dword ptr [esp + 0x40], esp
// 00590cc3  d95804               fstp dword ptr [eax + 4]
// 00590cc6  51                   push ecx
// 00590cc7  d9054cf09600         fld dword ptr [0x96f04c]
// 00590ccd  8bce                 mov ecx, esi
// 00590ccf  d95808               fstp dword ptr [eax + 8]
// 00590cd2  e8f9f3ffff           call 0x5900d0
// 00590cd7  8d4c2404             lea ecx, [esp + 4]
// 00590cdb  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 00590ce3  e868f8ffff           call 0x590550
// 00590ce8  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00590cec  64890d00000000       mov dword ptr fs:[0], ecx
// 00590cf3  5e                   pop esi
// 00590cf4  83c424               add esp, 0x24
// 00590cf7  c20800               ret 8
#include <intrin.h>

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct Vector3 {
    float x, y, z;
    Vector3();
    Vector3(const Vector3&);
};

inline Vector3::Vector3() : x(0.0f), y(0.0f), z(0.0f) {}

inline Vector3::Vector3(const Vector3& v)
    : x(v.x), y(v.y), z(v.z) {}

struct Items;

struct Proxy {
    Items* owner;
    Proxy(Items*);
};

inline Proxy::Proxy(Items* p) : owner(p) {}

struct Items {
    Proxy* proxy;
    unsigned int reserved[2];
    char* first;
    char* last;
    char* limit;

    Items();
    ~Items();
};

inline Items::Items()
    : proxy(new Proxy(this)), first(0), last(0), limit(0) {}

struct S {
    void collect(void*, void*, Items*);
    void apply(Items*, Vector3, bool);
    void f(void*, void*);
};

void S::f(void* a, void* b)
{
    Items items;
    _ReadWriteBarrier();
    collect(a, b, &items);
    if ((static_cast<unsigned int>(items.last - items.first) & ~7U) != 0) {
        static const Vector3 zero;
        apply(&items, zero, true);
    }
}
