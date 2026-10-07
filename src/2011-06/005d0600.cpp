// roc 2011-06 005d0600  unit: RBX::DialogRoot::W4DialogTone::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005d0600
//
// 005d0600  64a100000000         mov eax, dword ptr fs:[0]
// 005d0606  6aff                 push -1
// 005d0608  68ce509e00           push 0x9e50ce
// 005d060d  50                   push eax
// 005d060e  b801000000           mov eax, 1
// 005d0613  64892500000000       mov dword ptr fs:[0], esp
// 005d061a  84056485cc00         test byte ptr [0xcc8564], al
// 005d0620  7525                 jne 0x5d0647
// 005d0622  09056485cc00         or dword ptr [0xcc8564], eax
// 005d0628  b9c084cc00           mov ecx, 0xcc84c0
// 005d062d  c744240800000000     mov dword ptr [esp + 8], 0
// 005d0635  e8b6a20d00           call 0x6aa8f0
// 005d063a  68c07fa300           push 0xa37fc0
// 005d063f  e819ab2300           call 0x80b15d
// 005d0644  83c404               add esp, 4
// 005d0647  8b0c24               mov ecx, dword ptr [esp]
// 005d064a  b8c084cc00           mov eax, 0xcc84c0
// 005d064f  64890d00000000       mov dword ptr fs:[0], ecx
// 005d0656  83c40c               add esp, 0xc
// 005d0659  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
