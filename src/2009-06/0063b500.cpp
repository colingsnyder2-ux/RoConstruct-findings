// roc 2009-06 0063b500  unit: RBX::ScriptContext  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0063b500
//
// 0063b500  51                   push ecx
// 0063b501  56                   push esi
// 0063b502  c744240400000000     mov dword ptr [esp + 4], 0
// 0063b50a  e8614affff           call 0x62ff70
// 0063b50f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0063b513  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0063b517  83ec10               sub esp, 0x10
// 0063b51a  8bd4                 mov edx, esp
// 0063b51c  890a                 mov dword ptr [edx], ecx
// 0063b51e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0063b522  894a04               mov dword ptr [edx + 4], ecx
// 0063b525  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0063b529  894a08               mov dword ptr [edx + 8], ecx
// 0063b52c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0063b530  894a0c               mov dword ptr [edx + 0xc], ecx
// 0063b533  56                   push esi
// 0063b534  8bc8                 mov ecx, eax
// 0063b536  e8d5d4ffff           call 0x638a10
// 0063b53b  8bc6                 mov eax, esi
// 0063b53d  5e                   pop esi
// 0063b53e  59                   pop ecx
// 0063b53f  c21400               ret 0x14
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
