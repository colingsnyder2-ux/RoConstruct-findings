// roc 2007-08 004f8130  unit: G3D::Sphere  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004f8130
//
// 004f8130  53                   push ebx
// 004f8131  56                   push esi
// 004f8132  57                   push edi
// 004f8133  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004f8137  8bf1                 mov esi, ecx
// 004f8139  8bcf                 mov ecx, edi
// 004f813b  e8a0cbf7ff           call 0x474ce0
// 004f8140  8d4648               lea eax, [esi + 0x48]
// 004f8143  50                   push eax
// 004f8144  8bcf                 mov ecx, edi
// 004f8146  e8c5e4f7ff           call 0x476610
// 004f814b  8b8ea4000000         mov ecx, dword ptr [esi + 0xa4]
// 004f8151  8b9ea8000000         mov ebx, dword ptr [esi + 0xa8]
// 004f8157  51                   push ecx
// 004f8158  53                   push ebx
// 004f8159  6a04                 push 4
// 004f815b  6a02                 push 2
// 004f815d  8bcf                 mov ecx, edi
// 004f815f  e81cfdf7ff           call 0x477e80
// 004f8164  8bcf                 mov ecx, edi
// 004f8166  e8c5e8f7ff           call 0x476a30
// 004f816b  53                   push ebx
// 004f816c  6a02                 push 2
// 004f816e  8bcf                 mov ecx, edi
// 004f8170  e8bbcaf7ff           call 0x474c30
// 004f8175  8bcf                 mov ecx, edi
// 004f8177  e804e3f7ff           call 0x476480
// 004f817c  33db                 xor ebx, ebx
// 004f817e  395e40               cmp dword ptr [esi + 0x40], ebx
// 004f8181  7e32                 jle 0x4f81b5
// 004f8183  55                   push ebp
// 004f8184  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 004f8188  eb06                 jmp 0x4f8190
// 004f818a  8d9b00000000         lea ebx, [ebx]
// 004f8190  8b563c               mov edx, dword ptr [esi + 0x3c]
// 004f8193  d9442420             fld dword ptr [esp + 0x20]
// 004f8197  8b0c9a               mov ecx, dword ptr [edx + ebx*4]
// 004f819a  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 004f819e  8b01                 mov eax, dword ptr [ecx]
// 004f81a0  8b4008               mov eax, dword ptr [eax + 8]
// 004f81a3  51                   push ecx
// 004f81a4  d91c24               fstp dword ptr [esp]
// 004f81a7  52                   push edx
// 004f81a8  55                   push ebp
// 004f81a9  57                   push edi
// 004f81aa  ffd0                 call eax
// 004f81ac  83c301               add ebx, 1
// 004f81af  3b5e40               cmp ebx, dword ptr [esi + 0x40]
// 004f81b2  7cdc                 jl 0x4f8190
// 004f81b4  5d                   pop ebp
// 004f81b5  5f                   pop edi
// 004f81b6  5e                   pop esi
// 004f81b7  5b                   pop ebx
// 004f81b8  c21000               ret 0x10
// library rbxgs-render/RenderScene.cpp (function ?renderShadowVolumeGeometry@RenderScene@Render@RBX@@AAEXPAVRenderDevice@G3D@@ABVGLight@5@_NM@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render RenderScene.cpp
