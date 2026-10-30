// roc 2010-06 0090ba00  unit: Ogre::RbxCluster  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0090ba00
//
// 0090ba00  51                   push ecx
// 0090ba01  56                   push esi
// 0090ba02  c744240400000000     mov dword ptr [esp + 4], 0
// 0090ba0a  e8c1f5baff           call 0x4bafd0
// 0090ba0f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0090ba13  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0090ba17  83ec10               sub esp, 0x10
// 0090ba1a  8bd4                 mov edx, esp
// 0090ba1c  890a                 mov dword ptr [edx], ecx
// 0090ba1e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0090ba22  894a04               mov dword ptr [edx + 4], ecx
// 0090ba25  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0090ba29  894a08               mov dword ptr [edx + 8], ecx
// 0090ba2c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0090ba30  894a0c               mov dword ptr [edx + 0xc], ecx
// 0090ba33  56                   push esi
// 0090ba34  8bc8                 mov ecx, eax
// 0090ba36  e8c5f0ffff           call 0x90ab00
// 0090ba3b  8bc6                 mov eax, esi
// 0090ba3d  5e                   pop esi
// 0090ba3e  59                   pop ecx
// 0090ba3f  c21400               ret 0x14
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