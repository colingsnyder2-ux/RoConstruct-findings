// roc 2007-08 005e20f0  unit: seg_005e0000  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e20f0
//
// 005e20f0  53                   push ebx
// 005e20f1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 005e20f5  56                   push esi
// 005e20f6  57                   push edi
// 005e20f7  8bf9                 mov edi, ecx
// 005e20f9  33f6                 xor esi, esi
// 005e20fb  397714               cmp dword ptr [edi + 0x14], esi
// 005e20fe  895f04               mov dword ptr [edi + 4], ebx
// 005e2101  7e14                 jle 0x5e2117
// 005e2103  8b4710               mov eax, dword ptr [edi + 0x10]
// 005e2106  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 005e2109  53                   push ebx
// 005e210a  e8e1ffffff           call 0x5e20f0
// 005e210f  83c601               add esi, 1
// 005e2112  3b7714               cmp esi, dword ptr [edi + 0x14]
// 005e2115  7cec                 jl 0x5e2103
// 005e2117  5f                   pop edi
// 005e2118  5e                   pop esi
// 005e2119  5b                   pop ebx
// 005e211a  c20400               ret 4
// library openrbx-client/App\v8kernel\Body.cpp (function ?resetRoot@Body@RBX@@AAEXPAV12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8kernel/Body.cpp
