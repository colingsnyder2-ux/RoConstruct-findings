// roc 2007-03 00549fe0  unit: seg_00540000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00549fe0
//
// 00549fe0  64a100000000         mov eax, dword ptr fs:[0]
// 00549fe6  6aff                 push -1
// 00549fe8  689e307500           push 0x75309e
// 00549fed  50                   push eax
// 00549fee  b801000000           mov eax, 1
// 00549ff3  64892500000000       mov dword ptr fs:[0], esp
// 00549ffa  8405b0be8b00         test byte ptr [0x8bbeb0], al
// 0054a000  7530                 jne 0x54a032
// 0054a002  0905b0be8b00         or dword ptr [0x8bbeb0], eax
// 0054a008  6aff                 push -1
// 0054a00a  6890717a00           push 0x7a7190
// 0054a00f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0054a017  e8c438feff           call 0x52d8e0
// 0054a01c  83c408               add esp, 8
// 0054a01f  a3acbe8b00           mov dword ptr [0x8bbeac], eax
// 0054a024  8b0c24               mov ecx, dword ptr [esp]
// 0054a027  64890d00000000       mov dword ptr fs:[0], ecx
// 0054a02e  83c40c               add esp, 0xc
// 0054a031  c3                   ret 
// 0054a032  8b0c24               mov ecx, dword ptr [esp]
// 0054a035  a1acbe8b00           mov eax, dword ptr [0x8bbeac]
// 0054a03a  64890d00000000       mov dword ptr fs:[0], ecx
// 0054a041  83c40c               add esp, 0xc
// 0054a044  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
