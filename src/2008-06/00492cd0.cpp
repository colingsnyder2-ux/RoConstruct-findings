// from server: 100% by tester
// roc 2008-06 00492cd0  unit: RBX::Network::VPlayer::?$BoundFuncDesc  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00492cd0
//
// 00492cd0  8b442404             mov eax, dword ptr [esp + 4]
// 00492cd4  83ec0c               sub esp, 0xc
// 00492cd7  56                   push esi
// 00492cd8  6a00                 push 0
// 00492cda  6860749300           push 0x937460
// 00492cdf  68fc919200           push 0x9291fc
// 00492ce4  6a00                 push 0
// 00492ce6  50                   push eax
// 00492ce7  8bf1                 mov esi, ecx
// 00492ce9  e8d8ea2000           call 0x6a17c6
// 00492cee  83c414               add esp, 0x14
// 00492cf1  85c0                 test eax, eax
// 00492cf3  751e                 jne 0x492d13
// 00492cf5  6834ba8000           push 0x80ba34
// 00492cfa  8d4c2408             lea ecx, [esp + 8]
// 00492cfe  ff1564288000         call dword ptr [0x802864]
// 00492d04  682c368d00           push 0x8d362c
// 00492d09  8d4c2408             lea ecx, [esp + 8]
// 00492d0d  51                   push ecx
// 00492d0e  e879e82000           call 0x6a158c
// 00492d13  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 00492d16  8b5638               mov edx, dword ptr [esi + 0x38]
// 00492d19  03c8                 add ecx, eax
// 00492d1b  ffd2                 call edx
// 00492d1d  5e                   pop esi
// 00492d1e  83c40c               add esp, 0xc
// 00492d21  c20800               ret 8

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
namespace Network {
class Player : public Notifier, public Reflection::DescribedBase
{
};
}
template class Reflection::BoundFuncDesc<Network::Player, void(), 0>;
}
