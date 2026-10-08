// from server: 100% by auto
// roc 2008-06 0075da80  unit: CXTPDockingPaneAutoHidePanel  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0075da80
//
// 0075da80  56                   push esi
// 0075da81  8bf1                 mov esi, ecx
// 0075da83  83be9801000000       cmp dword ptr [esi + 0x198], 0
// 0075da8a  7428                 je 0x75dab4
// 0075da8c  8b8ea4010000         mov ecx, dword ptr [esi + 0x1a4]
// 0075da92  85c9                 test ecx, ecx
// 0075da94  741e                 je 0x75dab4
// 0075da96  e8459bfaff           call 0x7075e0
// 0075da9b  a808                 test al, 8
// 0075da9d  7515                 jne 0x75dab4
// 0075da9f  8d4e54               lea ecx, [esi + 0x54]
// 0075daa2  e809faffff           call 0x75d4b0
// 0075daa7  83782c00             cmp dword ptr [eax + 0x2c], 0
// 0075daab  7407                 je 0x75dab4
// 0075daad  b801000000           mov eax, 1
// 0075dab2  5e                   pop esi
// 0075dab3  c3                   ret 
// 0075dab4  33c0                 xor eax, eax
// 0075dab6  5e                   pop esi
// 0075dab7  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?IsTitleVisible@CXTPDockingPaneTabbedContainer@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
