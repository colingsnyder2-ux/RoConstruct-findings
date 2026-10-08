// roc 2007-08 00489680  unit: RBX::Network::VPlayer::?$FactoryProduct  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00489680
//
// 00489680  53                   push ebx
// 00489681  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00489685  8b4304               mov eax, dword ptr [ebx + 4]
// 00489688  56                   push esi
// 00489689  57                   push edi
// 0048968a  8bf1                 mov esi, ecx
// 0048968c  8b7e04               mov edi, dword ptr [esi + 4]
// 0048968f  83c004               add eax, 4
// 00489692  8b00                 mov eax, dword ptr [eax]
// 00489694  57                   push edi
// 00489695  50                   push eax
// 00489696  e805f8ffff           call 0x488ea0
// 0048969b  894704               mov dword ptr [edi + 4], eax
// 0048969e  8b4b08               mov ecx, dword ptr [ebx + 8]
// 004896a1  8b5604               mov edx, dword ptr [esi + 4]
// 004896a4  894e08               mov dword ptr [esi + 8], ecx
// 004896a7  8b4204               mov eax, dword ptr [edx + 4]
// 004896aa  80780e00             cmp byte ptr [eax + 0xe], 0
// 004896ae  7537                 jne 0x4896e7
// 004896b0  8b08                 mov ecx, dword ptr [eax]
// 004896b2  80790e00             cmp byte ptr [ecx + 0xe], 0
// 004896b6  750a                 jne 0x4896c2
// 004896b8  8bc1                 mov eax, ecx
// 004896ba  8b08                 mov ecx, dword ptr [eax]
// 004896bc  80790e00             cmp byte ptr [ecx + 0xe], 0
// 004896c0  74f6                 je 0x4896b8
// 004896c2  8902                 mov dword ptr [edx], eax
// 004896c4  8b7604               mov esi, dword ptr [esi + 4]
// 004896c7  8b4e04               mov ecx, dword ptr [esi + 4]
// 004896ca  8b4108               mov eax, dword ptr [ecx + 8]
// 004896cd  80780e00             cmp byte ptr [eax + 0xe], 0
// 004896d1  750b                 jne 0x4896de
// 004896d3  8bc8                 mov ecx, eax
// 004896d5  8b4108               mov eax, dword ptr [ecx + 8]
// 004896d8  80780e00             cmp byte ptr [eax + 0xe], 0
// 004896dc  74f5                 je 0x4896d3
// 004896de  5f                   pop edi
// 004896df  894e08               mov dword ptr [esi + 8], ecx
// 004896e2  5e                   pop esi
// 004896e3  5b                   pop ebx
// 004896e4  c20400               ret 4
// 004896e7  8912                 mov dword ptr [edx], edx
// 004896e9  8b7604               mov esi, dword ptr [esi + 4]
// 004896ec  5f                   pop edi
// 004896ed  897608               mov dword ptr [esi + 8], esi
// 004896f0  5e                   pop esi
// 004896f1  5b                   pop ebx
// 004896f2  c20400               ret 4
// library rbxgs-net/Player.cpp (function ?_Copy@?$_Tree@V?$_Tset_traits@DU?$less@D@std@@V?$allocator@D@2@$0A@@std@@@std@@IAEXABV12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Player.cpp
