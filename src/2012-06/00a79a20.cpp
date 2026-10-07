// roc 2012-06 00a79a20  unit: CXTCaptionButtonTheme  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a79a20
//
// 00a79a20  56                   push esi
// 00a79a21  8bf1                 mov esi, ecx
// 00a79a23  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00a79a27  8b06                 mov eax, dword ptr [esi]
// 00a79a29  8b502c               mov edx, dword ptr [eax + 0x2c]
// 00a79a2c  51                   push ecx
// 00a79a2d  8bce                 mov ecx, esi
// 00a79a2f  ffd2                 call edx
// 00a79a31  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00a79a35  8b06                 mov eax, dword ptr [esi]
// 00a79a37  8b503c               mov edx, dword ptr [eax + 0x3c]
// 00a79a3a  51                   push ecx
// 00a79a3b  8bce                 mov ecx, esi
// 00a79a3d  ffd2                 call edx
// 00a79a3f  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00a79a43  8b06                 mov eax, dword ptr [esi]
// 00a79a45  8b5034               mov edx, dword ptr [eax + 0x34]
// 00a79a48  51                   push ecx
// 00a79a49  8bce                 mov ecx, esi
// 00a79a4b  ffd2                 call edx
// 00a79a4d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00a79a51  8b06                 mov eax, dword ptr [esi]
// 00a79a53  8b5038               mov edx, dword ptr [eax + 0x38]
// 00a79a56  51                   push ecx
// 00a79a57  8bce                 mov ecx, esi
// 00a79a59  ffd2                 call edx
// 00a79a5b  5e                   pop esi
// 00a79a5c  c21000               ret 0x10
// library xtp-15.2.1/Source\Controls\Deprecated\XTButtonTheme.cpp (function ?SetAlternateColors@CXTButtonTheme@@UAEXKKKK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Deprecated/XTButtonTheme.cpp
