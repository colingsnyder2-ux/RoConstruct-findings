// roc 2011-06 005d0440  unit: RBX::DialogRoot::W4DialogTone::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005d0440
//
// 005d0440  64a100000000         mov eax, dword ptr fs:[0]
// 005d0446  6aff                 push -1
// 005d0448  684e509e00           push 0x9e504e
// 005d044d  50                   push eax
// 005d044e  b801000000           mov eax, 1
// 005d0453  64892500000000       mov dword ptr fs:[0], esp
// 005d045a  8405c482cc00         test byte ptr [0xcc82c4], al
// 005d0460  7525                 jne 0x5d0487
// 005d0462  0905c482cc00         or dword ptr [0xcc82c4], eax
// 005d0468  b92082cc00           mov ecx, 0xcc8220
// 005d046d  c744240800000000     mov dword ptr [esp + 8], 0
// 005d0475  e886e00500           call 0x62e500
// 005d047a  680080a300           push 0xa38000
// 005d047f  e8d9ac2300           call 0x80b15d
// 005d0484  83c404               add esp, 4
// 005d0487  8b0c24               mov ecx, dword ptr [esp]
// 005d048a  b82082cc00           mov eax, 0xcc8220
// 005d048f  64890d00000000       mov dword ptr fs:[0], ecx
// 005d0496  83c40c               add esp, 0xc
// 005d0499  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
