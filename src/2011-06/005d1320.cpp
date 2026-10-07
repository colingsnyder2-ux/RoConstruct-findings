// roc 2011-06 005d1320  unit: RBX::DialogRoot::W4DialogTone::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005d1320
//
// 005d1320  64a100000000         mov eax, dword ptr fs:[0]
// 005d1326  6aff                 push -1
// 005d1328  688e549e00           push 0x9e548e
// 005d132d  50                   push eax
// 005d132e  b801000000           mov eax, 1
// 005d1333  64892500000000       mov dword ptr fs:[0], esp
// 005d133a  84051499cc00         test byte ptr [0xcc9914], al
// 005d1340  7525                 jne 0x5d1367
// 005d1342  09051499cc00         or dword ptr [0xcc9914], eax
// 005d1348  b97098cc00           mov ecx, 0xcc9870
// 005d134d  c744240800000000     mov dword ptr [esp + 8], 0
// 005d1355  e8367e0a00           call 0x679190
// 005d135a  68e07da300           push 0xa37de0
// 005d135f  e8f99d2300           call 0x80b15d
// 005d1364  83c404               add esp, 4
// 005d1367  8b0c24               mov ecx, dword ptr [esp]
// 005d136a  b87098cc00           mov eax, 0xcc9870
// 005d136f  64890d00000000       mov dword ptr fs:[0], ecx
// 005d1376  83c40c               add esp, 0xc
// 005d1379  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
