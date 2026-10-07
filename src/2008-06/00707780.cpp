// roc 2008-06 00707780  unit: CXTPDockingPane  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00707780
//
// 00707780  56                   push esi
// 00707781  8d442408             lea eax, [esp + 8]
// 00707785  50                   push eax
// 00707786  8bf1                 mov esi, ecx
// 00707788  e8130bfeff           call 0x6e82a0
// 0070778d  85c0                 test eax, eax
// 0070778f  7409                 je 0x70779a
// 00707791  b857000780           mov eax, 0x80070057
// 00707796  5e                   pop esi
// 00707797  c21400               ret 0x14
// 0070779a  8b442418             mov eax, dword ptr [esp + 0x18]
// 0070779e  b903000000           mov ecx, 3
// 007077a3  668908               mov word ptr [eax], cx
// 007077a6  c7400800002000       mov dword ptr [eax + 8], 0x200000
// 007077ad  8b4ed8               mov ecx, dword ptr [esi - 0x28]
// 007077b0  85c9                 test ecx, ecx
// 007077b2  7507                 jne 0x7077bb
// 007077b4  c7400800802000       mov dword ptr [eax + 8], 0x208000
// 007077bb  8b4ed8               mov ecx, dword ptr [esi - 0x28]
// 007077be  85c9                 test ecx, ecx
// 007077c0  740f                 je 0x7077d1
// 007077c2  83c6a8               add esi, -0x58
// 007077c5  39b150010000         cmp dword ptr [ecx + 0x150], esi
// 007077cb  7504                 jne 0x7077d1
// 007077cd  83480802             or dword ptr [eax + 8], 2
// 007077d1  33c0                 xor eax, eax
// 007077d3  5e                   pop esi
// 007077d4  c21400               ret 0x14
// library xtp-11.2.2/Source\DockingPane\XTPDockingPane.cpp (function ?GetAccessibleState@CXTPDockingPane@@MAEJUtagVARIANT@@PAU2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPane.cpp
