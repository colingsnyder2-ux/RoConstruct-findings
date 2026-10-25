// from server: 100% by tester
// roc 2008-06 004914f0  unit: RBX::Network::VPlayer::?$RefPropDescriptor  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004914f0
//
// 004914f0  8b442404             mov eax, dword ptr [esp + 4]
// 004914f4  83ec0c               sub esp, 0xc
// 004914f7  6a00                 push 0
// 004914f9  68402a9300           push 0x932a40
// 004914fe  68fc919200           push 0x9291fc
// 00491503  6a00                 push 0
// 00491505  50                   push eax
// 00491506  e8bb022100           call 0x6a17c6
// 0049150b  83c414               add esp, 0x14
// 0049150e  85c0                 test eax, eax
// 00491510  751e                 jne 0x491530
// 00491512  6834ba8000           push 0x80ba34
// 00491517  8d4c2404             lea ecx, [esp + 4]
// 0049151b  ff1564288000         call dword ptr [0x802864]
// 00491521  682c368d00           push 0x8d362c
// 00491526  8d4c2404             lea ecx, [esp + 4]
// 0049152a  51                   push ecx
// 0049152b  e85c002100           call 0x6a158c
// 00491530  83c40c               add esp, 0xc
// 00491533  c3                   ret 

#include <typeinfo>
namespace RBX { namespace Reflection { class DescribedBase { public: virtual ~DescribedBase(); }; } }
namespace RBX { class ModelInstance : public RBX::Reflection::DescribedBase { }; }
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

template RBX::ModelInstance* boost::polymorphic_cast<RBX::ModelInstance*, RBX::Reflection::DescribedBase>(RBX::Reflection::DescribedBase*);
