// roc 2007-08 005e5db0  unit: RBX::NewNullTool  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e5db0
//
// 005e5db0  64a100000000         mov eax, dword ptr fs:[0]
// 005e5db6  6aff                 push -1
// 005e5db8  686ead7500           push 0x75ad6e
// 005e5dbd  50                   push eax
// 005e5dbe  b801000000           mov eax, 1
// 005e5dc3  64892500000000       mov dword ptr fs:[0], esp
// 005e5dca  8405146f8c00         test byte ptr [0x8c6f14], al
// 005e5dd0  7530                 jne 0x5e5e02
// 005e5dd2  0905146f8c00         or dword ptr [0x8c6f14], eax
// 005e5dd8  6aff                 push -1
// 005e5dda  68e8e28a00           push 0x8ae2e8
// 005e5ddf  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005e5de7  e8546bf4ff           call 0x52c940
// 005e5dec  83c408               add esp, 8
// 005e5def  a3106f8c00           mov dword ptr [0x8c6f10], eax
// 005e5df4  8b0c24               mov ecx, dword ptr [esp]
// 005e5df7  64890d00000000       mov dword ptr fs:[0], ecx
// 005e5dfe  83c40c               add esp, 0xc
// 005e5e01  c3                   ret 
// 005e5e02  8b0c24               mov ecx, dword ptr [esp]
// 005e5e05  a1106f8c00           mov eax, dword ptr [0x8c6f10]
// 005e5e0a  64890d00000000       mov dword ptr fs:[0], ecx
// 005e5e11  83c40c               add esp, 0xc
// 005e5e14  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
