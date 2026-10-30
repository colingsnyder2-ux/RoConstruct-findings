// roc 2009-12 0061e700  unit: seg_00610000  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0061e700
//
// 0061e700  8b8e94010000         mov ecx, dword ptr [esi + 0x194]
// 0061e706  57                   push edi
// 0061e707  8bbe98010000         mov edi, dword ptr [esi + 0x198]
// 0061e70d  8b4710               mov eax, dword ptr [edi + 0x10]
// 0061e710  99                   cdq 
// 0061e711  83e207               and edx, 7
// 0061e714  03c2                 add eax, edx
// 0061e716  c1f803               sar eax, 3
// 0061e719  014114               add dword ptr [ecx + 0x14], eax
// 0061e71c  c7471000000000       mov dword ptr [edi + 0x10], 0
// 0061e723  8b8694010000         mov eax, dword ptr [esi + 0x194]
// 0061e729  8b4808               mov ecx, dword ptr [eax + 8]
// 0061e72c  56                   push esi
// 0061e72d  ffd1                 call ecx
// 0061e72f  83c404               add esp, 4
// 0061e732  84c0                 test al, al
// 0061e734  7502                 jne 0x61e738
// 0061e736  5f                   pop edi
// 0061e737  c3                   ret 
// 0061e738  33c0                 xor eax, eax
// 0061e73a  398624010000         cmp dword ptr [esi + 0x124], eax
// 0061e740  7e15                 jle 0x61e757
// 0061e742  8d4f14               lea ecx, [edi + 0x14]
// 0061e745  c70100000000         mov dword ptr [ecx], 0
// 0061e74b  40                   inc eax
// 0061e74c  83c104               add ecx, 4
// 0061e74f  3b8624010000         cmp eax, dword ptr [esi + 0x124]
// 0061e755  7cee                 jl 0x61e745
// 0061e757  8b96fc000000         mov edx, dword ptr [esi + 0xfc]
// 0061e75d  895724               mov dword ptr [edi + 0x24], edx
// 0061e760  83be7c01000000       cmp dword ptr [esi + 0x17c], 0
// 0061e767  7504                 jne 0x61e76d
// 0061e769  c6470800             mov byte ptr [edi + 8], 0
// 0061e76d  b001                 mov al, 1
// 0061e76f  5f                   pop edi
// 0061e770  c3                   ret 
// library jpeg-6b/jdhuff.c (function _process_restart)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdhuff.c
