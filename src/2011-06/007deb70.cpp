// roc 2011-06 007deb70  unit: seg_007d0000  size: 135 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007deb70
//
// 007deb70  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007deb74  8b4c2404             mov ecx, dword ptr [esp + 4]
// 007deb78  8b542410             mov edx, dword ptr [esp + 0x10]
// 007deb7c  56                   push esi
// 007deb7d  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007deb81  894638               mov dword ptr [esi + 0x38], eax
// 007deb84  b801000000           mov eax, 1
// 007deb89  894604               mov dword ptr [esi + 4], eax
// 007deb8c  894608               mov dword ptr [esi + 8], eax
// 007deb8f  8b463c               mov eax, dword ptr [esi + 0x3c]
// 007deb92  c646442e             mov byte ptr [esi + 0x44], 0x2e
// 007deb96  894e34               mov dword ptr [esi + 0x34], ecx
// 007deb99  c746201f010000       mov dword ptr [esi + 0x20], 0x11f
// 007deba0  c7463000000000       mov dword ptr [esi + 0x30], 0
// 007deba7  895640               mov dword ptr [esi + 0x40], edx
// 007debaa  8b5008               mov edx, dword ptr [eax + 8]
// 007debad  8b00                 mov eax, dword ptr [eax]
// 007debaf  6a20                 push 0x20
// 007debb1  52                   push edx
// 007debb2  50                   push eax
// 007debb3  51                   push ecx
// 007debb4  e887c2ffff           call 0x7dae40
// 007debb9  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 007debbc  8901                 mov dword ptr [ecx], eax
// 007debbe  8b563c               mov edx, dword ptr [esi + 0x3c]
// 007debc1  c7420820000000       mov dword ptr [edx + 8], 0x20
// 007debc8  8b4638               mov eax, dword ptr [esi + 0x38]
// 007debcb  8b08                 mov ecx, dword ptr [eax]
// 007debcd  8d51ff               lea edx, [ecx - 1]
// 007debd0  83c410               add esp, 0x10
// 007debd3  8910                 mov dword ptr [eax], edx
// 007debd5  8b4638               mov eax, dword ptr [esi + 0x38]
// 007debd8  85c9                 test ecx, ecx
// 007debda  760e                 jbe 0x7debea
// 007debdc  8b4804               mov ecx, dword ptr [eax + 4]
// 007debdf  0fb611               movzx edx, byte ptr [ecx]
// 007debe2  41                   inc ecx
// 007debe3  894804               mov dword ptr [eax + 4], ecx
// 007debe6  8916                 mov dword ptr [esi], edx
// 007debe8  5e                   pop esi
// 007debe9  c3                   ret 
// 007debea  50                   push eax
// 007debeb  e870bbffff           call 0x7da760
// 007debf0  83c404               add esp, 4
// 007debf3  8906                 mov dword ptr [esi], eax
// 007debf5  5e                   pop esi
// 007debf6  c3                   ret 
// library lua-5.1.4/llex.c (function _luaX_setinput)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 llex.c
