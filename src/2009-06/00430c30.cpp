// roc 2009-06 00430c30  unit: RBX::$$A6AXABUStandardOutMessage::?$signal::slot  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00430c30
//
// 00430c30  51                   push ecx
// 00430c31  56                   push esi
// 00430c32  c744240400000000     mov dword ptr [esp + 4], 0
// 00430c3a  e851ffffff           call 0x430b90
// 00430c3f  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00430c43  8b542410             mov edx, dword ptr [esp + 0x10]
// 00430c47  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00430c4b  51                   push ecx
// 00430c4c  52                   push edx
// 00430c4d  56                   push esi
// 00430c4e  8bc8                 mov ecx, eax
// 00430c50  e8fbfdffff           call 0x430a50
// 00430c55  8bc6                 mov eax, esi
// 00430c57  5e                   pop esi
// 00430c58  59                   pop ecx
// 00430c59  c20c00               ret 0xc
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
