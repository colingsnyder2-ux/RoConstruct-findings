// from server: 100% by tester
// roc 2008-06 00632820  unit: RBX::VRocket::?$BoundFuncDesc  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00632820
//
// 00632820  8b442404             mov eax, dword ptr [esp + 4]
// 00632824  83ec0c               sub esp, 0xc
// 00632827  56                   push esi
// 00632828  6a00                 push 0
// 0063282a  68d0d79500           push 0x95d7d0
// 0063282f  68fc919200           push 0x9291fc
// 00632834  6a00                 push 0
// 00632836  50                   push eax
// 00632837  8bf1                 mov esi, ecx
// 00632839  e888ef0600           call 0x6a17c6
// 0063283e  83c414               add esp, 0x14
// 00632841  85c0                 test eax, eax
// 00632843  751e                 jne 0x632863
// 00632845  6834ba8000           push 0x80ba34
// 0063284a  8d4c2408             lea ecx, [esp + 8]
// 0063284e  ff1564288000         call dword ptr [0x802864]
// 00632854  682c368d00           push 0x8d362c
// 00632859  8d4c2408             lea ecx, [esp + 8]
// 0063285d  51                   push ecx
// 0063285e  e829ed0600           call 0x6a158c
// 00632863  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 00632866  8b5638               mov edx, dword ptr [esi + 0x38]
// 00632869  03c8                 add ecx, eax
// 0063286b  ffd2                 call edx
// 0063286d  5e                   pop esi
// 0063286e  83c40c               add esp, 0xc
// 00632871  c20800               ret 8

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

class Rocket : public Notifier, public Reflection::DescribedBase
{
};

template class Reflection::BoundFuncDesc<Rocket, void(), 0>;
}
