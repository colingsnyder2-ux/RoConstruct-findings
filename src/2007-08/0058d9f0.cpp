// roc 2007-08 0058d9f0  unit: RBX::SoundService  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0058d9f0
//
// 0058d9f0  64a100000000         mov eax, dword ptr fs:[0]
// 0058d9f6  6aff                 push -1
// 0058d9f8  687e667500           push 0x75667e
// 0058d9fd  50                   push eax
// 0058d9fe  b801000000           mov eax, 1
// 0058da03  64892500000000       mov dword ptr fs:[0], esp
// 0058da0a  840580378c00         test byte ptr [0x8c3780], al
// 0058da10  7530                 jne 0x58da42
// 0058da12  090580378c00         or dword ptr [0x8c3780], eax
// 0058da18  6aff                 push -1
// 0058da1a  68c8f38a00           push 0x8af3c8
// 0058da1f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0058da27  e814eff9ff           call 0x52c940
// 0058da2c  83c408               add esp, 8
// 0058da2f  a37c378c00           mov dword ptr [0x8c377c], eax
// 0058da34  8b0c24               mov ecx, dword ptr [esp]
// 0058da37  64890d00000000       mov dword ptr fs:[0], ecx
// 0058da3e  83c40c               add esp, 0xc
// 0058da41  c3                   ret 
// 0058da42  8b0c24               mov ecx, dword ptr [esp]
// 0058da45  a17c378c00           mov eax, dword ptr [0x8c377c]
// 0058da4a  64890d00000000       mov dword ptr fs:[0], ecx
// 0058da51  83c40c               add esp, 0xc
// 0058da54  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
