// roc 2009-06 006cd9a0  unit: RBX::AxisMoveTool  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006cd9a0
//
// 006cd9a0  51                   push ecx
// 006cd9a1  56                   push esi
// 006cd9a2  c744240400000000     mov dword ptr [esp + 4], 0
// 006cd9aa  e8c125f6ff           call 0x62ff70
// 006cd9af  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006cd9b3  8b542410             mov edx, dword ptr [esp + 0x10]
// 006cd9b7  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006cd9bb  51                   push ecx
// 006cd9bc  52                   push edx
// 006cd9bd  56                   push esi
// 006cd9be  8bc8                 mov ecx, eax
// 006cd9c0  e89bfeffff           call 0x6cd860
// 006cd9c5  8bc6                 mov eax, esi
// 006cd9c7  5e                   pop esi
// 006cd9c8  59                   pop ecx
// 006cd9c9  c20c00               ret 0xc
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
