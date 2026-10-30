// roc 2009-06 00529540  unit: RBX::ViewG3D  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00529540
//
// 00529540  51                   push ecx
// 00529541  56                   push esi
// 00529542  c744240400000000     mov dword ptr [esp + 4], 0
// 0052954a  e8512aefff           call 0x41bfa0
// 0052954f  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00529553  8b542410             mov edx, dword ptr [esp + 0x10]
// 00529557  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0052955b  51                   push ecx
// 0052955c  52                   push edx
// 0052955d  56                   push esi
// 0052955e  8bc8                 mov ecx, eax
// 00529560  e8ebfaffff           call 0x529050
// 00529565  8bc6                 mov eax, esi
// 00529567  5e                   pop esi
// 00529568  59                   pop ecx
// 00529569  c20c00               ret 0xc
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
