// roc 2010-06 00745e10  unit: RBX::AsyncHttpQueue  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00745e10
//
// 00745e10  51                   push ecx
// 00745e11  56                   push esi
// 00745e12  c744240400000000     mov dword ptr [esp + 4], 0
// 00745e1a  e88111ecff           call 0x606fa0
// 00745e1f  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00745e23  8b542410             mov edx, dword ptr [esp + 0x10]
// 00745e27  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00745e2b  51                   push ecx
// 00745e2c  52                   push edx
// 00745e2d  56                   push esi
// 00745e2e  8bc8                 mov ecx, eax
// 00745e30  e89bfeffff           call 0x745cd0
// 00745e35  8bc6                 mov eax, esi
// 00745e37  5e                   pop esi
// 00745e38  59                   pop ecx
// 00745e39  c20c00               ret 0xc
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