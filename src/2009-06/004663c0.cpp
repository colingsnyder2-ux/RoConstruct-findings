// roc 2009-06 004663c0  unit: CScriptEditor  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004663c0
//
// 004663c0  51                   push ecx
// 004663c1  56                   push esi
// 004663c2  c744240400000000     mov dword ptr [esp + 4], 0
// 004663ca  e86193fbff           call 0x41f730
// 004663cf  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004663d3  8b542410             mov edx, dword ptr [esp + 0x10]
// 004663d7  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004663db  51                   push ecx
// 004663dc  52                   push edx
// 004663dd  56                   push esi
// 004663de  8bc8                 mov ecx, eax
// 004663e0  e8fbf9ffff           call 0x465de0
// 004663e5  8bc6                 mov eax, esi
// 004663e7  5e                   pop esi
// 004663e8  59                   pop ecx
// 004663e9  c20c00               ret 0xc
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
