// roc 2011-06 005d1240  unit: RBX::DialogRoot::W4DialogTone::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005d1240
//
// 005d1240  64a100000000         mov eax, dword ptr fs:[0]
// 005d1246  6aff                 push -1
// 005d1248  684e549e00           push 0x9e544e
// 005d124d  50                   push eax
// 005d124e  b801000000           mov eax, 1
// 005d1253  64892500000000       mov dword ptr fs:[0], esp
// 005d125a  8405c497cc00         test byte ptr [0xcc97c4], al
// 005d1260  7525                 jne 0x5d1287
// 005d1262  0905c497cc00         or dword ptr [0xcc97c4], eax
// 005d1268  b92097cc00           mov ecx, 0xcc9720
// 005d126d  c744240800000000     mov dword ptr [esp + 8], 0
// 005d1275  e8f67a1700           call 0x748d70
// 005d127a  68007ea300           push 0xa37e00
// 005d127f  e8d99e2300           call 0x80b15d
// 005d1284  83c404               add esp, 4
// 005d1287  8b0c24               mov ecx, dword ptr [esp]
// 005d128a  b82097cc00           mov eax, 0xcc9720
// 005d128f  64890d00000000       mov dword ptr fs:[0], ecx
// 005d1296  83c40c               add esp, 0xc
// 005d1299  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
