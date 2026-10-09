// roc 2007-03 005548a0  unit: seg_00550000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005548a0
//
// 005548a0  64a100000000         mov eax, dword ptr fs:[0]
// 005548a6  6aff                 push -1
// 005548a8  684e3c7500           push 0x753c4e
// 005548ad  50                   push eax
// 005548ae  b801000000           mov eax, 1
// 005548b3  64892500000000       mov dword ptr fs:[0], esp
// 005548ba  840544c18b00         test byte ptr [0x8bc144], al
// 005548c0  7530                 jne 0x5548f2
// 005548c2  090544c18b00         or dword ptr [0x8bc144], eax
// 005548c8  6aff                 push -1
// 005548ca  685c848a00           push 0x8a845c
// 005548cf  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005548d7  e80490fdff           call 0x52d8e0
// 005548dc  83c408               add esp, 8
// 005548df  a340c18b00           mov dword ptr [0x8bc140], eax
// 005548e4  8b0c24               mov ecx, dword ptr [esp]
// 005548e7  64890d00000000       mov dword ptr fs:[0], ecx
// 005548ee  83c40c               add esp, 0xc
// 005548f1  c3                   ret 
// 005548f2  8b0c24               mov ecx, dword ptr [esp]
// 005548f5  a140c18b00           mov eax, dword ptr [0x8bc140]
// 005548fa  64890d00000000       mov dword ptr fs:[0], ecx
// 00554901  83c40c               add esp, 0xc
// 00554904  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
