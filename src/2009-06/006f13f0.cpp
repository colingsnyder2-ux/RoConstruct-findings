// from server: 100% by auto
// roc 2009-06 006f13f0  unit: seg_006f0000  size: 135 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006f13f0
//
// 006f13f0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006f13f4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006f13f8  8b542410             mov edx, dword ptr [esp + 0x10]
// 006f13fc  56                   push esi
// 006f13fd  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006f1401  894638               mov dword ptr [esi + 0x38], eax
// 006f1404  b801000000           mov eax, 1
// 006f1409  894604               mov dword ptr [esi + 4], eax
// 006f140c  894608               mov dword ptr [esi + 8], eax
// 006f140f  8b463c               mov eax, dword ptr [esi + 0x3c]
// 006f1412  c646442e             mov byte ptr [esi + 0x44], 0x2e
// 006f1416  894e34               mov dword ptr [esi + 0x34], ecx
// 006f1419  c746201f010000       mov dword ptr [esi + 0x20], 0x11f
// 006f1420  c7463000000000       mov dword ptr [esi + 0x30], 0
// 006f1427  895640               mov dword ptr [esi + 0x40], edx
// 006f142a  8b5008               mov edx, dword ptr [eax + 8]
// 006f142d  8b00                 mov eax, dword ptr [eax]
// 006f142f  6a20                 push 0x20
// 006f1431  52                   push edx
// 006f1432  50                   push eax
// 006f1433  51                   push ecx
// 006f1434  e827c3ffff           call 0x6ed760
// 006f1439  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 006f143c  8901                 mov dword ptr [ecx], eax
// 006f143e  8b563c               mov edx, dword ptr [esi + 0x3c]
// 006f1441  c7420820000000       mov dword ptr [edx + 8], 0x20
// 006f1448  8b4638               mov eax, dword ptr [esi + 0x38]
// 006f144b  8b08                 mov ecx, dword ptr [eax]
// 006f144d  8d51ff               lea edx, [ecx - 1]
// 006f1450  83c410               add esp, 0x10
// 006f1453  8910                 mov dword ptr [eax], edx
// 006f1455  8b4638               mov eax, dword ptr [esi + 0x38]
// 006f1458  85c9                 test ecx, ecx
// 006f145a  760e                 jbe 0x6f146a
// 006f145c  8b4804               mov ecx, dword ptr [eax + 4]
// 006f145f  0fb611               movzx edx, byte ptr [ecx]
// 006f1462  41                   inc ecx
// 006f1463  894804               mov dword ptr [eax + 4], ecx
// 006f1466  8916                 mov dword ptr [esi], edx
// 006f1468  5e                   pop esi
// 006f1469  c3                   ret 
// 006f146a  50                   push eax
// 006f146b  e810bcffff           call 0x6ed080
// 006f1470  83c404               add esp, 4
// 006f1473  8906                 mov dword ptr [esi], eax
// 006f1475  5e                   pop esi
// 006f1476  c3                   ret 
// library lua-5.1.4/llex.c (function _luaX_setinput)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 llex.c
