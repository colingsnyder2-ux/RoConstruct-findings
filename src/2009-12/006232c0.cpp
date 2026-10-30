// roc 2009-12 006232c0  unit: seg_00620000  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006232c0
//
// 006232c0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006232c4  80b9b000000000       cmp byte ptr [ecx + 0xb0], 0
// 006232cb  8b8140010000         mov eax, dword ptr [ecx + 0x140]
// 006232d1  7538                 jne 0x62330b
// 006232d3  8b542408             mov edx, dword ptr [esp + 8]
// 006232d7  c7400800000000       mov dword ptr [eax + 8], 0
// 006232de  c7400c00000000       mov dword ptr [eax + 0xc], 0
// 006232e5  c6401000             mov byte ptr [eax + 0x10], 0
// 006232e9  895014               mov dword ptr [eax + 0x14], edx
// 006232ec  85d2                 test edx, edx
// 006232ee  7414                 je 0x623304
// 006232f0  8b01                 mov eax, dword ptr [ecx]
// 006232f2  c7401404000000       mov dword ptr [eax + 0x14], 4
// 006232f9  8b11                 mov edx, dword ptr [ecx]
// 006232fb  8b02                 mov eax, dword ptr [edx]
// 006232fd  51                   push ecx
// 006232fe  ffd0                 call eax
// 00623300  83c404               add esp, 4
// 00623303  c3                   ret 
// 00623304  c7400420326200       mov dword ptr [eax + 4], 0x623220
// 0062330b  c3                   ret 
// library jpeg-6b/jcmainct.c (function _start_pass_main)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmainct.c
