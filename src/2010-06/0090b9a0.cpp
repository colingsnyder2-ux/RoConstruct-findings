// roc 2010-06 0090b9a0  unit: Ogre::RbxCluster  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0090b9a0
//
// 0090b9a0  51                   push ecx
// 0090b9a1  56                   push esi
// 0090b9a2  c744240400000000     mov dword ptr [esp + 4], 0
// 0090b9aa  e821f6baff           call 0x4bafd0
// 0090b9af  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0090b9b3  8b542410             mov edx, dword ptr [esp + 0x10]
// 0090b9b7  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0090b9bb  51                   push ecx
// 0090b9bc  52                   push edx
// 0090b9bd  56                   push esi
// 0090b9be  8bc8                 mov ecx, eax
// 0090b9c0  e8bbeeffff           call 0x90a880
// 0090b9c5  8bc6                 mov eax, esi
// 0090b9c7  5e                   pop esi
// 0090b9c8  59                   pop ecx
// 0090b9c9  c20c00               ret 0xc
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