// from server: 100% by auto
// roc 2012-06 00661c20  unit: seg_00660000  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00661c20
//
// 00661c20  8b8e94010000         mov ecx, dword ptr [esi + 0x194]
// 00661c26  57                   push edi
// 00661c27  8bbe98010000         mov edi, dword ptr [esi + 0x198]
// 00661c2d  8b4710               mov eax, dword ptr [edi + 0x10]
// 00661c30  99                   cdq 
// 00661c31  83e207               and edx, 7
// 00661c34  03c2                 add eax, edx
// 00661c36  c1f803               sar eax, 3
// 00661c39  014114               add dword ptr [ecx + 0x14], eax
// 00661c3c  c7471000000000       mov dword ptr [edi + 0x10], 0
// 00661c43  8b8694010000         mov eax, dword ptr [esi + 0x194]
// 00661c49  8b4808               mov ecx, dword ptr [eax + 8]
// 00661c4c  56                   push esi
// 00661c4d  ffd1                 call ecx
// 00661c4f  83c404               add esp, 4
// 00661c52  84c0                 test al, al
// 00661c54  7502                 jne 0x661c58
// 00661c56  5f                   pop edi
// 00661c57  c3                   ret 
// 00661c58  33c0                 xor eax, eax
// 00661c5a  398624010000         cmp dword ptr [esi + 0x124], eax
// 00661c60  7e15                 jle 0x661c77
// 00661c62  8d4f14               lea ecx, [edi + 0x14]
// 00661c65  c70100000000         mov dword ptr [ecx], 0
// 00661c6b  40                   inc eax
// 00661c6c  83c104               add ecx, 4
// 00661c6f  3b8624010000         cmp eax, dword ptr [esi + 0x124]
// 00661c75  7cee                 jl 0x661c65
// 00661c77  8b96fc000000         mov edx, dword ptr [esi + 0xfc]
// 00661c7d  895724               mov dword ptr [edi + 0x24], edx
// 00661c80  83be7c01000000       cmp dword ptr [esi + 0x17c], 0
// 00661c87  7504                 jne 0x661c8d
// 00661c89  c6470800             mov byte ptr [edi + 8], 0
// 00661c8d  b001                 mov al, 1
// 00661c8f  5f                   pop edi
// 00661c90  c3                   ret 
// library jpeg-6b/jdhuff.c (function _process_restart)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdhuff.c
