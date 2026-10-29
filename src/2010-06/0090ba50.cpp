// roc 2010-06 0090ba50  unit: Ogre::RbxCluster  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0090ba50
//
// 0090ba50  51                   push ecx
// 0090ba51  56                   push esi
// 0090ba52  c744240400000000     mov dword ptr [esp + 4], 0
// 0090ba5a  e871aab5ff           call 0x4664d0
// 0090ba5f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0090ba63  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0090ba67  83ec10               sub esp, 0x10
// 0090ba6a  8bd4                 mov edx, esp
// 0090ba6c  890a                 mov dword ptr [edx], ecx
// 0090ba6e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0090ba72  894a04               mov dword ptr [edx + 4], ecx
// 0090ba75  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0090ba79  894a08               mov dword ptr [edx + 8], ecx
// 0090ba7c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0090ba80  894a0c               mov dword ptr [edx + 0xc], ecx
// 0090ba83  56                   push esi
// 0090ba84  8bc8                 mov ecx, eax
// 0090ba86  e8d5f1ffff           call 0x90ac60
// 0090ba8b  8bc6                 mov eax, esi
// 0090ba8d  5e                   pop esi
// 0090ba8e  59                   pop ecx
// 0090ba8f  c21400               ret 0x14
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