// from server: 100% by tester
// roc 2008-06 00585910  unit: RBX::VModelInstance::?$BoundFuncDesc  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00585910
//
// 00585910  8b442404             mov eax, dword ptr [esp + 4]
// 00585914  83ec0c               sub esp, 0xc
// 00585917  56                   push esi
// 00585918  6a00                 push 0
// 0058591a  68402a9300           push 0x932a40
// 0058591f  68fc919200           push 0x9291fc
// 00585924  6a00                 push 0
// 00585926  50                   push eax
// 00585927  8bf1                 mov esi, ecx
// 00585929  e898be1100           call 0x6a17c6
// 0058592e  83c414               add esp, 0x14
// 00585931  85c0                 test eax, eax
// 00585933  751e                 jne 0x585953
// 00585935  6834ba8000           push 0x80ba34
// 0058593a  8d4c2408             lea ecx, [esp + 8]
// 0058593e  ff1564288000         call dword ptr [0x802864]
// 00585944  682c368d00           push 0x8d362c
// 00585949  8d4c2408             lea ecx, [esp + 8]
// 0058594d  51                   push ecx
// 0058594e  e839bc1100           call 0x6a158c
// 00585953  8b9034010000         mov edx, dword ptr [eax + 0x134]
// 00585959  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 0058595c  8b140a               mov edx, dword ptr [edx + ecx]
// 0058595f  03563c               add edx, dword ptr [esi + 0x3c]
// 00585962  8d8c0234010000       lea ecx, [edx + eax + 0x134]
// 00585969  8b4638               mov eax, dword ptr [esi + 0x38]
// 0058596c  ffd0                 call eax
// 0058596e  5e                   pop esi
// 0058596f  83c40c               add esp, 0xc
// 00585972  c20800               ret 8

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

class PVInstance : public Notifier, public Reflection::DescribedBase
{
    char data[0x12c];
};

class IModelModifier { public: virtual ~IModelModifier(); };

class ModelInstance : public PVInstance, public virtual IModelModifier
{
};

template class Reflection::BoundFuncDesc<ModelInstance, void(), 0>;
}
