// roc 2009-06 00677bf0  unit: RBX::Message  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00677bf0
//
// 00677bf0  56                   push esi
// 00677bf1  57                   push edi
// 00677bf2  8bf9                 mov edi, ecx
// 00677bf4  33f6                 xor esi, esi
// 00677bf6  397710               cmp dword ptr [edi + 0x10], esi
// 00677bf9  7e1a                 jle 0x677c15
// 00677bfb  53                   push ebx
// 00677bfc  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00677c00  8b470c               mov eax, dword ptr [edi + 0xc]
// 00677c03  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 00677c06  8b11                 mov edx, dword ptr [ecx]
// 00677c08  8b420c               mov eax, dword ptr [edx + 0xc]
// 00677c0b  53                   push ebx
// 00677c0c  ffd0                 call eax
// 00677c0e  46                   inc esi
// 00677c0f  3b7710               cmp esi, dword ptr [edi + 0x10]
// 00677c12  7cec                 jl 0x677c00
// 00677c14  5b                   pop ebx
// 00677c15  5f                   pop edi
// 00677c16  5e                   pop esi
// 00677c17  c20400               ret 4
// library openrbx-client/App\util\IRenderable.cpp (function ?render3dAdornItems@IRenderableBucket@RBX@@QAEXPAVAdorn@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/IRenderable.cpp
