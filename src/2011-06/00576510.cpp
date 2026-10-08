// from server: 100% by auto
// roc 2011-06 00576510  unit: seg_00570000  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00576510
//
// 00576510  8b8e94010000         mov ecx, dword ptr [esi + 0x194]
// 00576516  57                   push edi
// 00576517  8bbe98010000         mov edi, dword ptr [esi + 0x198]
// 0057651d  8b4710               mov eax, dword ptr [edi + 0x10]
// 00576520  99                   cdq 
// 00576521  83e207               and edx, 7
// 00576524  03c2                 add eax, edx
// 00576526  c1f803               sar eax, 3
// 00576529  014114               add dword ptr [ecx + 0x14], eax
// 0057652c  c7471000000000       mov dword ptr [edi + 0x10], 0
// 00576533  8b8694010000         mov eax, dword ptr [esi + 0x194]
// 00576539  8b4808               mov ecx, dword ptr [eax + 8]
// 0057653c  56                   push esi
// 0057653d  ffd1                 call ecx
// 0057653f  83c404               add esp, 4
// 00576542  84c0                 test al, al
// 00576544  7502                 jne 0x576548
// 00576546  5f                   pop edi
// 00576547  c3                   ret 
// 00576548  33c0                 xor eax, eax
// 0057654a  398624010000         cmp dword ptr [esi + 0x124], eax
// 00576550  7e15                 jle 0x576567
// 00576552  8d4f14               lea ecx, [edi + 0x14]
// 00576555  c70100000000         mov dword ptr [ecx], 0
// 0057655b  40                   inc eax
// 0057655c  83c104               add ecx, 4
// 0057655f  3b8624010000         cmp eax, dword ptr [esi + 0x124]
// 00576565  7cee                 jl 0x576555
// 00576567  8b96fc000000         mov edx, dword ptr [esi + 0xfc]
// 0057656d  895724               mov dword ptr [edi + 0x24], edx
// 00576570  83be7c01000000       cmp dword ptr [esi + 0x17c], 0
// 00576577  7504                 jne 0x57657d
// 00576579  c6470800             mov byte ptr [edi + 8], 0
// 0057657d  b001                 mov al, 1
// 0057657f  5f                   pop edi
// 00576580  c3                   ret 
// library jpeg-6b/jdhuff.c (function _process_restart)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdhuff.c
