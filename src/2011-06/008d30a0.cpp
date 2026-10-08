// from server: 100% by auto
// roc 2011-06 008d30a0  unit: CXTPTabManagerItem  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d30a0
//
// 008d30a0  83796000             cmp dword ptr [ecx + 0x60], 0
// 008d30a4  740a                 je 0x8d30b0
// 008d30a6  8b4960               mov ecx, dword ptr [ecx + 0x60]
// 008d30a9  8b01                 mov eax, dword ptr [ecx]
// 008d30ab  8b5004               mov edx, dword ptr [eax + 4]
// 008d30ae  ffe2                 jmp edx
// 008d30b0  c3                   ret 
// library xtp-15.2.1/Source\TabManager\XTPTabManager.cpp (function ?Reposition@CXTPTabManagerItem@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/TabManager/XTPTabManager.cpp
