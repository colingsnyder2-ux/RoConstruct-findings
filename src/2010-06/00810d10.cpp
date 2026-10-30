// roc 2010-06 00810d10  unit: CXTPDockingPane  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00810d10
//
// 00810d10  56                   push esi
// 00810d11  8d442408             lea eax, [esp + 8]
// 00810d15  50                   push eax
// 00810d16  8bf1                 mov esi, ecx
// 00810d18  e8d3edfdff           call 0x7efaf0
// 00810d1d  85c0                 test eax, eax
// 00810d1f  7409                 je 0x810d2a
// 00810d21  b857000780           mov eax, 0x80070057
// 00810d26  5e                   pop esi
// 00810d27  c21400               ret 0x14
// 00810d2a  8b442418             mov eax, dword ptr [esp + 0x18]
// 00810d2e  b903000000           mov ecx, 3
// 00810d33  668908               mov word ptr [eax], cx
// 00810d36  c7400800002000       mov dword ptr [eax + 8], 0x200000
// 00810d3d  8b4ed8               mov ecx, dword ptr [esi - 0x28]
// 00810d40  85c9                 test ecx, ecx
// 00810d42  7507                 jne 0x810d4b
// 00810d44  c7400800802000       mov dword ptr [eax + 8], 0x208000
// 00810d4b  8b4ed8               mov ecx, dword ptr [esi - 0x28]
// 00810d4e  85c9                 test ecx, ecx
// 00810d50  740f                 je 0x810d61
// 00810d52  83c6a8               add esi, -0x58
// 00810d55  39b150010000         cmp dword ptr [ecx + 0x150], esi
// 00810d5b  7504                 jne 0x810d61
// 00810d5d  83480802             or dword ptr [eax + 8], 2
// 00810d61  33c0                 xor eax, eax
// 00810d63  5e                   pop esi
// 00810d64  c21400               ret 0x14
// library xtp-11.2.2/Source\DockingPane\XTPDockingPane.cpp (function ?GetAccessibleState@CXTPDockingPane@@MAEJUtagVARIANT@@PAU2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPane.cpp
