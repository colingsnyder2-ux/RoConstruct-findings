// roc 2008-06 007a1890  unit: CXTCaptionButtonTheme  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007a1890
//
// 007a1890  56                   push esi
// 007a1891  8bf1                 mov esi, ecx
// 007a1893  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007a1897  8b06                 mov eax, dword ptr [esi]
// 007a1899  8b502c               mov edx, dword ptr [eax + 0x2c]
// 007a189c  51                   push ecx
// 007a189d  8bce                 mov ecx, esi
// 007a189f  ffd2                 call edx
// 007a18a1  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007a18a5  8b06                 mov eax, dword ptr [esi]
// 007a18a7  8b503c               mov edx, dword ptr [eax + 0x3c]
// 007a18aa  51                   push ecx
// 007a18ab  8bce                 mov ecx, esi
// 007a18ad  ffd2                 call edx
// 007a18af  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007a18b3  8b06                 mov eax, dword ptr [esi]
// 007a18b5  8b5034               mov edx, dword ptr [eax + 0x34]
// 007a18b8  51                   push ecx
// 007a18b9  8bce                 mov ecx, esi
// 007a18bb  ffd2                 call edx
// 007a18bd  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007a18c1  8b06                 mov eax, dword ptr [esi]
// 007a18c3  8b5038               mov edx, dword ptr [eax + 0x38]
// 007a18c6  51                   push ecx
// 007a18c7  8bce                 mov ecx, esi
// 007a18c9  ffd2                 call edx
// 007a18cb  5e                   pop esi
// 007a18cc  c21000               ret 0x10
// library xtp-11.2.2/Source\Controls\XTButtonTheme.cpp (function ?SetAlternateColors@CXTButtonTheme@@UAEXKKKK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTButtonTheme.cpp
