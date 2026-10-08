// roc 2007-08 004f8b40  unit: G3D::Sphere  size: 167 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004f8b40
//
// 004f8b40  51                   push ecx
// 004f8b41  53                   push ebx
// 004f8b42  8bd9                 mov ebx, ecx
// 004f8b44  837b0400             cmp dword ptr [ebx + 4], 0
// 004f8b48  c744240400000000     mov dword ptr [esp + 4], 0
// 004f8b50  7e73                 jle 0x4f8bc5
// 004f8b52  55                   push ebp
// 004f8b53  56                   push esi
// 004f8b54  57                   push edi
// 004f8b55  33ed                 xor ebp, ebp
// 004f8b57  8b03                 mov eax, dword ptr [ebx]
// 004f8b59  8d7c2840             lea edi, [eax + ebp + 0x40]
// 004f8b5d  8b07                 mov eax, dword ptr [edi]
// 004f8b5f  85c0                 test eax, eax
// 004f8b61  744c                 je 0x4f8baf
// 004f8b63  83c004               add eax, 4
// 004f8b66  50                   push eax
// 004f8b67  ff15e8d27700         call dword ptr [0x77d2e8]
// 004f8b6d  85c0                 test eax, eax
// 004f8b6f  7538                 jne 0x4f8ba9
// 004f8b71  8b0f                 mov ecx, dword ptr [edi]
// 004f8b73  8b7108               mov esi, dword ptr [ecx + 8]
// 004f8b76  85f6                 test esi, esi
// 004f8b78  7421                 je 0x4f8b9b
// 004f8b7a  8d9b00000000         lea ebx, [ebx]
// 004f8b80  8b0e                 mov ecx, dword ptr [esi]
// 004f8b82  8b11                 mov edx, dword ptr [ecx]
// 004f8b84  8b4204               mov eax, dword ptr [edx + 4]
// 004f8b87  ffd0                 call eax
// 004f8b89  8bc6                 mov eax, esi
// 004f8b8b  8b7604               mov esi, dword ptr [esi + 4]
// 004f8b8e  50                   push eax
// 004f8b8f  e8ce701300           call 0x62fc62
// 004f8b94  83c404               add esp, 4
// 004f8b97  85f6                 test esi, esi
// 004f8b99  75e5                 jne 0x4f8b80
// 004f8b9b  8b0f                 mov ecx, dword ptr [edi]
// 004f8b9d  85c9                 test ecx, ecx
// 004f8b9f  7408                 je 0x4f8ba9
// 004f8ba1  8b11                 mov edx, dword ptr [ecx]
// 004f8ba3  8b02                 mov eax, dword ptr [edx]
// 004f8ba5  6a01                 push 1
// 004f8ba7  ffd0                 call eax
// 004f8ba9  c70700000000         mov dword ptr [edi], 0
// 004f8baf  8b442410             mov eax, dword ptr [esp + 0x10]
// 004f8bb3  83c001               add eax, 1
// 004f8bb6  83c544               add ebp, 0x44
// 004f8bb9  3b4304               cmp eax, dword ptr [ebx + 4]
// 004f8bbc  89442410             mov dword ptr [esp + 0x10], eax
// 004f8bc0  7c95                 jl 0x4f8b57
// 004f8bc2  5f                   pop edi
// 004f8bc3  5e                   pop esi
// 004f8bc4  5d                   pop ebp
// 004f8bc5  8b0b                 mov ecx, dword ptr [ebx]
// 004f8bc7  51                   push ecx
// 004f8bc8  e8436c0000           call 0x4ff810
// 004f8bcd  83c404               add esp, 4
// 004f8bd0  c70300000000         mov dword ptr [ebx], 0
// 004f8bd6  c7430400000000       mov dword ptr [ebx + 4], 0
// 004f8bdd  c7430800000000       mov dword ptr [ebx + 8], 0
// 004f8be4  5b                   pop ebx
// 004f8be5  59                   pop ecx
// 004f8be6  c3                   ret 
// library openrbx-client/Rendering\RenderLib\RenderScene.cpp (function ??1?$Array@VRenderSurface@Render@RBX@@@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/RenderScene.cpp
