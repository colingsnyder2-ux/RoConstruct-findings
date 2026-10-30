// roc 2010-06 00864ee0  unit: CXTPDockingPaneAutoHidePanel  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00864ee0
//
// 00864ee0  56                   push esi
// 00864ee1  8bf1                 mov esi, ecx
// 00864ee3  83be9801000000       cmp dword ptr [esi + 0x198], 0
// 00864eea  7428                 je 0x864f14
// 00864eec  8b8ea4010000         mov ecx, dword ptr [esi + 0x1a4]
// 00864ef2  85c9                 test ecx, ecx
// 00864ef4  741e                 je 0x864f14
// 00864ef6  e855bcfaff           call 0x810b50
// 00864efb  a808                 test al, 8
// 00864efd  7515                 jne 0x864f14
// 00864eff  8d4e54               lea ecx, [esi + 0x54]
// 00864f02  e819faffff           call 0x864920
// 00864f07  83782c00             cmp dword ptr [eax + 0x2c], 0
// 00864f0b  7407                 je 0x864f14
// 00864f0d  b801000000           mov eax, 1
// 00864f12  5e                   pop esi
// 00864f13  c3                   ret 
// 00864f14  33c0                 xor eax, eax
// 00864f16  5e                   pop esi
// 00864f17  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?IsTitleVisible@CXTPDockingPaneTabbedContainer@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
