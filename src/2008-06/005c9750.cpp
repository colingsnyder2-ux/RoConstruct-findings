// from server: 100% by tester
// roc 2008-06 005c9750  unit: RBX::Stats::VItem::?$BoundFuncDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c9750
//
// 005c9750  8b442404             mov eax, dword ptr [esp + 4]
// 005c9754  83ec0c               sub esp, 0xc
// 005c9757  56                   push esi
// 005c9758  6a00                 push 0
// 005c975a  68f4209300           push 0x9320f4
// 005c975f  68fc919200           push 0x9291fc
// 005c9764  6a00                 push 0
// 005c9766  50                   push eax
// 005c9767  8bf1                 mov esi, ecx
// 005c9769  e858800d00           call 0x6a17c6
// 005c976e  83c414               add esp, 0x14
// 005c9771  85c0                 test eax, eax
// 005c9773  751e                 jne 0x5c9793
// 005c9775  6834ba8000           push 0x80ba34
// 005c977a  8d4c2408             lea ecx, [esp + 8]
// 005c977e  ff1564288000         call dword ptr [0x802864]
// 005c9784  682c368d00           push 0x8d362c
// 005c9789  8d4c2408             lea ecx, [esp + 8]
// 005c978d  51                   push ecx
// 005c978e  e8f97d0d00           call 0x6a158c
// 005c9793  8b542418             mov edx, dword ptr [esp + 0x18]
// 005c9797  83c204               add edx, 4
// 005c979a  52                   push edx
// 005c979b  50                   push eax
// 005c979c  8bce                 mov ecx, esi
// 005c979e  e81dffffff           call 0x5c96c0
// 005c97a3  5e                   pop esi
// 005c97a4  83c40c               add esp, 0xc
// 005c97a7  c20800               ret 8

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
