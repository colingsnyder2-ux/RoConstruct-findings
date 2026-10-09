// roc 2007-03 0055d340  unit: seg_00550000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0055d340
//
// 0055d340  64a100000000         mov eax, dword ptr fs:[0]
// 0055d346  6aff                 push -1
// 0055d348  68de467500           push 0x7546de
// 0055d34d  50                   push eax
// 0055d34e  b801000000           mov eax, 1
// 0055d353  64892500000000       mov dword ptr fs:[0], esp
// 0055d35a  840550c38b00         test byte ptr [0x8bc350], al
// 0055d360  7530                 jne 0x55d392
// 0055d362  090550c38b00         or dword ptr [0x8bc350], eax
// 0055d368  6aff                 push -1
// 0055d36a  68f0877a00           push 0x7a87f0
// 0055d36f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0055d377  e86405fdff           call 0x52d8e0
// 0055d37c  83c408               add esp, 8
// 0055d37f  a34cc38b00           mov dword ptr [0x8bc34c], eax
// 0055d384  8b0c24               mov ecx, dword ptr [esp]
// 0055d387  64890d00000000       mov dword ptr fs:[0], ecx
// 0055d38e  83c40c               add esp, 0xc
// 0055d391  c3                   ret 
// 0055d392  8b0c24               mov ecx, dword ptr [esp]
// 0055d395  a14cc38b00           mov eax, dword ptr [0x8bc34c]
// 0055d39a  64890d00000000       mov dword ptr fs:[0], ecx
// 0055d3a1  83c40c               add esp, 0xc
// 0055d3a4  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
