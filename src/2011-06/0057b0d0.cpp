// roc 2011-06 0057b0d0  unit: seg_00570000  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0057b0d0
//
// 0057b0d0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0057b0d4  80b9b000000000       cmp byte ptr [ecx + 0xb0], 0
// 0057b0db  8b8140010000         mov eax, dword ptr [ecx + 0x140]
// 0057b0e1  7538                 jne 0x57b11b
// 0057b0e3  8b542408             mov edx, dword ptr [esp + 8]
// 0057b0e7  c7400800000000       mov dword ptr [eax + 8], 0
// 0057b0ee  c7400c00000000       mov dword ptr [eax + 0xc], 0
// 0057b0f5  c6401000             mov byte ptr [eax + 0x10], 0
// 0057b0f9  895014               mov dword ptr [eax + 0x14], edx
// 0057b0fc  85d2                 test edx, edx
// 0057b0fe  7414                 je 0x57b114
// 0057b100  8b01                 mov eax, dword ptr [ecx]
// 0057b102  c7401404000000       mov dword ptr [eax + 0x14], 4
// 0057b109  8b11                 mov edx, dword ptr [ecx]
// 0057b10b  8b02                 mov eax, dword ptr [edx]
// 0057b10d  51                   push ecx
// 0057b10e  ffd0                 call eax
// 0057b110  83c404               add esp, 4
// 0057b113  c3                   ret 
// 0057b114  c7400430b05700       mov dword ptr [eax + 4], 0x57b030
// 0057b11b  c3                   ret 
// library jpeg-6b/jcmainct.c (function _start_pass_main)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmainct.c
