// roc 2012-06 009e4200  unit: CXTPDockingPane  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e4200
//
// 009e4200  56                   push esi
// 009e4201  8b742418             mov esi, dword ptr [esp + 0x18]
// 009e4205  8d542408             lea edx, [esp + 8]
// 009e4209  33c0                 xor eax, eax
// 009e420b  52                   push edx
// 009e420c  668906               mov word ptr [esi], ax
// 009e420f  e8dc55feff           call 0x9c97f0
// 009e4214  85c0                 test eax, eax
// 009e4216  7515                 jne 0x9e422d
// 009e4218  b803000000           mov eax, 3
// 009e421d  668906               mov word ptr [esi], ax
// 009e4220  c7460825000000       mov dword ptr [esi + 8], 0x25
// 009e4227  33c0                 xor eax, eax
// 009e4229  5e                   pop esi
// 009e422a  c21400               ret 0x14
// 009e422d  b857000780           mov eax, 0x80070057
// 009e4232  5e                   pop esi
// 009e4233  c21400               ret 0x14
// library xtp-15.2.1/Source\DockingPane\XTPDockingPane.cpp (function ?GetAccessibleRole@CXTPDockingPane@@MAEJUtagVARIANT@@PAU2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPane.cpp
