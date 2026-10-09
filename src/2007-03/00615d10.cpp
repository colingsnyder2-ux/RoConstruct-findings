// roc 2007-03 00615d10  unit: seg_00610000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00615d10
//
// 00615d10  64a100000000         mov eax, dword ptr fs:[0]
// 00615d16  6aff                 push -1
// 00615d18  686ed77500           push 0x75d76e
// 00615d1d  50                   push eax
// 00615d1e  b801000000           mov eax, 1
// 00615d23  64892500000000       mov dword ptr fs:[0], esp
// 00615d2a  84050c138c00         test byte ptr [0x8c130c], al
// 00615d30  7530                 jne 0x615d62
// 00615d32  09050c138c00         or dword ptr [0x8c130c], eax
// 00615d38  6aff                 push -1
// 00615d3a  680cf48a00           push 0x8af40c
// 00615d3f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00615d47  e8947bf1ff           call 0x52d8e0
// 00615d4c  83c408               add esp, 8
// 00615d4f  a308138c00           mov dword ptr [0x8c1308], eax
// 00615d54  8b0c24               mov ecx, dword ptr [esp]
// 00615d57  64890d00000000       mov dword ptr fs:[0], ecx
// 00615d5e  83c40c               add esp, 0xc
// 00615d61  c3                   ret 
// 00615d62  8b0c24               mov ecx, dword ptr [esp]
// 00615d65  a108138c00           mov eax, dword ptr [0x8c1308]
// 00615d6a  64890d00000000       mov dword ptr fs:[0], ecx
// 00615d71  83c40c               add esp, 0xc
// 00615d74  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
