// roc 2009-06 0049e5a0  unit: G3D::VARArea  size: 138 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0049e5a0
//
// 0049e5a0  8b442404             mov eax, dword ptr [esp + 4]
// 0049e5a4  57                   push edi
// 0049e5a5  8bf9                 mov edi, ecx
// 0049e5a7  83f808               cmp eax, 8
// 0049e5aa  747a                 je 0x49e626
// 0049e5ac  56                   push esi
// 0049e5ad  e87effffff           call 0x49e530
// 0049e5b2  803d13c9a30000       cmp byte ptr [0xa3c913], 0
// 0049e5b9  8bf0                 mov esi, eax
// 0049e5bb  7439                 je 0x49e5f6
// 0049e5bd  53                   push ebx
// 0049e5be  55                   push ebp
// 0049e5bf  6805040000           push 0x405
// 0049e5c4  ff1540d2a300         call dword ptr [0xa3d240]
// 0049e5ca  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0049e5ce  8b2d60eb8900         mov ebp, dword ptr [0x89eb60]
// 0049e5d4  6aff                 push -1
// 0049e5d6  53                   push ebx
// 0049e5d7  56                   push esi
// 0049e5d8  ffd5                 call ebp
// 0049e5da  6804040000           push 0x404
// 0049e5df  ff1540d2a300         call dword ptr [0xa3d240]
// 0049e5e5  6aff                 push -1
// 0049e5e7  53                   push ebx
// 0049e5e8  56                   push esi
// 0049e5e9  ffd5                 call ebp
// 0049e5eb  83477004             add dword ptr [edi + 0x70], 4
// 0049e5ef  5d                   pop ebp
// 0049e5f0  5b                   pop ebx
// 0049e5f1  5e                   pop esi
// 0049e5f2  5f                   pop edi
// 0049e5f3  c20800               ret 8
// 0049e5f6  803d14c9a30000       cmp byte ptr [0xa3c914], 0
// 0049e5fd  6aff                 push -1
// 0049e5ff  7415                 je 0x49e616
// 0049e601  8b442414             mov eax, dword ptr [esp + 0x14]
// 0049e605  50                   push eax
// 0049e606  56                   push esi
// 0049e607  56                   push esi
// 0049e608  ff158cd3a300         call dword ptr [0xa3d38c]
// 0049e60e  ff4770               inc dword ptr [edi + 0x70]
// 0049e611  5e                   pop esi
// 0049e612  5f                   pop edi
// 0049e613  c20800               ret 8
// 0049e616  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0049e61a  51                   push ecx
// 0049e61b  56                   push esi
// 0049e61c  ff1560eb8900         call dword ptr [0x89eb60]
// 0049e622  ff4770               inc dword ptr [edi + 0x70]
// 0049e625  5e                   pop esi
// 0049e626  5f                   pop edi
// 0049e627  c20800               ret 8
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?_setStencilTest@RenderDevice@G3D@@AAEXW4StencilTest@12@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
