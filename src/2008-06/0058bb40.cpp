// from server: 100% by tester
// roc 2008-06 0058bb40  unit: RBX::VChangeHistoryService::?$BoundFuncDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0058bb40
//
// 0058bb40  8b442404             mov eax, dword ptr [esp + 4]
// 0058bb44  83ec0c               sub esp, 0xc
// 0058bb47  56                   push esi
// 0058bb48  6a00                 push 0
// 0058bb4a  68bc919400           push 0x9491bc
// 0058bb4f  68fc919200           push 0x9291fc
// 0058bb54  6a00                 push 0
// 0058bb56  50                   push eax
// 0058bb57  8bf1                 mov esi, ecx
// 0058bb59  e8685c1100           call 0x6a17c6
// 0058bb5e  83c414               add esp, 0x14
// 0058bb61  85c0                 test eax, eax
// 0058bb63  751e                 jne 0x58bb83
// 0058bb65  6834ba8000           push 0x80ba34
// 0058bb6a  8d4c2408             lea ecx, [esp + 8]
// 0058bb6e  ff1564288000         call dword ptr [0x802864]
// 0058bb74  682c368d00           push 0x8d362c
// 0058bb79  8d4c2408             lea ecx, [esp + 8]
// 0058bb7d  51                   push ecx
// 0058bb7e  e8095a1100           call 0x6a158c
// 0058bb83  8b542418             mov edx, dword ptr [esp + 0x18]
// 0058bb87  83c204               add edx, 4
// 0058bb8a  52                   push edx
// 0058bb8b  50                   push eax
// 0058bb8c  8bce                 mov ecx, esi
// 0058bb8e  e89dfaffff           call 0x58b630
// 0058bb93  5e                   pop esi
// 0058bb94  83c40c               add esp, 0xc
// 0058bb97  c20800               ret 8

#include <typeinfo>
namespace RBX { namespace Reflection { class DescribedBase { public: virtual ~DescribedBase(); }; } }
namespace RBX { class ChangeHistoryService : public RBX::Reflection::DescribedBase { }; }
struct Arg { int header; int member; };
struct Holder {
    void apply(RBX::ChangeHistoryService* object, int* value);
    void invoke(RBX::Reflection::DescribedBase* source, Arg* arg);
};

void Holder::invoke(RBX::Reflection::DescribedBase* source, Arg* arg)
{
    RBX::ChangeHistoryService* object = dynamic_cast<RBX::ChangeHistoryService*>(source);
    if (!object)
        throw std::bad_cast("bad cast");
    apply(object, &arg->member);
}
