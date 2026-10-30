// roc 2009-06 00781cd0  unit: CXTPDockingPane  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00781cd0
//
// 00781cd0  56                   push esi
// 00781cd1  8d442408             lea eax, [esp + 8]
// 00781cd5  50                   push eax
// 00781cd6  8bf1                 mov esi, ecx
// 00781cd8  e8f3eefdff           call 0x760bd0
// 00781cdd  85c0                 test eax, eax
// 00781cdf  7409                 je 0x781cea
// 00781ce1  b857000780           mov eax, 0x80070057
// 00781ce6  5e                   pop esi
// 00781ce7  c21400               ret 0x14
// 00781cea  8b442418             mov eax, dword ptr [esp + 0x18]
// 00781cee  b903000000           mov ecx, 3
// 00781cf3  668908               mov word ptr [eax], cx
// 00781cf6  c7400800002000       mov dword ptr [eax + 8], 0x200000
// 00781cfd  8b4ed8               mov ecx, dword ptr [esi - 0x28]
// 00781d00  85c9                 test ecx, ecx
// 00781d02  7507                 jne 0x781d0b
// 00781d04  c7400800802000       mov dword ptr [eax + 8], 0x208000
// 00781d0b  8b4ed8               mov ecx, dword ptr [esi - 0x28]
// 00781d0e  85c9                 test ecx, ecx
// 00781d10  740f                 je 0x781d21
// 00781d12  83c6a8               add esi, -0x58
// 00781d15  39b150010000         cmp dword ptr [ecx + 0x150], esi
// 00781d1b  7504                 jne 0x781d21
// 00781d1d  83480802             or dword ptr [eax + 8], 2
// 00781d21  33c0                 xor eax, eax
// 00781d23  5e                   pop esi
// 00781d24  c21400               ret 0x14
// library xtp-11.2.2/Source\DockingPane\XTPDockingPane.cpp (function ?GetAccessibleState@CXTPDockingPane@@MAEJUtagVARIANT@@PAU2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPane.cpp
