// roc 2009-06 00566eb0  unit: RBX::RbxG3D::RenderScene  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00566eb0
//
// 00566eb0  51                   push ecx
// 00566eb1  53                   push ebx
// 00566eb2  8bd9                 mov ebx, ecx
// 00566eb4  837b0400             cmp dword ptr [ebx + 4], 0
// 00566eb8  c744240400000000     mov dword ptr [esp + 4], 0
// 00566ec0  7e71                 jle 0x566f33
// 00566ec2  55                   push ebp
// 00566ec3  56                   push esi
// 00566ec4  57                   push edi
// 00566ec5  33ed                 xor ebp, ebp
// 00566ec7  8b03                 mov eax, dword ptr [ebx]
// 00566ec9  8d7c2840             lea edi, [eax + ebp + 0x40]
// 00566ecd  8b07                 mov eax, dword ptr [edi]
// 00566ecf  85c0                 test eax, eax
// 00566ed1  744c                 je 0x566f1f
// 00566ed3  83c004               add eax, 4
// 00566ed6  50                   push eax
// 00566ed7  ff15a4e18900         call dword ptr [0x89e1a4]
// 00566edd  85c0                 test eax, eax
// 00566edf  7538                 jne 0x566f19
// 00566ee1  8b0f                 mov ecx, dword ptr [edi]
// 00566ee3  8b7108               mov esi, dword ptr [ecx + 8]
// 00566ee6  85f6                 test esi, esi
// 00566ee8  7421                 je 0x566f0b
// 00566eea  8d9b00000000         lea ebx, [ebx]
// 00566ef0  8b0e                 mov ecx, dword ptr [esi]
// 00566ef2  8b11                 mov edx, dword ptr [ecx]
// 00566ef4  8b4204               mov eax, dword ptr [edx + 4]
// 00566ef7  ffd0                 call eax
// 00566ef9  8bc6                 mov eax, esi
// 00566efb  8b7604               mov esi, dword ptr [esi + 4]
// 00566efe  50                   push eax
// 00566eff  e82e1b1b00           call 0x718a32
// 00566f04  83c404               add esp, 4
// 00566f07  85f6                 test esi, esi
// 00566f09  75e5                 jne 0x566ef0
// 00566f0b  8b0f                 mov ecx, dword ptr [edi]
// 00566f0d  85c9                 test ecx, ecx
// 00566f0f  7408                 je 0x566f19
// 00566f11  8b11                 mov edx, dword ptr [ecx]
// 00566f13  8b02                 mov eax, dword ptr [edx]
// 00566f15  6a01                 push 1
// 00566f17  ffd0                 call eax
// 00566f19  c70700000000         mov dword ptr [edi], 0
// 00566f1f  8b442410             mov eax, dword ptr [esp + 0x10]
// 00566f23  40                   inc eax
// 00566f24  83c544               add ebp, 0x44
// 00566f27  3b4304               cmp eax, dword ptr [ebx + 4]
// 00566f2a  89442410             mov dword ptr [esp + 0x10], eax
// 00566f2e  7c97                 jl 0x566ec7
// 00566f30  5f                   pop edi
// 00566f31  5e                   pop esi
// 00566f32  5d                   pop ebp
// 00566f33  8b0b                 mov ecx, dword ptr [ebx]
// 00566f35  51                   push ecx
// 00566f36  e855430000           call 0x56b290
// 00566f3b  83c404               add esp, 4
// 00566f3e  c70300000000         mov dword ptr [ebx], 0
// 00566f44  c7430400000000       mov dword ptr [ebx + 4], 0
// 00566f4b  c7430800000000       mov dword ptr [ebx + 8], 0
// 00566f52  5b                   pop ebx
// 00566f53  59                   pop ecx
// 00566f54  c3                   ret 
// library openrbx-client/Rendering\RenderLib\RenderScene.cpp (function ??1?$Array@VRenderSurface@Render@RBX@@@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/RenderScene.cpp
