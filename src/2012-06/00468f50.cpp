// roc 2012-06 00468f50  unit: RBX::CRenderSettings::W4ShadowMode::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00468f50
//
// 00468f50  64a100000000         mov eax, dword ptr fs:[0]
// 00468f56  6aff                 push -1
// 00468f58  684efca900           push 0xa9fc4e
// 00468f5d  50                   push eax
// 00468f5e  b801000000           mov eax, 1
// 00468f63  64892500000000       mov dword ptr fs:[0], esp
// 00468f6a  84058c93e100         test byte ptr [0xe1938c], al
// 00468f70  7525                 jne 0x468f97
// 00468f72  09058c93e100         or dword ptr [0xe1938c], eax
// 00468f78  b9e092e100           mov ecx, 0xe192e0
// 00468f7d  c744240800000000     mov dword ptr [esp + 8], 0
// 00468f85  e806f4ffff           call 0x468390
// 00468f8a  680024b100           push 0xb12400
// 00468f8f  e861a25100           call 0x9831f5
// 00468f94  83c404               add esp, 4
// 00468f97  8b0c24               mov ecx, dword ptr [esp]
// 00468f9a  b8e092e100           mov eax, 0xe192e0
// 00468f9f  64890d00000000       mov dword ptr fs:[0], ecx
// 00468fa6  83c40c               add esp, 0xc
// 00468fa9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
