// from server: 100% by auto
// roc 2012-06 00731680  unit: RBX::GameBasicSettings::W4RenderQualitySetting::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00731680
//
// 00731680  64a100000000         mov eax, dword ptr fs:[0]
// 00731686  6aff                 push -1
// 00731688  687e04ac00           push 0xac047e
// 0073168d  50                   push eax
// 0073168e  b801000000           mov eax, 1
// 00731693  64892500000000       mov dword ptr fs:[0], esp
// 0073169a  84056435e300         test byte ptr [0xe33564], al
// 007316a0  7525                 jne 0x7316c7
// 007316a2  09056435e300         or dword ptr [0xe33564], eax
// 007316a8  b9b834e300           mov ecx, 0xe334b8
// 007316ad  c744240800000000     mov dword ptr [esp + 8], 0
// 007316b5  e896fcffff           call 0x731350
// 007316ba  68f07cb100           push 0xb17cf0
// 007316bf  e8311b2500           call 0x9831f5
// 007316c4  83c404               add esp, 4
// 007316c7  8b0c24               mov ecx, dword ptr [esp]
// 007316ca  b8b834e300           mov eax, 0xe334b8
// 007316cf  64890d00000000       mov dword ptr fs:[0], ecx
// 007316d6  83c40c               add esp, 0xc
// 007316d9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
