// from server: 100% by auto
// roc 2011-06 00901840  unit: CXTCaptionButtonTheme  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00901840
//
// 00901840  56                   push esi
// 00901841  8bf1                 mov esi, ecx
// 00901843  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00901847  8b06                 mov eax, dword ptr [esi]
// 00901849  8b502c               mov edx, dword ptr [eax + 0x2c]
// 0090184c  51                   push ecx
// 0090184d  8bce                 mov ecx, esi
// 0090184f  ffd2                 call edx
// 00901851  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00901855  8b06                 mov eax, dword ptr [esi]
// 00901857  8b503c               mov edx, dword ptr [eax + 0x3c]
// 0090185a  51                   push ecx
// 0090185b  8bce                 mov ecx, esi
// 0090185d  ffd2                 call edx
// 0090185f  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00901863  8b06                 mov eax, dword ptr [esi]
// 00901865  8b5034               mov edx, dword ptr [eax + 0x34]
// 00901868  51                   push ecx
// 00901869  8bce                 mov ecx, esi
// 0090186b  ffd2                 call edx
// 0090186d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00901871  8b06                 mov eax, dword ptr [esi]
// 00901873  8b5038               mov edx, dword ptr [eax + 0x38]
// 00901876  51                   push ecx
// 00901877  8bce                 mov ecx, esi
// 00901879  ffd2                 call edx
// 0090187b  5e                   pop esi
// 0090187c  c21000               ret 0x10
// library xtp-15.2.1/Source\Controls\Deprecated\XTButtonTheme.cpp (function ?SetAlternateColors@CXTButtonTheme@@UAEXKKKK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Deprecated/XTButtonTheme.cpp
