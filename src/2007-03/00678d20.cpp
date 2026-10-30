// roc 2007-03 00678d20  unit: seg_00670000  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00678d20
//
// 00678d20  56                   push esi
// 00678d21  8bf1                 mov esi, ecx
// 00678d23  ff154cee7700         call dword ptr [0x77ee4c]
// 00678d29  8b8eb4000000         mov ecx, dword ptr [esi + 0xb4]
// 00678d2f  85c9                 test ecx, ecx
// 00678d31  5e                   pop esi
// 00678d32  7416                 je 0x678d4a
// 00678d34  3bc1                 cmp eax, ecx
// 00678d36  740c                 je 0x678d44
// 00678d38  50                   push eax
// 00678d39  51                   push ecx
// 00678d3a  ff1554ef7700         call dword ptr [0x77ef54]
// 00678d40  85c0                 test eax, eax
// 00678d42  7406                 je 0x678d4a
// 00678d44  b801000000           mov eax, 1
// 00678d49  c3                   ret 
// 00678d4a  33c0                 xor eax, eax
// 00678d4c  c3                   ret 
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPane.cpp (function ?IsFocus@CXTPDockingPane@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPane.cpp
