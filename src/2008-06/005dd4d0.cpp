// roc 2008-06 005dd4d0  unit: RBX::Message  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005dd4d0
//
// 005dd4d0  53                   push ebx
// 005dd4d1  56                   push esi
// 005dd4d2  57                   push edi
// 005dd4d3  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005dd4d7  8b4704               mov eax, dword ptr [edi + 4]
// 005dd4da  8bf1                 mov esi, ecx
// 005dd4dc  85c0                 test eax, eax
// 005dd4de  7c24                 jl 0x5dd504
// 005dd4e0  8b0e                 mov ecx, dword ptr [esi]
// 005dd4e2  8b5604               mov edx, dword ptr [esi + 4]
// 005dd4e5  8b5491fc             mov edx, dword ptr [ecx + edx*4 - 4]
// 005dd4e9  891481               mov dword ptr [ecx + eax*4], edx
// 005dd4ec  894204               mov dword ptr [edx + 4], eax
// 005dd4ef  8b4604               mov eax, dword ptr [esi + 4]
// 005dd4f2  6a00                 push 0
// 005dd4f4  48                   dec eax
// 005dd4f5  50                   push eax
// 005dd4f6  8bce                 mov ecx, esi
// 005dd4f8  e843e9ecff           call 0x4abe40
// 005dd4fd  c74704ffffffff       mov dword ptr [edi + 4], 0xffffffff
// 005dd504  8b5f08               mov ebx, dword ptr [edi + 8]
// 005dd507  85db                 test ebx, ebx
// 005dd509  7c26                 jl 0x5dd531
// 005dd50b  8b460c               mov eax, dword ptr [esi + 0xc]
// 005dd50e  8b5610               mov edx, dword ptr [esi + 0x10]
// 005dd511  8b5490fc             mov edx, dword ptr [eax + edx*4 - 4]
// 005dd515  8d4e0c               lea ecx, [esi + 0xc]
// 005dd518  891498               mov dword ptr [eax + ebx*4], edx
// 005dd51b  895a08               mov dword ptr [edx + 8], ebx
// 005dd51e  8b4104               mov eax, dword ptr [ecx + 4]
// 005dd521  6a00                 push 0
// 005dd523  48                   dec eax
// 005dd524  50                   push eax
// 005dd525  e816e9ecff           call 0x4abe40
// 005dd52a  c74708ffffffff       mov dword ptr [edi + 8], 0xffffffff
// 005dd531  c7470c00000000       mov dword ptr [edi + 0xc], 0
// 005dd538  5f                   pop edi
// 005dd539  5e                   pop esi
// 005dd53a  5b                   pop ebx
// 005dd53b  c20400               ret 4
// library openrbx-client/App\util\IRenderable.cpp (function ?onRemoving@IRenderableBucket@RBX@@IAEXPAVIRenderable@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/IRenderable.cpp
