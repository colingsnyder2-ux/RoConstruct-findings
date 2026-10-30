// roc 2007-03 0051e1a0  unit: seg_00510000  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0051e1a0
//
// 0051e1a0  53                   push ebx
// 0051e1a1  8bd8                 mov ebx, eax
// 0051e1a3  0fb6c7               movzx eax, bh
// 0051e1a6  56                   push esi
// 0051e1a7  8bf1                 mov esi, ecx
// 0051e1a9  50                   push eax
// 0051e1aa  e891ffffff           call 0x51e140
// 0051e1af  81e3ff000000         and ebx, 0xff
// 0051e1b5  53                   push ebx
// 0051e1b6  e885ffffff           call 0x51e140
// 0051e1bb  83c408               add esp, 8
// 0051e1be  5e                   pop esi
// 0051e1bf  5b                   pop ebx
// 0051e1c0  c3                   ret 
// library jpeg-6b/jcmarker.c (function _emit_2bytes)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /Ob1 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
