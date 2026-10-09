// roc 2008-06 00506b80  unit: RBX::Render::RenderScene  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00506b80
//
// 00506b80  6aff                 push -1
// 00506b82  6849b87c00           push 0x7cb849
// 00506b87  64a100000000         mov eax, dword ptr fs:[0]
// 00506b8d  50                   push eax
// 00506b8e  64892500000000       mov dword ptr fs:[0], esp
// 00506b95  51                   push ecx
// 00506b96  f605dc28970001       test byte ptr [0x9728dc], 1
// 00506b9d  7542                 jne 0x506be1
// 00506b9f  830ddc28970001       or dword ptr [0x9728dc], 1
// 00506ba6  6a18                 push 0x18
// 00506ba8  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00506bb0  e86b9d1900           call 0x6a0920
// 00506bb5  83c404               add esp, 4
// 00506bb8  890424               mov dword ptr [esp], eax
// 00506bbb  c644240c01           mov byte ptr [esp + 0xc], 1
// 00506bc0  85c0                 test eax, eax
// 00506bc2  7409                 je 0x506bcd
// 00506bc4  8bc8                 mov ecx, eax
// 00506bc6  e8f5bd2a00           call 0x7b29c0
// 00506bcb  eb02                 jmp 0x506bcf
// 00506bcd  33c0                 xor eax, eax
// 00506bcf  68b0c57f00           push 0x7fc5b0
// 00506bd4  a3d8289700           mov dword ptr [0x9728d8], eax
// 00506bd9  e8d1ab1900           call 0x6a17af
// 00506bde  83c404               add esp, 4
// 00506be1  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00506be5  a1d8289700           mov eax, dword ptr [0x9728d8]
// 00506bea  64890d00000000       mov dword ptr fs:[0], ecx
// 00506bf1  83c410               add esp, 0x10
// 00506bf4  c3                   ret 
// library openrbx-client/Rendering\RenderLib\EffectSettings.cpp (function ?getToneMap@EffectSettings@Render@RBX@@SAPAVToneMap@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/EffectSettings.cpp
