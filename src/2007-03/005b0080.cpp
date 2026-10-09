// roc 2007-03 005b0080  unit: seg_005b0000  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005b0080
//
// 005b0080  53                   push ebx
// 005b0081  8b5c2408             mov ebx, dword ptr [esp + 8]
// 005b0085  56                   push esi
// 005b0086  57                   push edi
// 005b0087  8bf9                 mov edi, ecx
// 005b0089  33f6                 xor esi, esi
// 005b008b  397714               cmp dword ptr [edi + 0x14], esi
// 005b008e  895f04               mov dword ptr [edi + 4], ebx
// 005b0091  7e14                 jle 0x5b00a7
// 005b0093  8b4710               mov eax, dword ptr [edi + 0x10]
// 005b0096  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 005b0099  53                   push ebx
// 005b009a  e8e1ffffff           call 0x5b0080
// 005b009f  83c601               add esi, 1
// 005b00a2  3b7714               cmp esi, dword ptr [edi + 0x14]
// 005b00a5  7cec                 jl 0x5b0093
// 005b00a7  5f                   pop edi
// 005b00a8  5e                   pop esi
// 005b00a9  5b                   pop ebx
// 005b00aa  c20400               ret 4
// library openrbx-client/App\v8kernel\Body.cpp (function ?resetRoot@Body@RBX@@AAEXPAV12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8kernel/Body.cpp
