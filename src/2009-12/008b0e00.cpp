// roc 2009-12 008b0e00  unit: CXTPDockingPaneTabbedContainer  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b0e00
//
// 008b0e00  56                   push esi
// 008b0e01  8bf1                 mov esi, ecx
// 008b0e03  83be9801000000       cmp dword ptr [esi + 0x198], 0
// 008b0e0a  7428                 je 0x8b0e34
// 008b0e0c  8b8ea4010000         mov ecx, dword ptr [esi + 0x1a4]
// 008b0e12  85c9                 test ecx, ecx
// 008b0e14  741e                 je 0x8b0e34
// 008b0e16  e865bdfaff           call 0x85cb80
// 008b0e1b  a808                 test al, 8
// 008b0e1d  7515                 jne 0x8b0e34
// 008b0e1f  8d4e54               lea ecx, [esi + 0x54]
// 008b0e22  e829faffff           call 0x8b0850
// 008b0e27  83782c00             cmp dword ptr [eax + 0x2c], 0
// 008b0e2b  7407                 je 0x8b0e34
// 008b0e2d  b801000000           mov eax, 1
// 008b0e32  5e                   pop esi
// 008b0e33  c3                   ret 
// 008b0e34  33c0                 xor eax, eax
// 008b0e36  5e                   pop esi
// 008b0e37  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?IsTitleVisible@CXTPDockingPaneTabbedContainer@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
