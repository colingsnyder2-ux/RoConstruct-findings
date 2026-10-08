// roc 2007-08 0058dad0  unit: RBX::SoundService  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0058dad0
//
// 0058dad0  64a100000000         mov eax, dword ptr fs:[0]
// 0058dad6  6aff                 push -1
// 0058dad8  68be667500           push 0x7566be
// 0058dadd  50                   push eax
// 0058dade  b801000000           mov eax, 1
// 0058dae3  64892500000000       mov dword ptr fs:[0], esp
// 0058daea  840590378c00         test byte ptr [0x8c3790], al
// 0058daf0  7530                 jne 0x58db22
// 0058daf2  090590378c00         or dword ptr [0x8c3790], eax
// 0058daf8  6aff                 push -1
// 0058dafa  680cf48a00           push 0x8af40c
// 0058daff  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0058db07  e834eef9ff           call 0x52c940
// 0058db0c  83c408               add esp, 8
// 0058db0f  a38c378c00           mov dword ptr [0x8c378c], eax
// 0058db14  8b0c24               mov ecx, dword ptr [esp]
// 0058db17  64890d00000000       mov dword ptr fs:[0], ecx
// 0058db1e  83c40c               add esp, 0xc
// 0058db21  c3                   ret 
// 0058db22  8b0c24               mov ecx, dword ptr [esp]
// 0058db25  a18c378c00           mov eax, dword ptr [0x8c378c]
// 0058db2a  64890d00000000       mov dword ptr fs:[0], ecx
// 0058db31  83c40c               add esp, 0xc
// 0058db34  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
