// roc 2008-06 005052e0  unit: RBX::Render::RenderScene  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005052e0
//
// 005052e0  53                   push ebx
// 005052e1  55                   push ebp
// 005052e2  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 005052e6  56                   push esi
// 005052e7  8b742414             mov esi, dword ptr [esp + 0x14]
// 005052eb  57                   push edi
// 005052ec  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 005052f0  57                   push edi
// 005052f1  56                   push esi
// 005052f2  ffd5                 call ebp
// 005052f4  83c408               add esp, 8
// 005052f7  84c0                 test al, al
// 005052f9  740c                 je 0x505307
// 005052fb  3bf7                 cmp esi, edi
// 005052fd  7408                 je 0x505307
// 005052ff  8b0f                 mov ecx, dword ptr [edi]
// 00505301  8b06                 mov eax, dword ptr [esi]
// 00505303  890e                 mov dword ptr [esi], ecx
// 00505305  8907                 mov dword ptr [edi], eax
// 00505307  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0050530b  56                   push esi
// 0050530c  53                   push ebx
// 0050530d  ffd5                 call ebp
// 0050530f  83c408               add esp, 8
// 00505312  84c0                 test al, al
// 00505314  740c                 je 0x505322
// 00505316  3bde                 cmp ebx, esi
// 00505318  7408                 je 0x505322
// 0050531a  8b16                 mov edx, dword ptr [esi]
// 0050531c  8b03                 mov eax, dword ptr [ebx]
// 0050531e  8913                 mov dword ptr [ebx], edx
// 00505320  8906                 mov dword ptr [esi], eax
// 00505322  57                   push edi
// 00505323  56                   push esi
// 00505324  ffd5                 call ebp
// 00505326  83c408               add esp, 8
// 00505329  84c0                 test al, al
// 0050532b  740c                 je 0x505339
// 0050532d  3bf7                 cmp esi, edi
// 0050532f  7408                 je 0x505339
// 00505331  8b0f                 mov ecx, dword ptr [edi]
// 00505333  8b06                 mov eax, dword ptr [esi]
// 00505335  890e                 mov dword ptr [esi], ecx
// 00505337  8907                 mov dword ptr [edi], eax
// 00505339  5f                   pop edi
// 0050533a  5e                   pop esi
// 0050533b  5d                   pop ebp
// 0050533c  5b                   pop ebx
// 0050533d  c3                   ret 
// library rbxgs-render/RenderSurface.cpp (function ??$_Med3@PAPAVRenderSurface@Render@RBX@@P6A_NABQAV123@0@Z@std@@YAXPAPAVRenderSurface@Render@RBX@@00P6A_NABQAV123@1@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render RenderSurface.cpp
