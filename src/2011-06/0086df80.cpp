// roc 2011-06 0086df80  unit: CXTPDockingPane  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0086df80
//
// 0086df80  56                   push esi
// 0086df81  8bf1                 mov esi, ecx
// 0086df83  ff15f819a400         call dword ptr [0xa419f8]
// 0086df89  8b8eb4000000         mov ecx, dword ptr [esi + 0xb4]
// 0086df8f  5e                   pop esi
// 0086df90  85c9                 test ecx, ecx
// 0086df92  7416                 je 0x86dfaa
// 0086df94  3bc1                 cmp eax, ecx
// 0086df96  740c                 je 0x86dfa4
// 0086df98  50                   push eax
// 0086df99  51                   push ecx
// 0086df9a  ff15081ca400         call dword ptr [0xa41c08]
// 0086dfa0  85c0                 test eax, eax
// 0086dfa2  7406                 je 0x86dfaa
// 0086dfa4  b801000000           mov eax, 1
// 0086dfa9  c3                   ret 
// 0086dfaa  33c0                 xor eax, eax
// 0086dfac  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPane.cpp (function ?IsFocus@CXTPDockingPane@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPane.cpp
