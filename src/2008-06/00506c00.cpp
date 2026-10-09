// roc 2008-06 00506c00  unit: RBX::Render::RenderScene  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00506c00
//
// 00506c00  6aff                 push -1
// 00506c02  6879b87c00           push 0x7cb879
// 00506c07  64a100000000         mov eax, dword ptr fs:[0]
// 00506c0d  50                   push eax
// 00506c0e  64892500000000       mov dword ptr fs:[0], esp
// 00506c15  51                   push ecx
// 00506c16  f605e428970001       test byte ptr [0x9728e4], 1
// 00506c1d  7542                 jne 0x506c61
// 00506c1f  830de428970001       or dword ptr [0x9728e4], 1
// 00506c26  6a0c                 push 0xc
// 00506c28  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00506c30  e8eb9c1900           call 0x6a0920
// 00506c35  83c404               add esp, 4
// 00506c38  890424               mov dword ptr [esp], eax
// 00506c3b  c644240c01           mov byte ptr [esp + 0xc], 1
// 00506c40  85c0                 test eax, eax
// 00506c42  7409                 je 0x506c4d
// 00506c44  8bc8                 mov ecx, eax
// 00506c46  e8f50a0000           call 0x507740
// 00506c4b  eb02                 jmp 0x506c4f
// 00506c4d  33c0                 xor eax, eax
// 00506c4f  68d0c57f00           push 0x7fc5d0
// 00506c54  a3e0289700           mov dword ptr [0x9728e0], eax
// 00506c59  e851ab1900           call 0x6a17af
// 00506c5e  83c404               add esp, 4
// 00506c61  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00506c65  a1e0289700           mov eax, dword ptr [0x9728e0]
// 00506c6a  64890d00000000       mov dword ptr fs:[0], ecx
// 00506c71  83c410               add esp, 0x10
// 00506c74  c3                   ret 
// library openrbx-client/Rendering\RenderLib\EffectSettings.cpp (function ?getDepthBlur@EffectSettings@Render@RBX@@SAPAVDepthBlur@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/EffectSettings.cpp
