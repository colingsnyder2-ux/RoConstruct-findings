// roc 2009-06 0056a380  unit: RBX::RbxG3D::RenderScene  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0056a380
//
// 0056a380  6aff                 push -1
// 0056a382  6809fb8500           push 0x85fb09
// 0056a387  64a100000000         mov eax, dword ptr fs:[0]
// 0056a38d  50                   push eax
// 0056a38e  64892500000000       mov dword ptr fs:[0], esp
// 0056a395  51                   push ecx
// 0056a396  f605f01ca40001       test byte ptr [0xa41cf0], 1
// 0056a39d  7542                 jne 0x56a3e1
// 0056a39f  830df01ca40001       or dword ptr [0xa41cf0], 1
// 0056a3a6  6a0c                 push 0xc
// 0056a3a8  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0056a3b0  e883e61a00           call 0x718a38
// 0056a3b5  83c404               add esp, 4
// 0056a3b8  890424               mov dword ptr [esp], eax
// 0056a3bb  c644240c01           mov byte ptr [esp + 0xc], 1
// 0056a3c0  85c0                 test eax, eax
// 0056a3c2  7409                 je 0x56a3cd
// 0056a3c4  8bc8                 mov ecx, eax
// 0056a3c6  e8b50a0000           call 0x56ae80
// 0056a3cb  eb02                 jmp 0x56a3cf
// 0056a3cd  33c0                 xor eax, eax
// 0056a3cf  68406a8900           push 0x896a40
// 0056a3d4  a3ec1ca400           mov dword ptr [0xa41cec], eax
// 0056a3d9  e81df71a00           call 0x719afb
// 0056a3de  83c404               add esp, 4
// 0056a3e1  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0056a3e5  a1ec1ca400           mov eax, dword ptr [0xa41cec]
// 0056a3ea  64890d00000000       mov dword ptr fs:[0], ecx
// 0056a3f1  83c410               add esp, 0x10
// 0056a3f4  c3                   ret 
// library openrbx-client/Rendering\RenderLib\EffectSettings.cpp (function ?getDepthBlur@EffectSettings@Render@RBX@@SAPAVDepthBlur@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/EffectSettings.cpp
