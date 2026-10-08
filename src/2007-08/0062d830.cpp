// roc 2007-08 0062d830  unit: RBX::Flying  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0062d830
//
// 0062d830  64a100000000         mov eax, dword ptr fs:[0]
// 0062d836  6aff                 push -1
// 0062d838  680ed77500           push 0x75d70e
// 0062d83d  50                   push eax
// 0062d83e  b801000000           mov eax, 1
// 0062d843  64892500000000       mov dword ptr fs:[0], esp
// 0062d84a  840510838c00         test byte ptr [0x8c8310], al
// 0062d850  7530                 jne 0x62d882
// 0062d852  090510838c00         or dword ptr [0x8c8310], eax
// 0062d858  6aff                 push -1
// 0062d85a  68f04c7c00           push 0x7c4cf0
// 0062d85f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0062d867  e8d4f0efff           call 0x52c940
// 0062d86c  83c408               add esp, 8
// 0062d86f  a30c838c00           mov dword ptr [0x8c830c], eax
// 0062d874  8b0c24               mov ecx, dword ptr [esp]
// 0062d877  64890d00000000       mov dword ptr fs:[0], ecx
// 0062d87e  83c40c               add esp, 0xc
// 0062d881  c3                   ret 
// 0062d882  8b0c24               mov ecx, dword ptr [esp]
// 0062d885  a10c838c00           mov eax, dword ptr [0x8c830c]
// 0062d88a  64890d00000000       mov dword ptr fs:[0], ecx
// 0062d891  83c40c               add esp, 0xc
// 0062d894  c3                   ret 
// library openrbx-client/App\humanoid\Flying.cpp (function ??$doDeclare@$1?sFlying@RBX@@3QBDB@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/humanoid/Flying.cpp
