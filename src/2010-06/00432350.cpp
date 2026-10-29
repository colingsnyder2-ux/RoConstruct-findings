// roc 2010-06 00432350  unit: RBX::$$A6AXABUStandardOutMessage::?$signal::slot  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00432350
//
// 00432350  51                   push ecx
// 00432351  56                   push esi
// 00432352  c744240400000000     mov dword ptr [esp + 4], 0
// 0043235a  e851ffffff           call 0x4322b0
// 0043235f  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00432363  8b542410             mov edx, dword ptr [esp + 0x10]
// 00432367  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0043236b  51                   push ecx
// 0043236c  52                   push edx
// 0043236d  56                   push esi
// 0043236e  8bc8                 mov ecx, eax
// 00432370  e8fbfdffff           call 0x432170
// 00432375  8bc6                 mov eax, esi
// 00432377  5e                   pop esi
// 00432378  59                   pop ecx
// 00432379  c20c00               ret 0xc
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