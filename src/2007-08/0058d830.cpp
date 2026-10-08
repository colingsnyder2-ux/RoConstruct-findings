// roc 2007-08 0058d830  unit: RBX::SoundService  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0058d830
//
// 0058d830  64a100000000         mov eax, dword ptr fs:[0]
// 0058d836  6aff                 push -1
// 0058d838  68fe657500           push 0x7565fe
// 0058d83d  50                   push eax
// 0058d83e  b801000000           mov eax, 1
// 0058d843  64892500000000       mov dword ptr fs:[0], esp
// 0058d84a  840560378c00         test byte ptr [0x8c3760], al
// 0058d850  7530                 jne 0x58d882
// 0058d852  090560378c00         or dword ptr [0x8c3760], eax
// 0058d858  6aff                 push -1
// 0058d85a  6878dc7b00           push 0x7bdc78
// 0058d85f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0058d867  e8d4f0f9ff           call 0x52c940
// 0058d86c  83c408               add esp, 8
// 0058d86f  a35c378c00           mov dword ptr [0x8c375c], eax
// 0058d874  8b0c24               mov ecx, dword ptr [esp]
// 0058d877  64890d00000000       mov dword ptr fs:[0], ecx
// 0058d87e  83c40c               add esp, 0xc
// 0058d881  c3                   ret 
// 0058d882  8b0c24               mov ecx, dword ptr [esp]
// 0058d885  a15c378c00           mov eax, dword ptr [0x8c375c]
// 0058d88a  64890d00000000       mov dword ptr fs:[0], ecx
// 0058d891  83c40c               add esp, 0xc
// 0058d894  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
