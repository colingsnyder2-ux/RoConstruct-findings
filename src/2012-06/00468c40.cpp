// roc 2012-06 00468c40  unit: RBX::CRenderSettings::W4ShadowMode::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00468c40
//
// 00468c40  64a100000000         mov eax, dword ptr fs:[0]
// 00468c46  6aff                 push -1
// 00468c48  686efba900           push 0xa9fb6e
// 00468c4d  50                   push eax
// 00468c4e  b801000000           mov eax, 1
// 00468c53  64892500000000       mov dword ptr fs:[0], esp
// 00468c5a  8405bc8ee100         test byte ptr [0xe18ebc], al
// 00468c60  7525                 jne 0x468c87
// 00468c62  0905bc8ee100         or dword ptr [0xe18ebc], eax
// 00468c68  b9108ee100           mov ecx, 0xe18e10
// 00468c6d  c744240800000000     mov dword ptr [esp + 8], 0
// 00468c75  e8f6eeffff           call 0x467b70
// 00468c7a  687024b100           push 0xb12470
// 00468c7f  e871a55100           call 0x9831f5
// 00468c84  83c404               add esp, 4
// 00468c87  8b0c24               mov ecx, dword ptr [esp]
// 00468c8a  b8108ee100           mov eax, 0xe18e10
// 00468c8f  64890d00000000       mov dword ptr fs:[0], ecx
// 00468c96  83c40c               add esp, 0xc
// 00468c99  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
