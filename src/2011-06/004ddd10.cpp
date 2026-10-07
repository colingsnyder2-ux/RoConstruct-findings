// roc 2011-06 004ddd10  unit: RBX::NetworkSettings::W4PhysicsReceiveMethod::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004ddd10
//
// 004ddd10  64a100000000         mov eax, dword ptr fs:[0]
// 004ddd16  6aff                 push -1
// 004ddd18  680eae9d00           push 0x9dae0e
// 004ddd1d  50                   push eax
// 004ddd1e  b801000000           mov eax, 1
// 004ddd23  64892500000000       mov dword ptr fs:[0], esp
// 004ddd2a  84059c76cb00         test byte ptr [0xcb769c], al
// 004ddd30  7525                 jne 0x4ddd57
// 004ddd32  09059c76cb00         or dword ptr [0xcb769c], eax
// 004ddd38  b9f875cb00           mov ecx, 0xcb75f8
// 004ddd3d  c744240800000000     mov dword ptr [esp + 8], 0
// 004ddd45  e8965d0000           call 0x4e3ae0
// 004ddd4a  682034a300           push 0xa33420
// 004ddd4f  e809d43200           call 0x80b15d
// 004ddd54  83c404               add esp, 4
// 004ddd57  8b0c24               mov ecx, dword ptr [esp]
// 004ddd5a  b8f875cb00           mov eax, 0xcb75f8
// 004ddd5f  64890d00000000       mov dword ptr fs:[0], ecx
// 004ddd66  83c40c               add esp, 0xc
// 004ddd69  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
