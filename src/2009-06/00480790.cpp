// roc 2009-06 00480790  unit: Ogre::RbxPart  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00480790
//
// 00480790  51                   push ecx
// 00480791  56                   push esi
// 00480792  c744240400000000     mov dword ptr [esp + 4], 0
// 0048079a  e851ffffff           call 0x4806f0
// 0048079f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004807a3  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004807a7  83ec10               sub esp, 0x10
// 004807aa  8bd4                 mov edx, esp
// 004807ac  890a                 mov dword ptr [edx], ecx
// 004807ae  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 004807b2  894a04               mov dword ptr [edx + 4], ecx
// 004807b5  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004807b9  894a08               mov dword ptr [edx + 8], ecx
// 004807bc  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 004807c0  894a0c               mov dword ptr [edx + 0xc], ecx
// 004807c3  56                   push esi
// 004807c4  8bc8                 mov ecx, eax
// 004807c6  e8c5f6ffff           call 0x47fe90
// 004807cb  8bc6                 mov eax, esi
// 004807cd  5e                   pop esi
// 004807ce  59                   pop ecx
// 004807cf  c21400               ret 0x14
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
    int f0, f1, f2, f3;
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
