// from server: 100% by auto
// roc 2009-06 00443410  unit: RBX::CRenderSettings::W4MaterialQuality::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00443410
//
// 00443410  64a100000000         mov eax, dword ptr fs:[0]
// 00443416  6aff                 push -1
// 00443418  68be048500           push 0x8504be
// 0044341d  50                   push eax
// 0044341e  b801000000           mov eax, 1
// 00443423  64892500000000       mov dword ptr fs:[0], esp
// 0044342a  84052caca300         test byte ptr [0xa3ac2c], al
// 00443430  7525                 jne 0x443457
// 00443432  09052caca300         or dword ptr [0xa3ac2c], eax
// 00443438  b940aba300           mov ecx, 0xa3ab40
// 0044343d  c744240800000000     mov dword ptr [esp + 8], 0
// 00443445  e826f8ffff           call 0x442c70
// 0044344a  6840478900           push 0x894740
// 0044344f  e8a7662d00           call 0x719afb
// 00443454  83c404               add esp, 4
// 00443457  8b0c24               mov ecx, dword ptr [esp]
// 0044345a  b840aba300           mov eax, 0xa3ab40
// 0044345f  64890d00000000       mov dword ptr fs:[0], ecx
// 00443466  83c40c               add esp, 0xc
// 00443469  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
