// roc 2007-08 0058d750  unit: RBX::SoundService  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0058d750
//
// 0058d750  64a100000000         mov eax, dword ptr fs:[0]
// 0058d756  6aff                 push -1
// 0058d758  68be657500           push 0x7565be
// 0058d75d  50                   push eax
// 0058d75e  b801000000           mov eax, 1
// 0058d763  64892500000000       mov dword ptr fs:[0], esp
// 0058d76a  840550378c00         test byte ptr [0x8c3750], al
// 0058d770  7530                 jne 0x58d7a2
// 0058d772  090550378c00         or dword ptr [0x8c3750], eax
// 0058d778  6aff                 push -1
// 0058d77a  68f8e68a00           push 0x8ae6f8
// 0058d77f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0058d787  e8b4f1f9ff           call 0x52c940
// 0058d78c  83c408               add esp, 8
// 0058d78f  a34c378c00           mov dword ptr [0x8c374c], eax
// 0058d794  8b0c24               mov ecx, dword ptr [esp]
// 0058d797  64890d00000000       mov dword ptr fs:[0], ecx
// 0058d79e  83c40c               add esp, 0xc
// 0058d7a1  c3                   ret 
// 0058d7a2  8b0c24               mov ecx, dword ptr [esp]
// 0058d7a5  a14c378c00           mov eax, dword ptr [0x8c374c]
// 0058d7aa  64890d00000000       mov dword ptr fs:[0], ecx
// 0058d7b1  83c40c               add esp, 0xc
// 0058d7b4  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
