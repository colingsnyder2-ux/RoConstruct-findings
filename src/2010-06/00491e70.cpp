// roc 2010-06 00491e70  unit: std::D::DU?$char_traits::V?$basic_string::?$Set  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00491e70
//
// 00491e70  56                   push esi
// 00491e71  8bf1                 mov esi, ecx
// 00491e73  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00491e77  ff4678               inc dword ptr [esi + 0x78]
// 00491e7a  8bc1                 mov eax, ecx
// 00491e7c  6bc05c               imul eax, eax, 0x5c
// 00491e7f  f30f10843020050000   movss xmm0, dword ptr [eax + esi + 0x520]
// 00491e88  0f2e44240c           ucomiss xmm0, dword ptr [esp + 0xc]
// 00491e8d  57                   push edi
// 00491e8e  8dbc3020050000       lea edi, [eax + esi + 0x520]
// 00491e95  9f                   lahf 
// 00491e96  f6c444               test ah, 0x44
// 00491e99  7b4d                 jnp 0x491ee8
// 00491e9b  8b86c4040000         mov eax, dword ptr [esi + 0x4c4]
// 00491ea1  3bc1                 cmp eax, ecx
// 00491ea3  7d02                 jge 0x491ea7
// 00491ea5  8bc1                 mov eax, ecx
// 00491ea7  8986c4040000         mov dword ptr [esi + 0x4c4], eax
// 00491ead  803dba38c00000       cmp byte ptr [0xc038ba], 0
// 00491eb4  740d                 je 0x491ec3
// 00491eb6  81c1c0840000         add ecx, 0x84c0
// 00491ebc  51                   push ecx
// 00491ebd  ff15a439c000         call dword ptr [0xc039a4]
// 00491ec3  d9442410             fld dword ptr [esp + 0x10]
// 00491ec7  f30f10442410         movss xmm0, dword ptr [esp + 0x10]
// 00491ecd  51                   push ecx
// 00491ece  d91c24               fstp dword ptr [esp]
// 00491ed1  6801850000           push 0x8501
// 00491ed6  f30f1107             movss dword ptr [edi], xmm0
// 00491eda  ff4670               inc dword ptr [esi + 0x70]
// 00491edd  6800850000           push 0x8500
// 00491ee2  ff15b0ab9e00         call dword ptr [0x9eabb0]
// 00491ee8  5f                   pop edi
// 00491ee9  5e                   pop esi
// 00491eea  c20800               ret 8
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setTextureLODBias@RenderDevice@G3D@@QAEXIM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
