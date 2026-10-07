// roc 2008-06 00707740  unit: CXTPDockingPane  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00707740
//
// 00707740  56                   push esi
// 00707741  8b742418             mov esi, dword ptr [esp + 0x18]
// 00707745  8d542408             lea edx, [esp + 8]
// 00707749  33c0                 xor eax, eax
// 0070774b  52                   push edx
// 0070774c  668906               mov word ptr [esi], ax
// 0070774f  e84c0bfeff           call 0x6e82a0
// 00707754  85c0                 test eax, eax
// 00707756  7515                 jne 0x70776d
// 00707758  b803000000           mov eax, 3
// 0070775d  668906               mov word ptr [esi], ax
// 00707760  c7460825000000       mov dword ptr [esi + 8], 0x25
// 00707767  33c0                 xor eax, eax
// 00707769  5e                   pop esi
// 0070776a  c21400               ret 0x14
// 0070776d  b857000780           mov eax, 0x80070057
// 00707772  5e                   pop esi
// 00707773  c21400               ret 0x14
// library xtp-11.2.2/Source\DockingPane\XTPDockingPane.cpp (function ?GetAccessibleRole@CXTPDockingPane@@MAEJUtagVARIANT@@PAU2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPane.cpp
