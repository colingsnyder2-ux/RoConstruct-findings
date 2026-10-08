// roc 2007-03 006199a0  unit: seg_00610000  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006199a0
//
// 006199a0  53                   push ebx
// 006199a1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 006199a5  8b4304               mov eax, dword ptr [ebx + 4]
// 006199a8  56                   push esi
// 006199a9  57                   push edi
// 006199aa  8bf1                 mov esi, ecx
// 006199ac  8b7e04               mov edi, dword ptr [esi + 4]
// 006199af  83c004               add eax, 4
// 006199b2  8b00                 mov eax, dword ptr [eax]
// 006199b4  57                   push edi
// 006199b5  50                   push eax
// 006199b6  e8c5f6ffff           call 0x619080
// 006199bb  894704               mov dword ptr [edi + 4], eax
// 006199be  8b4b08               mov ecx, dword ptr [ebx + 8]
// 006199c1  8b5604               mov edx, dword ptr [esi + 4]
// 006199c4  894e08               mov dword ptr [esi + 8], ecx
// 006199c7  8b4204               mov eax, dword ptr [edx + 4]
// 006199ca  80780e00             cmp byte ptr [eax + 0xe], 0
// 006199ce  7537                 jne 0x619a07
// 006199d0  8b08                 mov ecx, dword ptr [eax]
// 006199d2  80790e00             cmp byte ptr [ecx + 0xe], 0
// 006199d6  750a                 jne 0x6199e2
// 006199d8  8bc1                 mov eax, ecx
// 006199da  8b08                 mov ecx, dword ptr [eax]
// 006199dc  80790e00             cmp byte ptr [ecx + 0xe], 0
// 006199e0  74f6                 je 0x6199d8
// 006199e2  8902                 mov dword ptr [edx], eax
// 006199e4  8b7604               mov esi, dword ptr [esi + 4]
// 006199e7  8b4e04               mov ecx, dword ptr [esi + 4]
// 006199ea  8b4108               mov eax, dword ptr [ecx + 8]
// 006199ed  80780e00             cmp byte ptr [eax + 0xe], 0
// 006199f1  750b                 jne 0x6199fe
// 006199f3  8bc8                 mov ecx, eax
// 006199f5  8b4108               mov eax, dword ptr [ecx + 8]
// 006199f8  80780e00             cmp byte ptr [eax + 0xe], 0
// 006199fc  74f5                 je 0x6199f3
// 006199fe  5f                   pop edi
// 006199ff  894e08               mov dword ptr [esi + 8], ecx
// 00619a02  5e                   pop esi
// 00619a03  5b                   pop ebx
// 00619a04  c20400               ret 4
// 00619a07  8912                 mov dword ptr [edx], edx
// 00619a09  8b7604               mov esi, dword ptr [esi + 4]
// 00619a0c  5f                   pop edi
// 00619a0d  897608               mov dword ptr [esi + 8], esi
// 00619a10  5e                   pop esi
// 00619a11  5b                   pop ebx
// 00619a12  c20400               ret 4
// library rbxgs-net/Player.cpp (function ?_Copy@?$_Tree@V?$_Tset_traits@DU?$less@D@std@@V?$allocator@D@2@$0A@@std@@@std@@IAEXABV12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Player.cpp
