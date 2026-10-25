// from server: 100% by tester
// roc 2008-06 005a3cb0  unit: RBX::Workspace  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a3cb0
//
// 005a3cb0  8b442404             mov eax, dword ptr [esp + 4]
// 005a3cb4  83ec0c               sub esp, 0xc
// 005a3cb7  6a00                 push 0
// 005a3cb9  6854ab9300           push 0x93ab54
// 005a3cbe  68fc919200           push 0x9291fc
// 005a3cc3  6a00                 push 0
// 005a3cc5  50                   push eax
// 005a3cc6  e8fbda0f00           call 0x6a17c6
// 005a3ccb  83c414               add esp, 0x14
// 005a3cce  85c0                 test eax, eax
// 005a3cd0  751e                 jne 0x5a3cf0
// 005a3cd2  6834ba8000           push 0x80ba34
// 005a3cd7  8d4c2404             lea ecx, [esp + 4]
// 005a3cdb  ff1564288000         call dword ptr [0x802864]
// 005a3ce1  682c368d00           push 0x8d362c
// 005a3ce6  8d4c2404             lea ecx, [esp + 4]
// 005a3cea  51                   push ecx
// 005a3ceb  e89cd80f00           call 0x6a158c
// 005a3cf0  83c40c               add esp, 0xc
// 005a3cf3  c3                   ret 

#include <typeinfo>
namespace RBX { namespace Reflection { class DescribedBase { public: virtual ~DescribedBase(); }; } }
namespace RBX { class Camera : public RBX::Reflection::DescribedBase { }; }
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

template RBX::Camera* boost::polymorphic_cast<RBX::Camera*, RBX::Reflection::DescribedBase>(RBX::Reflection::DescribedBase*);
