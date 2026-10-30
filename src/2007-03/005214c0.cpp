// roc 2007-03 005214c0  unit: seg_00520000  size: 133 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005214c0
//
// 005214c0  8b8e94010000         mov ecx, dword ptr [esi + 0x194]
// 005214c6  57                   push edi
// 005214c7  8bbe98010000         mov edi, dword ptr [esi + 0x198]
// 005214cd  8b4710               mov eax, dword ptr [edi + 0x10]
// 005214d0  99                   cdq 
// 005214d1  83e207               and edx, 7
// 005214d4  03c2                 add eax, edx
// 005214d6  c1f803               sar eax, 3
// 005214d9  014114               add dword ptr [ecx + 0x14], eax
// 005214dc  c7471000000000       mov dword ptr [edi + 0x10], 0
// 005214e3  8b8694010000         mov eax, dword ptr [esi + 0x194]
// 005214e9  8b4808               mov ecx, dword ptr [eax + 8]
// 005214ec  56                   push esi
// 005214ed  ffd1                 call ecx
// 005214ef  83c404               add esp, 4
// 005214f2  84c0                 test al, al
// 005214f4  7502                 jne 0x5214f8
// 005214f6  5f                   pop edi
// 005214f7  c3                   ret 
// 005214f8  33c0                 xor eax, eax
// 005214fa  398624010000         cmp dword ptr [esi + 0x124], eax
// 00521500  7e22                 jle 0x521524
// 00521502  8d4f18               lea ecx, [edi + 0x18]
// 00521505  eb09                 jmp 0x521510
// 00521507  8da42400000000       lea esp, [esp]
// 0052150e  8bff                 mov edi, edi
// 00521510  c70100000000         mov dword ptr [ecx], 0
// 00521516  83c001               add eax, 1
// 00521519  83c104               add ecx, 4
// 0052151c  3b8624010000         cmp eax, dword ptr [esi + 0x124]
// 00521522  7cec                 jl 0x521510
// 00521524  c7471400000000       mov dword ptr [edi + 0x14], 0
// 0052152b  8b96fc000000         mov edx, dword ptr [esi + 0xfc]
// 00521531  895728               mov dword ptr [edi + 0x28], edx
// 00521534  83be7c01000000       cmp dword ptr [esi + 0x17c], 0
// 0052153b  7504                 jne 0x521541
// 0052153d  c6470800             mov byte ptr [edi + 8], 0
// 00521541  b001                 mov al, 1
// 00521543  5f                   pop edi
// 00521544  c3                   ret 
// library jpeg-6b/jdphuff.c (function _process_restart)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdphuff.c
