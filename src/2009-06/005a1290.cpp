// from server: 100% by auto
// roc 2009-06 005a1290  unit: seg_005a0000  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005a1290
//
// 005a1290  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005a1294  80b9b000000000       cmp byte ptr [ecx + 0xb0], 0
// 005a129b  8b8140010000         mov eax, dword ptr [ecx + 0x140]
// 005a12a1  7538                 jne 0x5a12db
// 005a12a3  8b542408             mov edx, dword ptr [esp + 8]
// 005a12a7  c7400800000000       mov dword ptr [eax + 8], 0
// 005a12ae  c7400c00000000       mov dword ptr [eax + 0xc], 0
// 005a12b5  c6401000             mov byte ptr [eax + 0x10], 0
// 005a12b9  895014               mov dword ptr [eax + 0x14], edx
// 005a12bc  85d2                 test edx, edx
// 005a12be  7414                 je 0x5a12d4
// 005a12c0  8b01                 mov eax, dword ptr [ecx]
// 005a12c2  c7401404000000       mov dword ptr [eax + 0x14], 4
// 005a12c9  8b11                 mov edx, dword ptr [ecx]
// 005a12cb  8b02                 mov eax, dword ptr [edx]
// 005a12cd  51                   push ecx
// 005a12ce  ffd0                 call eax
// 005a12d0  83c404               add esp, 4
// 005a12d3  c3                   ret 
// 005a12d4  c74004f0115a00       mov dword ptr [eax + 4], 0x5a11f0
// 005a12db  c3                   ret 
// library jpeg-6b/jcmainct.c (function _start_pass_main)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmainct.c
