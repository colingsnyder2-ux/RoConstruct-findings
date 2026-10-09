// roc 2007-03 00554fa0  unit: seg_00550000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00554fa0
//
// 00554fa0  64a100000000         mov eax, dword ptr fs:[0]
// 00554fa6  6aff                 push -1
// 00554fa8  684e3e7500           push 0x753e4e
// 00554fad  50                   push eax
// 00554fae  b801000000           mov eax, 1
// 00554fb3  64892500000000       mov dword ptr fs:[0], esp
// 00554fba  8405c4c18b00         test byte ptr [0x8bc1c4], al
// 00554fc0  7530                 jne 0x554ff2
// 00554fc2  0905c4c18b00         or dword ptr [0x8bc1c4], eax
// 00554fc8  6aff                 push -1
// 00554fca  6868868a00           push 0x8a8668
// 00554fcf  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00554fd7  e80489fdff           call 0x52d8e0
// 00554fdc  83c408               add esp, 8
// 00554fdf  a3c0c18b00           mov dword ptr [0x8bc1c0], eax
// 00554fe4  8b0c24               mov ecx, dword ptr [esp]
// 00554fe7  64890d00000000       mov dword ptr fs:[0], ecx
// 00554fee  83c40c               add esp, 0xc
// 00554ff1  c3                   ret 
// 00554ff2  8b0c24               mov ecx, dword ptr [esp]
// 00554ff5  a1c0c18b00           mov eax, dword ptr [0x8bc1c0]
// 00554ffa  64890d00000000       mov dword ptr fs:[0], ecx
// 00555001  83c40c               add esp, 0xc
// 00555004  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
