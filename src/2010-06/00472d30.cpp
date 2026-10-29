// roc 2010-06 00472d30  unit: CScriptEditor  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00472d30
//
// 00472d30  51                   push ecx
// 00472d31  56                   push esi
// 00472d32  c744240400000000     mov dword ptr [esp + 4], 0
// 00472d3a  e841ffffff           call 0x472c80
// 00472d3f  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00472d43  8b542410             mov edx, dword ptr [esp + 0x10]
// 00472d47  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00472d4b  51                   push ecx
// 00472d4c  52                   push edx
// 00472d4d  56                   push esi
// 00472d4e  8bc8                 mov ecx, eax
// 00472d50  e88bf5ffff           call 0x4722e0
// 00472d55  8bc6                 mov eax, esi
// 00472d57  5e                   pop esi
// 00472d58  59                   pop ecx
// 00472d59  c20c00               ret 0xc
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