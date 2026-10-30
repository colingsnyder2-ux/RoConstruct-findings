// from server: 100% by auto
// roc 2011-06 00574f60  unit: seg_00570000  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00574f60
//
// 00574f60  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00574f64  8b442404             mov eax, dword ptr [esp + 4]
// 00574f68  53                   push ebx
// 00574f69  33db                 xor ebx, ebx
// 00574f6b  2bcb                 sub ecx, ebx
// 00574f6d  56                   push esi
// 00574f6e  8bb084010000         mov esi, dword ptr [eax + 0x184]
// 00574f74  7425                 je 0x574f9b
// 00574f76  83e902               sub ecx, 2
// 00574f79  7416                 je 0x574f91
// 00574f7b  8b08                 mov ecx, dword ptr [eax]
// 00574f7d  c7411404000000       mov dword ptr [ecx + 0x14], 4
// 00574f84  8b10                 mov edx, dword ptr [eax]
// 00574f86  50                   push eax
// 00574f87  8b02                 mov eax, dword ptr [edx]
// 00574f89  ffd0                 call eax
// 00574f8b  83c404               add esp, 4
// 00574f8e  5e                   pop esi
// 00574f8f  5b                   pop ebx
// 00574f90  c3                   ret 
// 00574f91  c74604304f5700       mov dword ptr [esi + 4], 0x574f30
// 00574f98  5e                   pop esi
// 00574f99  5b                   pop ebx
// 00574f9a  c3                   ret 
// 00574f9b  8b88a0010000         mov ecx, dword ptr [eax + 0x1a0]
// 00574fa1  385908               cmp byte ptr [ecx + 8], bl
// 00574fa4  7422                 je 0x574fc8
// 00574fa6  50                   push eax
// 00574fa7  c74604f04d5700       mov dword ptr [esi + 4], 0x574df0
// 00574fae  e80dfbffff           call 0x574ac0
// 00574fb3  83c404               add esp, 4
// 00574fb6  895e40               mov dword ptr [esi + 0x40], ebx
// 00574fb9  895e44               mov dword ptr [esi + 0x44], ebx
// 00574fbc  895e4c               mov dword ptr [esi + 0x4c], ebx
// 00574fbf  885e30               mov byte ptr [esi + 0x30], bl
// 00574fc2  895e34               mov dword ptr [esi + 0x34], ebx
// 00574fc5  5e                   pop esi
// 00574fc6  5b                   pop ebx
// 00574fc7  c3                   ret 
// 00574fc8  885e30               mov byte ptr [esi + 0x30], bl
// 00574fcb  895e34               mov dword ptr [esi + 0x34], ebx
// 00574fce  c74604804d5700       mov dword ptr [esi + 4], 0x574d80
// 00574fd5  5e                   pop esi
// 00574fd6  5b                   pop ebx
// 00574fd7  c3                   ret 
// library jpeg-6b/jdmainct.c (function _start_pass_main)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmainct.c
