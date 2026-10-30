// roc 2009-06 00527c30  unit: RBX::ViewRbxGfx  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00527c30
//
// 00527c30  51                   push ecx
// 00527c31  56                   push esi
// 00527c32  c744240400000000     mov dword ptr [esp + 4], 0
// 00527c3a  e87119f3ff           call 0x4595b0
// 00527c3f  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00527c43  8b542410             mov edx, dword ptr [esp + 0x10]
// 00527c47  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00527c4b  51                   push ecx
// 00527c4c  52                   push edx
// 00527c4d  56                   push esi
// 00527c4e  8bc8                 mov ecx, eax
// 00527c50  e8bbedffff           call 0x526a10
// 00527c55  8bc6                 mov eax, esi
// 00527c57  5e                   pop esi
// 00527c58  59                   pop ecx
// 00527c59  c20c00               ret 0xc
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
