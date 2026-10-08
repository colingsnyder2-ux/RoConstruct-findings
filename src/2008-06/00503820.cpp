// roc 2008-06 00503820  unit: RBX::Render::RenderScene  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00503820
//
// 00503820  6aff                 push -1
// 00503822  68feb47c00           push 0x7cb4fe
// 00503827  64a100000000         mov eax, dword ptr fs:[0]
// 0050382d  50                   push eax
// 0050382e  64892500000000       mov dword ptr fs:[0], esp
// 00503835  51                   push ecx
// 00503836  56                   push esi
// 00503837  8bf1                 mov esi, ecx
// 00503839  57                   push edi
// 0050383a  33ff                 xor edi, edi
// 0050383c  c706e0e18100         mov dword ptr [esi], 0x81e1e0
// 00503842  897e04               mov dword ptr [esi + 4], edi
// 00503845  89742408             mov dword ptr [esp + 8], esi
// 00503849  897e08               mov dword ptr [esi + 8], edi
// 0050384c  897c2414             mov dword ptr [esp + 0x14], edi
// 00503850  c7061c748200         mov dword ptr [esi], 0x82741c
// 00503856  e805120100           call 0x514a60
// 0050385b  d900                 fld dword ptr [eax]
// 0050385d  d95e0c               fstp dword ptr [esi + 0xc]
// 00503860  897e30               mov dword ptr [esi + 0x30], edi
// 00503863  d94004               fld dword ptr [eax + 4]
// 00503866  d95e10               fstp dword ptr [esi + 0x10]
// 00503869  d94008               fld dword ptr [eax + 8]
// 0050386c  d95e14               fstp dword ptr [esi + 0x14]
// 0050386f  897e44               mov dword ptr [esi + 0x44], edi
// 00503872  897e48               mov dword ptr [esi + 0x48], edi
// 00503875  897e40               mov dword ptr [esi + 0x40], edi
// 00503878  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0050387c  897e50               mov dword ptr [esi + 0x50], edi
// 0050387f  897e54               mov dword ptr [esi + 0x54], edi
// 00503882  897e4c               mov dword ptr [esi + 0x4c], edi
// 00503885  5f                   pop edi
// 00503886  8bc6                 mov eax, esi
// 00503888  5e                   pop esi
// 00503889  64890d00000000       mov dword ptr fs:[0], ecx
// 00503890  83c410               add esp, 0x10
// 00503893  c3                   ret 
// library rbxgs-render/RenderScene.cpp (function ??0Lighting@G3D@@AAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render RenderScene.cpp
