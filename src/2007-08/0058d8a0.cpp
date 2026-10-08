// roc 2007-08 0058d8a0  unit: RBX::SoundService  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0058d8a0
//
// 0058d8a0  64a100000000         mov eax, dword ptr fs:[0]
// 0058d8a6  6aff                 push -1
// 0058d8a8  681e667500           push 0x75661e
// 0058d8ad  50                   push eax
// 0058d8ae  b801000000           mov eax, 1
// 0058d8b3  64892500000000       mov dword ptr fs:[0], esp
// 0058d8ba  840568378c00         test byte ptr [0x8c3768], al
// 0058d8c0  7530                 jne 0x58d8f2
// 0058d8c2  090568378c00         or dword ptr [0x8c3768], eax
// 0058d8c8  6aff                 push -1
// 0058d8ca  68e8f38a00           push 0x8af3e8
// 0058d8cf  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0058d8d7  e864f0f9ff           call 0x52c940
// 0058d8dc  83c408               add esp, 8
// 0058d8df  a364378c00           mov dword ptr [0x8c3764], eax
// 0058d8e4  8b0c24               mov ecx, dword ptr [esp]
// 0058d8e7  64890d00000000       mov dword ptr fs:[0], ecx
// 0058d8ee  83c40c               add esp, 0xc
// 0058d8f1  c3                   ret 
// 0058d8f2  8b0c24               mov ecx, dword ptr [esp]
// 0058d8f5  a164378c00           mov eax, dword ptr [0x8c3764]
// 0058d8fa  64890d00000000       mov dword ptr fs:[0], ecx
// 0058d901  83c40c               add esp, 0xc
// 0058d904  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
