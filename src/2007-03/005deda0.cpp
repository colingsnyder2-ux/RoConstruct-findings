// roc 2007-03 005deda0  unit: seg_005d0000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005deda0
//
// 005deda0  64a100000000         mov eax, dword ptr fs:[0]
// 005deda6  6aff                 push -1
// 005deda8  680ebc7500           push 0x75bc0e
// 005dedad  50                   push eax
// 005dedae  b801000000           mov eax, 1
// 005dedb3  64892500000000       mov dword ptr fs:[0], esp
// 005dedba  8405a4078c00         test byte ptr [0x8c07a4], al
// 005dedc0  7530                 jne 0x5dedf2
// 005dedc2  0905a4078c00         or dword ptr [0x8c07a4], eax
// 005dedc8  6aff                 push -1
// 005dedca  689caa8a00           push 0x8aaa9c
// 005dedcf  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005dedd7  e804ebf4ff           call 0x52d8e0
// 005deddc  83c408               add esp, 8
// 005deddf  a3a0078c00           mov dword ptr [0x8c07a0], eax
// 005dede4  8b0c24               mov ecx, dword ptr [esp]
// 005dede7  64890d00000000       mov dword ptr fs:[0], ecx
// 005dedee  83c40c               add esp, 0xc
// 005dedf1  c3                   ret 
// 005dedf2  8b0c24               mov ecx, dword ptr [esp]
// 005dedf5  a1a0078c00           mov eax, dword ptr [0x8c07a0]
// 005dedfa  64890d00000000       mov dword ptr fs:[0], ecx
// 005dee01  83c40c               add esp, 0xc
// 005dee04  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
