// from server: 100% by tester
// roc 2008-06 00492a90  unit: RBX::Network::VPlayer::?$FactoryProduct  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00492a90
//
// 00492a90  8b442404             mov eax, dword ptr [esp + 4]
// 00492a94  83ec0c               sub esp, 0xc
// 00492a97  6a00                 push 0
// 00492a99  6860749300           push 0x937460
// 00492a9e  68fc919200           push 0x9291fc
// 00492aa3  6a00                 push 0
// 00492aa5  50                   push eax
// 00492aa6  e81bed2000           call 0x6a17c6
// 00492aab  83c414               add esp, 0x14
// 00492aae  85c0                 test eax, eax
// 00492ab0  751e                 jne 0x492ad0
// 00492ab2  6834ba8000           push 0x80ba34
// 00492ab7  8d4c2404             lea ecx, [esp + 4]
// 00492abb  ff1564288000         call dword ptr [0x802864]
// 00492ac1  682c368d00           push 0x8d362c
// 00492ac6  8d4c2404             lea ecx, [esp + 4]
// 00492aca  51                   push ecx
// 00492acb  e8bcea2000           call 0x6a158c
// 00492ad0  83c40c               add esp, 0xc
// 00492ad3  c3                   ret 

#include <typeinfo>
namespace RBX { namespace Reflection { class DescribedBase { public: virtual ~DescribedBase(); }; } }
namespace RBX { namespace Network { class Player : public RBX::Reflection::DescribedBase { }; } }
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

template RBX::Network::Player* boost::polymorphic_cast<RBX::Network::Player*, RBX::Reflection::DescribedBase>(RBX::Reflection::DescribedBase*);
