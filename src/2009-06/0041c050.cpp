// roc 2009-06 0041c050  unit: CSettingsExplorer  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0041c050
//
// 0041c050  51                   push ecx
// 0041c051  56                   push esi
// 0041c052  c744240400000000     mov dword ptr [esp + 4], 0
// 0041c05a  e841ffffff           call 0x41bfa0
// 0041c05f  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0041c063  8b542410             mov edx, dword ptr [esp + 0x10]
// 0041c067  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0041c06b  51                   push ecx
// 0041c06c  52                   push edx
// 0041c06d  56                   push esi
// 0041c06e  8bc8                 mov ecx, eax
// 0041c070  e83bfcffff           call 0x41bcb0
// 0041c075  8bc6                 mov eax, esi
// 0041c077  5e                   pop esi
// 0041c078  59                   pop ecx
// 0041c079  c20c00               ret 0xc
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
