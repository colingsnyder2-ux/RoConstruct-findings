// roc 2009-06 00529510  unit: RBX::ViewG3D  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00529510
//
// 00529510  51                   push ecx
// 00529511  56                   push esi
// 00529512  c744240400000000     mov dword ptr [esp + 4], 0
// 0052951a  e89100f3ff           call 0x4595b0
// 0052951f  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00529523  8b542410             mov edx, dword ptr [esp + 0x10]
// 00529527  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0052952b  51                   push ecx
// 0052952c  52                   push edx
// 0052952d  56                   push esi
// 0052952e  8bc8                 mov ecx, eax
// 00529530  e8dbf9ffff           call 0x528f10
// 00529535  8bc6                 mov eax, esi
// 00529537  5e                   pop esi
// 00529538  59                   pop ecx
// 00529539  c20c00               ret 0xc
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
