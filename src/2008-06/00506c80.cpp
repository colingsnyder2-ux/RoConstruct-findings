// roc 2008-06 00506c80  unit: RBX::Render::RenderScene  size: 327 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00506c80
//
// 00506c80  83ec08               sub esp, 8
// 00506c83  53                   push ebx
// 00506c84  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00506c88  55                   push ebp
// 00506c89  56                   push esi
// 00506c8a  57                   push edi
// 00506c8b  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00506c8f  8bcf                 mov ecx, edi
// 00506c91  2bcb                 sub ecx, ebx
// 00506c93  b867666666           mov eax, 0x66666667
// 00506c98  f7e9                 imul ecx
// 00506c9a  c1fa05               sar edx, 5
// 00506c9d  8bc2                 mov eax, edx
// 00506c9f  c1e81f               shr eax, 0x1f
// 00506ca2  03c2                 add eax, edx
// 00506ca4  83f820               cmp eax, 0x20
// 00506ca7  0f8eb3000000         jle 0x506d60
// 00506cad  8b742424             mov esi, dword ptr [esp + 0x24]
// 00506cb1  85f6                 test esi, esi
// 00506cb3  0f8ec5000000         jle 0x506d7e
// 00506cb9  8b442428             mov eax, dword ptr [esp + 0x28]
// 00506cbd  50                   push eax
// 00506cbe  57                   push edi
// 00506cbf  8d4c2418             lea ecx, [esp + 0x18]
// 00506cc3  53                   push ebx
// 00506cc4  51                   push ecx
// 00506cc5  e826f3ffff           call 0x505ff0
// 00506cca  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 00506cce  8bc6                 mov eax, esi
// 00506cd0  99                   cdq 
// 00506cd1  2bc2                 sub eax, edx
// 00506cd3  d1f8                 sar eax, 1
// 00506cd5  8bf0                 mov esi, eax
// 00506cd7  99                   cdq 
// 00506cd8  2bc2                 sub eax, edx
// 00506cda  d1f8                 sar eax, 1
// 00506cdc  03f0                 add esi, eax
// 00506cde  8bcf                 mov ecx, edi
// 00506ce0  2bcd                 sub ecx, ebp
// 00506ce2  b867666666           mov eax, 0x66666667
// 00506ce7  f7e9                 imul ecx
// 00506ce9  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00506ced  c1fa05               sar edx, 5
// 00506cf0  8bc2                 mov eax, edx
// 00506cf2  c1e81f               shr eax, 0x1f
// 00506cf5  03c2                 add eax, edx
// 00506cf7  89442430             mov dword ptr [esp + 0x30], eax
// 00506cfb  2bcb                 sub ecx, ebx
// 00506cfd  b867666666           mov eax, 0x66666667
// 00506d02  f7e9                 imul ecx
// 00506d04  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00506d08  c1fa05               sar edx, 5
// 00506d0b  8bc2                 mov eax, edx
// 00506d0d  c1e81f               shr eax, 0x1f
// 00506d10  03c2                 add eax, edx
// 00506d12  83c410               add esp, 0x10
// 00506d15  3bc1                 cmp eax, ecx
// 00506d17  7d15                 jge 0x506d2e
// 00506d19  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00506d1d  8b542410             mov edx, dword ptr [esp + 0x10]
// 00506d21  51                   push ecx
// 00506d22  56                   push esi
// 00506d23  52                   push edx
// 00506d24  53                   push ebx
// 00506d25  e856ffffff           call 0x506c80
// 00506d2a  8bdd                 mov ebx, ebp
// 00506d2c  eb11                 jmp 0x506d3f
// 00506d2e  8b442428             mov eax, dword ptr [esp + 0x28]
// 00506d32  50                   push eax
// 00506d33  56                   push esi
// 00506d34  57                   push edi
// 00506d35  55                   push ebp
// 00506d36  e845ffffff           call 0x506c80
// 00506d3b  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00506d3f  8bcf                 mov ecx, edi
// 00506d41  2bcb                 sub ecx, ebx
// 00506d43  b867666666           mov eax, 0x66666667
// 00506d48  f7e9                 imul ecx
// 00506d4a  c1fa05               sar edx, 5
// 00506d4d  8bc2                 mov eax, edx
// 00506d4f  c1e81f               shr eax, 0x1f
// 00506d52  03c2                 add eax, edx
// 00506d54  83c410               add esp, 0x10
// 00506d57  83f820               cmp eax, 0x20
// 00506d5a  0f8f51ffffff         jg 0x506cb1
// 00506d60  83f801               cmp eax, 1
// 00506d63  7e11                 jle 0x506d76
// 00506d65  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00506d69  6a00                 push 0
// 00506d6b  51                   push ecx
// 00506d6c  57                   push edi
// 00506d6d  53                   push ebx
// 00506d6e  e81dfbffff           call 0x506890
// 00506d73  83c410               add esp, 0x10
// 00506d76  5f                   pop edi
// 00506d77  5e                   pop esi
// 00506d78  5d                   pop ebp
// 00506d79  5b                   pop ebx
// 00506d7a  83c408               add esp, 8
// 00506d7d  c3                   ret 
// 00506d7e  83f820               cmp eax, 0x20
// 00506d81  7edd                 jle 0x506d60
// 00506d83  8bcf                 mov ecx, edi
// 00506d85  2bcb                 sub ecx, ebx
// 00506d87  b867666666           mov eax, 0x66666667
// 00506d8c  f7e9                 imul ecx
// 00506d8e  c1fa05               sar edx, 5
// 00506d91  8bca                 mov ecx, edx
// 00506d93  c1e91f               shr ecx, 0x1f
// 00506d96  03ca                 add ecx, edx
// 00506d98  83f901               cmp ecx, 1
// 00506d9b  7e13                 jle 0x506db0
// 00506d9d  8b542428             mov edx, dword ptr [esp + 0x28]
// 00506da1  6a00                 push 0
// 00506da3  6a00                 push 0
// 00506da5  52                   push edx
// 00506da6  57                   push edi
// 00506da7  53                   push ebx
// 00506da8  e833f1ffff           call 0x505ee0
// 00506dad  83c414               add esp, 0x14
// 00506db0  8b442428             mov eax, dword ptr [esp + 0x28]
// 00506db4  50                   push eax
// 00506db5  57                   push edi
// 00506db6  53                   push ebx
// 00506db7  e824fdffff           call 0x506ae0
// 00506dbc  83c40c               add esp, 0xc
// 00506dbf  5f                   pop edi
// 00506dc0  5e                   pop esi
// 00506dc1  5d                   pop ebp
// 00506dc2  5b                   pop ebx
// 00506dc3  83c408               add esp, 8
// 00506dc6  c3                   ret 
// library openrbx-client/Rendering\RenderLib\EffectSettings.cpp (function ??$_Sort@PAVGLight@G3D@@HP6A_NABV12@0@Z@std@@YAXPAVGLight@G3D@@0HP6A_NABV12@1@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/EffectSettings.cpp
