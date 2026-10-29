// roc 2010-06 005f8be0  unit: RBX::LegacyHopperService  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005f8be0
//
// 005f8be0  51                   push ecx
// 005f8be1  56                   push esi
// 005f8be2  c744240400000000     mov dword ptr [esp + 4], 0
// 005f8bea  e8e1d8e6ff           call 0x4664d0
// 005f8bef  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005f8bf3  8b542410             mov edx, dword ptr [esp + 0x10]
// 005f8bf7  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005f8bfb  51                   push ecx
// 005f8bfc  52                   push edx
// 005f8bfd  56                   push esi
// 005f8bfe  8bc8                 mov ecx, eax
// 005f8c00  e87be8ffff           call 0x5f7480
// 005f8c05  8bc6                 mov eax, esi
// 005f8c07  5e                   pop esi
// 005f8c08  59                   pop ecx
// 005f8c09  c20c00               ret 0xc
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