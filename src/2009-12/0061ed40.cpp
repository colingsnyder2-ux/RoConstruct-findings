// roc 2009-12 0061ed40  unit: seg_00610000  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0061ed40
//
// 0061ed40  8b8e94010000         mov ecx, dword ptr [esi + 0x194]
// 0061ed46  57                   push edi
// 0061ed47  8bbe98010000         mov edi, dword ptr [esi + 0x198]
// 0061ed4d  8b4710               mov eax, dword ptr [edi + 0x10]
// 0061ed50  99                   cdq 
// 0061ed51  83e207               and edx, 7
// 0061ed54  03c2                 add eax, edx
// 0061ed56  c1f803               sar eax, 3
// 0061ed59  014114               add dword ptr [ecx + 0x14], eax
// 0061ed5c  c7471000000000       mov dword ptr [edi + 0x10], 0
// 0061ed63  8b8694010000         mov eax, dword ptr [esi + 0x194]
// 0061ed69  8b4808               mov ecx, dword ptr [eax + 8]
// 0061ed6c  56                   push esi
// 0061ed6d  ffd1                 call ecx
// 0061ed6f  83c404               add esp, 4
// 0061ed72  84c0                 test al, al
// 0061ed74  7502                 jne 0x61ed78
// 0061ed76  5f                   pop edi
// 0061ed77  c3                   ret 
// 0061ed78  33c0                 xor eax, eax
// 0061ed7a  398624010000         cmp dword ptr [esi + 0x124], eax
// 0061ed80  7e15                 jle 0x61ed97
// 0061ed82  8d4f18               lea ecx, [edi + 0x18]
// 0061ed85  c70100000000         mov dword ptr [ecx], 0
// 0061ed8b  40                   inc eax
// 0061ed8c  83c104               add ecx, 4
// 0061ed8f  3b8624010000         cmp eax, dword ptr [esi + 0x124]
// 0061ed95  7cee                 jl 0x61ed85
// 0061ed97  c7471400000000       mov dword ptr [edi + 0x14], 0
// 0061ed9e  8b96fc000000         mov edx, dword ptr [esi + 0xfc]
// 0061eda4  895728               mov dword ptr [edi + 0x28], edx
// 0061eda7  83be7c01000000       cmp dword ptr [esi + 0x17c], 0
// 0061edae  7504                 jne 0x61edb4
// 0061edb0  c6470800             mov byte ptr [edi + 8], 0
// 0061edb4  b001                 mov al, 1
// 0061edb6  5f                   pop edi
// 0061edb7  c3                   ret 
// library jpeg-6b/jdphuff.c (function _process_restart)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdphuff.c
