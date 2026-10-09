// roc 2009-12 005e7a20  unit: RBX::VBeveledBlockMesh::?$CustomizableMesh  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005e7a20
//
// 005e7a20  53                   push ebx
// 005e7a21  55                   push ebp
// 005e7a22  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 005e7a26  56                   push esi
// 005e7a27  8b742414             mov esi, dword ptr [esp + 0x14]
// 005e7a2b  57                   push edi
// 005e7a2c  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 005e7a30  57                   push edi
// 005e7a31  56                   push esi
// 005e7a32  ffd5                 call ebp
// 005e7a34  83c408               add esp, 8
// 005e7a37  84c0                 test al, al
// 005e7a39  740c                 je 0x5e7a47
// 005e7a3b  3bf7                 cmp esi, edi
// 005e7a3d  7408                 je 0x5e7a47
// 005e7a3f  8b0f                 mov ecx, dword ptr [edi]
// 005e7a41  8b06                 mov eax, dword ptr [esi]
// 005e7a43  890e                 mov dword ptr [esi], ecx
// 005e7a45  8907                 mov dword ptr [edi], eax
// 005e7a47  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 005e7a4b  56                   push esi
// 005e7a4c  53                   push ebx
// 005e7a4d  ffd5                 call ebp
// 005e7a4f  83c408               add esp, 8
// 005e7a52  84c0                 test al, al
// 005e7a54  740c                 je 0x5e7a62
// 005e7a56  3bde                 cmp ebx, esi
// 005e7a58  7408                 je 0x5e7a62
// 005e7a5a  8b16                 mov edx, dword ptr [esi]
// 005e7a5c  8b03                 mov eax, dword ptr [ebx]
// 005e7a5e  8913                 mov dword ptr [ebx], edx
// 005e7a60  8906                 mov dword ptr [esi], eax
// 005e7a62  57                   push edi
// 005e7a63  56                   push esi
// 005e7a64  ffd5                 call ebp
// 005e7a66  83c408               add esp, 8
// 005e7a69  84c0                 test al, al
// 005e7a6b  740c                 je 0x5e7a79
// 005e7a6d  3bf7                 cmp esi, edi
// 005e7a6f  7408                 je 0x5e7a79
// 005e7a71  8b0f                 mov ecx, dword ptr [edi]
// 005e7a73  8b06                 mov eax, dword ptr [esi]
// 005e7a75  890e                 mov dword ptr [esi], ecx
// 005e7a77  8907                 mov dword ptr [edi], eax
// 005e7a79  5f                   pop edi
// 005e7a7a  5e                   pop esi
// 005e7a7b  5d                   pop ebp
// 005e7a7c  5b                   pop ebx
// 005e7a7d  c3                   ret 
// library rbxgs-render/RenderSurface.cpp (function ??$_Med3@PAPAVRenderSurface@Render@RBX@@P6A_NABQAV123@0@Z@std@@YAXPAPAVRenderSurface@Render@RBX@@00P6A_NABQAV123@1@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render RenderSurface.cpp
