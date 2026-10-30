// roc 2010-06 0090b9d0  unit: Ogre::RbxCluster  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0090b9d0
//
// 0090b9d0  51                   push ecx
// 0090b9d1  56                   push esi
// 0090b9d2  c744240400000000     mov dword ptr [esp + 4], 0
// 0090b9da  e8f1aab5ff           call 0x4664d0
// 0090b9df  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0090b9e3  8b542410             mov edx, dword ptr [esp + 0x10]
// 0090b9e7  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0090b9eb  51                   push ecx
// 0090b9ec  52                   push edx
// 0090b9ed  56                   push esi
// 0090b9ee  8bc8                 mov ecx, eax
// 0090b9f0  e8cbefffff           call 0x90a9c0
// 0090b9f5  8bc6                 mov eax, esi
// 0090b9f7  5e                   pop esi
// 0090b9f8  59                   pop ecx
// 0090b9f9  c20c00               ret 0xc
// copied from an identical function in another client (function ?f@S@ns_ROCX000000@@QAE?AURet@2@PAX0@Z)

namespace ns_ROCX000000 {
struct Ret
{
    Ret(const Ret &);
    ~Ret();
    void *p;
};

struct Impl
{
    Ret g(void *a0, void *a1);
};

struct Getter { static Impl *get(); };

struct S
{
    Ret f(void *a0, void *a1);
};

Ret S::f(void *a0, void *a1)
{
    Impl *impl = Getter::get();
    return impl->g(a0, a1);
}
}