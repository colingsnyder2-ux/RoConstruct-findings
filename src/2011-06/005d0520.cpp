// roc 2011-06 005d0520  unit: RBX::DialogRoot::W4DialogTone::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005d0520
//
// 005d0520  64a100000000         mov eax, dword ptr fs:[0]
// 005d0526  6aff                 push -1
// 005d0528  688e509e00           push 0x9e508e
// 005d052d  50                   push eax
// 005d052e  b801000000           mov eax, 1
// 005d0533  64892500000000       mov dword ptr fs:[0], esp
// 005d053a  84051484cc00         test byte ptr [0xcc8414], al
// 005d0540  7525                 jne 0x5d0567
// 005d0542  09051484cc00         or dword ptr [0xcc8414], eax
// 005d0548  b97083cc00           mov ecx, 0xcc8370
// 005d054d  c744240800000000     mov dword ptr [esp + 8], 0
// 005d0555  e8b6a40d00           call 0x6aaa10
// 005d055a  68e07fa300           push 0xa37fe0
// 005d055f  e8f9ab2300           call 0x80b15d
// 005d0564  83c404               add esp, 4
// 005d0567  8b0c24               mov ecx, dword ptr [esp]
// 005d056a  b87083cc00           mov eax, 0xcc8370
// 005d056f  64890d00000000       mov dword ptr fs:[0], ecx
// 005d0576  83c40c               add esp, 0xc
// 005d0579  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
