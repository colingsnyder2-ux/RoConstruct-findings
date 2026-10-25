// from server: 100% by tester
// roc 2008-06 004b4110  unit: RBX::Network::VReplicator::?$BoundFuncDesc  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b4110
//
// 004b4110  8b442404             mov eax, dword ptr [esp + 4]
// 004b4114  83ec0c               sub esp, 0xc
// 004b4117  56                   push esi
// 004b4118  6a00                 push 0
// 004b411a  68b48d9300           push 0x938db4
// 004b411f  68fc919200           push 0x9291fc
// 004b4124  6a00                 push 0
// 004b4126  50                   push eax
// 004b4127  8bf1                 mov esi, ecx
// 004b4129  e898d61e00           call 0x6a17c6
// 004b412e  83c414               add esp, 0x14
// 004b4131  85c0                 test eax, eax
// 004b4133  751e                 jne 0x4b4153
// 004b4135  6834ba8000           push 0x80ba34
// 004b413a  8d4c2408             lea ecx, [esp + 8]
// 004b413e  ff1564288000         call dword ptr [0x802864]
// 004b4144  682c368d00           push 0x8d362c
// 004b4149  8d4c2408             lea ecx, [esp + 8]
// 004b414d  51                   push ecx
// 004b414e  e839d41e00           call 0x6a158c
// 004b4153  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 004b4156  8b5638               mov edx, dword ptr [esi + 0x38]
// 004b4159  03c8                 add ecx, eax
// 004b415b  ffd2                 call edx
// 004b415d  5e                   pop esi
// 004b415e  83c40c               add esp, 0xc
// 004b4161  c20800               ret 8

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
class Replicator : public Notifier, public Reflection::DescribedBase
{
};
}
template class Reflection::BoundFuncDesc<Network::Replicator, void(), 0>;
}
