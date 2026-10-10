// roc 2008-06 0074ec90  unit: PAVCXTPReportHyperlink::?$CXTPArrayT  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0074ec90
//
// 0074ec90  53                   push ebx
// 0074ec91  55                   push ebp
// 0074ec92  56                   push esi
// 0074ec93  57                   push edi
// 0074ec94  8bf9                 mov edi, ecx
// 0074ec96  8b07                 mov eax, dword ptr [edi]
// 0074ec98  8b5058               mov edx, dword ptr [eax + 0x58]
// 0074ec9b  ffd2                 call edx
// 0074ec9d  8bd8                 mov ebx, eax
// 0074ec9f  33f6                 xor esi, esi
// 0074eca1  85db                 test ebx, ebx
// 0074eca3  7e1e                 jle 0x74ecc3
// 0074eca5  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0074eca9  8da42400000000       lea esp, [esp]
// 0074ecb0  8b07                 mov eax, dword ptr [edi]
// 0074ecb2  8b5060               mov edx, dword ptr [eax + 0x60]
// 0074ecb5  56                   push esi
// 0074ecb6  8bcf                 mov ecx, edi
// 0074ecb8  ffd2                 call edx
// 0074ecba  3bc5                 cmp eax, ebp
// 0074ecbc  740f                 je 0x74eccd
// 0074ecbe  46                   inc esi
// 0074ecbf  3bf3                 cmp esi, ebx
// 0074ecc1  7ced                 jl 0x74ecb0
// 0074ecc3  5f                   pop edi
// 0074ecc4  5e                   pop esi
// 0074ecc5  5d                   pop ebp
// 0074ecc6  83c8ff               or eax, 0xffffffff
// 0074ecc9  5b                   pop ebx
// 0074ecca  c20400               ret 4
// 0074eccd  5f                   pop edi
// 0074ecce  8bc6                 mov eax, esi
// 0074ecd0  5e                   pop esi
// 0074ecd1  5d                   pop ebp
// 0074ecd2  5b                   pop ebx
// 0074ecd3  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\Calendar\XTPCalendarEventLabel.cpp (function ?FindElement@?$CXTPArrayT@IIJ@@UBEHI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Calendar/XTPCalendarEventLabel.cpp
