// roc 2007-03 006797a0  unit: seg_00670000  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006797a0
//
// 006797a0  56                   push esi
// 006797a1  8bf1                 mov esi, ecx
// 006797a3  8b86b4000000         mov eax, dword ptr [esi + 0xb4]
// 006797a9  85c0                 test eax, eax
// 006797ab  7436                 je 0x6797e3
// 006797ad  6a00                 push 0
// 006797af  50                   push eax
// 006797b0  ff1510ee7700         call dword ptr [0x77ee10]
// 006797b6  8d4e20               lea ecx, [esi + 0x20]
// 006797b9  e862fd0400           call 0x6c9520
// 006797be  8b80cc000000         mov eax, dword ptr [eax + 0xcc]
// 006797c4  85c0                 test eax, eax
// 006797c6  7403                 je 0x6797cb
// 006797c8  8b4020               mov eax, dword ptr [eax + 0x20]
// 006797cb  50                   push eax
// 006797cc  8b86b4000000         mov eax, dword ptr [esi + 0xb4]
// 006797d2  50                   push eax
// 006797d3  ff1574ef7700         call dword ptr [0x77ef74]
// 006797d9  c786b400000000000000 mov dword ptr [esi + 0xb4], 0
// 006797e3  8d4e20               lea ecx, [esi + 0x20]
// 006797e6  e835fd0400           call 0x6c9520
// 006797eb  8bc8                 mov ecx, eax
// 006797ed  5e                   pop esi
// 006797ee  e9bd1efeff           jmp 0x65b6b0
// library xtp-11.2.2/Source\DockingPane\XTPDockingPane.cpp (function ?Detach@CXTPDockingPane@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPane.cpp
