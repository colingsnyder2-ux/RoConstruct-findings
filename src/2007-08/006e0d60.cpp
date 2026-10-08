// from server: 100% by auto
// roc 2007-08 006e0d60  unit: CXTPDockingPaneTabbedContainer  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006e0d60
//
// 006e0d60  56                   push esi
// 006e0d61  8b742418             mov esi, dword ptr [esp + 0x18]
// 006e0d65  8d442408             lea eax, [esp + 8]
// 006e0d69  50                   push eax
// 006e0d6a  66c7060000           mov word ptr [esi], 0
// 006e0d6f  e85c06f9ff           call 0x6713d0
// 006e0d74  85c0                 test eax, eax
// 006e0d76  7510                 jne 0x6e0d88
// 006e0d78  66c7060300           mov word ptr [esi], 3
// 006e0d7d  c746083c000000       mov dword ptr [esi + 8], 0x3c
// 006e0d84  5e                   pop esi
// 006e0d85  c21400               ret 0x14
// 006e0d88  b857000780           mov eax, 0x80070057
// 006e0d8d  5e                   pop esi
// 006e0d8e  c21400               ret 0x14
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?GetAccessibleRole@CXTPDockingPaneTabbedContainer@@MAEJUtagVARIANT@@PAU2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
