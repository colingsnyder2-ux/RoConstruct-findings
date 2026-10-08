// roc 2007-08 005595a0  unit: RBX::DataModel  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005595a0
//
// 005595a0  6aff                 push -1
// 005595a2  68a8137500           push 0x7513a8
// 005595a7  64a100000000         mov eax, dword ptr fs:[0]
// 005595ad  50                   push eax
// 005595ae  64892500000000       mov dword ptr fs:[0], esp
// 005595b5  51                   push ecx
// 005595b6  56                   push esi
// 005595b7  57                   push edi
// 005595b8  8bf9                 mov edi, ecx
// 005595ba  897c2408             mov dword ptr [esp + 8], edi
// 005595be  8b7708               mov esi, dword ptr [edi + 8]
// 005595c1  85f6                 test esi, esi
// 005595c3  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005595cb  741a                 je 0x5595e7
// 005595cd  807e0400             cmp byte ptr [esi + 4], 0
// 005595d1  740b                 je 0x5595de
// 005595d3  8b0e                 mov ecx, dword ptr [esi]
// 005595d5  e896c11c00           call 0x725770
// 005595da  c6460400             mov byte ptr [esi + 4], 0
// 005595de  56                   push esi
// 005595df  e87e660d00           call 0x62fc62
// 005595e4  83c404               add esp, 4
// 005595e7  8b7704               mov esi, dword ptr [edi + 4]
// 005595ea  85f6                 test esi, esi
// 005595ec  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 005595f4  742a                 je 0x559620
// 005595f6  8d4604               lea eax, [esi + 4]
// 005595f9  83c9ff               or ecx, 0xffffffff
// 005595fc  f00fc108             lock xadd dword ptr [eax], ecx
// 00559600  751e                 jne 0x559620
// 00559602  8b16                 mov edx, dword ptr [esi]
// 00559604  8b4204               mov eax, dword ptr [edx + 4]
// 00559607  8bce                 mov ecx, esi
// 00559609  ffd0                 call eax
// 0055960b  8d4e08               lea ecx, [esi + 8]
// 0055960e  83caff               or edx, 0xffffffff
// 00559611  f00fc111             lock xadd dword ptr [ecx], edx
// 00559615  7509                 jne 0x559620
// 00559617  8b06                 mov eax, dword ptr [esi]
// 00559619  8b5008               mov edx, dword ptr [eax + 8]
// 0055961c  8bce                 mov ecx, esi
// 0055961e  ffd2                 call edx
// 00559620  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00559624  5f                   pop edi
// 00559625  5e                   pop esi
// 00559626  64890d00000000       mov dword ptr fs:[0], ecx
// 0055962d  83c410               add esp, 0x10
// 00559630  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??1Lock@DataModel@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
