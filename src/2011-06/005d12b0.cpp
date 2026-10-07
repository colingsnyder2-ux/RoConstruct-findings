// roc 2011-06 005d12b0  unit: RBX::DialogRoot::W4DialogTone::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005d12b0
//
// 005d12b0  64a100000000         mov eax, dword ptr fs:[0]
// 005d12b6  6aff                 push -1
// 005d12b8  686e549e00           push 0x9e546e
// 005d12bd  50                   push eax
// 005d12be  b801000000           mov eax, 1
// 005d12c3  64892500000000       mov dword ptr fs:[0], esp
// 005d12ca  84056c98cc00         test byte ptr [0xcc986c], al
// 005d12d0  7525                 jne 0x5d12f7
// 005d12d2  09056c98cc00         or dword ptr [0xcc986c], eax
// 005d12d8  b9c897cc00           mov ecx, 0xcc97c8
// 005d12dd  c744240800000000     mov dword ptr [esp + 8], 0
// 005d12e5  e836e21300           call 0x70f520
// 005d12ea  68f07da300           push 0xa37df0
// 005d12ef  e8699e2300           call 0x80b15d
// 005d12f4  83c404               add esp, 4
// 005d12f7  8b0c24               mov ecx, dword ptr [esp]
// 005d12fa  b8c897cc00           mov eax, 0xcc97c8
// 005d12ff  64890d00000000       mov dword ptr fs:[0], ecx
// 005d1306  83c40c               add esp, 0xc
// 005d1309  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
