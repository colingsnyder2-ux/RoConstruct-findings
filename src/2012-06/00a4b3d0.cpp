// from server: 100% by auto
// roc 2012-06 00a4b3d0  unit: CXTPTabManagerItem  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a4b3d0
//
// 00a4b3d0  83796000             cmp dword ptr [ecx + 0x60], 0
// 00a4b3d4  740a                 je 0xa4b3e0
// 00a4b3d6  8b4960               mov ecx, dword ptr [ecx + 0x60]
// 00a4b3d9  8b01                 mov eax, dword ptr [ecx]
// 00a4b3db  8b5004               mov edx, dword ptr [eax + 4]
// 00a4b3de  ffe2                 jmp edx
// 00a4b3e0  c3                   ret 
// library xtp-15.2.1/Source\TabManager\XTPTabManager.cpp (function ?Reposition@CXTPTabManagerItem@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/TabManager/XTPTabManager.cpp
