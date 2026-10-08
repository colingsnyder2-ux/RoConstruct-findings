// from server: 100% by colin
// roc 2007-08 0060b230  unit: CXTCaptionButtonTheme  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0060b230
//
// 0060b230  8b4128               mov eax, dword ptr [ecx + 0x28]
// 0060b233  c7412800000000       mov dword ptr [ecx + 0x28], 0
// 0060b23a  c3                   ret 

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
