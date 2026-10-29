// roc 2010-06 006ce460  unit: RBX::VArcHandles::?$EventDesc  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006ce460
//
// 006ce460  51                   push ecx
// 006ce461  56                   push esi
// 006ce462  c744240400000000     mov dword ptr [esp + 4], 0
// 006ce46a  e801ecffff           call 0x6cd070
// 006ce46f  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006ce473  8b542410             mov edx, dword ptr [esp + 0x10]
// 006ce477  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006ce47b  51                   push ecx
// 006ce47c  52                   push edx
// 006ce47d  56                   push esi
// 006ce47e  8bc8                 mov ecx, eax
// 006ce480  e87be3ffff           call 0x6cc800
// 006ce485  8bc6                 mov eax, esi
// 006ce487  5e                   pop esi
// 006ce488  59                   pop ecx
// 006ce489  c20c00               ret 0xc
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