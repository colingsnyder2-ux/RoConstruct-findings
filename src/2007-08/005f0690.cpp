// roc 2007-08 005f0690  unit: G3D::VVector3::V?$Value::?$FactoryProduct  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f0690
//
// 005f0690  64a100000000         mov eax, dword ptr fs:[0]
// 005f0696  6aff                 push -1
// 005f0698  686eb47500           push 0x75b46e
// 005f069d  50                   push eax
// 005f069e  b801000000           mov eax, 1
// 005f06a3  64892500000000       mov dword ptr fs:[0], esp
// 005f06aa  8405c4778c00         test byte ptr [0x8c77c4], al
// 005f06b0  7530                 jne 0x5f06e2
// 005f06b2  0905c4778c00         or dword ptr [0x8c77c4], eax
// 005f06b8  6aff                 push -1
// 005f06ba  68bc058b00           push 0x8b05bc
// 005f06bf  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005f06c7  e874c2f3ff           call 0x52c940
// 005f06cc  83c408               add esp, 8
// 005f06cf  a3c0778c00           mov dword ptr [0x8c77c0], eax
// 005f06d4  8b0c24               mov ecx, dword ptr [esp]
// 005f06d7  64890d00000000       mov dword ptr fs:[0], ecx
// 005f06de  83c40c               add esp, 0xc
// 005f06e1  c3                   ret 
// 005f06e2  8b0c24               mov ecx, dword ptr [esp]
// 005f06e5  a1c0778c00           mov eax, dword ptr [0x8c77c0]
// 005f06ea  64890d00000000       mov dword ptr fs:[0], ecx
// 005f06f1  83c40c               add esp, 0xc
// 005f06f4  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
