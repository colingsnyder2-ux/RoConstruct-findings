// from server: 100% by tester
// roc 2008-06 005d6680  unit: RBX::VTeams::?$BoundFuncDesc  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d6680
//
// 005d6680  8b442404             mov eax, dword ptr [esp + 4]
// 005d6684  83ec0c               sub esp, 0xc
// 005d6687  56                   push esi
// 005d6688  6a00                 push 0
// 005d668a  68e0559400           push 0x9455e0
// 005d668f  68fc919200           push 0x9291fc
// 005d6694  6a00                 push 0
// 005d6696  50                   push eax
// 005d6697  8bf1                 mov esi, ecx
// 005d6699  e828b10c00           call 0x6a17c6
// 005d669e  83c414               add esp, 0x14
// 005d66a1  85c0                 test eax, eax
// 005d66a3  751e                 jne 0x5d66c3
// 005d66a5  6834ba8000           push 0x80ba34
// 005d66aa  8d4c2408             lea ecx, [esp + 8]
// 005d66ae  ff1564288000         call dword ptr [0x802864]
// 005d66b4  682c368d00           push 0x8d362c
// 005d66b9  8d4c2408             lea ecx, [esp + 8]
// 005d66bd  51                   push ecx
// 005d66be  e8c9ae0c00           call 0x6a158c
// 005d66c3  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 005d66c6  8b5638               mov edx, dword ptr [esi + 0x38]
// 005d66c9  03c8                 add ecx, eax
// 005d66cb  ffd2                 call edx
// 005d66cd  5e                   pop esi
// 005d66ce  83c40c               add esp, 0xc
// 005d66d1  c20800               ret 8

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

class Teams : public Notifier, public Reflection::DescribedBase
{
};

template class Reflection::BoundFuncDesc<Teams, void(), 0>;
}
