// roc 2007-03 004ec5b0  unit: seg_004e0000  size: 167 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004ec5b0
//
// 004ec5b0  51                   push ecx
// 004ec5b1  53                   push ebx
// 004ec5b2  8bd9                 mov ebx, ecx
// 004ec5b4  837b0400             cmp dword ptr [ebx + 4], 0
// 004ec5b8  c744240400000000     mov dword ptr [esp + 4], 0
// 004ec5c0  7e73                 jle 0x4ec635
// 004ec5c2  55                   push ebp
// 004ec5c3  56                   push esi
// 004ec5c4  57                   push edi
// 004ec5c5  33ed                 xor ebp, ebp
// 004ec5c7  8b03                 mov eax, dword ptr [ebx]
// 004ec5c9  8d7c2840             lea edi, [eax + ebp + 0x40]
// 004ec5cd  8b07                 mov eax, dword ptr [edi]
// 004ec5cf  85c0                 test eax, eax
// 004ec5d1  744c                 je 0x4ec61f
// 004ec5d3  83c004               add eax, 4
// 004ec5d6  50                   push eax
// 004ec5d7  ff15a8d27700         call dword ptr [0x77d2a8]
// 004ec5dd  85c0                 test eax, eax
// 004ec5df  7538                 jne 0x4ec619
// 004ec5e1  8b0f                 mov ecx, dword ptr [edi]
// 004ec5e3  8b7108               mov esi, dword ptr [ecx + 8]
// 004ec5e6  85f6                 test esi, esi
// 004ec5e8  7421                 je 0x4ec60b
// 004ec5ea  8d9b00000000         lea ebx, [ebx]
// 004ec5f0  8b0e                 mov ecx, dword ptr [esi]
// 004ec5f2  8b11                 mov edx, dword ptr [ecx]
// 004ec5f4  8b4204               mov eax, dword ptr [edx + 4]
// 004ec5f7  ffd0                 call eax
// 004ec5f9  8bc6                 mov eax, esi
// 004ec5fb  8b7604               mov esi, dword ptr [esi + 4]
// 004ec5fe  50                   push eax
// 004ec5ff  e8ec1a1300           call 0x61e0f0
// 004ec604  83c404               add esp, 4
// 004ec607  85f6                 test esi, esi
// 004ec609  75e5                 jne 0x4ec5f0
// 004ec60b  8b0f                 mov ecx, dword ptr [edi]
// 004ec60d  85c9                 test ecx, ecx
// 004ec60f  7408                 je 0x4ec619
// 004ec611  8b11                 mov edx, dword ptr [ecx]
// 004ec613  8b02                 mov eax, dword ptr [edx]
// 004ec615  6a01                 push 1
// 004ec617  ffd0                 call eax
// 004ec619  c70700000000         mov dword ptr [edi], 0
// 004ec61f  8b442410             mov eax, dword ptr [esp + 0x10]
// 004ec623  83c001               add eax, 1
// 004ec626  83c544               add ebp, 0x44
// 004ec629  3b4304               cmp eax, dword ptr [ebx + 4]
// 004ec62c  89442410             mov dword ptr [esp + 0x10], eax
// 004ec630  7c95                 jl 0x4ec5c7
// 004ec632  5f                   pop edi
// 004ec633  5e                   pop esi
// 004ec634  5d                   pop ebp
// 004ec635  8b0b                 mov ecx, dword ptr [ebx]
// 004ec637  51                   push ecx
// 004ec638  e8436d0000           call 0x4f3380
// 004ec63d  83c404               add esp, 4
// 004ec640  c70300000000         mov dword ptr [ebx], 0
// 004ec646  c7430400000000       mov dword ptr [ebx + 4], 0
// 004ec64d  c7430800000000       mov dword ptr [ebx + 8], 0
// 004ec654  5b                   pop ebx
// 004ec655  59                   pop ecx
// 004ec656  c3                   ret 
// library openrbx-client/Rendering\RenderLib\RenderScene.cpp (function ??1?$Array@VRenderSurface@Render@RBX@@@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/RenderScene.cpp
