// from server: 100% by auto
// roc 2009-06 0059b120  unit: seg_00590000  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0059b120
//
// 0059b120  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0059b124  8b442404             mov eax, dword ptr [esp + 4]
// 0059b128  53                   push ebx
// 0059b129  33db                 xor ebx, ebx
// 0059b12b  2bcb                 sub ecx, ebx
// 0059b12d  56                   push esi
// 0059b12e  8bb084010000         mov esi, dword ptr [eax + 0x184]
// 0059b134  7425                 je 0x59b15b
// 0059b136  83e902               sub ecx, 2
// 0059b139  7416                 je 0x59b151
// 0059b13b  8b08                 mov ecx, dword ptr [eax]
// 0059b13d  c7411404000000       mov dword ptr [ecx + 0x14], 4
// 0059b144  8b10                 mov edx, dword ptr [eax]
// 0059b146  50                   push eax
// 0059b147  8b02                 mov eax, dword ptr [edx]
// 0059b149  ffd0                 call eax
// 0059b14b  83c404               add esp, 4
// 0059b14e  5e                   pop esi
// 0059b14f  5b                   pop ebx
// 0059b150  c3                   ret 
// 0059b151  c74604f0b05900       mov dword ptr [esi + 4], 0x59b0f0
// 0059b158  5e                   pop esi
// 0059b159  5b                   pop ebx
// 0059b15a  c3                   ret 
// 0059b15b  8b88a0010000         mov ecx, dword ptr [eax + 0x1a0]
// 0059b161  385908               cmp byte ptr [ecx + 8], bl
// 0059b164  7422                 je 0x59b188
// 0059b166  50                   push eax
// 0059b167  c74604b0af5900       mov dword ptr [esi + 4], 0x59afb0
// 0059b16e  e80dfbffff           call 0x59ac80
// 0059b173  83c404               add esp, 4
// 0059b176  895e40               mov dword ptr [esi + 0x40], ebx
// 0059b179  895e44               mov dword ptr [esi + 0x44], ebx
// 0059b17c  895e4c               mov dword ptr [esi + 0x4c], ebx
// 0059b17f  885e30               mov byte ptr [esi + 0x30], bl
// 0059b182  895e34               mov dword ptr [esi + 0x34], ebx
// 0059b185  5e                   pop esi
// 0059b186  5b                   pop ebx
// 0059b187  c3                   ret 
// 0059b188  885e30               mov byte ptr [esi + 0x30], bl
// 0059b18b  895e34               mov dword ptr [esi + 0x34], ebx
// 0059b18e  c7460440af5900       mov dword ptr [esi + 4], 0x59af40
// 0059b195  5e                   pop esi
// 0059b196  5b                   pop ebx
// 0059b197  c3                   ret 
// library jpeg-6b/jdmainct.c (function _start_pass_main)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmainct.c
