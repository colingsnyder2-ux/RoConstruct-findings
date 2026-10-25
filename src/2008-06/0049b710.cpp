// from server: 100% by tester
// roc 2008-06 0049b710  unit: RBX::Network::VPlayers::?$BoundFuncDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0049b710
//
// 0049b710  8b442404             mov eax, dword ptr [esp + 4]
// 0049b714  83ec0c               sub esp, 0xc
// 0049b717  56                   push esi
// 0049b718  6a00                 push 0
// 0049b71a  68187c9300           push 0x937c18
// 0049b71f  68fc919200           push 0x9291fc
// 0049b724  6a00                 push 0
// 0049b726  50                   push eax
// 0049b727  8bf1                 mov esi, ecx
// 0049b729  e898602000           call 0x6a17c6
// 0049b72e  83c414               add esp, 0x14
// 0049b731  85c0                 test eax, eax
// 0049b733  751e                 jne 0x49b753
// 0049b735  6834ba8000           push 0x80ba34
// 0049b73a  8d4c2408             lea ecx, [esp + 8]
// 0049b73e  ff1564288000         call dword ptr [0x802864]
// 0049b744  682c368d00           push 0x8d362c
// 0049b749  8d4c2408             lea ecx, [esp + 8]
// 0049b74d  51                   push ecx
// 0049b74e  e8395e2000           call 0x6a158c
// 0049b753  8b542418             mov edx, dword ptr [esp + 0x18]
// 0049b757  83c204               add edx, 4
// 0049b75a  52                   push edx
// 0049b75b  50                   push eax
// 0049b75c  8bce                 mov ecx, esi
// 0049b75e  e8edaf1300           call 0x5d6750
// 0049b763  5e                   pop esi
// 0049b764  83c40c               add esp, 0xc
// 0049b767  c20800               ret 8

#include <typeinfo>
namespace RBX { namespace Reflection { class DescribedBase { public: virtual ~DescribedBase(); }; } }
namespace RBX { namespace Network { class Players : public RBX::Reflection::DescribedBase { }; } }
struct Arg { int header; int member; };
struct Holder {
    void apply(RBX::Network::Players* object, int* value);
    void invoke(RBX::Reflection::DescribedBase* source, Arg* arg);
};

void Holder::invoke(RBX::Reflection::DescribedBase* source, Arg* arg)
{
    RBX::Network::Players* object = dynamic_cast<RBX::Network::Players*>(source);
    if (!object)
        throw std::bad_cast("bad cast");
    apply(object, &arg->member);
}
