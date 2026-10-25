// from server: 100% by tester
// roc 2008-06 0058b090  unit: RBX::VChangeHistoryService::?$BoundFuncDesc  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0058b090
//
// 0058b090  8b442404             mov eax, dword ptr [esp + 4]
// 0058b094  83ec0c               sub esp, 0xc
// 0058b097  56                   push esi
// 0058b098  6a00                 push 0
// 0058b09a  68bc919400           push 0x9491bc
// 0058b09f  68fc919200           push 0x9291fc
// 0058b0a4  6a00                 push 0
// 0058b0a6  50                   push eax
// 0058b0a7  8bf1                 mov esi, ecx
// 0058b0a9  e818671100           call 0x6a17c6
// 0058b0ae  83c414               add esp, 0x14
// 0058b0b1  85c0                 test eax, eax
// 0058b0b3  751e                 jne 0x58b0d3
// 0058b0b5  6834ba8000           push 0x80ba34
// 0058b0ba  8d4c2408             lea ecx, [esp + 8]
// 0058b0be  ff1564288000         call dword ptr [0x802864]
// 0058b0c4  682c368d00           push 0x8d362c
// 0058b0c9  8d4c2408             lea ecx, [esp + 8]
// 0058b0cd  51                   push ecx
// 0058b0ce  e8b9641100           call 0x6a158c
// 0058b0d3  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 0058b0d6  8b5638               mov edx, dword ptr [esi + 0x38]
// 0058b0d9  03c8                 add ecx, eax
// 0058b0db  ffd2                 call edx
// 0058b0dd  5e                   pop esi
// 0058b0de  83c40c               add esp, 0xc
// 0058b0e1  c20800               ret 8

#include <typeinfo>

namespace RBX {
namespace Reflection {
class DescribedBase
{
public:
    virtual ~DescribedBase();
};

class FunctionDescriptor
{
public:
    class Arguments;
    virtual void execute(DescribedBase* object, Arguments& arguments) const = 0;
};

template<class Class, typename Function, int Unknown>
class BoundFuncDesc : public FunctionDescriptor
{
    char data[0x34];
    void (Class::*function)();
public:
    virtual void execute(DescribedBase* object, Arguments& arguments) const
    {
        Class* o = dynamic_cast<Class*>(object);
        if (!o)
            throw std::bad_cast();
        (o->*function)();
    }
};
}

class Notifier { public: virtual ~Notifier(); };

class ChangeHistoryService : public Notifier, public Reflection::DescribedBase
{
};

template class Reflection::BoundFuncDesc<ChangeHistoryService, void(), 0>;
}
