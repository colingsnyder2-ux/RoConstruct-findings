// roc 2008-06 00476f30  unit: G3D::VARArea  size: 138 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00476f30
//
// 00476f30  8b442404             mov eax, dword ptr [esp + 4]
// 00476f34  57                   push edi
// 00476f35  8bf9                 mov edi, ecx
// 00476f37  83f808               cmp eax, 8
// 00476f3a  747a                 je 0x476fb6
// 00476f3c  56                   push esi
// 00476f3d  e87effffff           call 0x476ec0
// 00476f42  803d83ee960000       cmp byte ptr [0x96ee83], 0
// 00476f49  8bf0                 mov esi, eax
// 00476f4b  7439                 je 0x476f86
// 00476f4d  53                   push ebx
// 00476f4e  55                   push ebp
// 00476f4f  6805040000           push 0x405
// 00476f54  ff15e0f89600         call dword ptr [0x96f8e0]
// 00476f5a  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00476f5e  8b2da82a8000         mov ebp, dword ptr [0x802aa8]
// 00476f64  6aff                 push -1
// 00476f66  53                   push ebx
// 00476f67  56                   push esi
// 00476f68  ffd5                 call ebp
// 00476f6a  6804040000           push 0x404
// 00476f6f  ff15e0f89600         call dword ptr [0x96f8e0]
// 00476f75  6aff                 push -1
// 00476f77  53                   push ebx
// 00476f78  56                   push esi
// 00476f79  ffd5                 call ebp
// 00476f7b  83477004             add dword ptr [edi + 0x70], 4
// 00476f7f  5d                   pop ebp
// 00476f80  5b                   pop ebx
// 00476f81  5e                   pop esi
// 00476f82  5f                   pop edi
// 00476f83  c20800               ret 8
// 00476f86  803d84ee960000       cmp byte ptr [0x96ee84], 0
// 00476f8d  6aff                 push -1
// 00476f8f  7415                 je 0x476fa6
// 00476f91  8b442414             mov eax, dword ptr [esp + 0x14]
// 00476f95  50                   push eax
// 00476f96  56                   push esi
// 00476f97  56                   push esi
// 00476f98  ff152cfa9600         call dword ptr [0x96fa2c]
// 00476f9e  ff4770               inc dword ptr [edi + 0x70]
// 00476fa1  5e                   pop esi
// 00476fa2  5f                   pop edi
// 00476fa3  c20800               ret 8
// 00476fa6  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00476faa  51                   push ecx
// 00476fab  56                   push esi
// 00476fac  ff15a82a8000         call dword ptr [0x802aa8]
// 00476fb2  ff4770               inc dword ptr [edi + 0x70]
// 00476fb5  5e                   pop esi
// 00476fb6  5f                   pop edi
// 00476fb7  c20800               ret 8
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?_setStencilTest@RenderDevice@G3D@@AAEXW4StencilTest@12@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
