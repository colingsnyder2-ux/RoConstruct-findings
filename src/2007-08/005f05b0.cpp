// roc 2007-08 005f05b0  unit: G3D::VVector3::V?$Value::?$FactoryProduct  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f05b0
//
// 005f05b0  64a100000000         mov eax, dword ptr fs:[0]
// 005f05b6  6aff                 push -1
// 005f05b8  682eb47500           push 0x75b42e
// 005f05bd  50                   push eax
// 005f05be  b801000000           mov eax, 1
// 005f05c3  64892500000000       mov dword ptr fs:[0], esp
// 005f05ca  8405b4778c00         test byte ptr [0x8c77b4], al
// 005f05d0  7530                 jne 0x5f0602
// 005f05d2  0905b4778c00         or dword ptr [0x8c77b4], eax
// 005f05d8  6aff                 push -1
// 005f05da  68a4058b00           push 0x8b05a4
// 005f05df  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005f05e7  e854c3f3ff           call 0x52c940
// 005f05ec  83c408               add esp, 8
// 005f05ef  a3b0778c00           mov dword ptr [0x8c77b0], eax
// 005f05f4  8b0c24               mov ecx, dword ptr [esp]
// 005f05f7  64890d00000000       mov dword ptr fs:[0], ecx
// 005f05fe  83c40c               add esp, 0xc
// 005f0601  c3                   ret 
// 005f0602  8b0c24               mov ecx, dword ptr [esp]
// 005f0605  a1b0778c00           mov eax, dword ptr [0x8c77b0]
// 005f060a  64890d00000000       mov dword ptr fs:[0], ecx
// 005f0611  83c40c               add esp, 0xc
// 005f0614  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
