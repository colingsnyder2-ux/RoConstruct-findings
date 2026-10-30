// roc 2010-06 00966850  unit: RBX::SceneUpdater  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00966850
//
// 00966850  51                   push ecx
// 00966851  56                   push esi
// 00966852  c744240400000000     mov dword ptr [esp + 4], 0
// 0096685a  e8b15cabff           call 0x41c510
// 0096685f  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00966863  8b542410             mov edx, dword ptr [esp + 0x10]
// 00966867  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0096686b  51                   push ecx
// 0096686c  52                   push edx
// 0096686d  56                   push esi
// 0096686e  8bc8                 mov ecx, eax
// 00966870  e8dbcfffff           call 0x963850
// 00966875  8bc6                 mov eax, esi
// 00966877  5e                   pop esi
// 00966878  59                   pop ecx
// 00966879  c20c00               ret 0xc
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