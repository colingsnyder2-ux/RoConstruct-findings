// roc 2007-03 00525c00  unit: seg_00520000  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00525c00
//
// 00525c00  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00525c04  80b9b000000000       cmp byte ptr [ecx + 0xb0], 0
// 00525c0b  8b8140010000         mov eax, dword ptr [ecx + 0x140]
// 00525c11  7538                 jne 0x525c4b
// 00525c13  8b542408             mov edx, dword ptr [esp + 8]
// 00525c17  85d2                 test edx, edx
// 00525c19  c7400800000000       mov dword ptr [eax + 8], 0
// 00525c20  c7400c00000000       mov dword ptr [eax + 0xc], 0
// 00525c27  c6401000             mov byte ptr [eax + 0x10], 0
// 00525c2b  895014               mov dword ptr [eax + 0x14], edx
// 00525c2e  7414                 je 0x525c44
// 00525c30  8b01                 mov eax, dword ptr [ecx]
// 00525c32  c7401404000000       mov dword ptr [eax + 0x14], 4
// 00525c39  8b11                 mov edx, dword ptr [ecx]
// 00525c3b  8b02                 mov eax, dword ptr [edx]
// 00525c3d  51                   push ecx
// 00525c3e  ffd0                 call eax
// 00525c40  83c404               add esp, 4
// 00525c43  c3                   ret 
// 00525c44  c74004505b5200       mov dword ptr [eax + 4], 0x525b50
// 00525c4b  c3                   ret 
// library jpeg-6b/jcmainct.c (function _start_pass_main)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmainct.c
