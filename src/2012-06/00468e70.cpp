// from server: 100% by auto
// roc 2012-06 00468e70  unit: RBX::CRenderSettings::W4ShadowMode::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00468e70
//
// 00468e70  64a100000000         mov eax, dword ptr fs:[0]
// 00468e76  6aff                 push -1
// 00468e78  680efca900           push 0xa9fc0e
// 00468e7d  50                   push eax
// 00468e7e  b801000000           mov eax, 1
// 00468e83  64892500000000       mov dword ptr fs:[0], esp
// 00468e8a  84052c92e100         test byte ptr [0xe1922c], al
// 00468e90  7525                 jne 0x468eb7
// 00468e92  09052c92e100         or dword ptr [0xe1922c], eax
// 00468e98  b98091e100           mov ecx, 0xe19180
// 00468e9d  c744240800000000     mov dword ptr [esp + 8], 0
// 00468ea5  e886f2ffff           call 0x468130
// 00468eaa  682024b100           push 0xb12420
// 00468eaf  e841a35100           call 0x9831f5
// 00468eb4  83c404               add esp, 4
// 00468eb7  8b0c24               mov ecx, dword ptr [esp]
// 00468eba  b88091e100           mov eax, 0xe19180
// 00468ebf  64890d00000000       mov dword ptr fs:[0], ecx
// 00468ec6  83c40c               add esp, 0xc
// 00468ec9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
