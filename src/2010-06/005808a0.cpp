// roc 2010-06 005808a0  unit: seg_00580000  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005808a0
//
// 005808a0  8b8e94010000         mov ecx, dword ptr [esi + 0x194]
// 005808a6  57                   push edi
// 005808a7  8bbe98010000         mov edi, dword ptr [esi + 0x198]
// 005808ad  8b4710               mov eax, dword ptr [edi + 0x10]
// 005808b0  99                   cdq 
// 005808b1  83e207               and edx, 7
// 005808b4  03c2                 add eax, edx
// 005808b6  c1f803               sar eax, 3
// 005808b9  014114               add dword ptr [ecx + 0x14], eax
// 005808bc  c7471000000000       mov dword ptr [edi + 0x10], 0
// 005808c3  8b8694010000         mov eax, dword ptr [esi + 0x194]
// 005808c9  8b4808               mov ecx, dword ptr [eax + 8]
// 005808cc  56                   push esi
// 005808cd  ffd1                 call ecx
// 005808cf  83c404               add esp, 4
// 005808d2  84c0                 test al, al
// 005808d4  7502                 jne 0x5808d8
// 005808d6  5f                   pop edi
// 005808d7  c3                   ret 
// 005808d8  33c0                 xor eax, eax
// 005808da  398624010000         cmp dword ptr [esi + 0x124], eax
// 005808e0  7e15                 jle 0x5808f7
// 005808e2  8d4f18               lea ecx, [edi + 0x18]
// 005808e5  c70100000000         mov dword ptr [ecx], 0
// 005808eb  40                   inc eax
// 005808ec  83c104               add ecx, 4
// 005808ef  3b8624010000         cmp eax, dword ptr [esi + 0x124]
// 005808f5  7cee                 jl 0x5808e5
// 005808f7  c7471400000000       mov dword ptr [edi + 0x14], 0
// 005808fe  8b96fc000000         mov edx, dword ptr [esi + 0xfc]
// 00580904  895728               mov dword ptr [edi + 0x28], edx
// 00580907  83be7c01000000       cmp dword ptr [esi + 0x17c], 0
// 0058090e  7504                 jne 0x580914
// 00580910  c6470800             mov byte ptr [edi + 8], 0
// 00580914  b001                 mov al, 1
// 00580916  5f                   pop edi
// 00580917  c3                   ret 
// library jpeg-6b/jdphuff.c (function _process_restart)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdphuff.c
