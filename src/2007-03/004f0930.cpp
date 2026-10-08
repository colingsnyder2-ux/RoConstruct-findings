// roc 2007-03 004f0930  unit: seg_004f0000  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f0930
//
// 004f0930  53                   push ebx
// 004f0931  55                   push ebp
// 004f0932  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 004f0936  56                   push esi
// 004f0937  8b742414             mov esi, dword ptr [esp + 0x14]
// 004f093b  57                   push edi
// 004f093c  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 004f0940  57                   push edi
// 004f0941  56                   push esi
// 004f0942  ffd5                 call ebp
// 004f0944  83c408               add esp, 8
// 004f0947  84c0                 test al, al
// 004f0949  7408                 je 0x4f0953
// 004f094b  8b0f                 mov ecx, dword ptr [edi]
// 004f094d  8b06                 mov eax, dword ptr [esi]
// 004f094f  890e                 mov dword ptr [esi], ecx
// 004f0951  8907                 mov dword ptr [edi], eax
// 004f0953  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 004f0957  56                   push esi
// 004f0958  53                   push ebx
// 004f0959  ffd5                 call ebp
// 004f095b  83c408               add esp, 8
// 004f095e  84c0                 test al, al
// 004f0960  7408                 je 0x4f096a
// 004f0962  8b16                 mov edx, dword ptr [esi]
// 004f0964  8b03                 mov eax, dword ptr [ebx]
// 004f0966  8913                 mov dword ptr [ebx], edx
// 004f0968  8906                 mov dword ptr [esi], eax
// 004f096a  57                   push edi
// 004f096b  56                   push esi
// 004f096c  ffd5                 call ebp
// 004f096e  83c408               add esp, 8
// 004f0971  84c0                 test al, al
// 004f0973  7408                 je 0x4f097d
// 004f0975  8b0f                 mov ecx, dword ptr [edi]
// 004f0977  8b06                 mov eax, dword ptr [esi]
// 004f0979  890e                 mov dword ptr [esi], ecx
// 004f097b  8907                 mov dword ptr [edi], eax
// 004f097d  5f                   pop edi
// 004f097e  5e                   pop esi
// 004f097f  5d                   pop ebp
// 004f0980  5b                   pop ebx
// 004f0981  c3                   ret 
// library rbxgs-render/RenderSurface.cpp (function ??$_Med3@PAPAVRenderSurface@Render@RBX@@P6A_NABQAV123@0@Z@std@@YAXPAPAVRenderSurface@Render@RBX@@00P6A_NABQAV123@1@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render RenderSurface.cpp
