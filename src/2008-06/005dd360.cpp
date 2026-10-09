// roc 2008-06 005dd360  unit: RBX::Message  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005dd360
//
// 005dd360  56                   push esi
// 005dd361  57                   push edi
// 005dd362  8bf9                 mov edi, ecx
// 005dd364  33f6                 xor esi, esi
// 005dd366  397710               cmp dword ptr [edi + 0x10], esi
// 005dd369  7e1a                 jle 0x5dd385
// 005dd36b  53                   push ebx
// 005dd36c  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 005dd370  8b470c               mov eax, dword ptr [edi + 0xc]
// 005dd373  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 005dd376  8b11                 mov edx, dword ptr [ecx]
// 005dd378  8b420c               mov eax, dword ptr [edx + 0xc]
// 005dd37b  53                   push ebx
// 005dd37c  ffd0                 call eax
// 005dd37e  46                   inc esi
// 005dd37f  3b7710               cmp esi, dword ptr [edi + 0x10]
// 005dd382  7cec                 jl 0x5dd370
// 005dd384  5b                   pop ebx
// 005dd385  5f                   pop edi
// 005dd386  5e                   pop esi
// 005dd387  c20400               ret 4
// library openrbx-client/App\util\IRenderable.cpp (function ?render3dAdornItems@IRenderableBucket@RBX@@QAEXPAVAdorn@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/IRenderable.cpp
