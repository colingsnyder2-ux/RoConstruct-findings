// roc 2010-06 00584e20  unit: seg_00580000  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00584e20
//
// 00584e20  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00584e24  80b9b000000000       cmp byte ptr [ecx + 0xb0], 0
// 00584e2b  8b8140010000         mov eax, dword ptr [ecx + 0x140]
// 00584e31  7538                 jne 0x584e6b
// 00584e33  8b542408             mov edx, dword ptr [esp + 8]
// 00584e37  c7400800000000       mov dword ptr [eax + 8], 0
// 00584e3e  c7400c00000000       mov dword ptr [eax + 0xc], 0
// 00584e45  c6401000             mov byte ptr [eax + 0x10], 0
// 00584e49  895014               mov dword ptr [eax + 0x14], edx
// 00584e4c  85d2                 test edx, edx
// 00584e4e  7414                 je 0x584e64
// 00584e50  8b01                 mov eax, dword ptr [ecx]
// 00584e52  c7401404000000       mov dword ptr [eax + 0x14], 4
// 00584e59  8b11                 mov edx, dword ptr [ecx]
// 00584e5b  8b02                 mov eax, dword ptr [edx]
// 00584e5d  51                   push ecx
// 00584e5e  ffd0                 call eax
// 00584e60  83c404               add esp, 4
// 00584e63  c3                   ret 
// 00584e64  c74004804d5800       mov dword ptr [eax + 4], 0x584d80
// 00584e6b  c3                   ret 
// library jpeg-6b/jcmainct.c (function _start_pass_main)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmainct.c
