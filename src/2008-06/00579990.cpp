// from server: 100% by tester
// roc 2008-06 00579990  unit: RBX::VDataModel::?$BoundFuncDesc  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00579990
//
// 00579990  8b442404             mov eax, dword ptr [esp + 4]
// 00579994  83ec0c               sub esp, 0xc
// 00579997  56                   push esi
// 00579998  6a00                 push 0
// 0057999a  68a0e89200           push 0x92e8a0
// 0057999f  68fc919200           push 0x9291fc
// 005799a4  6a00                 push 0
// 005799a6  50                   push eax
// 005799a7  8bf1                 mov esi, ecx
// 005799a9  e8187e1200           call 0x6a17c6
// 005799ae  83c414               add esp, 0x14
// 005799b1  85c0                 test eax, eax
// 005799b3  751e                 jne 0x5799d3
// 005799b5  6834ba8000           push 0x80ba34
// 005799ba  8d4c2408             lea ecx, [esp + 8]
// 005799be  ff1564288000         call dword ptr [0x802864]
// 005799c4  682c368d00           push 0x8d362c
// 005799c9  8d4c2408             lea ecx, [esp + 8]
// 005799cd  51                   push ecx
// 005799ce  e8b97b1200           call 0x6a158c
// 005799d3  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 005799d6  8b5638               mov edx, dword ptr [esi + 0x38]
// 005799d9  03c8                 add ecx, eax
// 005799db  ffd2                 call edx
// 005799dd  5e                   pop esi
// 005799de  83c40c               add esp, 0xc
// 005799e1  c20800               ret 8

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

class DataModel : public Notifier, public Reflection::DescribedBase
{
};

template class Reflection::BoundFuncDesc<DataModel, void(), 0>;
}
