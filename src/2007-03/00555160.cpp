// roc 2007-03 00555160  unit: seg_00550000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00555160
//
// 00555160  64a100000000         mov eax, dword ptr fs:[0]
// 00555166  6aff                 push -1
// 00555168  68ce3e7500           push 0x753ece
// 0055516d  50                   push eax
// 0055516e  b801000000           mov eax, 1
// 00555173  64892500000000       mov dword ptr fs:[0], esp
// 0055517a  8405e4c18b00         test byte ptr [0x8bc1e4], al
// 00555180  7530                 jne 0x5551b2
// 00555182  0905e4c18b00         or dword ptr [0x8bc1e4], eax
// 00555188  6aff                 push -1
// 0055518a  68f8878a00           push 0x8a87f8
// 0055518f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00555197  e84487fdff           call 0x52d8e0
// 0055519c  83c408               add esp, 8
// 0055519f  a3e0c18b00           mov dword ptr [0x8bc1e0], eax
// 005551a4  8b0c24               mov ecx, dword ptr [esp]
// 005551a7  64890d00000000       mov dword ptr fs:[0], ecx
// 005551ae  83c40c               add esp, 0xc
// 005551b1  c3                   ret 
// 005551b2  8b0c24               mov ecx, dword ptr [esp]
// 005551b5  a1e0c18b00           mov eax, dword ptr [0x8bc1e0]
// 005551ba  64890d00000000       mov dword ptr fs:[0], ecx
// 005551c1  83c40c               add esp, 0xc
// 005551c4  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
