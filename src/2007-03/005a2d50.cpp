// roc 2007-03 005a2d50  unit: seg_005a0000  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005a2d50
//
// 005a2d50  b801000000           mov eax, 1
// 005a2d55  840508f08b00         test byte ptr [0x8bf008], al
// 005a2d5b  7513                 jne 0x5a2d70
// 005a2d5d  090508f08b00         or dword ptr [0x8bf008], eax
// 005a2d63  a190e57700           mov eax, dword ptr [0x77e590]
// 005a2d68  d900                 fld dword ptr [eax]
// 005a2d6a  d91d04f08b00         fstp dword ptr [0x8bf004]
// 005a2d70  b804f08b00           mov eax, 0x8bf004
// 005a2d75  c3                   ret 
// library rbxgs/util\Extents.cpp (function ?inf@Math@RBX@@SAABMXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Extents.cpp
