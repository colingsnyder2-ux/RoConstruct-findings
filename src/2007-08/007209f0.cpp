// roc 2007-08 007209f0  unit: CXTCaptionButtonTheme  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007209f0
//
// 007209f0  56                   push esi
// 007209f1  8bf1                 mov esi, ecx
// 007209f3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007209f7  8b06                 mov eax, dword ptr [esi]
// 007209f9  8b502c               mov edx, dword ptr [eax + 0x2c]
// 007209fc  51                   push ecx
// 007209fd  8bce                 mov ecx, esi
// 007209ff  ffd2                 call edx
// 00720a01  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00720a05  8b06                 mov eax, dword ptr [esi]
// 00720a07  8b503c               mov edx, dword ptr [eax + 0x3c]
// 00720a0a  51                   push ecx
// 00720a0b  8bce                 mov ecx, esi
// 00720a0d  ffd2                 call edx
// 00720a0f  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00720a13  8b06                 mov eax, dword ptr [esi]
// 00720a15  8b5034               mov edx, dword ptr [eax + 0x34]
// 00720a18  51                   push ecx
// 00720a19  8bce                 mov ecx, esi
// 00720a1b  ffd2                 call edx
// 00720a1d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00720a21  8b06                 mov eax, dword ptr [esi]
// 00720a23  8b5038               mov edx, dword ptr [eax + 0x38]
// 00720a26  51                   push ecx
// 00720a27  8bce                 mov ecx, esi
// 00720a29  ffd2                 call edx
// 00720a2b  5e                   pop esi
// 00720a2c  c21000               ret 0x10
// library xtp-11.2.2-vc8/Source\Controls\XTButtonTheme.cpp (function ?SetAlternateColors@CXTButtonTheme@@UAEXKKKK@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTButtonTheme.cpp
