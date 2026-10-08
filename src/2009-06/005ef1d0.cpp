// from server: 100% by auto
// roc 2009-06 005ef1d0  unit: RBX::PartInstance::W4FormFactor::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005ef1d0
//
// 005ef1d0  64a100000000         mov eax, dword ptr fs:[0]
// 005ef1d6  6aff                 push -1
// 005ef1d8  683e588600           push 0x86583e
// 005ef1dd  50                   push eax
// 005ef1de  b801000000           mov eax, 1
// 005ef1e3  64892500000000       mov dword ptr fs:[0], esp
// 005ef1ea  8405c498a400         test byte ptr [0xa498c4], al
// 005ef1f0  7525                 jne 0x5ef217
// 005ef1f2  0905c498a400         or dword ptr [0xa498c4], eax
// 005ef1f8  b9d897a400           mov ecx, 0xa497d8
// 005ef1fd  c744240800000000     mov dword ptr [esp + 8], 0
// 005ef205  e8c66c0b00           call 0x6a5ed0
// 005ef20a  68b08a8900           push 0x898ab0
// 005ef20f  e8e7a81200           call 0x719afb
// 005ef214  83c404               add esp, 4
// 005ef217  8b0c24               mov ecx, dword ptr [esp]
// 005ef21a  b8d897a400           mov eax, 0xa497d8
// 005ef21f  64890d00000000       mov dword ptr fs:[0], ecx
// 005ef226  83c40c               add esp, 0xc
// 005ef229  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
