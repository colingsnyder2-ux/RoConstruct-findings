// from server: 100% by auto
// roc 2008-06 00532a30  unit: seg_00530000  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00532a30
//
// 00532a30  8b8e94010000         mov ecx, dword ptr [esi + 0x194]
// 00532a36  57                   push edi
// 00532a37  8bbe98010000         mov edi, dword ptr [esi + 0x198]
// 00532a3d  8b4710               mov eax, dword ptr [edi + 0x10]
// 00532a40  99                   cdq 
// 00532a41  83e207               and edx, 7
// 00532a44  03c2                 add eax, edx
// 00532a46  c1f803               sar eax, 3
// 00532a49  014114               add dword ptr [ecx + 0x14], eax
// 00532a4c  c7471000000000       mov dword ptr [edi + 0x10], 0
// 00532a53  8b8694010000         mov eax, dword ptr [esi + 0x194]
// 00532a59  8b4808               mov ecx, dword ptr [eax + 8]
// 00532a5c  56                   push esi
// 00532a5d  ffd1                 call ecx
// 00532a5f  83c404               add esp, 4
// 00532a62  84c0                 test al, al
// 00532a64  7502                 jne 0x532a68
// 00532a66  5f                   pop edi
// 00532a67  c3                   ret 
// 00532a68  33c0                 xor eax, eax
// 00532a6a  398624010000         cmp dword ptr [esi + 0x124], eax
// 00532a70  7e15                 jle 0x532a87
// 00532a72  8d4f18               lea ecx, [edi + 0x18]
// 00532a75  c70100000000         mov dword ptr [ecx], 0
// 00532a7b  40                   inc eax
// 00532a7c  83c104               add ecx, 4
// 00532a7f  3b8624010000         cmp eax, dword ptr [esi + 0x124]
// 00532a85  7cee                 jl 0x532a75
// 00532a87  c7471400000000       mov dword ptr [edi + 0x14], 0
// 00532a8e  8b96fc000000         mov edx, dword ptr [esi + 0xfc]
// 00532a94  895728               mov dword ptr [edi + 0x28], edx
// 00532a97  83be7c01000000       cmp dword ptr [esi + 0x17c], 0
// 00532a9e  7504                 jne 0x532aa4
// 00532aa0  c6470800             mov byte ptr [edi + 8], 0
// 00532aa4  b001                 mov al, 1
// 00532aa6  5f                   pop edi
// 00532aa7  c3                   ret 
// library jpeg-6b/jdphuff.c (function _process_restart)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdphuff.c
