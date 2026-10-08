// from server: 100% by auto
// roc 2008-06 0056fef0  unit: RBX::W4NormalId::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056fef0
//
// 0056fef0  64a100000000         mov eax, dword ptr fs:[0]
// 0056fef6  6aff                 push -1
// 0056fef8  68ceff7c00           push 0x7cffce
// 0056fefd  50                   push eax
// 0056fefe  b801000000           mov eax, 1
// 0056ff03  64892500000000       mov dword ptr fs:[0], esp
// 0056ff0a  8405b04c9700         test byte ptr [0x974cb0], al
// 0056ff10  7525                 jne 0x56ff37
// 0056ff12  0905b04c9700         or dword ptr [0x974cb0], eax
// 0056ff18  b9984c9700           mov ecx, 0x974c98
// 0056ff1d  c744240800000000     mov dword ptr [esp + 8], 0
// 0056ff25  e8a694ebff           call 0x4293d0
// 0056ff2a  6810d37f00           push 0x7fd310
// 0056ff2f  e87b181300           call 0x6a17af
// 0056ff34  83c404               add esp, 4
// 0056ff37  8b0c24               mov ecx, dword ptr [esp]
// 0056ff3a  b8984c9700           mov eax, 0x974c98
// 0056ff3f  64890d00000000       mov dword ptr fs:[0], ecx
// 0056ff46  83c40c               add esp, 0xc
// 0056ff49  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
