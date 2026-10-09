// roc 2010-06 00545010  unit: RBX::RbxG3D::RenderScene  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00545010
//
// 00545010  51                   push ecx
// 00545011  53                   push ebx
// 00545012  8bd9                 mov ebx, ecx
// 00545014  837b0400             cmp dword ptr [ebx + 4], 0
// 00545018  c744240400000000     mov dword ptr [esp + 4], 0
// 00545020  7e71                 jle 0x545093
// 00545022  55                   push ebp
// 00545023  56                   push esi
// 00545024  57                   push edi
// 00545025  33ed                 xor ebp, ebp
// 00545027  8b03                 mov eax, dword ptr [ebx]
// 00545029  8d7c2840             lea edi, [eax + ebp + 0x40]
// 0054502d  8b07                 mov eax, dword ptr [edi]
// 0054502f  85c0                 test eax, eax
// 00545031  744c                 je 0x54507f
// 00545033  83c004               add eax, 4
// 00545036  50                   push eax
// 00545037  ff157ca39e00         call dword ptr [0x9ea37c]
// 0054503d  85c0                 test eax, eax
// 0054503f  7538                 jne 0x545079
// 00545041  8b0f                 mov ecx, dword ptr [edi]
// 00545043  8b7108               mov esi, dword ptr [ecx + 8]
// 00545046  85f6                 test esi, esi
// 00545048  7421                 je 0x54506b
// 0054504a  8d9b00000000         lea ebx, [ebx]
// 00545050  8b0e                 mov ecx, dword ptr [esi]
// 00545052  8b11                 mov edx, dword ptr [ecx]
// 00545054  8b4204               mov eax, dword ptr [edx + 4]
// 00545057  ffd0                 call eax
// 00545059  8bc6                 mov eax, esi
// 0054505b  8b7604               mov esi, dword ptr [esi + 4]
// 0054505e  50                   push eax
// 0054505f  e836292600           call 0x7a799a
// 00545064  83c404               add esp, 4
// 00545067  85f6                 test esi, esi
// 00545069  75e5                 jne 0x545050
// 0054506b  8b0f                 mov ecx, dword ptr [edi]
// 0054506d  85c9                 test ecx, ecx
// 0054506f  7408                 je 0x545079
// 00545071  8b11                 mov edx, dword ptr [ecx]
// 00545073  8b02                 mov eax, dword ptr [edx]
// 00545075  6a01                 push 1
// 00545077  ffd0                 call eax
// 00545079  c70700000000         mov dword ptr [edi], 0
// 0054507f  8b442410             mov eax, dword ptr [esp + 0x10]
// 00545083  40                   inc eax
// 00545084  83c544               add ebp, 0x44
// 00545087  3b4304               cmp eax, dword ptr [ebx + 4]
// 0054508a  89442410             mov dword ptr [esp + 0x10], eax
// 0054508e  7c97                 jl 0x545027
// 00545090  5f                   pop edi
// 00545091  5e                   pop esi
// 00545092  5d                   pop ebp
// 00545093  8b0b                 mov ecx, dword ptr [ebx]
// 00545095  51                   push ecx
// 00545096  e825890000           call 0x54d9c0
// 0054509b  83c404               add esp, 4
// 0054509e  c70300000000         mov dword ptr [ebx], 0
// 005450a4  c7430400000000       mov dword ptr [ebx + 4], 0
// 005450ab  c7430800000000       mov dword ptr [ebx + 8], 0
// 005450b2  5b                   pop ebx
// 005450b3  59                   pop ecx
// 005450b4  c3                   ret 
// library openrbx-client/Rendering\RenderLib\RenderScene.cpp (function ??1?$Array@VRenderSurface@Render@RBX@@@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/RenderScene.cpp
