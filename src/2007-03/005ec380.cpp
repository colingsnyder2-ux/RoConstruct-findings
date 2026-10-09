// roc 2007-03 005ec380  unit: seg_005e0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005ec380
//
// 005ec380  8b4128               mov eax, dword ptr [ecx + 0x28]
// 005ec383  c7412800000000       mov dword ptr [ecx + 0x28], 0
// 005ec38a  c3                   ret 
// copied from an identical function in another client (function ?ReleaseValue@CXTCaptionButtonTheme@ns_ROCX000007@@QAEHXZ)

namespace ns_ROCX000007 {
struct CXTCaptionButtonTheme {
    char pad[0x28];
    int value;

    int ReleaseValue();
};

int CXTCaptionButtonTheme::ReleaseValue() {
    int old = value;
    value = 0;
    return old;
}
}
