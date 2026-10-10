// roc 2008-06 00785db0  unit: CXTColorHex  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00785db0
//
// 00785db0  56                   push esi
// 00785db1  8bf1                 mov esi, ecx
// 00785db3  e834a9f1ff           call 0x6a06ec
// 00785db8  807e5c00             cmp byte ptr [esi + 0x5c], 0
// 00785dbc  740d                 je 0x785dcb
// 00785dbe  8b06                 mov eax, dword ptr [esi]
// 00785dc0  8b904c010000         mov edx, dword ptr [eax + 0x14c]
// 00785dc6  8bce                 mov ecx, esi
// 00785dc8  5e                   pop esi
// 00785dc9  ffe2                 jmp edx
// 00785dcb  5e                   pop esi
// 00785dcc  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\Controls\XTColorPageStandard.cpp (function ?PreSubclassWindow@CXTColorHex@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Controls/XTColorPageStandard.cpp
