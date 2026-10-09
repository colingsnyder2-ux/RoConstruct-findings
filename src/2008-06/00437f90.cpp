// roc 2008-06 00437f90  unit: HVCXTPPropertyGridItemEnum::?$XItem  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00437f90
//
// 00437f90  64a100000000         mov eax, dword ptr fs:[0]
// 00437f96  6aff                 push -1
// 00437f98  683e037c00           push 0x7c033e
// 00437f9d  50                   push eax
// 00437f9e  b801000000           mov eax, 1
// 00437fa3  64892500000000       mov dword ptr fs:[0], esp
// 00437faa  8405b0d19600         test byte ptr [0x96d1b0], al
// 00437fb0  7530                 jne 0x437fe2
// 00437fb2  0905b0d19600         or dword ptr [0x96d1b0], eax
// 00437fb8  6aff                 push -1
// 00437fba  6810d39400           push 0x94d310
// 00437fbf  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00437fc7  e8c4bf1100           call 0x553f90
// 00437fcc  83c408               add esp, 8
// 00437fcf  a3acd19600           mov dword ptr [0x96d1ac], eax
// 00437fd4  8b0c24               mov ecx, dword ptr [esp]
// 00437fd7  64890d00000000       mov dword ptr fs:[0], ecx
// 00437fde  83c40c               add esp, 0xc
// 00437fe1  c3                   ret 
// 00437fe2  8b0c24               mov ecx, dword ptr [esp]
// 00437fe5  a1acd19600           mov eax, dword ptr [0x96d1ac]
// 00437fea  64890d00000000       mov dword ptr fs:[0], ecx
// 00437ff1  83c40c               add esp, 0xc
// 00437ff4  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
