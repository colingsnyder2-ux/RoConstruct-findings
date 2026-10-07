// roc 2007-08 005e2730  unit: seg_005e0000  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e2730
//
// 005e2730  64a100000000         mov eax, dword ptr fs:[0]
// 005e2736  6aff                 push -1
// 005e2738  688eaa7500           push 0x75aa8e
// 005e273d  50                   push eax
// 005e273e  b801000000           mov eax, 1
// 005e2743  64892500000000       mov dword ptr fs:[0], esp
// 005e274a  8405dc6e8c00         test byte ptr [0x8c6edc], al
// 005e2750  7525                 jne 0x5e2777
// 005e2752  0905dc6e8c00         or dword ptr [0x8c6edc], eax
// 005e2758  b9106e8c00           mov ecx, 0x8c6e10
// 005e275d  c744240800000000     mov dword ptr [esp + 8], 0
// 005e2765  e846feffff           call 0x5e25b0
// 005e276a  6800bf7700           push 0x77bf00
// 005e276f  e8afe50400           call 0x630d23
// 005e2774  83c404               add esp, 4
// 005e2777  8b0c24               mov ecx, dword ptr [esp]
// 005e277a  b8106e8c00           mov eax, 0x8c6e10
// 005e277f  64890d00000000       mov dword ptr fs:[0], ecx
// 005e2786  83c40c               add esp, 0xc
// 005e2789  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
