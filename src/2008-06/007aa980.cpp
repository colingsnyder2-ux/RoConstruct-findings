// roc 2008-06 007aa980  unit: RBX::RenderNew::RenderScene  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007aa980
//
// 007aa980  51                   push ecx
// 007aa981  53                   push ebx
// 007aa982  8bd9                 mov ebx, ecx
// 007aa984  837b0400             cmp dword ptr [ebx + 4], 0
// 007aa988  c744240400000000     mov dword ptr [esp + 4], 0
// 007aa990  7e71                 jle 0x7aaa03
// 007aa992  55                   push ebp
// 007aa993  56                   push esi
// 007aa994  57                   push edi
// 007aa995  33ed                 xor ebp, ebp
// 007aa997  8b03                 mov eax, dword ptr [ebx]
// 007aa999  8d7c2840             lea edi, [eax + ebp + 0x40]
// 007aa99d  8b07                 mov eax, dword ptr [edi]
// 007aa99f  85c0                 test eax, eax
// 007aa9a1  744c                 je 0x7aa9ef
// 007aa9a3  83c004               add eax, 4
// 007aa9a6  50                   push eax
// 007aa9a7  ff15ac218000         call dword ptr [0x8021ac]
// 007aa9ad  85c0                 test eax, eax
// 007aa9af  7538                 jne 0x7aa9e9
// 007aa9b1  8b0f                 mov ecx, dword ptr [edi]
// 007aa9b3  8b7108               mov esi, dword ptr [ecx + 8]
// 007aa9b6  85f6                 test esi, esi
// 007aa9b8  7421                 je 0x7aa9db
// 007aa9ba  8d9b00000000         lea ebx, [ebx]
// 007aa9c0  8b0e                 mov ecx, dword ptr [esi]
// 007aa9c2  8b11                 mov edx, dword ptr [ecx]
// 007aa9c4  8b4204               mov eax, dword ptr [edx + 4]
// 007aa9c7  ffd0                 call eax
// 007aa9c9  8bc6                 mov eax, esi
// 007aa9cb  8b7604               mov esi, dword ptr [esi + 4]
// 007aa9ce  50                   push eax
// 007aa9cf  e8a65cefff           call 0x6a067a
// 007aa9d4  83c404               add esp, 4
// 007aa9d7  85f6                 test esi, esi
// 007aa9d9  75e5                 jne 0x7aa9c0
// 007aa9db  8b0f                 mov ecx, dword ptr [edi]
// 007aa9dd  85c9                 test ecx, ecx
// 007aa9df  7408                 je 0x7aa9e9
// 007aa9e1  8b11                 mov edx, dword ptr [ecx]
// 007aa9e3  8b02                 mov eax, dword ptr [edx]
// 007aa9e5  6a01                 push 1
// 007aa9e7  ffd0                 call eax
// 007aa9e9  c70700000000         mov dword ptr [edi], 0
// 007aa9ef  8b442410             mov eax, dword ptr [esp + 0x10]
// 007aa9f3  40                   inc eax
// 007aa9f4  83c544               add ebp, 0x44
// 007aa9f7  3b4304               cmp eax, dword ptr [ebx + 4]
// 007aa9fa  89442410             mov dword ptr [esp + 0x10], eax
// 007aa9fe  7c97                 jl 0x7aa997
// 007aaa00  5f                   pop edi
// 007aaa01  5e                   pop esi
// 007aaa02  5d                   pop ebp
// 007aaa03  8b0b                 mov ecx, dword ptr [ebx]
// 007aaa05  51                   push ecx
// 007aaa06  e815d3d5ff           call 0x507d20
// 007aaa0b  83c404               add esp, 4
// 007aaa0e  c70300000000         mov dword ptr [ebx], 0
// 007aaa14  c7430400000000       mov dword ptr [ebx + 4], 0
// 007aaa1b  c7430800000000       mov dword ptr [ebx + 8], 0
// 007aaa22  5b                   pop ebx
// 007aaa23  59                   pop ecx
// 007aaa24  c3                   ret 
// library openrbx-client/Rendering\RenderLib\RenderScene.cpp (function ??1?$Array@VRenderSurface@Render@RBX@@@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/RenderScene.cpp
