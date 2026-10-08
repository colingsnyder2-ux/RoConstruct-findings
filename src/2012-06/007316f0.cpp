// from server: 100% by auto
// roc 2012-06 007316f0  unit: RBX::GameBasicSettings::W4RenderQualitySetting::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007316f0
//
// 007316f0  64a100000000         mov eax, dword ptr fs:[0]
// 007316f6  6aff                 push -1
// 007316f8  689e04ac00           push 0xac049e
// 007316fd  50                   push eax
// 007316fe  b801000000           mov eax, 1
// 00731703  64892500000000       mov dword ptr fs:[0], esp
// 0073170a  84051436e300         test byte ptr [0xe33614], al
// 00731710  7525                 jne 0x731737
// 00731712  09051436e300         or dword ptr [0xe33614], eax
// 00731718  b96835e300           mov ecx, 0xe33568
// 0073171d  c744240800000000     mov dword ptr [esp + 8], 0
// 00731725  e866fdffff           call 0x731490
// 0073172a  68e07cb100           push 0xb17ce0
// 0073172f  e8c11a2500           call 0x9831f5
// 00731734  83c404               add esp, 4
// 00731737  8b0c24               mov ecx, dword ptr [esp]
// 0073173a  b86835e300           mov eax, 0xe33568
// 0073173f  64890d00000000       mov dword ptr fs:[0], ecx
// 00731746  83c40c               add esp, 0xc
// 00731749  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
