// roc 2007-03 004f2220  unit: seg_004f0000  size: 325 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f2220
//
// 004f2220  83ec08               sub esp, 8
// 004f2223  53                   push ebx
// 004f2224  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 004f2228  55                   push ebp
// 004f2229  56                   push esi
// 004f222a  57                   push edi
// 004f222b  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 004f222f  8bcf                 mov ecx, edi
// 004f2231  2bcb                 sub ecx, ebx
// 004f2233  b867666666           mov eax, 0x66666667
// 004f2238  f7e9                 imul ecx
// 004f223a  c1fa05               sar edx, 5
// 004f223d  8bc2                 mov eax, edx
// 004f223f  c1e81f               shr eax, 0x1f
// 004f2242  03c2                 add eax, edx
// 004f2244  83f820               cmp eax, 0x20
// 004f2247  0f8eb3000000         jle 0x4f2300
// 004f224d  8b742424             mov esi, dword ptr [esp + 0x24]
// 004f2251  85f6                 test esi, esi
// 004f2253  0f8ec3000000         jle 0x4f231c
// 004f2259  8b442428             mov eax, dword ptr [esp + 0x28]
// 004f225d  50                   push eax
// 004f225e  57                   push edi
// 004f225f  8d4c2418             lea ecx, [esp + 0x18]
// 004f2263  53                   push ebx
// 004f2264  51                   push ecx
// 004f2265  e856f4ffff           call 0x4f16c0
// 004f226a  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 004f226e  8bc6                 mov eax, esi
// 004f2270  99                   cdq 
// 004f2271  2bc2                 sub eax, edx
// 004f2273  d1f8                 sar eax, 1
// 004f2275  8bf0                 mov esi, eax
// 004f2277  99                   cdq 
// 004f2278  2bc2                 sub eax, edx
// 004f227a  d1f8                 sar eax, 1
// 004f227c  03f0                 add esi, eax
// 004f227e  8bcf                 mov ecx, edi
// 004f2280  2bcd                 sub ecx, ebp
// 004f2282  b867666666           mov eax, 0x66666667
// 004f2287  f7e9                 imul ecx
// 004f2289  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004f228d  c1fa05               sar edx, 5
// 004f2290  8bc2                 mov eax, edx
// 004f2292  c1e81f               shr eax, 0x1f
// 004f2295  03c2                 add eax, edx
// 004f2297  89442430             mov dword ptr [esp + 0x30], eax
// 004f229b  2bcb                 sub ecx, ebx
// 004f229d  b867666666           mov eax, 0x66666667
// 004f22a2  f7e9                 imul ecx
// 004f22a4  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 004f22a8  c1fa05               sar edx, 5
// 004f22ab  8bc2                 mov eax, edx
// 004f22ad  c1e81f               shr eax, 0x1f
// 004f22b0  03c2                 add eax, edx
// 004f22b2  83c410               add esp, 0x10
// 004f22b5  3bc1                 cmp eax, ecx
// 004f22b7  7d15                 jge 0x4f22ce
// 004f22b9  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004f22bd  8b542410             mov edx, dword ptr [esp + 0x10]
// 004f22c1  51                   push ecx
// 004f22c2  56                   push esi
// 004f22c3  52                   push edx
// 004f22c4  53                   push ebx
// 004f22c5  e856ffffff           call 0x4f2220
// 004f22ca  8bdd                 mov ebx, ebp
// 004f22cc  eb11                 jmp 0x4f22df
// 004f22ce  8b442428             mov eax, dword ptr [esp + 0x28]
// 004f22d2  50                   push eax
// 004f22d3  56                   push esi
// 004f22d4  57                   push edi
// 004f22d5  55                   push ebp
// 004f22d6  e845ffffff           call 0x4f2220
// 004f22db  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 004f22df  8bcf                 mov ecx, edi
// 004f22e1  2bcb                 sub ecx, ebx
// 004f22e3  b867666666           mov eax, 0x66666667
// 004f22e8  f7e9                 imul ecx
// 004f22ea  c1fa05               sar edx, 5
// 004f22ed  8bc2                 mov eax, edx
// 004f22ef  c1e81f               shr eax, 0x1f
// 004f22f2  03c2                 add eax, edx
// 004f22f4  83c410               add esp, 0x10
// 004f22f7  83f820               cmp eax, 0x20
// 004f22fa  0f8f51ffffff         jg 0x4f2251
// 004f2300  83f801               cmp eax, 1
// 004f2303  7e0f                 jle 0x4f2314
// 004f2305  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004f2309  51                   push ecx
// 004f230a  57                   push edi
// 004f230b  53                   push ebx
// 004f230c  e82ffcffff           call 0x4f1f40
// 004f2311  83c40c               add esp, 0xc
// 004f2314  5f                   pop edi
// 004f2315  5e                   pop esi
// 004f2316  5d                   pop ebp
// 004f2317  5b                   pop ebx
// 004f2318  83c408               add esp, 8
// 004f231b  c3                   ret 
// 004f231c  83f820               cmp eax, 0x20
// 004f231f  7edf                 jle 0x4f2300
// 004f2321  8bcf                 mov ecx, edi
// 004f2323  2bcb                 sub ecx, ebx
// 004f2325  b867666666           mov eax, 0x66666667
// 004f232a  f7e9                 imul ecx
// 004f232c  c1fa05               sar edx, 5
// 004f232f  8bca                 mov ecx, edx
// 004f2331  c1e91f               shr ecx, 0x1f
// 004f2334  03ca                 add ecx, edx
// 004f2336  83f901               cmp ecx, 1
// 004f2339  7e13                 jle 0x4f234e
// 004f233b  8b542428             mov edx, dword ptr [esp + 0x28]
// 004f233f  6a00                 push 0
// 004f2341  6a00                 push 0
// 004f2343  52                   push edx
// 004f2344  57                   push edi
// 004f2345  53                   push ebx
// 004f2346  e865f2ffff           call 0x4f15b0
// 004f234b  83c414               add esp, 0x14
// 004f234e  8b442428             mov eax, dword ptr [esp + 0x28]
// 004f2352  50                   push eax
// 004f2353  57                   push edi
// 004f2354  53                   push ebx
// 004f2355  e806fdffff           call 0x4f2060
// 004f235a  83c40c               add esp, 0xc
// 004f235d  5f                   pop edi
// 004f235e  5e                   pop esi
// 004f235f  5d                   pop ebp
// 004f2360  5b                   pop ebx
// 004f2361  83c408               add esp, 8
// 004f2364  c3                   ret 
// library openrbx-client/Rendering\RenderLib\EffectSettings.cpp (function ??$_Sort@PAVGLight@G3D@@HP6A_NABV12@0@Z@std@@YAXPAVGLight@G3D@@0HP6A_NABV12@1@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/EffectSettings.cpp
