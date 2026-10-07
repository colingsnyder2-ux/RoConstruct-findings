// roc 2011-06 005d0670  unit: RBX::DialogRoot::W4DialogTone::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005d0670
//
// 005d0670  64a100000000         mov eax, dword ptr fs:[0]
// 005d0676  6aff                 push -1
// 005d0678  68ee509e00           push 0x9e50ee
// 005d067d  50                   push eax
// 005d067e  b801000000           mov eax, 1
// 005d0683  64892500000000       mov dword ptr fs:[0], esp
// 005d068a  84050c86cc00         test byte ptr [0xcc860c], al
// 005d0690  7525                 jne 0x5d06b7
// 005d0692  09050c86cc00         or dword ptr [0xcc860c], eax
// 005d0698  b96885cc00           mov ecx, 0xcc8568
// 005d069d  c744240800000000     mov dword ptr [esp + 8], 0
// 005d06a5  e896241600           call 0x732b40
// 005d06aa  68b07fa300           push 0xa37fb0
// 005d06af  e8a9aa2300           call 0x80b15d
// 005d06b4  83c404               add esp, 4
// 005d06b7  8b0c24               mov ecx, dword ptr [esp]
// 005d06ba  b86885cc00           mov eax, 0xcc8568
// 005d06bf  64890d00000000       mov dword ptr fs:[0], ecx
// 005d06c6  83c40c               add esp, 0xc
// 005d06c9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
