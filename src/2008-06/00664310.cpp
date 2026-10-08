// from server: 100% by auto
// roc 2008-06 00664310  unit: RBX::FilterStairs  size: 135 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00664310
//
// 00664310  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00664314  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00664318  8b542410             mov edx, dword ptr [esp + 0x10]
// 0066431c  56                   push esi
// 0066431d  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00664321  894638               mov dword ptr [esi + 0x38], eax
// 00664324  b801000000           mov eax, 1
// 00664329  894604               mov dword ptr [esi + 4], eax
// 0066432c  894608               mov dword ptr [esi + 8], eax
// 0066432f  8b463c               mov eax, dword ptr [esi + 0x3c]
// 00664332  c646442e             mov byte ptr [esi + 0x44], 0x2e
// 00664336  894e34               mov dword ptr [esi + 0x34], ecx
// 00664339  c746201f010000       mov dword ptr [esi + 0x20], 0x11f
// 00664340  c7463000000000       mov dword ptr [esi + 0x30], 0
// 00664347  895640               mov dword ptr [esi + 0x40], edx
// 0066434a  8b5008               mov edx, dword ptr [eax + 8]
// 0066434d  8b00                 mov eax, dword ptr [eax]
// 0066434f  6a20                 push 0x20
// 00664351  52                   push edx
// 00664352  50                   push eax
// 00664353  51                   push ecx
// 00664354  e897c3ffff           call 0x6606f0
// 00664359  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 0066435c  8901                 mov dword ptr [ecx], eax
// 0066435e  8b563c               mov edx, dword ptr [esi + 0x3c]
// 00664361  c7420820000000       mov dword ptr [edx + 8], 0x20
// 00664368  8b4638               mov eax, dword ptr [esi + 0x38]
// 0066436b  8b08                 mov ecx, dword ptr [eax]
// 0066436d  8d51ff               lea edx, [ecx - 1]
// 00664370  83c410               add esp, 0x10
// 00664373  8910                 mov dword ptr [eax], edx
// 00664375  8b4638               mov eax, dword ptr [esi + 0x38]
// 00664378  85c9                 test ecx, ecx
// 0066437a  760e                 jbe 0x66438a
// 0066437c  8b4804               mov ecx, dword ptr [eax + 4]
// 0066437f  0fb611               movzx edx, byte ptr [ecx]
// 00664382  41                   inc ecx
// 00664383  894804               mov dword ptr [eax + 4], ecx
// 00664386  8916                 mov dword ptr [esi], edx
// 00664388  5e                   pop esi
// 00664389  c3                   ret 
// 0066438a  50                   push eax
// 0066438b  e8a0b4ffff           call 0x65f830
// 00664390  83c404               add esp, 4
// 00664393  8906                 mov dword ptr [esi], eax
// 00664395  5e                   pop esi
// 00664396  c3                   ret 
// library lua-5.1.4/llex.c (function _luaX_setinput)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 llex.c
