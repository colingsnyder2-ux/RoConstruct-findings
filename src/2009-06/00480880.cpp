// roc 2009-06 00480880  unit: Ogre::RbxPart  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00480880
//
// 00480880  51                   push ecx
// 00480881  56                   push esi
// 00480882  c744240400000000     mov dword ptr [esp + 4], 0
// 0048088a  e8515afeff           call 0x4662e0
// 0048088f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00480893  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00480897  83ec10               sub esp, 0x10
// 0048089a  8bd4                 mov edx, esp
// 0048089c  890a                 mov dword ptr [edx], ecx
// 0048089e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 004808a2  894a04               mov dword ptr [edx + 4], ecx
// 004808a5  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004808a9  894a08               mov dword ptr [edx + 8], ecx
// 004808ac  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 004808b0  894a0c               mov dword ptr [edx + 0xc], ecx
// 004808b3  56                   push esi
// 004808b4  8bc8                 mov ecx, eax
// 004808b6  e8f5f9ffff           call 0x4802b0
// 004808bb  8bc6                 mov eax, esi
// 004808bd  5e                   pop esi
// 004808be  59                   pop ecx
// 004808bf  c21400               ret 0x14
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
