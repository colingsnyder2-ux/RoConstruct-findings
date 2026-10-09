// roc 2010-06 0054b9b0  unit: RBX::AggregateChunk  size: 166 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0054b9b0
//
// 0054b9b0  83ec50               sub esp, 0x50
// 0054b9b3  53                   push ebx
// 0054b9b4  55                   push ebp
// 0054b9b5  8b6c2468             mov ebp, dword ptr [esp + 0x68]
// 0054b9b9  56                   push esi
// 0054b9ba  8b742464             mov esi, dword ptr [esp + 0x64]
// 0054b9be  57                   push edi
// 0054b9bf  8b7c2464             mov edi, dword ptr [esp + 0x64]
// 0054b9c3  57                   push edi
// 0054b9c4  56                   push esi
// 0054b9c5  ffd5                 call ebp
// 0054b9c7  83c408               add esp, 8
// 0054b9ca  84c0                 test al, al
// 0054b9cc  7422                 je 0x54b9f0
// 0054b9ce  3bf7                 cmp esi, edi
// 0054b9d0  741e                 je 0x54b9f0
// 0054b9d2  56                   push esi
// 0054b9d3  8d4c2414             lea ecx, [esp + 0x14]
// 0054b9d7  e8f467f4ff           call 0x4921d0
// 0054b9dc  57                   push edi
// 0054b9dd  8bce                 mov ecx, esi
// 0054b9df  e8cc54f4ff           call 0x490eb0
// 0054b9e4  8d442410             lea eax, [esp + 0x10]
// 0054b9e8  50                   push eax
// 0054b9e9  8bcf                 mov ecx, edi
// 0054b9eb  e8c054f4ff           call 0x490eb0
// 0054b9f0  8b5c246c             mov ebx, dword ptr [esp + 0x6c]
// 0054b9f4  56                   push esi
// 0054b9f5  53                   push ebx
// 0054b9f6  ffd5                 call ebp
// 0054b9f8  83c408               add esp, 8
// 0054b9fb  84c0                 test al, al
// 0054b9fd  7422                 je 0x54ba21
// 0054b9ff  3bde                 cmp ebx, esi
// 0054ba01  741e                 je 0x54ba21
// 0054ba03  53                   push ebx
// 0054ba04  8d4c2414             lea ecx, [esp + 0x14]
// 0054ba08  e8c367f4ff           call 0x4921d0
// 0054ba0d  56                   push esi
// 0054ba0e  8bcb                 mov ecx, ebx
// 0054ba10  e89b54f4ff           call 0x490eb0
// 0054ba15  8d4c2410             lea ecx, [esp + 0x10]
// 0054ba19  51                   push ecx
// 0054ba1a  8bce                 mov ecx, esi
// 0054ba1c  e88f54f4ff           call 0x490eb0
// 0054ba21  57                   push edi
// 0054ba22  56                   push esi
// 0054ba23  ffd5                 call ebp
// 0054ba25  83c408               add esp, 8
// 0054ba28  84c0                 test al, al
// 0054ba2a  7422                 je 0x54ba4e
// 0054ba2c  3bf7                 cmp esi, edi
// 0054ba2e  741e                 je 0x54ba4e
// 0054ba30  56                   push esi
// 0054ba31  8d4c2414             lea ecx, [esp + 0x14]
// 0054ba35  e89667f4ff           call 0x4921d0
// 0054ba3a  57                   push edi
// 0054ba3b  8bce                 mov ecx, esi
// 0054ba3d  e86e54f4ff           call 0x490eb0
// 0054ba42  8d542410             lea edx, [esp + 0x10]
// 0054ba46  52                   push edx
// 0054ba47  8bcf                 mov ecx, edi
// 0054ba49  e86254f4ff           call 0x490eb0
// 0054ba4e  5f                   pop edi
// 0054ba4f  5e                   pop esi
// 0054ba50  5d                   pop ebp
// 0054ba51  5b                   pop ebx
// 0054ba52  83c450               add esp, 0x50
// 0054ba55  c3                   ret 
// library openrbx-client/Rendering\RenderLib\EffectSettings.cpp (function ??$_Med3@PAVGLight@G3D@@P6A_NABV12@0@Z@std@@YAXPAVGLight@G3D@@00P6A_NABV12@1@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/EffectSettings.cpp
