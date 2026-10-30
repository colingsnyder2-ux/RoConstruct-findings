// from server: 100% by auto
// roc 2012-06 00660670  unit: seg_00660000  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00660670
//
// 00660670  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00660674  8b442404             mov eax, dword ptr [esp + 4]
// 00660678  53                   push ebx
// 00660679  33db                 xor ebx, ebx
// 0066067b  2bcb                 sub ecx, ebx
// 0066067d  56                   push esi
// 0066067e  8bb084010000         mov esi, dword ptr [eax + 0x184]
// 00660684  7425                 je 0x6606ab
// 00660686  83e902               sub ecx, 2
// 00660689  7416                 je 0x6606a1
// 0066068b  8b08                 mov ecx, dword ptr [eax]
// 0066068d  c7411404000000       mov dword ptr [ecx + 0x14], 4
// 00660694  8b10                 mov edx, dword ptr [eax]
// 00660696  50                   push eax
// 00660697  8b02                 mov eax, dword ptr [edx]
// 00660699  ffd0                 call eax
// 0066069b  83c404               add esp, 4
// 0066069e  5e                   pop esi
// 0066069f  5b                   pop ebx
// 006606a0  c3                   ret 
// 006606a1  c7460440066600       mov dword ptr [esi + 4], 0x660640
// 006606a8  5e                   pop esi
// 006606a9  5b                   pop ebx
// 006606aa  c3                   ret 
// 006606ab  8b88a0010000         mov ecx, dword ptr [eax + 0x1a0]
// 006606b1  385908               cmp byte ptr [ecx + 8], bl
// 006606b4  7422                 je 0x6606d8
// 006606b6  50                   push eax
// 006606b7  c7460400056600       mov dword ptr [esi + 4], 0x660500
// 006606be  e80dfbffff           call 0x6601d0
// 006606c3  83c404               add esp, 4
// 006606c6  895e40               mov dword ptr [esi + 0x40], ebx
// 006606c9  895e44               mov dword ptr [esi + 0x44], ebx
// 006606cc  895e4c               mov dword ptr [esi + 0x4c], ebx
// 006606cf  885e30               mov byte ptr [esi + 0x30], bl
// 006606d2  895e34               mov dword ptr [esi + 0x34], ebx
// 006606d5  5e                   pop esi
// 006606d6  5b                   pop ebx
// 006606d7  c3                   ret 
// 006606d8  885e30               mov byte ptr [esi + 0x30], bl
// 006606db  895e34               mov dword ptr [esi + 0x34], ebx
// 006606de  c7460490046600       mov dword ptr [esi + 4], 0x660490
// 006606e5  5e                   pop esi
// 006606e6  5b                   pop ebx
// 006606e7  c3                   ret 
// library jpeg-6b/jdmainct.c (function _start_pass_main)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmainct.c
