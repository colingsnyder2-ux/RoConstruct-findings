// from server: 100% by auto
// roc 2011-06 005d0830  unit: RBX::DialogRoot::W4DialogTone::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005d0830
//
// 005d0830  64a100000000         mov eax, dword ptr fs:[0]
// 005d0836  6aff                 push -1
// 005d0838  686e519e00           push 0x9e516e
// 005d083d  50                   push eax
// 005d083e  b801000000           mov eax, 1
// 005d0843  64892500000000       mov dword ptr fs:[0], esp
// 005d084a  8405ac88cc00         test byte ptr [0xcc88ac], al
// 005d0850  7525                 jne 0x5d0877
// 005d0852  0905ac88cc00         or dword ptr [0xcc88ac], eax
// 005d0858  b90888cc00           mov ecx, 0xcc8808
// 005d085d  c744240800000000     mov dword ptr [esp + 8], 0
// 005d0865  e8d64d0900           call 0x665640
// 005d086a  68707fa300           push 0xa37f70
// 005d086f  e8e9a82300           call 0x80b15d
// 005d0874  83c404               add esp, 4
// 005d0877  8b0c24               mov ecx, dword ptr [esp]
// 005d087a  b80888cc00           mov eax, 0xcc8808
// 005d087f  64890d00000000       mov dword ptr fs:[0], ecx
// 005d0886  83c40c               add esp, 0xc
// 005d0889  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
