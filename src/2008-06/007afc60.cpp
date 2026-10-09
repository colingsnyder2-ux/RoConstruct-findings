// roc 2008-06 007afc60  unit: RBX::RenderNew::TextureProxy  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007afc60
//
// 007afc60  6aff                 push -1
// 007afc62  68b9dd7e00           push 0x7eddb9
// 007afc67  64a100000000         mov eax, dword ptr fs:[0]
// 007afc6d  50                   push eax
// 007afc6e  64892500000000       mov dword ptr fs:[0], esp
// 007afc75  51                   push ecx
// 007afc76  f605d4f3970001       test byte ptr [0x97f3d4], 1
// 007afc7d  7542                 jne 0x7afcc1
// 007afc7f  830dd4f3970001       or dword ptr [0x97f3d4], 1
// 007afc86  6a18                 push 0x18
// 007afc88  c744241000000000     mov dword ptr [esp + 0x10], 0
// 007afc90  e88b0cefff           call 0x6a0920
// 007afc95  83c404               add esp, 4
// 007afc98  890424               mov dword ptr [esp], eax
// 007afc9b  c644240c01           mov byte ptr [esp + 0xc], 1
// 007afca0  85c0                 test eax, eax
// 007afca2  7409                 je 0x7afcad
// 007afca4  8bc8                 mov ecx, eax
// 007afca6  e8152d0000           call 0x7b29c0
// 007afcab  eb02                 jmp 0x7afcaf
// 007afcad  33c0                 xor eax, eax
// 007afcaf  68b0198000           push 0x8019b0
// 007afcb4  a3d0f39700           mov dword ptr [0x97f3d0], eax
// 007afcb9  e8f11aefff           call 0x6a17af
// 007afcbe  83c404               add esp, 4
// 007afcc1  8b4c2404             mov ecx, dword ptr [esp + 4]
// 007afcc5  a1d0f39700           mov eax, dword ptr [0x97f3d0]
// 007afcca  64890d00000000       mov dword ptr fs:[0], ecx
// 007afcd1  83c410               add esp, 0x10
// 007afcd4  c3                   ret 
// library openrbx-client/Rendering\RenderLib\EffectSettings.cpp (function ?getToneMap@EffectSettings@Render@RBX@@SAPAVToneMap@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/EffectSettings.cpp
