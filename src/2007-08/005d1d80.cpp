// roc 2007-08 005d1d80  unit: RBX::Tool  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005d1d80
//
// 005d1d80  64a100000000         mov eax, dword ptr fs:[0]
// 005d1d86  6aff                 push -1
// 005d1d88  68ae9c7500           push 0x759cae
// 005d1d8d  50                   push eax
// 005d1d8e  b801000000           mov eax, 1
// 005d1d93  64892500000000       mov dword ptr fs:[0], esp
// 005d1d9a  840558688c00         test byte ptr [0x8c6858], al
// 005d1da0  7530                 jne 0x5d1dd2
// 005d1da2  090558688c00         or dword ptr [0x8c6858], eax
// 005d1da8  6aff                 push -1
// 005d1daa  68a03a7c00           push 0x7c3aa0
// 005d1daf  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005d1db7  e884abf5ff           call 0x52c940
// 005d1dbc  83c408               add esp, 8
// 005d1dbf  a354688c00           mov dword ptr [0x8c6854], eax
// 005d1dc4  8b0c24               mov ecx, dword ptr [esp]
// 005d1dc7  64890d00000000       mov dword ptr fs:[0], ecx
// 005d1dce  83c40c               add esp, 0xc
// 005d1dd1  c3                   ret 
// 005d1dd2  8b0c24               mov ecx, dword ptr [esp]
// 005d1dd5  a154688c00           mov eax, dword ptr [0x8c6854]
// 005d1dda  64890d00000000       mov dword ptr fs:[0], ecx
// 005d1de1  83c40c               add esp, 0xc
// 005d1de4  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
