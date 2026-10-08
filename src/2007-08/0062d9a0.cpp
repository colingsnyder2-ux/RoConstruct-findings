// roc 2007-08 0062d9a0  unit: RBX::Freefall  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0062d9a0
//
// 0062d9a0  64a100000000         mov eax, dword ptr fs:[0]
// 0062d9a6  6aff                 push -1
// 0062d9a8  682ed77500           push 0x75d72e
// 0062d9ad  50                   push eax
// 0062d9ae  b801000000           mov eax, 1
// 0062d9b3  64892500000000       mov dword ptr fs:[0], esp
// 0062d9ba  84051c838c00         test byte ptr [0x8c831c], al
// 0062d9c0  7530                 jne 0x62d9f2
// 0062d9c2  09051c838c00         or dword ptr [0x8c831c], eax
// 0062d9c8  6aff                 push -1
// 0062d9ca  68284d7c00           push 0x7c4d28
// 0062d9cf  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0062d9d7  e864efefff           call 0x52c940
// 0062d9dc  83c408               add esp, 8
// 0062d9df  a318838c00           mov dword ptr [0x8c8318], eax
// 0062d9e4  8b0c24               mov ecx, dword ptr [esp]
// 0062d9e7  64890d00000000       mov dword ptr fs:[0], ecx
// 0062d9ee  83c40c               add esp, 0xc
// 0062d9f1  c3                   ret 
// 0062d9f2  8b0c24               mov ecx, dword ptr [esp]
// 0062d9f5  a118838c00           mov eax, dword ptr [0x8c8318]
// 0062d9fa  64890d00000000       mov dword ptr fs:[0], ecx
// 0062da01  83c40c               add esp, 0xc
// 0062da04  c3                   ret 
// library openrbx-client/App\humanoid\Freefall.cpp (function ??$doDeclare@$1?sFreefall@RBX@@3QBDB@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/humanoid/Freefall.cpp
