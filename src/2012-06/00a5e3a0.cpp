// roc 2012-06 00a5e3a0  unit: CXTColorHex  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a5e3a0
//
// 00a5e3a0  56                   push esi
// 00a5e3a1  8bf1                 mov esi, ecx
// 00a5e3a3  e8d83df2ff           call 0x982180
// 00a5e3a8  807e5c00             cmp byte ptr [esi + 0x5c], 0
// 00a5e3ac  740d                 je 0xa5e3bb
// 00a5e3ae  8b06                 mov eax, dword ptr [esi]
// 00a5e3b0  8b904c010000         mov edx, dword ptr [eax + 0x14c]
// 00a5e3b6  8bce                 mov ecx, esi
// 00a5e3b8  5e                   pop esi
// 00a5e3b9  ffe2                 jmp edx
// 00a5e3bb  5e                   pop esi
// 00a5e3bc  c3                   ret 
// library xtp-15.2.1-shared-mfc/Source\Controls\Dialog\XTPColorPageStandard.cpp (function ?PreSubclassWindow@CXTPColorHex@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/Controls/Dialog/XTPColorPageStandard.cpp
