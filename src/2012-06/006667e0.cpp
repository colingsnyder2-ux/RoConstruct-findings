// roc 2012-06 006667e0  unit: seg_00660000  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006667e0
//
// 006667e0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006667e4  80b9b000000000       cmp byte ptr [ecx + 0xb0], 0
// 006667eb  8b8140010000         mov eax, dword ptr [ecx + 0x140]
// 006667f1  7538                 jne 0x66682b
// 006667f3  8b542408             mov edx, dword ptr [esp + 8]
// 006667f7  c7400800000000       mov dword ptr [eax + 8], 0
// 006667fe  c7400c00000000       mov dword ptr [eax + 0xc], 0
// 00666805  c6401000             mov byte ptr [eax + 0x10], 0
// 00666809  895014               mov dword ptr [eax + 0x14], edx
// 0066680c  85d2                 test edx, edx
// 0066680e  7414                 je 0x666824
// 00666810  8b01                 mov eax, dword ptr [ecx]
// 00666812  c7401404000000       mov dword ptr [eax + 0x14], 4
// 00666819  8b11                 mov edx, dword ptr [ecx]
// 0066681b  8b02                 mov eax, dword ptr [edx]
// 0066681d  51                   push ecx
// 0066681e  ffd0                 call eax
// 00666820  83c404               add esp, 4
// 00666823  c3                   ret 
// 00666824  c7400440676600       mov dword ptr [eax + 4], 0x666740
// 0066682b  c3                   ret 
// library jpeg-6b/jcmainct.c (function _start_pass_main)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmainct.c
