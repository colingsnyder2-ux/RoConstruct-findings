// from server: 100% by auto
// roc 2011-06 004dddf0  unit: RBX::NetworkSettings::W4PhysicsReceiveMethod::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004dddf0
//
// 004dddf0  64a100000000         mov eax, dword ptr fs:[0]
// 004dddf6  6aff                 push -1
// 004dddf8  684eae9d00           push 0x9dae4e
// 004dddfd  50                   push eax
// 004dddfe  b801000000           mov eax, 1
// 004dde03  64892500000000       mov dword ptr fs:[0], esp
// 004dde0a  8405ec77cb00         test byte ptr [0xcb77ec], al
// 004dde10  7525                 jne 0x4dde37
// 004dde12  0905ec77cb00         or dword ptr [0xcb77ec], eax
// 004dde18  b94877cb00           mov ecx, 0xcb7748
// 004dde1d  c744240800000000     mov dword ptr [esp + 8], 0
// 004dde25  e8a65b0000           call 0x4e39d0
// 004dde2a  680034a300           push 0xa33400
// 004dde2f  e829d33200           call 0x80b15d
// 004dde34  83c404               add esp, 4
// 004dde37  8b0c24               mov ecx, dword ptr [esp]
// 004dde3a  b84877cb00           mov eax, 0xcb7748
// 004dde3f  64890d00000000       mov dword ptr fs:[0], ecx
// 004dde46  83c40c               add esp, 0xc
// 004dde49  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
