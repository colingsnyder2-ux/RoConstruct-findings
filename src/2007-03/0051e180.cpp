// roc 2007-03 0051e180  unit: seg_00510000  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0051e180
//
// 0051e180  56                   push esi
// 0051e181  8bf0                 mov esi, eax
// 0051e183  68ff000000           push 0xff
// 0051e188  e8b3ffffff           call 0x51e140
// 0051e18d  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0051e191  50                   push eax
// 0051e192  e8a9ffffff           call 0x51e140
// 0051e197  83c408               add esp, 8
// 0051e19a  5e                   pop esi
// 0051e19b  c3                   ret 
// library jpeg-6b/jcmarker.c (function _emit_marker)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /Ob1 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
