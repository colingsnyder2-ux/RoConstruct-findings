// roc 2007-03 005436f0  unit: seg_00540000  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005436f0
//
// 005436f0  64a100000000         mov eax, dword ptr fs:[0]
// 005436f6  6aff                 push -1
// 005436f8  689e257500           push 0x75259e
// 005436fd  50                   push eax
// 005436fe  b801000000           mov eax, 1
// 00543703  64892500000000       mov dword ptr fs:[0], esp
// 0054370a  8405b8ba8b00         test byte ptr [0x8bbab8], al
// 00543710  7525                 jne 0x543737
// 00543712  0905b8ba8b00         or dword ptr [0x8bbab8], eax
// 00543718  b928ba8b00           mov ecx, 0x8bba28
// 0054371d  c744240800000000     mov dword ptr [esp + 8], 0
// 00543725  e856feffff           call 0x543580
// 0054372a  68f0987700           push 0x7798f0
// 0054372f  e87fba0d00           call 0x61f1b3
// 00543734  83c404               add esp, 4
// 00543737  8b0c24               mov ecx, dword ptr [esp]
// 0054373a  b828ba8b00           mov eax, 0x8bba28
// 0054373f  64890d00000000       mov dword ptr fs:[0], ecx
// 00543746  83c40c               add esp, 0xc
// 00543749  c3                   ret 
// library rbxgs/gui\GuiDraw.cpp (function ?singleton@ContentProvider@RBX@@SAAAV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GuiDraw.cpp
