// roc 2010-06 005f8cb0  unit: RBX::LegacyHopperService  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005f8cb0
//
// 005f8cb0  51                   push ecx
// 005f8cb1  56                   push esi
// 005f8cb2  c744240400000000     mov dword ptr [esp + 4], 0
// 005f8cba  e81123ecff           call 0x4bafd0
// 005f8cbf  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005f8cc3  8b542410             mov edx, dword ptr [esp + 0x10]
// 005f8cc7  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005f8ccb  51                   push ecx
// 005f8ccc  52                   push edx
// 005f8ccd  56                   push esi
// 005f8cce  8bc8                 mov ecx, eax
// 005f8cd0  e8abebffff           call 0x5f7880
// 005f8cd5  8bc6                 mov eax, esi
// 005f8cd7  5e                   pop esi
// 005f8cd8  59                   pop ecx
// 005f8cd9  c20c00               ret 0xc
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