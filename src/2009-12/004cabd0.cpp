// roc 2009-12 004cabd0  unit: G3D::VARArea  size: 138 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004cabd0
//
// 004cabd0  8b442404             mov eax, dword ptr [esp + 4]
// 004cabd4  57                   push edi
// 004cabd5  8bf9                 mov edi, ecx
// 004cabd7  83f808               cmp eax, 8
// 004cabda  747a                 je 0x4cac56
// 004cabdc  56                   push esi
// 004cabdd  e87effffff           call 0x4cab60
// 004cabe2  803dc3d0b70000       cmp byte ptr [0xb7d0c3], 0
// 004cabe9  8bf0                 mov esi, eax
// 004cabeb  7439                 je 0x4cac26
// 004cabed  53                   push ebx
// 004cabee  55                   push ebp
// 004cabef  6805040000           push 0x405
// 004cabf4  ff15f0d9b700         call dword ptr [0xb7d9f0]
// 004cabfa  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 004cabfe  8b2d70bb9800         mov ebp, dword ptr [0x98bb70]
// 004cac04  6aff                 push -1
// 004cac06  53                   push ebx
// 004cac07  56                   push esi
// 004cac08  ffd5                 call ebp
// 004cac0a  6804040000           push 0x404
// 004cac0f  ff15f0d9b700         call dword ptr [0xb7d9f0]
// 004cac15  6aff                 push -1
// 004cac17  53                   push ebx
// 004cac18  56                   push esi
// 004cac19  ffd5                 call ebp
// 004cac1b  83477004             add dword ptr [edi + 0x70], 4
// 004cac1f  5d                   pop ebp
// 004cac20  5b                   pop ebx
// 004cac21  5e                   pop esi
// 004cac22  5f                   pop edi
// 004cac23  c20800               ret 8
// 004cac26  803dc4d0b70000       cmp byte ptr [0xb7d0c4], 0
// 004cac2d  6aff                 push -1
// 004cac2f  7415                 je 0x4cac46
// 004cac31  8b442414             mov eax, dword ptr [esp + 0x14]
// 004cac35  50                   push eax
// 004cac36  56                   push esi
// 004cac37  56                   push esi
// 004cac38  ff153cdbb700         call dword ptr [0xb7db3c]
// 004cac3e  ff4770               inc dword ptr [edi + 0x70]
// 004cac41  5e                   pop esi
// 004cac42  5f                   pop edi
// 004cac43  c20800               ret 8
// 004cac46  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004cac4a  51                   push ecx
// 004cac4b  56                   push esi
// 004cac4c  ff1570bb9800         call dword ptr [0x98bb70]
// 004cac52  ff4770               inc dword ptr [edi + 0x70]
// 004cac55  5e                   pop esi
// 004cac56  5f                   pop edi
// 004cac57  c20800               ret 8
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?_setStencilTest@RenderDevice@G3D@@AAEXW4StencilTest@12@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
