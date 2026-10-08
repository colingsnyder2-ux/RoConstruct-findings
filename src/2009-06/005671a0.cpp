// roc 2009-06 005671a0  unit: RBX::RbxG3D::RenderScene  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005671a0
//
// 005671a0  6aff                 push -1
// 005671a2  68def78500           push 0x85f7de
// 005671a7  64a100000000         mov eax, dword ptr fs:[0]
// 005671ad  50                   push eax
// 005671ae  64892500000000       mov dword ptr fs:[0], esp
// 005671b5  51                   push ecx
// 005671b6  56                   push esi
// 005671b7  8bf1                 mov esi, ecx
// 005671b9  57                   push edi
// 005671ba  33ff                 xor edi, edi
// 005671bc  c706a8fc8b00         mov dword ptr [esi], 0x8bfca8
// 005671c2  897e04               mov dword ptr [esi + 4], edi
// 005671c5  89742408             mov dword ptr [esp + 8], esi
// 005671c9  897e08               mov dword ptr [esi + 8], edi
// 005671cc  897c2414             mov dword ptr [esp + 0x14], edi
// 005671d0  c706dca98c00         mov dword ptr [esi], 0x8ca9dc
// 005671d6  e8a5f30000           call 0x576580
// 005671db  d900                 fld dword ptr [eax]
// 005671dd  d95e0c               fstp dword ptr [esi + 0xc]
// 005671e0  897e30               mov dword ptr [esi + 0x30], edi
// 005671e3  d94004               fld dword ptr [eax + 4]
// 005671e6  d95e10               fstp dword ptr [esi + 0x10]
// 005671e9  d94008               fld dword ptr [eax + 8]
// 005671ec  d95e14               fstp dword ptr [esi + 0x14]
// 005671ef  897e44               mov dword ptr [esi + 0x44], edi
// 005671f2  897e48               mov dword ptr [esi + 0x48], edi
// 005671f5  897e40               mov dword ptr [esi + 0x40], edi
// 005671f8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005671fc  897e50               mov dword ptr [esi + 0x50], edi
// 005671ff  897e54               mov dword ptr [esi + 0x54], edi
// 00567202  897e4c               mov dword ptr [esi + 0x4c], edi
// 00567205  5f                   pop edi
// 00567206  8bc6                 mov eax, esi
// 00567208  5e                   pop esi
// 00567209  64890d00000000       mov dword ptr fs:[0], ecx
// 00567210  83c410               add esp, 0x10
// 00567213  c3                   ret 
// library rbxgs-render/RenderScene.cpp (function ??0Lighting@G3D@@AAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render RenderScene.cpp
