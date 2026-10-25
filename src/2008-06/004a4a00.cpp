// from server: 100% by tester
// roc 2008-06 004a4a00  unit: RBX::Network::VServer::?$BoundFuncDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a4a00
//
// 004a4a00  8b442404             mov eax, dword ptr [esp + 4]
// 004a4a04  83ec0c               sub esp, 0xc
// 004a4a07  56                   push esi
// 004a4a08  6a00                 push 0
// 004a4a0a  68389b9300           push 0x939b38
// 004a4a0f  68fc919200           push 0x9291fc
// 004a4a14  6a00                 push 0
// 004a4a16  50                   push eax
// 004a4a17  8bf1                 mov esi, ecx
// 004a4a19  e8a8cd1f00           call 0x6a17c6
// 004a4a1e  83c414               add esp, 0x14
// 004a4a21  85c0                 test eax, eax
// 004a4a23  751e                 jne 0x4a4a43
// 004a4a25  6834ba8000           push 0x80ba34
// 004a4a2a  8d4c2408             lea ecx, [esp + 8]
// 004a4a2e  ff1564288000         call dword ptr [0x802864]
// 004a4a34  682c368d00           push 0x8d362c
// 004a4a39  8d4c2408             lea ecx, [esp + 8]
// 004a4a3d  51                   push ecx
// 004a4a3e  e849cb1f00           call 0x6a158c
// 004a4a43  8b542418             mov edx, dword ptr [esp + 0x18]
// 004a4a47  83c204               add edx, 4
// 004a4a4a  52                   push edx
// 004a4a4b  50                   push eax
// 004a4a4c  8bce                 mov ecx, esi
// 004a4a4e  e84dffffff           call 0x4a49a0
// 004a4a53  5e                   pop esi
// 004a4a54  83c40c               add esp, 0xc
// 004a4a57  c20800               ret 8

#include <typeinfo>
namespace RBX { namespace Reflection { class DescribedBase { public: virtual ~DescribedBase(); }; } }
namespace RBX { namespace Network { class Server : public RBX::Reflection::DescribedBase { }; } }
struct Arg { int header; int member; };
struct Holder {
    void apply(RBX::Network::Server* object, int* value);
    void invoke(RBX::Reflection::DescribedBase* source, Arg* arg);
};

void Holder::invoke(RBX::Reflection::DescribedBase* source, Arg* arg)
{
    RBX::Network::Server* object = dynamic_cast<RBX::Network::Server*>(source);
    if (!object)
        throw std::bad_cast("bad cast");
    apply(object, &arg->member);
}
