// from server: 100% by auto
// roc 2012-06 004798f0  unit: RBX::PartInstance::W4Material::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004798f0
//
// 004798f0  64a100000000         mov eax, dword ptr fs:[0]
// 004798f6  6aff                 push -1
// 004798f8  680e0eaa00           push 0xaa0e0e
// 004798fd  50                   push eax
// 004798fe  b801000000           mov eax, 1
// 00479903  64892500000000       mov dword ptr fs:[0], esp
// 0047990a  84051ca5e100         test byte ptr [0xe1a51c], al
// 00479910  7525                 jne 0x479937
// 00479912  09051ca5e100         or dword ptr [0xe1a51c], eax
// 00479918  b970a4e100           mov ecx, 0xe1a470
// 0047991d  c744240800000000     mov dword ptr [esp + 8], 0
// 00479925  e8a6b62d00           call 0x754fd0
// 0047992a  681027b100           push 0xb12710
// 0047992f  e8c1985000           call 0x9831f5
// 00479934  83c404               add esp, 4
// 00479937  8b0c24               mov ecx, dword ptr [esp]
// 0047993a  b870a4e100           mov eax, 0xe1a470
// 0047993f  64890d00000000       mov dword ptr fs:[0], ecx
// 00479946  83c40c               add esp, 0xc
// 00479949  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
