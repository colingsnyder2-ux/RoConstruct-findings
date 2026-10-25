// from server: 100% by tester
// roc 2008-06 004b41e0  unit: RBX::Network::VReplicator::?$BoundFuncDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b41e0
//
// 004b41e0  8b442404             mov eax, dword ptr [esp + 4]
// 004b41e4  83ec0c               sub esp, 0xc
// 004b41e7  56                   push esi
// 004b41e8  6a00                 push 0
// 004b41ea  68b48d9300           push 0x938db4
// 004b41ef  68fc919200           push 0x9291fc
// 004b41f4  6a00                 push 0
// 004b41f6  50                   push eax
// 004b41f7  8bf1                 mov esi, ecx
// 004b41f9  e8c8d51e00           call 0x6a17c6
// 004b41fe  83c414               add esp, 0x14
// 004b4201  85c0                 test eax, eax
// 004b4203  751e                 jne 0x4b4223
// 004b4205  6834ba8000           push 0x80ba34
// 004b420a  8d4c2408             lea ecx, [esp + 8]
// 004b420e  ff1564288000         call dword ptr [0x802864]
// 004b4214  682c368d00           push 0x8d362c
// 004b4219  8d4c2408             lea ecx, [esp + 8]
// 004b421d  51                   push ecx
// 004b421e  e869d31e00           call 0x6a158c
// 004b4223  8b542418             mov edx, dword ptr [esp + 0x18]
// 004b4227  83c204               add edx, 4
// 004b422a  52                   push edx
// 004b422b  50                   push eax
// 004b422c  8bce                 mov ecx, esi
// 004b422e  e88d5d0a00           call 0x559fc0
// 004b4233  5e                   pop esi
// 004b4234  83c40c               add esp, 0xc
// 004b4237  c20800               ret 8

#include <typeinfo>
namespace RBX { namespace Reflection { class DescribedBase { public: virtual ~DescribedBase(); }; } }
namespace RBX { namespace Network { class Replicator : public RBX::Reflection::DescribedBase { }; } }
struct Arg { int header; int member; };
struct Holder {
    void apply(RBX::Network::Replicator* object, int* value);
    void invoke(RBX::Reflection::DescribedBase* source, Arg* arg);
};

void Holder::invoke(RBX::Reflection::DescribedBase* source, Arg* arg)
{
    RBX::Network::Replicator* object = dynamic_cast<RBX::Network::Replicator*>(source);
    if (!object)
        throw std::bad_cast("bad cast");
    apply(object, &arg->member);
}
