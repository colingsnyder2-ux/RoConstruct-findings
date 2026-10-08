// roc 2007-08 005d9f90  unit: RBX::VVelocityMotor::?$FactoryProduct  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005d9f90
//
// 005d9f90  64a100000000         mov eax, dword ptr fs:[0]
// 005d9f96  6aff                 push -1
// 005d9f98  681ea67500           push 0x75a61e
// 005d9f9d  50                   push eax
// 005d9f9e  b801000000           mov eax, 1
// 005d9fa3  64892500000000       mov dword ptr fs:[0], esp
// 005d9faa  84057c6a8c00         test byte ptr [0x8c6a7c], al
// 005d9fb0  7530                 jne 0x5d9fe2
// 005d9fb2  09057c6a8c00         or dword ptr [0x8c6a7c], eax
// 005d9fb8  6aff                 push -1
// 005d9fba  6820bf7b00           push 0x7bbf20
// 005d9fbf  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005d9fc7  e87429f5ff           call 0x52c940
// 005d9fcc  83c408               add esp, 8
// 005d9fcf  a3786a8c00           mov dword ptr [0x8c6a78], eax
// 005d9fd4  8b0c24               mov ecx, dword ptr [esp]
// 005d9fd7  64890d00000000       mov dword ptr fs:[0], ecx
// 005d9fde  83c40c               add esp, 0xc
// 005d9fe1  c3                   ret 
// 005d9fe2  8b0c24               mov ecx, dword ptr [esp]
// 005d9fe5  a1786a8c00           mov eax, dword ptr [0x8c6a78]
// 005d9fea  64890d00000000       mov dword ptr fs:[0], ecx
// 005d9ff1  83c40c               add esp, 0xc
// 005d9ff4  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
