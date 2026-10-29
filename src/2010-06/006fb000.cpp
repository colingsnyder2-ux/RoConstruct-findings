// roc 2010-06 006fb000  unit: RBX::VGuiObject::?$EventDesc  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006fb000
//
// 006fb000  51                   push ecx
// 006fb001  56                   push esi
// 006fb002  c744240400000000     mov dword ptr [esp + 4], 0
// 006fb00a  e8c1b4d6ff           call 0x4664d0
// 006fb00f  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006fb013  8b542410             mov edx, dword ptr [esp + 0x10]
// 006fb017  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006fb01b  51                   push ecx
// 006fb01c  52                   push edx
// 006fb01d  56                   push esi
// 006fb01e  8bc8                 mov ecx, eax
// 006fb020  e87be0ffff           call 0x6f90a0
// 006fb025  8bc6                 mov eax, esi
// 006fb027  5e                   pop esi
// 006fb028  59                   pop ecx
// 006fb029  c20c00               ret 0xc
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