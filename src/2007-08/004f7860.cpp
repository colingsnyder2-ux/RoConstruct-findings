// roc 2007-08 004f7860  unit: G3D::Sphere  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004f7860
//
// 004f7860  51                   push ecx
// 004f7861  57                   push edi
// 004f7862  8bf9                 mov edi, ecx
// 004f7864  837f1000             cmp dword ptr [edi + 0x10], 0
// 004f7868  7507                 jne 0x4f7871
// 004f786a  33c0                 xor eax, eax
// 004f786c  5f                   pop edi
// 004f786d  59                   pop ecx
// 004f786e  c20400               ret 4
// 004f7871  8b4710               mov eax, dword ptr [edi + 0x10]
// 004f7874  89442404             mov dword ptr [esp + 4], eax
// 004f7878  db442404             fild dword ptr [esp + 4]
// 004f787c  56                   push esi
// 004f787d  8d70ff               lea esi, [eax - 1]
// 004f7880  d84c2410             fmul dword ptr [esp + 0x10]
// 004f7884  e8d7941300           call 0x630d60
// 004f7889  85c0                 test eax, eax
// 004f788b  7f04                 jg 0x4f7891
// 004f788d  33c0                 xor eax, eax
// 004f788f  eb06                 jmp 0x4f7897
// 004f7891  3bc6                 cmp eax, esi
// 004f7893  7c02                 jl 0x4f7897
// 004f7895  8bc6                 mov eax, esi
// 004f7897  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 004f789a  8d0480               lea eax, [eax + eax*4]
// 004f789d  8a14c1               mov dl, byte ptr [ecx + eax*8]
// 004f78a0  8d04c1               lea eax, [ecx + eax*8]
// 004f78a3  f6da                 neg dl
// 004f78a5  5e                   pop esi
// 004f78a6  5f                   pop edi
// 004f78a7  1bd2                 sbb edx, edx
// 004f78a9  f7d2                 not edx
// 004f78ab  23c2                 and eax, edx
// 004f78ad  59                   pop ecx
// 004f78ae  c20400               ret 4
// library openrbx-client/Rendering\RenderLib\RenderScene.cpp (function ?detailLevel@Material@Render@RBX@@QBEPBVLevel@123@M@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/RenderScene.cpp
