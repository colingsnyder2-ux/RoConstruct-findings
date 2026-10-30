// roc 2009-06 00466390  unit: CScriptEditor  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00466390
//
// 00466390  51                   push ecx
// 00466391  56                   push esi
// 00466392  c744240400000000     mov dword ptr [esp + 4], 0
// 0046639a  e841ffffff           call 0x4662e0
// 0046639f  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004663a3  8b542410             mov edx, dword ptr [esp + 0x10]
// 004663a7  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004663ab  51                   push ecx
// 004663ac  52                   push edx
// 004663ad  56                   push esi
// 004663ae  8bc8                 mov ecx, eax
// 004663b0  e8ebf8ffff           call 0x465ca0
// 004663b5  8bc6                 mov eax, esi
// 004663b7  5e                   pop esi
// 004663b8  59                   pop ecx
// 004663b9  c20c00               ret 0xc
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
