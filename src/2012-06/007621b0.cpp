// from server: 100% by auto
// roc 2012-06 007621b0  unit: RBX::Explosion::W4ExplosionType::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007621b0
//
// 007621b0  64a100000000         mov eax, dword ptr fs:[0]
// 007621b6  6aff                 push -1
// 007621b8  68ce2fac00           push 0xac2fce
// 007621bd  50                   push eax
// 007621be  b801000000           mov eax, 1
// 007621c3  64892500000000       mov dword ptr fs:[0], esp
// 007621ca  84056471e300         test byte ptr [0xe37164], al
// 007621d0  7525                 jne 0x7621f7
// 007621d2  09056471e300         or dword ptr [0xe37164], eax
// 007621d8  b9b870e300           mov ecx, 0xe370b8
// 007621dd  c744240800000000     mov dword ptr [esp + 8], 0
// 007621e5  e876feffff           call 0x762060
// 007621ea  68108cb100           push 0xb18c10
// 007621ef  e801102200           call 0x9831f5
// 007621f4  83c404               add esp, 4
// 007621f7  8b0c24               mov ecx, dword ptr [esp]
// 007621fa  b8b870e300           mov eax, 0xe370b8
// 007621ff  64890d00000000       mov dword ptr fs:[0], ecx
// 00762206  83c40c               add esp, 0xc
// 00762209  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
