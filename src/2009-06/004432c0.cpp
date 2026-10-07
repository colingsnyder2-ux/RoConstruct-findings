// roc 2009-06 004432c0  unit: RBX::CRenderSettings::W4MaterialQuality::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004432c0
//
// 004432c0  64a100000000         mov eax, dword ptr fs:[0]
// 004432c6  6aff                 push -1
// 004432c8  685e048500           push 0x85045e
// 004432cd  50                   push eax
// 004432ce  b801000000           mov eax, 1
// 004432d3  64892500000000       mov dword ptr fs:[0], esp
// 004432da  84055ca9a300         test byte ptr [0xa3a95c], al
// 004432e0  7525                 jne 0x443307
// 004432e2  09055ca9a300         or dword ptr [0xa3a95c], eax
// 004432e8  b970a8a300           mov ecx, 0xa3a870
// 004432ed  c744240800000000     mov dword ptr [esp + 8], 0
// 004432f5  e8e6f4ffff           call 0x4427e0
// 004432fa  6870478900           push 0x894770
// 004432ff  e8f7672d00           call 0x719afb
// 00443304  83c404               add esp, 4
// 00443307  8b0c24               mov ecx, dword ptr [esp]
// 0044330a  b870a8a300           mov eax, 0xa3a870
// 0044330f  64890d00000000       mov dword ptr fs:[0], ecx
// 00443316  83c40c               add esp, 0xc
// 00443319  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
