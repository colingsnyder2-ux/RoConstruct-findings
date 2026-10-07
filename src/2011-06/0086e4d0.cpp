// roc 2011-06 0086e4d0  unit: CXTPDockingPane  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0086e4d0
//
// 0086e4d0  56                   push esi
// 0086e4d1  8b742418             mov esi, dword ptr [esp + 0x18]
// 0086e4d5  8d542408             lea edx, [esp + 8]
// 0086e4d9  33c0                 xor eax, eax
// 0086e4db  52                   push edx
// 0086e4dc  668906               mov word ptr [esi], ax
// 0086e4df  e84c2efeff           call 0x851330
// 0086e4e4  85c0                 test eax, eax
// 0086e4e6  7515                 jne 0x86e4fd
// 0086e4e8  b803000000           mov eax, 3
// 0086e4ed  668906               mov word ptr [esi], ax
// 0086e4f0  c7460825000000       mov dword ptr [esi + 8], 0x25
// 0086e4f7  33c0                 xor eax, eax
// 0086e4f9  5e                   pop esi
// 0086e4fa  c21400               ret 0x14
// 0086e4fd  b857000780           mov eax, 0x80070057
// 0086e502  5e                   pop esi
// 0086e503  c21400               ret 0x14
// library xtp-15.2.1/Source\DockingPane\XTPDockingPane.cpp (function ?GetAccessibleRole@CXTPDockingPane@@MAEJUtagVARIANT@@PAU2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPane.cpp
