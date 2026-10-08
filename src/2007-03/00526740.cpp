// roc 2007-03 00526740  unit: seg_00520000  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00526740
//
// 00526740  8b4720               mov eax, dword ptr [edi + 0x20]
// 00526743  56                   push esi
// 00526744  8b7018               mov esi, dword ptr [eax + 0x18]
// 00526747  50                   push eax
// 00526748  8b460c               mov eax, dword ptr [esi + 0xc]
// 0052674b  ffd0                 call eax
// 0052674d  83c404               add esp, 4
// 00526750  84c0                 test al, al
// 00526752  7502                 jne 0x526756
// 00526754  5e                   pop esi
// 00526755  c3                   ret 
// 00526756  8b0e                 mov ecx, dword ptr [esi]
// 00526758  890f                 mov dword ptr [edi], ecx
// 0052675a  8b5604               mov edx, dword ptr [esi + 4]
// 0052675d  895704               mov dword ptr [edi + 4], edx
// 00526760  b001                 mov al, 1
// 00526762  5e                   pop esi
// 00526763  c3                   ret 
// library jpeg-6b/jchuff.c (function _dump_buffer)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jchuff.c
