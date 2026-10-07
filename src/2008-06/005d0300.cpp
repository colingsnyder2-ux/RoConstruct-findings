// roc 2008-06 005d0300  unit: RBX::HopperBin::W4BinType::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d0300
//
// 005d0300  64a100000000         mov eax, dword ptr fs:[0]
// 005d0306  6aff                 push -1
// 005d0308  681e567d00           push 0x7d561e
// 005d030d  50                   push eax
// 005d030e  b801000000           mov eax, 1
// 005d0313  64892500000000       mov dword ptr fs:[0], esp
// 005d031a  8405e89b9700         test byte ptr [0x979be8], al
// 005d0320  7525                 jne 0x5d0347
// 005d0322  0905e89b9700         or dword ptr [0x979be8], eax
// 005d0328  b9009b9700           mov ecx, 0x979b00
// 005d032d  c744240800000000     mov dword ptr [esp + 8], 0
// 005d0335  e806feffff           call 0x5d0140
// 005d033a  6860ef7f00           push 0x7fef60
// 005d033f  e86b140d00           call 0x6a17af
// 005d0344  83c404               add esp, 4
// 005d0347  8b0c24               mov ecx, dword ptr [esp]
// 005d034a  b8009b9700           mov eax, 0x979b00
// 005d034f  64890d00000000       mov dword ptr fs:[0], ecx
// 005d0356  83c40c               add esp, 0xc
// 005d0359  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
