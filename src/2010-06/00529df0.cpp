// roc 2010-06 00529df0  unit: RBX::ViewG3D  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00529df0
//
// 00529df0  51                   push ecx
// 00529df1  56                   push esi
// 00529df2  c744240400000000     mov dword ptr [esp + 4], 0
// 00529dfa  e81127efff           call 0x41c510
// 00529dff  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00529e03  8b542410             mov edx, dword ptr [esp + 0x10]
// 00529e07  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00529e0b  51                   push ecx
// 00529e0c  52                   push edx
// 00529e0d  56                   push esi
// 00529e0e  8bc8                 mov ecx, eax
// 00529e10  e8cbeeffff           call 0x528ce0
// 00529e15  8bc6                 mov eax, esi
// 00529e17  5e                   pop esi
// 00529e18  59                   pop ecx
// 00529e19  c20c00               ret 0xc
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