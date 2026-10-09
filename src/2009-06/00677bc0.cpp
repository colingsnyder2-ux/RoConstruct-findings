// roc 2009-06 00677bc0  unit: RBX::Message  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00677bc0
//
// 00677bc0  56                   push esi
// 00677bc1  57                   push edi
// 00677bc2  8bf9                 mov edi, ecx
// 00677bc4  33f6                 xor esi, esi
// 00677bc6  397704               cmp dword ptr [edi + 4], esi
// 00677bc9  7e19                 jle 0x677be4
// 00677bcb  53                   push ebx
// 00677bcc  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00677bd0  8b07                 mov eax, dword ptr [edi]
// 00677bd2  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 00677bd5  8b11                 mov edx, dword ptr [ecx]
// 00677bd7  8b4208               mov eax, dword ptr [edx + 8]
// 00677bda  53                   push ebx
// 00677bdb  ffd0                 call eax
// 00677bdd  46                   inc esi
// 00677bde  3b7704               cmp esi, dword ptr [edi + 4]
// 00677be1  7ced                 jl 0x677bd0
// 00677be3  5b                   pop ebx
// 00677be4  5f                   pop edi
// 00677be5  5e                   pop esi
// 00677be6  c20400               ret 4
// library openrbx-client/App\util\IRenderable.cpp (function ?render2dItems@IRenderableBucket@RBX@@QAEXPAVAdorn@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/IRenderable.cpp
