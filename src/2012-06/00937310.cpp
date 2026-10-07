// roc 2012-06 00937310  unit: seg_00930000  size: 135 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00937310
//
// 00937310  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00937314  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00937318  8b542410             mov edx, dword ptr [esp + 0x10]
// 0093731c  56                   push esi
// 0093731d  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00937321  894638               mov dword ptr [esi + 0x38], eax
// 00937324  b801000000           mov eax, 1
// 00937329  894604               mov dword ptr [esi + 4], eax
// 0093732c  894608               mov dword ptr [esi + 8], eax
// 0093732f  8b463c               mov eax, dword ptr [esi + 0x3c]
// 00937332  c646442e             mov byte ptr [esi + 0x44], 0x2e
// 00937336  894e34               mov dword ptr [esi + 0x34], ecx
// 00937339  c746201f010000       mov dword ptr [esi + 0x20], 0x11f
// 00937340  c7463000000000       mov dword ptr [esi + 0x30], 0
// 00937347  895640               mov dword ptr [esi + 0x40], edx
// 0093734a  8b5008               mov edx, dword ptr [eax + 8]
// 0093734d  8b00                 mov eax, dword ptr [eax]
// 0093734f  6a20                 push 0x20
// 00937351  52                   push edx
// 00937352  50                   push eax
// 00937353  51                   push ecx
// 00937354  e807fcffff           call 0x936f60
// 00937359  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 0093735c  8901                 mov dword ptr [ecx], eax
// 0093735e  8b563c               mov edx, dword ptr [esi + 0x3c]
// 00937361  c7420820000000       mov dword ptr [edx + 8], 0x20
// 00937368  8b4638               mov eax, dword ptr [esi + 0x38]
// 0093736b  8b08                 mov ecx, dword ptr [eax]
// 0093736d  8d51ff               lea edx, [ecx - 1]
// 00937370  83c410               add esp, 0x10
// 00937373  8910                 mov dword ptr [eax], edx
// 00937375  8b4638               mov eax, dword ptr [esi + 0x38]
// 00937378  85c9                 test ecx, ecx
// 0093737a  760e                 jbe 0x93738a
// 0093737c  8b4804               mov ecx, dword ptr [eax + 4]
// 0093737f  0fb611               movzx edx, byte ptr [ecx]
// 00937382  41                   inc ecx
// 00937383  894804               mov dword ptr [eax + 4], ecx
// 00937386  8916                 mov dword ptr [esi], edx
// 00937388  5e                   pop esi
// 00937389  c3                   ret 
// 0093738a  50                   push eax
// 0093738b  e8f0f4ffff           call 0x936880
// 00937390  83c404               add esp, 4
// 00937393  8906                 mov dword ptr [esi], eax
// 00937395  5e                   pop esi
// 00937396  c3                   ret 
// library lua-5.1.4/llex.c (function _luaX_setinput)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 llex.c
