// roc 2008-06 005840a0  unit: RBX::VModelInstance::?$FactoryProduct  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005840a0
//
// 005840a0  56                   push esi
// 005840a1  6a00                 push 0
// 005840a3  681c7f9400           push 0x947f1c
// 005840a8  8bf1                 mov esi, ecx
// 005840aa  8b8604010000         mov eax, dword ptr [esi + 0x104]
// 005840b0  687c909200           push 0x92907c
// 005840b5  6a00                 push 0
// 005840b7  50                   push eax
// 005840b8  e809d71100           call 0x6a17c6
// 005840bd  83c414               add esp, 0x14
// 005840c0  85c0                 test eax, eax
// 005840c2  7417                 je 0x5840db
// 005840c4  57                   push edi
// 005840c5  8bbe04010000         mov edi, dword ptr [esi + 0x104]
// 005840cb  8bce                 mov ecx, esi
// 005840cd  e8fef5ffff           call 0x5836d0
// 005840d2  3bc7                 cmp eax, edi
// 005840d4  5f                   pop edi
// 005840d5  7404                 je 0x5840db
// 005840d7  33c0                 xor eax, eax
// 005840d9  5e                   pop esi
// 005840da  c3                   ret 
// 005840db  b801000000           mov eax, 1
// 005840e0  5e                   pop esi
// 005840e1  c3                   ret 
// library openrbx-client/App\v8datamodel\PVInstance.cpp (function ?isTopLevelPVInstance@PVInstance@RBX@@QBE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/PVInstance.cpp
