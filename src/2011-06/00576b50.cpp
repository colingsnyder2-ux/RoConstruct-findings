// from server: 100% by auto
// roc 2011-06 00576b50  unit: seg_00570000  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00576b50
//
// 00576b50  8b8e94010000         mov ecx, dword ptr [esi + 0x194]
// 00576b56  57                   push edi
// 00576b57  8bbe98010000         mov edi, dword ptr [esi + 0x198]
// 00576b5d  8b4710               mov eax, dword ptr [edi + 0x10]
// 00576b60  99                   cdq 
// 00576b61  83e207               and edx, 7
// 00576b64  03c2                 add eax, edx
// 00576b66  c1f803               sar eax, 3
// 00576b69  014114               add dword ptr [ecx + 0x14], eax
// 00576b6c  c7471000000000       mov dword ptr [edi + 0x10], 0
// 00576b73  8b8694010000         mov eax, dword ptr [esi + 0x194]
// 00576b79  8b4808               mov ecx, dword ptr [eax + 8]
// 00576b7c  56                   push esi
// 00576b7d  ffd1                 call ecx
// 00576b7f  83c404               add esp, 4
// 00576b82  84c0                 test al, al
// 00576b84  7502                 jne 0x576b88
// 00576b86  5f                   pop edi
// 00576b87  c3                   ret 
// 00576b88  33c0                 xor eax, eax
// 00576b8a  398624010000         cmp dword ptr [esi + 0x124], eax
// 00576b90  7e15                 jle 0x576ba7
// 00576b92  8d4f18               lea ecx, [edi + 0x18]
// 00576b95  c70100000000         mov dword ptr [ecx], 0
// 00576b9b  40                   inc eax
// 00576b9c  83c104               add ecx, 4
// 00576b9f  3b8624010000         cmp eax, dword ptr [esi + 0x124]
// 00576ba5  7cee                 jl 0x576b95
// 00576ba7  c7471400000000       mov dword ptr [edi + 0x14], 0
// 00576bae  8b96fc000000         mov edx, dword ptr [esi + 0xfc]
// 00576bb4  895728               mov dword ptr [edi + 0x28], edx
// 00576bb7  83be7c01000000       cmp dword ptr [esi + 0x17c], 0
// 00576bbe  7504                 jne 0x576bc4
// 00576bc0  c6470800             mov byte ptr [edi + 8], 0
// 00576bc4  b001                 mov al, 1
// 00576bc6  5f                   pop edi
// 00576bc7  c3                   ret 
// library jpeg-6b/jdphuff.c (function _process_restart)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdphuff.c
