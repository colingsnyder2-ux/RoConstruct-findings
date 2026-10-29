// roc 2009-06 0042be80  unit: RBX::$$A6AXVBrickColor::?$signal::slot  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0042be80
//
// 0042be80  51                   push ecx
// 0042be81  56                   push esi
// 0042be82  c744240400000000     mov dword ptr [esp + 4], 0
// 0042be8a  e8d1f9ffff           call 0x42b860
// 0042be8f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0042be93  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0042be97  83ec14               sub esp, 0x14
// 0042be9a  8bd4                 mov edx, esp
// 0042be9c  890a                 mov dword ptr [edx], ecx
// 0042be9e  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0042bea2  894a04               mov dword ptr [edx + 4], ecx
// 0042bea5  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0042bea9  894a08               mov dword ptr [edx + 8], ecx
// 0042beac  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0042beb0  894a0c               mov dword ptr [edx + 0xc], ecx
// 0042beb3  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0042beb7  894a10               mov dword ptr [edx + 0x10], ecx
// 0042beba  56                   push esi
// 0042bebb  8bc8                 mov ecx, eax
// 0042bebd  e80ef5ffff           call 0x42b3d0
// 0042bec2  8bc6                 mov eax, esi
// 0042bec4  5e                   pop esi
// 0042bec5  59                   pop ecx
// 0042bec6  c21800               ret 0x18
// copied from an identical function in another client (function ?f@S@ns_ROCX000000@@QAE?AURet@2@UArg@2@@Z)

namespace ns_ROCX000000 {
struct Ret
{
    Ret(const Ret &);
    ~Ret();
    void *p;
};

struct Arg
{
    int f0, f1, f2, f3, f4;
};

struct Impl
{
    Ret g(Arg arg);
};

struct Getter { static Impl *get(); };

struct S
{
    Ret f(Arg arg);
};

Ret S::f(Arg arg)
{
    Impl *impl = Getter::get();
    return impl->g(arg);
}
}
