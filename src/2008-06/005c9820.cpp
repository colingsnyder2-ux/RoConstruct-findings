// from server: 100% by tester
// roc 2008-06 005c9820  unit: RBX::Stats::VItem::?$BoundFuncDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c9820
//
// 005c9820  8b442404             mov eax, dword ptr [esp + 4]
// 005c9824  83ec0c               sub esp, 0xc
// 005c9827  56                   push esi
// 005c9828  6a00                 push 0
// 005c982a  68f4209300           push 0x9320f4
// 005c982f  68fc919200           push 0x9291fc
// 005c9834  6a00                 push 0
// 005c9836  50                   push eax
// 005c9837  8bf1                 mov esi, ecx
// 005c9839  e8887f0d00           call 0x6a17c6
// 005c983e  83c414               add esp, 0x14
// 005c9841  85c0                 test eax, eax
// 005c9843  751e                 jne 0x5c9863
// 005c9845  6834ba8000           push 0x80ba34
// 005c984a  8d4c2408             lea ecx, [esp + 8]
// 005c984e  ff1564288000         call dword ptr [0x802864]
// 005c9854  682c368d00           push 0x8d362c
// 005c9859  8d4c2408             lea ecx, [esp + 8]
// 005c985d  51                   push ecx
// 005c985e  e8297d0d00           call 0x6a158c
// 005c9863  8b542418             mov edx, dword ptr [esp + 0x18]
// 005c9867  83c204               add edx, 4
// 005c986a  52                   push edx
// 005c986b  50                   push eax
// 005c986c  8bce                 mov ecx, esi
// 005c986e  e87d7f0100           call 0x5e17f0
// 005c9873  5e                   pop esi
// 005c9874  83c40c               add esp, 0xc
// 005c9877  c20800               ret 8

#include <typeinfo>
namespace RBX { namespace Reflection { class DescribedBase { public: virtual ~DescribedBase(); }; } }
namespace RBX { namespace Stats { class Item : public RBX::Reflection::DescribedBase { }; } }
struct Arg { int header; int member; };
struct Holder {
    void apply(RBX::Stats::Item* object, int* value);
    void invoke(RBX::Reflection::DescribedBase* source, Arg* arg);
};

void Holder::invoke(RBX::Reflection::DescribedBase* source, Arg* arg)
{
    RBX::Stats::Item* object = dynamic_cast<RBX::Stats::Item*>(source);
    if (!object)
        throw std::bad_cast("bad cast");
    apply(object, &arg->member);
}
