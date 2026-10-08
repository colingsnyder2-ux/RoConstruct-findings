// roc 2007-08 0058db40  unit: RBX::SoundService  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0058db40
//
// 0058db40  64a100000000         mov eax, dword ptr fs:[0]
// 0058db46  6aff                 push -1
// 0058db48  68de667500           push 0x7566de
// 0058db4d  50                   push eax
// 0058db4e  b801000000           mov eax, 1
// 0058db53  64892500000000       mov dword ptr fs:[0], esp
// 0058db5a  840598378c00         test byte ptr [0x8c3798], al
// 0058db60  7530                 jne 0x58db92
// 0058db62  090598378c00         or dword ptr [0x8c3798], eax
// 0058db68  6aff                 push -1
// 0058db6a  6818048b00           push 0x8b0418
// 0058db6f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0058db77  e8c4edf9ff           call 0x52c940
// 0058db7c  83c408               add esp, 8
// 0058db7f  a394378c00           mov dword ptr [0x8c3794], eax
// 0058db84  8b0c24               mov ecx, dword ptr [esp]
// 0058db87  64890d00000000       mov dword ptr fs:[0], ecx
// 0058db8e  83c40c               add esp, 0xc
// 0058db91  c3                   ret 
// 0058db92  8b0c24               mov ecx, dword ptr [esp]
// 0058db95  a194378c00           mov eax, dword ptr [0x8c3794]
// 0058db9a  64890d00000000       mov dword ptr fs:[0], ecx
// 0058dba1  83c40c               add esp, 0xc
// 0058dba4  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
