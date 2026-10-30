// roc 2010-06 00529dc0  unit: RBX::ViewG3D  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00529dc0
//
// 00529dc0  51                   push ecx
// 00529dc1  56                   push esi
// 00529dc2  c744240400000000     mov dword ptr [esp + 4], 0
// 00529dca  e801c7f3ff           call 0x4664d0
// 00529dcf  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00529dd3  8b542410             mov edx, dword ptr [esp + 0x10]
// 00529dd7  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00529ddb  51                   push ecx
// 00529ddc  52                   push edx
// 00529ddd  56                   push esi
// 00529dde  8bc8                 mov ecx, eax
// 00529de0  e8bbedffff           call 0x528ba0
// 00529de5  8bc6                 mov eax, esi
// 00529de7  5e                   pop esi
// 00529de8  59                   pop ecx
// 00529de9  c20c00               ret 0xc
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