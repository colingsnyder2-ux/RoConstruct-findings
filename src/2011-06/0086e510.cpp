// roc 2011-06 0086e510  unit: CXTPDockingPane  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0086e510
//
// 0086e510  56                   push esi
// 0086e511  8d442408             lea eax, [esp + 8]
// 0086e515  50                   push eax
// 0086e516  8bf1                 mov esi, ecx
// 0086e518  e8132efeff           call 0x851330
// 0086e51d  85c0                 test eax, eax
// 0086e51f  7409                 je 0x86e52a
// 0086e521  b857000780           mov eax, 0x80070057
// 0086e526  5e                   pop esi
// 0086e527  c21400               ret 0x14
// 0086e52a  8b442418             mov eax, dword ptr [esp + 0x18]
// 0086e52e  b903000000           mov ecx, 3
// 0086e533  668908               mov word ptr [eax], cx
// 0086e536  c7400800002000       mov dword ptr [eax + 8], 0x200000
// 0086e53d  8b4ed8               mov ecx, dword ptr [esi - 0x28]
// 0086e540  85c9                 test ecx, ecx
// 0086e542  7507                 jne 0x86e54b
// 0086e544  c7400800802000       mov dword ptr [eax + 8], 0x208000
// 0086e54b  8b4ed8               mov ecx, dword ptr [esi - 0x28]
// 0086e54e  85c9                 test ecx, ecx
// 0086e550  740f                 je 0x86e561
// 0086e552  83c6a8               add esi, -0x58
// 0086e555  39b150010000         cmp dword ptr [ecx + 0x150], esi
// 0086e55b  7504                 jne 0x86e561
// 0086e55d  83480802             or dword ptr [eax + 8], 2
// 0086e561  33c0                 xor eax, eax
// 0086e563  5e                   pop esi
// 0086e564  c21400               ret 0x14
// library xtp-11.2.2/Source\DockingPane\XTPDockingPane.cpp (function ?GetAccessibleState@CXTPDockingPane@@MAEJUtagVARIANT@@PAU2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPane.cpp
