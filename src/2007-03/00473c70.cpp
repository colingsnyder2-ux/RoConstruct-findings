// roc 2007-03 00473c70  unit: seg_00470000  size: 140 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00473c70
//
// 00473c70  8b442404             mov eax, dword ptr [esp + 4]
// 00473c74  83f808               cmp eax, 8
// 00473c77  57                   push edi
// 00473c78  8bf9                 mov edi, ecx
// 00473c7a  747c                 je 0x473cf8
// 00473c7c  56                   push esi
// 00473c7d  e87effffff           call 0x473c00
// 00473c82  803d2f768b0000       cmp byte ptr [0x8b762f], 0
// 00473c89  8bf0                 mov esi, eax
// 00473c8b  7439                 je 0x473cc6
// 00473c8d  53                   push ebx
// 00473c8e  55                   push ebp
// 00473c8f  6805040000           push 0x405
// 00473c94  ff1584808b00         call dword ptr [0x8b8084]
// 00473c9a  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00473c9e  8b2de4eb7700         mov ebp, dword ptr [0x77ebe4]
// 00473ca4  6aff                 push -1
// 00473ca6  53                   push ebx
// 00473ca7  56                   push esi
// 00473ca8  ffd5                 call ebp
// 00473caa  6804040000           push 0x404
// 00473caf  ff1584808b00         call dword ptr [0x8b8084]
// 00473cb5  6aff                 push -1
// 00473cb7  53                   push ebx
// 00473cb8  56                   push esi
// 00473cb9  ffd5                 call ebp
// 00473cbb  83477004             add dword ptr [edi + 0x70], 4
// 00473cbf  5d                   pop ebp
// 00473cc0  5b                   pop ebx
// 00473cc1  5e                   pop esi
// 00473cc2  5f                   pop edi
// 00473cc3  c20800               ret 8
// 00473cc6  803d30768b0000       cmp byte ptr [0x8b7630], 0
// 00473ccd  6aff                 push -1
// 00473ccf  7416                 je 0x473ce7
// 00473cd1  8b442414             mov eax, dword ptr [esp + 0x14]
// 00473cd5  50                   push eax
// 00473cd6  56                   push esi
// 00473cd7  56                   push esi
// 00473cd8  ff15d0818b00         call dword ptr [0x8b81d0]
// 00473cde  83477001             add dword ptr [edi + 0x70], 1
// 00473ce2  5e                   pop esi
// 00473ce3  5f                   pop edi
// 00473ce4  c20800               ret 8
// 00473ce7  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00473ceb  51                   push ecx
// 00473cec  56                   push esi
// 00473ced  ff15e4eb7700         call dword ptr [0x77ebe4]
// 00473cf3  83477001             add dword ptr [edi + 0x70], 1
// 00473cf7  5e                   pop esi
// 00473cf8  5f                   pop edi
// 00473cf9  c20800               ret 8
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?_setStencilTest@RenderDevice@G3D@@AAEXW4StencilTest@12@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
