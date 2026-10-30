// roc 2009-06 00527c60  unit: RBX::ViewRbxGfx  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00527c60
//
// 00527c60  51                   push ecx
// 00527c61  56                   push esi
// 00527c62  c744240400000000     mov dword ptr [esp + 4], 0
// 00527c6a  e83143efff           call 0x41bfa0
// 00527c6f  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00527c73  8b542410             mov edx, dword ptr [esp + 0x10]
// 00527c77  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00527c7b  51                   push ecx
// 00527c7c  52                   push edx
// 00527c7d  56                   push esi
// 00527c7e  8bc8                 mov ecx, eax
// 00527c80  e8cbeeffff           call 0x526b50
// 00527c85  8bc6                 mov eax, esi
// 00527c87  5e                   pop esi
// 00527c88  59                   pop ecx
// 00527c89  c20c00               ret 0xc
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
