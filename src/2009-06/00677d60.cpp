// roc 2009-06 00677d60  unit: RBX::Message  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00677d60
//
// 00677d60  53                   push ebx
// 00677d61  56                   push esi
// 00677d62  57                   push edi
// 00677d63  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00677d67  8b4704               mov eax, dword ptr [edi + 4]
// 00677d6a  8bf1                 mov esi, ecx
// 00677d6c  85c0                 test eax, eax
// 00677d6e  7c24                 jl 0x677d94
// 00677d70  8b0e                 mov ecx, dword ptr [esi]
// 00677d72  8b5604               mov edx, dword ptr [esi + 4]
// 00677d75  8b5491fc             mov edx, dword ptr [ecx + edx*4 - 4]
// 00677d79  891481               mov dword ptr [ecx + eax*4], edx
// 00677d7c  894204               mov dword ptr [edx + 4], eax
// 00677d7f  8b4604               mov eax, dword ptr [esi + 4]
// 00677d82  6a00                 push 0
// 00677d84  48                   dec eax
// 00677d85  50                   push eax
// 00677d86  8bce                 mov ecx, esi
// 00677d88  e823bfe6ff           call 0x4e3cb0
// 00677d8d  c74704ffffffff       mov dword ptr [edi + 4], 0xffffffff
// 00677d94  8b5f08               mov ebx, dword ptr [edi + 8]
// 00677d97  85db                 test ebx, ebx
// 00677d99  7c26                 jl 0x677dc1
// 00677d9b  8b460c               mov eax, dword ptr [esi + 0xc]
// 00677d9e  8b5610               mov edx, dword ptr [esi + 0x10]
// 00677da1  8b5490fc             mov edx, dword ptr [eax + edx*4 - 4]
// 00677da5  8d4e0c               lea ecx, [esi + 0xc]
// 00677da8  891498               mov dword ptr [eax + ebx*4], edx
// 00677dab  895a08               mov dword ptr [edx + 8], ebx
// 00677dae  8b4104               mov eax, dword ptr [ecx + 4]
// 00677db1  6a00                 push 0
// 00677db3  48                   dec eax
// 00677db4  50                   push eax
// 00677db5  e8f6bee6ff           call 0x4e3cb0
// 00677dba  c74708ffffffff       mov dword ptr [edi + 8], 0xffffffff
// 00677dc1  c7470c00000000       mov dword ptr [edi + 0xc], 0
// 00677dc8  5f                   pop edi
// 00677dc9  5e                   pop esi
// 00677dca  5b                   pop ebx
// 00677dcb  c20400               ret 4
// library openrbx-client/App\util\IRenderable.cpp (function ?onRemoving@IRenderableBucket@RBX@@IAEXPAVIRenderable@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/IRenderable.cpp
