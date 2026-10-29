// roc 2010-06 006fb030  unit: RBX::VGuiObject::?$EventDesc  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006fb030
//
// 006fb030  51                   push ecx
// 006fb031  56                   push esi
// 006fb032  c744240400000000     mov dword ptr [esp + 4], 0
// 006fb03a  e891b4d6ff           call 0x4664d0
// 006fb03f  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006fb043  8b542410             mov edx, dword ptr [esp + 0x10]
// 006fb047  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006fb04b  51                   push ecx
// 006fb04c  52                   push edx
// 006fb04d  56                   push esi
// 006fb04e  8bc8                 mov ecx, eax
// 006fb050  e88be1ffff           call 0x6f91e0
// 006fb055  8bc6                 mov eax, esi
// 006fb057  5e                   pop esi
// 006fb058  59                   pop ecx
// 006fb059  c20c00               ret 0xc
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