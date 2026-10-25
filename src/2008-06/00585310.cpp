// from server: 100% by tester
// roc 2008-06 00585310  unit: RBX::ModelInstance  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00585310
//
// 00585310  8b442404             mov eax, dword ptr [esp + 4]
// 00585314  83ec0c               sub esp, 0xc
// 00585317  6a00                 push 0
// 00585319  6850dd9200           push 0x92dd50
// 0058531e  68fc919200           push 0x9291fc
// 00585323  6a00                 push 0
// 00585325  50                   push eax
// 00585326  e89bc41100           call 0x6a17c6
// 0058532b  83c414               add esp, 0x14
// 0058532e  85c0                 test eax, eax
// 00585330  751e                 jne 0x585350
// 00585332  6834ba8000           push 0x80ba34
// 00585337  8d4c2404             lea ecx, [esp + 4]
// 0058533b  ff1564288000         call dword ptr [0x802864]
// 00585341  682c368d00           push 0x8d362c
// 00585346  8d4c2404             lea ecx, [esp + 4]
// 0058534a  51                   push ecx
// 0058534b  e83cc21100           call 0x6a158c
// 00585350  83c40c               add esp, 0xc
// 00585353  c3                   ret 

#include <typeinfo>
namespace RBX { namespace Reflection { class DescribedBase { public: virtual ~DescribedBase(); }; } }
namespace RBX { class PartInstance : public RBX::Reflection::DescribedBase { }; }
namespace boost {
template<class Target, class Source>
Target polymorphic_cast(Source* x)
{
    Target tmp = dynamic_cast<Target>(x);
    if (tmp == 0)
        throw std::bad_cast("bad cast");
    return tmp;
}
}

template RBX::PartInstance* boost::polymorphic_cast<RBX::PartInstance*, RBX::Reflection::DescribedBase>(RBX::Reflection::DescribedBase*);
