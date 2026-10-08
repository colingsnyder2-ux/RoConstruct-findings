// roc 2007-08 00473b70  unit: G3D::VARArea  size: 140 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00473b70
//
// 00473b70  8b442404             mov eax, dword ptr [esp + 4]
// 00473b74  83f808               cmp eax, 8
// 00473b77  57                   push edi
// 00473b78  8bf9                 mov edi, ecx
// 00473b7a  747c                 je 0x473bf8
// 00473b7c  56                   push esi
// 00473b7d  e87effffff           call 0x473b00
// 00473b82  803d67cf8b0000       cmp byte ptr [0x8bcf67], 0
// 00473b89  8bf0                 mov esi, eax
// 00473b8b  7439                 je 0x473bc6
// 00473b8d  53                   push ebx
// 00473b8e  55                   push ebp
// 00473b8f  6805040000           push 0x405
// 00473b94  ff15ccd98b00         call dword ptr [0x8bd9cc]
// 00473b9a  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00473b9e  8b2dd8ea7700         mov ebp, dword ptr [0x77ead8]
// 00473ba4  6aff                 push -1
// 00473ba6  53                   push ebx
// 00473ba7  56                   push esi
// 00473ba8  ffd5                 call ebp
// 00473baa  6804040000           push 0x404
// 00473baf  ff15ccd98b00         call dword ptr [0x8bd9cc]
// 00473bb5  6aff                 push -1
// 00473bb7  53                   push ebx
// 00473bb8  56                   push esi
// 00473bb9  ffd5                 call ebp
// 00473bbb  83477004             add dword ptr [edi + 0x70], 4
// 00473bbf  5d                   pop ebp
// 00473bc0  5b                   pop ebx
// 00473bc1  5e                   pop esi
// 00473bc2  5f                   pop edi
// 00473bc3  c20800               ret 8
// 00473bc6  803d68cf8b0000       cmp byte ptr [0x8bcf68], 0
// 00473bcd  6aff                 push -1
// 00473bcf  7416                 je 0x473be7
// 00473bd1  8b442414             mov eax, dword ptr [esp + 0x14]
// 00473bd5  50                   push eax
// 00473bd6  56                   push esi
// 00473bd7  56                   push esi
// 00473bd8  ff1518db8b00         call dword ptr [0x8bdb18]
// 00473bde  83477001             add dword ptr [edi + 0x70], 1
// 00473be2  5e                   pop esi
// 00473be3  5f                   pop edi
// 00473be4  c20800               ret 8
// 00473be7  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00473beb  51                   push ecx
// 00473bec  56                   push esi
// 00473bed  ff15d8ea7700         call dword ptr [0x77ead8]
// 00473bf3  83477001             add dword ptr [edi + 0x70], 1
// 00473bf7  5e                   pop esi
// 00473bf8  5f                   pop edi
// 00473bf9  c20800               ret 8
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?_setStencilTest@RenderDevice@G3D@@AAEXW4StencilTest@12@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
