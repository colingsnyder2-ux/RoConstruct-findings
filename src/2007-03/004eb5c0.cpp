// roc 2007-03 004eb5c0  unit: seg_004e0000  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004eb5c0
//
// 004eb5c0  55                   push ebp
// 004eb5c1  8bec                 mov ebp, esp
// 004eb5c3  83e4c0               and esp, 0xffffffc0
// 004eb5c6  83ec34               sub esp, 0x34
// 004eb5c9  53                   push ebx
// 004eb5ca  8b5910               mov ebx, dword ptr [ecx + 0x10]
// 004eb5cd  83eb01               sub ebx, 1
// 004eb5d0  56                   push esi
// 004eb5d1  57                   push edi
// 004eb5d2  894c243c             mov dword ptr [esp + 0x3c], ecx
// 004eb5d6  7845                 js 0x4eb61d
// 004eb5d8  8b7d08               mov edi, dword ptr [ebp + 8]
// 004eb5db  eb07                 jmp 0x4eb5e4
// 004eb5dd  8d4900               lea ecx, [ecx]
// 004eb5e0  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 004eb5e4  8b410c               mov eax, dword ptr [ecx + 0xc]
// 004eb5e7  8b3498               mov esi, dword ptr [eax + ebx*4]
// 004eb5ea  56                   push esi
// 004eb5eb  8bcf                 mov ecx, edi
// 004eb5ed  e8ee8ff8ff           call 0x4745e0
// 004eb5f2  d94638               fld dword ptr [esi + 0x38]
// 004eb5f5  83ec08               sub esp, 8
// 004eb5f8  8bcf                 mov ecx, edi
// 004eb5fa  dd1c24               fstp qword ptr [esp]
// 004eb5fd  e8fe94f8ff           call 0x474b00
// 004eb602  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 004eb605  57                   push edi
// 004eb606  e815390000           call 0x4eef20
// 004eb60b  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 004eb60e  57                   push edi
// 004eb60f  51                   push ecx
// 004eb610  e8bbccffff           call 0x4e82d0
// 004eb615  83c408               add esp, 8
// 004eb618  83eb01               sub ebx, 1
// 004eb61b  79c3                 jns 0x4eb5e0
// 004eb61d  5f                   pop edi
// 004eb61e  5e                   pop esi
// 004eb61f  5b                   pop ebx
// 004eb620  8be5                 mov esp, ebp
// 004eb622  5d                   pop ebp
// 004eb623  c20400               ret 4
// library rbxgs-render/RenderScene.cpp (function ?sendDiffuseProxyMeshGeometry@RenderScene@Render@RBX@@ABEXPAVRenderDevice@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render RenderScene.cpp
