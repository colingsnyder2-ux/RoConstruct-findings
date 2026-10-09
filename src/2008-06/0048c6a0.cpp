// roc 2008-06 0048c6a0  unit: RBX::VBrickColor::?$TypedPropertyDescriptor  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048c6a0
//
// 0048c6a0  53                   push ebx
// 0048c6a1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0048c6a5  8b4318               mov eax, dword ptr [ebx + 0x18]
// 0048c6a8  56                   push esi
// 0048c6a9  57                   push edi
// 0048c6aa  8bf1                 mov esi, ecx
// 0048c6ac  8b7e18               mov edi, dword ptr [esi + 0x18]
// 0048c6af  83c004               add eax, 4
// 0048c6b2  8b00                 mov eax, dword ptr [eax]
// 0048c6b4  57                   push edi
// 0048c6b5  50                   push eax
// 0048c6b6  e875f8ffff           call 0x48bf30
// 0048c6bb  894704               mov dword ptr [edi + 4], eax
// 0048c6be  8b4b1c               mov ecx, dword ptr [ebx + 0x1c]
// 0048c6c1  8b5618               mov edx, dword ptr [esi + 0x18]
// 0048c6c4  894e1c               mov dword ptr [esi + 0x1c], ecx
// 0048c6c7  8b4204               mov eax, dword ptr [edx + 4]
// 0048c6ca  80780e00             cmp byte ptr [eax + 0xe], 0
// 0048c6ce  7537                 jne 0x48c707
// 0048c6d0  8b08                 mov ecx, dword ptr [eax]
// 0048c6d2  80790e00             cmp byte ptr [ecx + 0xe], 0
// 0048c6d6  750a                 jne 0x48c6e2
// 0048c6d8  8bc1                 mov eax, ecx
// 0048c6da  8b08                 mov ecx, dword ptr [eax]
// 0048c6dc  80790e00             cmp byte ptr [ecx + 0xe], 0
// 0048c6e0  74f6                 je 0x48c6d8
// 0048c6e2  8902                 mov dword ptr [edx], eax
// 0048c6e4  8b7618               mov esi, dword ptr [esi + 0x18]
// 0048c6e7  8b4e04               mov ecx, dword ptr [esi + 4]
// 0048c6ea  8b4108               mov eax, dword ptr [ecx + 8]
// 0048c6ed  80780e00             cmp byte ptr [eax + 0xe], 0
// 0048c6f1  750b                 jne 0x48c6fe
// 0048c6f3  8bc8                 mov ecx, eax
// 0048c6f5  8b4108               mov eax, dword ptr [ecx + 8]
// 0048c6f8  80780e00             cmp byte ptr [eax + 0xe], 0
// 0048c6fc  74f5                 je 0x48c6f3
// 0048c6fe  5f                   pop edi
// 0048c6ff  894e08               mov dword ptr [esi + 8], ecx
// 0048c702  5e                   pop esi
// 0048c703  5b                   pop ebx
// 0048c704  c20400               ret 4
// 0048c707  8912                 mov dword ptr [edx], edx
// 0048c709  8b7618               mov esi, dword ptr [esi + 0x18]
// 0048c70c  5f                   pop edi
// 0048c70d  897608               mov dword ptr [esi + 8], esi
// 0048c710  5e                   pop esi
// 0048c711  5b                   pop ebx
// 0048c712  c20400               ret 4
// library ogre-1.6.4/OgreAutoParamDataSource.cpp (function ?_Copy@?$_Tree@V?$_Tset_traits@EU?$less@E@std@@V?$allocator@E@2@$0A@@std@@@std@@IAEXABV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreAutoParamDataSource.cpp
