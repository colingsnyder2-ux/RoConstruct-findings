// roc 2012-06 009e4240  unit: CXTPDockingPane  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e4240
//
// 009e4240  56                   push esi
// 009e4241  8d442408             lea eax, [esp + 8]
// 009e4245  50                   push eax
// 009e4246  8bf1                 mov esi, ecx
// 009e4248  e8a355feff           call 0x9c97f0
// 009e424d  85c0                 test eax, eax
// 009e424f  7409                 je 0x9e425a
// 009e4251  b857000780           mov eax, 0x80070057
// 009e4256  5e                   pop esi
// 009e4257  c21400               ret 0x14
// 009e425a  8b442418             mov eax, dword ptr [esp + 0x18]
// 009e425e  b903000000           mov ecx, 3
// 009e4263  668908               mov word ptr [eax], cx
// 009e4266  c7400800002000       mov dword ptr [eax + 8], 0x200000
// 009e426d  8b4ed8               mov ecx, dword ptr [esi - 0x28]
// 009e4270  85c9                 test ecx, ecx
// 009e4272  7507                 jne 0x9e427b
// 009e4274  c7400800802000       mov dword ptr [eax + 8], 0x208000
// 009e427b  8b4ed8               mov ecx, dword ptr [esi - 0x28]
// 009e427e  85c9                 test ecx, ecx
// 009e4280  740f                 je 0x9e4291
// 009e4282  83c6a8               add esi, -0x58
// 009e4285  39b150010000         cmp dword ptr [ecx + 0x150], esi
// 009e428b  7504                 jne 0x9e4291
// 009e428d  83480802             or dword ptr [eax + 8], 2
// 009e4291  33c0                 xor eax, eax
// 009e4293  5e                   pop esi
// 009e4294  c21400               ret 0x14
// library xtp-11.2.2/Source\DockingPane\XTPDockingPane.cpp (function ?GetAccessibleState@CXTPDockingPane@@MAEJUtagVARIANT@@PAU2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPane.cpp
