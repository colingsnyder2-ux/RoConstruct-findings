// roc 2007-03 005550f0  unit: seg_00550000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005550f0
//
// 005550f0  64a100000000         mov eax, dword ptr fs:[0]
// 005550f6  6aff                 push -1
// 005550f8  68ae3e7500           push 0x753eae
// 005550fd  50                   push eax
// 005550fe  b801000000           mov eax, 1
// 00555103  64892500000000       mov dword ptr fs:[0], esp
// 0055510a  8405dcc18b00         test byte ptr [0x8bc1dc], al
// 00555110  7530                 jne 0x555142
// 00555112  0905dcc18b00         or dword ptr [0x8bc1dc], eax
// 00555118  6aff                 push -1
// 0055511a  68a8878a00           push 0x8a87a8
// 0055511f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00555127  e8b487fdff           call 0x52d8e0
// 0055512c  83c408               add esp, 8
// 0055512f  a3d8c18b00           mov dword ptr [0x8bc1d8], eax
// 00555134  8b0c24               mov ecx, dword ptr [esp]
// 00555137  64890d00000000       mov dword ptr fs:[0], ecx
// 0055513e  83c40c               add esp, 0xc
// 00555141  c3                   ret 
// 00555142  8b0c24               mov ecx, dword ptr [esp]
// 00555145  a1d8c18b00           mov eax, dword ptr [0x8bc1d8]
// 0055514a  64890d00000000       mov dword ptr fs:[0], ecx
// 00555151  83c40c               add esp, 0xc
// 00555154  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
