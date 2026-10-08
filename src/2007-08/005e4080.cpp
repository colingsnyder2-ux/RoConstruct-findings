// roc 2007-08 005e4080  unit: RBX::ArrowTool  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e4080
//
// 005e4080  64a100000000         mov eax, dword ptr fs:[0]
// 005e4086  6aff                 push -1
// 005e4088  684eac7500           push 0x75ac4e
// 005e408d  50                   push eax
// 005e408e  b801000000           mov eax, 1
// 005e4093  64892500000000       mov dword ptr fs:[0], esp
// 005e409a  8405f46e8c00         test byte ptr [0x8c6ef4], al
// 005e40a0  7530                 jne 0x5e40d2
// 005e40a2  0905f46e8c00         or dword ptr [0x8c6ef4], eax
// 005e40a8  6aff                 push -1
// 005e40aa  6898e18a00           push 0x8ae198
// 005e40af  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005e40b7  e88488f4ff           call 0x52c940
// 005e40bc  83c408               add esp, 8
// 005e40bf  a3f06e8c00           mov dword ptr [0x8c6ef0], eax
// 005e40c4  8b0c24               mov ecx, dword ptr [esp]
// 005e40c7  64890d00000000       mov dword ptr fs:[0], ecx
// 005e40ce  83c40c               add esp, 0xc
// 005e40d1  c3                   ret 
// 005e40d2  8b0c24               mov ecx, dword ptr [esp]
// 005e40d5  a1f06e8c00           mov eax, dword ptr [0x8c6ef0]
// 005e40da  64890d00000000       mov dword ptr fs:[0], ecx
// 005e40e1  83c40c               add esp, 0xc
// 005e40e4  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
