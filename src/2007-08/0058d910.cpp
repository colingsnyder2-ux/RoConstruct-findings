// roc 2007-08 0058d910  unit: RBX::SoundService  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0058d910
//
// 0058d910  64a100000000         mov eax, dword ptr fs:[0]
// 0058d916  6aff                 push -1
// 0058d918  683e667500           push 0x75663e
// 0058d91d  50                   push eax
// 0058d91e  b801000000           mov eax, 1
// 0058d923  64892500000000       mov dword ptr fs:[0], esp
// 0058d92a  840570378c00         test byte ptr [0x8c3770], al
// 0058d930  7530                 jne 0x58d962
// 0058d932  090570378c00         or dword ptr [0x8c3770], eax
// 0058d938  6aff                 push -1
// 0058d93a  68f4f38a00           push 0x8af3f4
// 0058d93f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0058d947  e8f4eff9ff           call 0x52c940
// 0058d94c  83c408               add esp, 8
// 0058d94f  a36c378c00           mov dword ptr [0x8c376c], eax
// 0058d954  8b0c24               mov ecx, dword ptr [esp]
// 0058d957  64890d00000000       mov dword ptr fs:[0], ecx
// 0058d95e  83c40c               add esp, 0xc
// 0058d961  c3                   ret 
// 0058d962  8b0c24               mov ecx, dword ptr [esp]
// 0058d965  a16c378c00           mov eax, dword ptr [0x8c376c]
// 0058d96a  64890d00000000       mov dword ptr fs:[0], ecx
// 0058d971  83c40c               add esp, 0xc
// 0058d974  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
