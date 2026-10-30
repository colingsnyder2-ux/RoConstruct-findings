// roc 2012-06 00a62610  unit: CXTColorBase  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a62610
//
// 00a62610  56                   push esi
// 00a62611  8bf1                 mov esi, ecx
// 00a62613  e868fbf1ff           call 0x982180
// 00a62618  807e5400             cmp byte ptr [esi + 0x54], 0
// 00a6261c  740d                 je 0xa6262b
// 00a6261e  8b06                 mov eax, dword ptr [esi]
// 00a62620  8b9050010000         mov edx, dword ptr [eax + 0x150]
// 00a62626  8bce                 mov ecx, esi
// 00a62628  5e                   pop esi
// 00a62629  ffe2                 jmp edx
// 00a6262b  5e                   pop esi
// 00a6262c  c3                   ret 
// library xtp-15.2.1-shared-mfc/Source\Controls\Dialog\XTPColorPageCustom.cpp (function ?PreSubclassWindow@CXTPColorBase@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/Controls/Dialog/XTPColorPageCustom.cpp
