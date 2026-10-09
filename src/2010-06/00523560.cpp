// roc 2010-06 00523560  unit: RBX::MeshGen  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00523560
//
// 00523560  51                   push ecx
// 00523561  56                   push esi
// 00523562  8bf1                 mov esi, ecx
// 00523564  8b4610               mov eax, dword ptr [esi + 0x10]
// 00523567  c744240400000000     mov dword ptr [esp + 4], 0
// 0052356f  89442404             mov dword ptr [esp + 4], eax
// 00523573  db442404             fild dword ptr [esp + 4]
// 00523577  57                   push edi
// 00523578  8d78ff               lea edi, [eax - 1]
// 0052357b  d84c2414             fmul dword ptr [esp + 0x14]
// 0052357f  e8ac582800           call 0x7a8e30
// 00523584  85c0                 test eax, eax
// 00523586  7f04                 jg 0x52358c
// 00523588  33c0                 xor eax, eax
// 0052358a  eb06                 jmp 0x523592
// 0052358c  3bc7                 cmp eax, edi
// 0052358e  7c02                 jl 0x523592
// 00523590  8bc7                 mov eax, edi
// 00523592  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00523595  8b0481               mov eax, dword ptr [ecx + eax*4]
// 00523598  8b742410             mov esi, dword ptr [esp + 0x10]
// 0052359c  50                   push eax
// 0052359d  8bce                 mov ecx, esi
// 0052359f  c70600000000         mov dword ptr [esi], 0
// 005235a5  e87637f6ff           call 0x486d20
// 005235aa  5f                   pop edi
// 005235ab  8bc6                 mov eax, esi
// 005235ad  5e                   pop esi
// 005235ae  59                   pop ecx
// 005235af  c20800               ret 8
// library openrbx-client/Rendering\RenderLib\Mesh.cpp (function ?detailLevel@Mesh@Render@RBX@@QBE?BV?$ReferenceCountedPointer@VLevel@Mesh@Render@RBX@@@G3D@@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/Mesh.cpp
