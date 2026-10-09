// roc 2008-06 005dd330  unit: RBX::Message  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005dd330
//
// 005dd330  56                   push esi
// 005dd331  57                   push edi
// 005dd332  8bf9                 mov edi, ecx
// 005dd334  33f6                 xor esi, esi
// 005dd336  397704               cmp dword ptr [edi + 4], esi
// 005dd339  7e19                 jle 0x5dd354
// 005dd33b  53                   push ebx
// 005dd33c  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 005dd340  8b07                 mov eax, dword ptr [edi]
// 005dd342  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 005dd345  8b11                 mov edx, dword ptr [ecx]
// 005dd347  8b4208               mov eax, dword ptr [edx + 8]
// 005dd34a  53                   push ebx
// 005dd34b  ffd0                 call eax
// 005dd34d  46                   inc esi
// 005dd34e  3b7704               cmp esi, dword ptr [edi + 4]
// 005dd351  7ced                 jl 0x5dd340
// 005dd353  5b                   pop ebx
// 005dd354  5f                   pop edi
// 005dd355  5e                   pop esi
// 005dd356  c20400               ret 4
// library openrbx-client/App\util\IRenderable.cpp (function ?render2dItems@IRenderableBucket@RBX@@QAEXPAVAdorn@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/IRenderable.cpp
