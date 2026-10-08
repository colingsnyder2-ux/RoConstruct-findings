// roc 2009-12 0061d150  unit: seg_00610000  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0061d150
//
// 0061d150  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0061d154  8b442404             mov eax, dword ptr [esp + 4]
// 0061d158  53                   push ebx
// 0061d159  33db                 xor ebx, ebx
// 0061d15b  2bcb                 sub ecx, ebx
// 0061d15d  56                   push esi
// 0061d15e  8bb084010000         mov esi, dword ptr [eax + 0x184]
// 0061d164  7425                 je 0x61d18b
// 0061d166  83e902               sub ecx, 2
// 0061d169  7416                 je 0x61d181
// 0061d16b  8b08                 mov ecx, dword ptr [eax]
// 0061d16d  c7411404000000       mov dword ptr [ecx + 0x14], 4
// 0061d174  8b10                 mov edx, dword ptr [eax]
// 0061d176  50                   push eax
// 0061d177  8b02                 mov eax, dword ptr [edx]
// 0061d179  ffd0                 call eax
// 0061d17b  83c404               add esp, 4
// 0061d17e  5e                   pop esi
// 0061d17f  5b                   pop ebx
// 0061d180  c3                   ret 
// 0061d181  c7460420d16100       mov dword ptr [esi + 4], 0x61d120
// 0061d188  5e                   pop esi
// 0061d189  5b                   pop ebx
// 0061d18a  c3                   ret 
// 0061d18b  8b88a0010000         mov ecx, dword ptr [eax + 0x1a0]
// 0061d191  385908               cmp byte ptr [ecx + 8], bl
// 0061d194  7422                 je 0x61d1b8
// 0061d196  50                   push eax
// 0061d197  c74604e0cf6100       mov dword ptr [esi + 4], 0x61cfe0
// 0061d19e  e80dfbffff           call 0x61ccb0
// 0061d1a3  83c404               add esp, 4
// 0061d1a6  895e40               mov dword ptr [esi + 0x40], ebx
// 0061d1a9  895e44               mov dword ptr [esi + 0x44], ebx
// 0061d1ac  895e4c               mov dword ptr [esi + 0x4c], ebx
// 0061d1af  885e30               mov byte ptr [esi + 0x30], bl
// 0061d1b2  895e34               mov dword ptr [esi + 0x34], ebx
// 0061d1b5  5e                   pop esi
// 0061d1b6  5b                   pop ebx
// 0061d1b7  c3                   ret 
// 0061d1b8  885e30               mov byte ptr [esi + 0x30], bl
// 0061d1bb  895e34               mov dword ptr [esi + 0x34], ebx
// 0061d1be  c7460470cf6100       mov dword ptr [esi + 4], 0x61cf70
// 0061d1c5  5e                   pop esi
// 0061d1c6  5b                   pop ebx
// 0061d1c7  c3                   ret 
// library jpeg-6b/jdmainct.c (function _start_pass_main)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmainct.c
