// roc 2007-03 00527570  unit: seg_00520000  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00527570
//
// 00527570  807f0c00             cmp byte ptr [edi + 0xc], 0
// 00527574  53                   push ebx
// 00527575  56                   push esi
// 00527576  8bd8                 mov ebx, eax
// 00527578  8bf1                 mov esi, ecx
// 0052757a  751f                 jne 0x52759b
// 0052757c  85db                 test ebx, ebx
// 0052757e  761b                 jbe 0x52759b
// 00527580  0fbe06               movsx eax, byte ptr [esi]
// 00527583  50                   push eax
// 00527584  b801000000           mov eax, 1
// 00527589  8bcf                 mov ecx, edi
// 0052758b  e8d0feffff           call 0x527460
// 00527590  83c404               add esp, 4
// 00527593  83c601               add esi, 1
// 00527596  83eb01               sub ebx, 1
// 00527599  75e5                 jne 0x527580
// 0052759b  5e                   pop esi
// 0052759c  5b                   pop ebx
// 0052759d  c3                   ret 
// library jpeg-6b/jcphuff.c (function _emit_buffered_bits)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /Ob1 /GS- /MD
// roc-lib: jpeg-6b jcphuff.c
