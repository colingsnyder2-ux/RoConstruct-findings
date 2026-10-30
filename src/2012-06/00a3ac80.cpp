// roc 2012-06 00a3ac80  unit: CXTPDockingPaneTabbedContainer  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a3ac80
//
// 00a3ac80  56                   push esi
// 00a3ac81  8bf1                 mov esi, ecx
// 00a3ac83  8b4620               mov eax, dword ptr [esi + 0x20]
// 00a3ac86  85c0                 test eax, eax
// 00a3ac88  743e                 je 0xa3acc8
// 00a3ac8a  50                   push eax
// 00a3ac8b  ff15503ab200         call dword ptr [0xb23a50]
// 00a3ac91  50                   push eax
// 00a3ac92  e8cf79f4ff           call 0x982666
// 00a3ac97  50                   push eax
// 00a3ac98  e83387ffff           call 0xa333d0
// 00a3ac9d  50                   push eax
// 00a3ac9e  e84378f4ff           call 0x9824e6
// 00a3aca3  83c408               add esp, 8
// 00a3aca6  85c0                 test eax, eax
// 00a3aca8  751e                 jne 0xa3acc8
// 00a3acaa  83be0401000001       cmp dword ptr [esi + 0x104], 1
// 00a3acb1  7f0e                 jg 0xa3acc1
// 00a3acb3  8d4e54               lea ecx, [esi + 0x54]
// 00a3acb6  e8c5f4ffff           call 0xa3a180
// 00a3acbb  83783000             cmp dword ptr [eax + 0x30], 0
// 00a3acbf  7407                 je 0xa3acc8
// 00a3acc1  b801000000           mov eax, 1
// 00a3acc6  5e                   pop esi
// 00a3acc7  c3                   ret 
// 00a3acc8  33c0                 xor eax, eax
// 00a3acca  5e                   pop esi
// 00a3accb  c3                   ret 
// library xtp-15.2.1-shared-mfc/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?IsTabsVisible@CXTPDockingPaneTabbedContainer@@UBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
