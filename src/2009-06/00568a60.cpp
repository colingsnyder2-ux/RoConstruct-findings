// roc 2009-06 00568a60  unit: RBX::RbxG3D::RenderScene  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00568a60
//
// 00568a60  53                   push ebx
// 00568a61  55                   push ebp
// 00568a62  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00568a66  56                   push esi
// 00568a67  8b742414             mov esi, dword ptr [esp + 0x14]
// 00568a6b  57                   push edi
// 00568a6c  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00568a70  57                   push edi
// 00568a71  56                   push esi
// 00568a72  ffd5                 call ebp
// 00568a74  83c408               add esp, 8
// 00568a77  84c0                 test al, al
// 00568a79  740c                 je 0x568a87
// 00568a7b  3bf7                 cmp esi, edi
// 00568a7d  7408                 je 0x568a87
// 00568a7f  8b0f                 mov ecx, dword ptr [edi]
// 00568a81  8b06                 mov eax, dword ptr [esi]
// 00568a83  890e                 mov dword ptr [esi], ecx
// 00568a85  8907                 mov dword ptr [edi], eax
// 00568a87  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00568a8b  56                   push esi
// 00568a8c  53                   push ebx
// 00568a8d  ffd5                 call ebp
// 00568a8f  83c408               add esp, 8
// 00568a92  84c0                 test al, al
// 00568a94  740c                 je 0x568aa2
// 00568a96  3bde                 cmp ebx, esi
// 00568a98  7408                 je 0x568aa2
// 00568a9a  8b16                 mov edx, dword ptr [esi]
// 00568a9c  8b03                 mov eax, dword ptr [ebx]
// 00568a9e  8913                 mov dword ptr [ebx], edx
// 00568aa0  8906                 mov dword ptr [esi], eax
// 00568aa2  57                   push edi
// 00568aa3  56                   push esi
// 00568aa4  ffd5                 call ebp
// 00568aa6  83c408               add esp, 8
// 00568aa9  84c0                 test al, al
// 00568aab  740c                 je 0x568ab9
// 00568aad  3bf7                 cmp esi, edi
// 00568aaf  7408                 je 0x568ab9
// 00568ab1  8b0f                 mov ecx, dword ptr [edi]
// 00568ab3  8b06                 mov eax, dword ptr [esi]
// 00568ab5  890e                 mov dword ptr [esi], ecx
// 00568ab7  8907                 mov dword ptr [edi], eax
// 00568ab9  5f                   pop edi
// 00568aba  5e                   pop esi
// 00568abb  5d                   pop ebp
// 00568abc  5b                   pop ebx
// 00568abd  c3                   ret 
// library rbxgs-render/RenderSurface.cpp (function ??$_Med3@PAPAVRenderSurface@Render@RBX@@P6A_NABQAV123@0@Z@std@@YAXPAPAVRenderSurface@Render@RBX@@00P6A_NABQAV123@1@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render RenderSurface.cpp
