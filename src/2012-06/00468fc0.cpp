// from server: 100% by auto
// roc 2012-06 00468fc0  unit: RBX::CRenderSettings::W4ShadowMode::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00468fc0
//
// 00468fc0  64a100000000         mov eax, dword ptr fs:[0]
// 00468fc6  6aff                 push -1
// 00468fc8  686efca900           push 0xa9fc6e
// 00468fcd  50                   push eax
// 00468fce  b801000000           mov eax, 1
// 00468fd3  64892500000000       mov dword ptr fs:[0], esp
// 00468fda  84053c94e100         test byte ptr [0xe1943c], al
// 00468fe0  7525                 jne 0x469007
// 00468fe2  09053c94e100         or dword ptr [0xe1943c], eax
// 00468fe8  b99093e100           mov ecx, 0xe19390
// 00468fed  c744240800000000     mov dword ptr [esp + 8], 0
// 00468ff5  e886f6ffff           call 0x468680
// 00468ffa  68f023b100           push 0xb123f0
// 00468fff  e8f1a15100           call 0x9831f5
// 00469004  83c404               add esp, 4
// 00469007  8b0c24               mov ecx, dword ptr [esp]
// 0046900a  b89093e100           mov eax, 0xe19390
// 0046900f  64890d00000000       mov dword ptr fs:[0], ecx
// 00469016  83c40c               add esp, 0xc
// 00469019  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
