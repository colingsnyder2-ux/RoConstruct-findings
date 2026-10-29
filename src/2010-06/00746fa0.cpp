// roc 2010-06 00746fa0  unit: RBX::$$A6AXABVStepped::?$signal::slot  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00746fa0
//
// 00746fa0  51                   push ecx
// 00746fa1  56                   push esi
// 00746fa2  c744240400000000     mov dword ptr [esp + 4], 0
// 00746faa  e851ffffff           call 0x746f00
// 00746faf  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00746fb3  8b542410             mov edx, dword ptr [esp + 0x10]
// 00746fb7  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00746fbb  51                   push ecx
// 00746fbc  52                   push edx
// 00746fbd  56                   push esi
// 00746fbe  8bc8                 mov ecx, eax
// 00746fc0  e8fbfdffff           call 0x746dc0
// 00746fc5  8bc6                 mov eax, esi
// 00746fc7  5e                   pop esi
// 00746fc8  59                   pop ecx
// 00746fc9  c20c00               ret 0xc
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