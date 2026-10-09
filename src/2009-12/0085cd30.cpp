// roc 2009-12 0085cd30  unit: CXTPDockingPane  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085cd30
//
// 0085cd30  56                   push esi
// 0085cd31  8d442408             lea eax, [esp + 8]
// 0085cd35  50                   push eax
// 0085cd36  8bf1                 mov esi, ecx
// 0085cd38  e863ecfdff           call 0x83b9a0
// 0085cd3d  85c0                 test eax, eax
// 0085cd3f  7409                 je 0x85cd4a
// 0085cd41  b857000780           mov eax, 0x80070057
// 0085cd46  5e                   pop esi
// 0085cd47  c21400               ret 0x14
// 0085cd4a  8b442418             mov eax, dword ptr [esp + 0x18]
// 0085cd4e  b903000000           mov ecx, 3
// 0085cd53  668908               mov word ptr [eax], cx
// 0085cd56  c7400800002000       mov dword ptr [eax + 8], 0x200000
// 0085cd5d  8b4ed8               mov ecx, dword ptr [esi - 0x28]
// 0085cd60  85c9                 test ecx, ecx
// 0085cd62  7507                 jne 0x85cd6b
// 0085cd64  c7400800802000       mov dword ptr [eax + 8], 0x208000
// 0085cd6b  8b4ed8               mov ecx, dword ptr [esi - 0x28]
// 0085cd6e  85c9                 test ecx, ecx
// 0085cd70  740f                 je 0x85cd81
// 0085cd72  83c6a8               add esi, -0x58
// 0085cd75  39b150010000         cmp dword ptr [ecx + 0x150], esi
// 0085cd7b  7504                 jne 0x85cd81
// 0085cd7d  83480802             or dword ptr [eax + 8], 2
// 0085cd81  33c0                 xor eax, eax
// 0085cd83  5e                   pop esi
// 0085cd84  c21400               ret 0x14
// library xtp-11.2.2/Source\DockingPane\XTPDockingPane.cpp (function ?GetAccessibleState@CXTPDockingPane@@MAEJUtagVARIANT@@PAU2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPane.cpp
