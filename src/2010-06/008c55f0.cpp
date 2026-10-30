// roc 2010-06 008c55f0  unit: RBX::ViewRbxGfx  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008c55f0
//
// 008c55f0  51                   push ecx
// 008c55f1  56                   push esi
// 008c55f2  c744240400000000     mov dword ptr [esp + 4], 0
// 008c55fa  e8d10ebaff           call 0x4664d0
// 008c55ff  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008c5603  8b542410             mov edx, dword ptr [esp + 0x10]
// 008c5607  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008c560b  51                   push ecx
// 008c560c  52                   push edx
// 008c560d  56                   push esi
// 008c560e  8bc8                 mov ecx, eax
// 008c5610  e80bf4ffff           call 0x8c4a20
// 008c5615  8bc6                 mov eax, esi
// 008c5617  5e                   pop esi
// 008c5618  59                   pop ecx
// 008c5619  c20c00               ret 0xc
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