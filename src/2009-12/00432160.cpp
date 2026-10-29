// roc 2009-12 00432160  unit: _NVCXTPPropertyGridItemBool::?$XItem  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00432160
//
// 00432160  8b01                 mov eax, dword ptr [ecx]
// 00432162  8b90e8000000         mov edx, dword ptr [eax + 0xe8]
// 00432168  ffd2                 call edx
// 0043216a  85c0                 test eax, eax
// 0043216c  0f95c0               setne al
// 0043216f  c3                   ret 
// copied from an identical function in another client (function ?f@S@ns_ROCX000000@@QAEEXZ)

namespace ns_ROCX000000 {
// from server: 100% by tester
struct S
{
    unsigned char f();
};

unsigned char S::f()
{
    struct VTable
    {
        char pad[0xe8];
        int (__thiscall *method)(void *);
    };

    VTable **vtable = (VTable **)this;
    return vtable[0]->method(this) != 0;
}
}
