// roc 2007-08 005d1d10  unit: RBX::Tool  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005d1d10
//
// 005d1d10  64a100000000         mov eax, dword ptr fs:[0]
// 005d1d16  6aff                 push -1
// 005d1d18  688e9c7500           push 0x759c8e
// 005d1d1d  50                   push eax
// 005d1d1e  b801000000           mov eax, 1
// 005d1d23  64892500000000       mov dword ptr fs:[0], esp
// 005d1d2a  840550688c00         test byte ptr [0x8c6850], al
// 005d1d30  7530                 jne 0x5d1d62
// 005d1d32  090550688c00         or dword ptr [0x8c6850], eax
// 005d1d38  6aff                 push -1
// 005d1d3a  6800478b00           push 0x8b4700
// 005d1d3f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005d1d47  e8f4abf5ff           call 0x52c940
// 005d1d4c  83c408               add esp, 8
// 005d1d4f  a34c688c00           mov dword ptr [0x8c684c], eax
// 005d1d54  8b0c24               mov ecx, dword ptr [esp]
// 005d1d57  64890d00000000       mov dword ptr fs:[0], ecx
// 005d1d5e  83c40c               add esp, 0xc
// 005d1d61  c3                   ret 
// 005d1d62  8b0c24               mov ecx, dword ptr [esp]
// 005d1d65  a14c688c00           mov eax, dword ptr [0x8c684c]
// 005d1d6a  64890d00000000       mov dword ptr fs:[0], ecx
// 005d1d71  83c40c               add esp, 0xc
// 005d1d74  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
