// from server: 100% by auto
// roc 2012-06 00468cb0  unit: RBX::CRenderSettings::W4ShadowMode::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00468cb0
//
// 00468cb0  64a100000000         mov eax, dword ptr fs:[0]
// 00468cb6  6aff                 push -1
// 00468cb8  688efba900           push 0xa9fb8e
// 00468cbd  50                   push eax
// 00468cbe  b801000000           mov eax, 1
// 00468cc3  64892500000000       mov dword ptr fs:[0], esp
// 00468cca  84056c8fe100         test byte ptr [0xe18f6c], al
// 00468cd0  7525                 jne 0x468cf7
// 00468cd2  09056c8fe100         or dword ptr [0xe18f6c], eax
// 00468cd8  b9c08ee100           mov ecx, 0xe18ec0
// 00468cdd  c744240800000000     mov dword ptr [esp + 8], 0
// 00468ce5  e8a6efffff           call 0x467c90
// 00468cea  686024b100           push 0xb12460
// 00468cef  e801a55100           call 0x9831f5
// 00468cf4  83c404               add esp, 4
// 00468cf7  8b0c24               mov ecx, dword ptr [esp]
// 00468cfa  b8c08ee100           mov eax, 0xe18ec0
// 00468cff  64890d00000000       mov dword ptr fs:[0], ecx
// 00468d06  83c40c               add esp, 0xc
// 00468d09  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
