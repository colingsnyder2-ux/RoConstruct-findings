// from server: 100% by auto
// roc 2008-06 0077acb0  unit: CXTPTabManagerItem  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0077acb0
//
// 0077acb0  83796000             cmp dword ptr [ecx + 0x60], 0
// 0077acb4  740a                 je 0x77acc0
// 0077acb6  8b4960               mov ecx, dword ptr [ecx + 0x60]
// 0077acb9  8b01                 mov eax, dword ptr [ecx]
// 0077acbb  8b5004               mov edx, dword ptr [eax + 4]
// 0077acbe  ffe2                 jmp edx
// 0077acc0  c3                   ret 
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?Reposition@CXTPTabManagerItem@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
