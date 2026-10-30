// roc 2007-03 0051e3c0  unit: seg_00510000  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0051e3c0
//
// 0051e3c0  68dd000000           push 0xdd
// 0051e3c5  8bc6                 mov eax, esi
// 0051e3c7  e8b4fdffff           call 0x51e180
// 0051e3cc  83c404               add esp, 4
// 0051e3cf  b804000000           mov eax, 4
// 0051e3d4  8bce                 mov ecx, esi
// 0051e3d6  e8c5fdffff           call 0x51e1a0
// 0051e3db  8b86bc000000         mov eax, dword ptr [esi + 0xbc]
// 0051e3e1  8bce                 mov ecx, esi
// 0051e3e3  e9b8fdffff           jmp 0x51e1a0
// library jpeg-6b/jcmarker.c (function _emit_dri)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /Ob1 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
