// roc 2007-03 00554ad0  unit: seg_00550000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00554ad0
//
// 00554ad0  64a100000000         mov eax, dword ptr fs:[0]
// 00554ad6  6aff                 push -1
// 00554ad8  68ee3c7500           push 0x753cee
// 00554add  50                   push eax
// 00554ade  b801000000           mov eax, 1
// 00554ae3  64892500000000       mov dword ptr fs:[0], esp
// 00554aea  84056cc18b00         test byte ptr [0x8bc16c], al
// 00554af0  7530                 jne 0x554b22
// 00554af2  09056cc18b00         or dword ptr [0x8bc16c], eax
// 00554af8  6aff                 push -1
// 00554afa  68a0848a00           push 0x8a84a0
// 00554aff  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00554b07  e8d48dfdff           call 0x52d8e0
// 00554b0c  83c408               add esp, 8
// 00554b0f  a368c18b00           mov dword ptr [0x8bc168], eax
// 00554b14  8b0c24               mov ecx, dword ptr [esp]
// 00554b17  64890d00000000       mov dword ptr fs:[0], ecx
// 00554b1e  83c40c               add esp, 0xc
// 00554b21  c3                   ret 
// 00554b22  8b0c24               mov ecx, dword ptr [esp]
// 00554b25  a168c18b00           mov eax, dword ptr [0x8bc168]
// 00554b2a  64890d00000000       mov dword ptr fs:[0], ecx
// 00554b31  83c40c               add esp, 0xc
// 00554b34  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
