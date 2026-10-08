// roc 2007-03 00527520  unit: seg_00520000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00527520
//
// 00527520  6a7f                 push 0x7f
// 00527522  b807000000           mov eax, 7
// 00527527  8bce                 mov ecx, esi
// 00527529  e832ffffff           call 0x527460
// 0052752e  33c0                 xor eax, eax
// 00527530  83c404               add esp, 4
// 00527533  894618               mov dword ptr [esi + 0x18], eax
// 00527536  89461c               mov dword ptr [esi + 0x1c], eax
// 00527539  c3                   ret 
// library jpeg-6b/jcphuff.c (function _flush_bits)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /Ob1 /GS- /MD
// roc-lib: jpeg-6b jcphuff.c
