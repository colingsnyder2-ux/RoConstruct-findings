// roc 2007-03 006eb660  unit: seg_006e0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006eb660
//
// 006eb660  56                   push esi
// 006eb661  8bf1                 mov esi, ecx
// 006eb663  e8002bf3ff           call 0x61e168
// 006eb668  807e6400             cmp byte ptr [esi + 0x64], 0
// 006eb66c  740d                 je 0x6eb67b
// 006eb66e  8b06                 mov eax, dword ptr [esi]
// 006eb670  8b9044010000         mov edx, dword ptr [eax + 0x144]
// 006eb676  8bce                 mov ecx, esi
// 006eb678  5e                   pop esi
// 006eb679  ffe2                 jmp edx
// 006eb67b  5e                   pop esi
// 006eb67c  c3                   ret 
// copied from an identical function in another client (function ?func@CXTColorHex@ns_ROCX0000af@@QAEXXZ)

namespace ns_ROCX0000af {
struct CXTColorHex {
    void base();
    void func();
    char pad[0x64];
    char flag;
};

void CXTColorHex::func()
{
    base();
    if (flag != 0) {
        void (CXTColorHex::*p)() = *(void (CXTColorHex::**)())(*(char**)this + 0x144);
        (this->*p)();
    }
}
}
