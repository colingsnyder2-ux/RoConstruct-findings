// from server: 100% by tester
// roc 2008-06 005d67f0  unit: RBX::VTeams::?$BoundFuncDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d67f0
//
// 005d67f0  8b442404             mov eax, dword ptr [esp + 4]
// 005d67f4  83ec0c               sub esp, 0xc
// 005d67f7  56                   push esi
// 005d67f8  6a00                 push 0
// 005d67fa  68e0559400           push 0x9455e0
// 005d67ff  68fc919200           push 0x9291fc
// 005d6804  6a00                 push 0
// 005d6806  50                   push eax
// 005d6807  8bf1                 mov esi, ecx
// 005d6809  e8b8af0c00           call 0x6a17c6
// 005d680e  83c414               add esp, 0x14
// 005d6811  85c0                 test eax, eax
// 005d6813  751e                 jne 0x5d6833
// 005d6815  6834ba8000           push 0x80ba34
// 005d681a  8d4c2408             lea ecx, [esp + 8]
// 005d681e  ff1564288000         call dword ptr [0x802864]
// 005d6824  682c368d00           push 0x8d362c
// 005d6829  8d4c2408             lea ecx, [esp + 8]
// 005d682d  51                   push ecx
// 005d682e  e859ad0c00           call 0x6a158c
// 005d6833  8b542418             mov edx, dword ptr [esp + 0x18]
// 005d6837  83c204               add edx, 4
// 005d683a  52                   push edx
// 005d683b  50                   push eax
// 005d683c  8bce                 mov ecx, esi
// 005d683e  e80dffffff           call 0x5d6750
// 005d6843  5e                   pop esi
// 005d6844  83c40c               add esp, 0xc
// 005d6847  c20800               ret 8

#include <typeinfo>
namespace RBX { namespace Reflection { class DescribedBase { public: virtual ~DescribedBase(); }; } }
namespace RBX { class Teams : public RBX::Reflection::DescribedBase { }; }
struct Arg { int header; int member; };
struct Holder {
    void apply(RBX::Teams* object, int* value);
    void invoke(RBX::Reflection::DescribedBase* source, Arg* arg);
};

void Holder::invoke(RBX::Reflection::DescribedBase* source, Arg* arg)
{
    RBX::Teams* object = dynamic_cast<RBX::Teams*>(source);
    if (!object)
        throw std::bad_cast("bad cast");
    apply(object, &arg->member);
}
