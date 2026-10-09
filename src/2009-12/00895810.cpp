// roc 2009-12 00895810  unit: CXTPRibbonBar  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00895810
//
// 00895810  83ec08               sub esp, 8
// 00895813  56                   push esi
// 00895814  8bf1                 mov esi, ecx
// 00895816  e8b5ecf6ff           call 0x8044d0
// 0089581b  83be0c01000000       cmp dword ptr [esi + 0x10c], 0
// 00895822  8d8e0c010000         lea ecx, [esi + 0x10c]
// 00895828  7527                 jne 0x895851
// 0089582a  83790400             cmp dword ptr [ecx + 4], 0
// 0089582e  7521                 jne 0x895851
// 00895830  8b4074               mov eax, dword ptr [eax + 0x74]
// 00895833  83c064               add eax, 0x64
// 00895836  833800               cmp dword ptr [eax], 0
// 00895839  7514                 jne 0x89584f
// 0089583b  83780400             cmp dword ptr [eax + 4], 0
// 0089583f  750e                 jne 0x89584f
// 00895841  6a00                 push 0
// 00895843  8d442408             lea eax, [esp + 8]
// 00895847  50                   push eax
// 00895848  8bce                 mov ecx, esi
// 0089584a  e841bef7ff           call 0x811690
// 0089584f  8bc8                 mov ecx, eax
// 00895851  8b11                 mov edx, dword ptr [ecx]
// 00895853  8b442410             mov eax, dword ptr [esp + 0x10]
// 00895857  8b4904               mov ecx, dword ptr [ecx + 4]
// 0089585a  8910                 mov dword ptr [eax], edx
// 0089585c  894804               mov dword ptr [eax + 4], ecx
// 0089585f  5e                   pop esi
// 00895860  83c408               add esp, 8
// 00895863  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?GetIconSize@CXTPRibbonBar@@UBE?AVCSize@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
