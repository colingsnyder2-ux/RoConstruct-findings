// roc 2010-06 00491470  unit: std::D::DU?$char_traits::V?$basic_string::?$Set  size: 138 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00491470
//
// 00491470  8b442404             mov eax, dword ptr [esp + 4]
// 00491474  57                   push edi
// 00491475  8bf9                 mov edi, ecx
// 00491477  83f808               cmp eax, 8
// 0049147a  747a                 je 0x4914f6
// 0049147c  56                   push esi
// 0049147d  e87effffff           call 0x491400
// 00491482  803dbf38c00000       cmp byte ptr [0xc038bf], 0
// 00491489  8bf0                 mov esi, eax
// 0049148b  7439                 je 0x4914c6
// 0049148d  53                   push ebx
// 0049148e  55                   push ebp
// 0049148f  6805040000           push 0x405
// 00491494  ff15803ac000         call dword ptr [0xc03a80]
// 0049149a  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0049149e  8b2d94ab9e00         mov ebp, dword ptr [0x9eab94]
// 004914a4  6aff                 push -1
// 004914a6  53                   push ebx
// 004914a7  56                   push esi
// 004914a8  ffd5                 call ebp
// 004914aa  6804040000           push 0x404
// 004914af  ff15803ac000         call dword ptr [0xc03a80]
// 004914b5  6aff                 push -1
// 004914b7  53                   push ebx
// 004914b8  56                   push esi
// 004914b9  ffd5                 call ebp
// 004914bb  83477004             add dword ptr [edi + 0x70], 4
// 004914bf  5d                   pop ebp
// 004914c0  5b                   pop ebx
// 004914c1  5e                   pop esi
// 004914c2  5f                   pop edi
// 004914c3  c20800               ret 8
// 004914c6  803dc038c00000       cmp byte ptr [0xc038c0], 0
// 004914cd  6aff                 push -1
// 004914cf  7415                 je 0x4914e6
// 004914d1  8b442414             mov eax, dword ptr [esp + 0x14]
// 004914d5  50                   push eax
// 004914d6  56                   push esi
// 004914d7  56                   push esi
// 004914d8  ff15cc3bc000         call dword ptr [0xc03bcc]
// 004914de  ff4770               inc dword ptr [edi + 0x70]
// 004914e1  5e                   pop esi
// 004914e2  5f                   pop edi
// 004914e3  c20800               ret 8
// 004914e6  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004914ea  51                   push ecx
// 004914eb  56                   push esi
// 004914ec  ff1594ab9e00         call dword ptr [0x9eab94]
// 004914f2  ff4770               inc dword ptr [edi + 0x70]
// 004914f5  5e                   pop esi
// 004914f6  5f                   pop edi
// 004914f7  c20800               ret 8
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?_setStencilTest@RenderDevice@G3D@@AAEXW4StencilTest@12@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
