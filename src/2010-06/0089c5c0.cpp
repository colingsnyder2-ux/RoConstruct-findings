// roc 2010-06 0089c5c0  unit: CXTPTabPaintManager::CColorSetDefault  size: 389 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0089c5c0
//
// 0089c5c0  8b442418             mov eax, dword ptr [esp + 0x18]
// 0089c5c4  53                   push ebx
// 0089c5c5  55                   push ebp
// 0089c5c6  56                   push esi
// 0089c5c7  57                   push edi
// 0089c5c8  8b7860               mov edi, dword ptr [eax + 0x60]
// 0089c5cb  8bf1                 mov esi, ecx
// 0089c5cd  394704               cmp dword ptr [edi + 4], eax
// 0089c5d0  0f84ad000000         je 0x89c683
// 0089c5d6  8b07                 mov eax, dword ptr [edi]
// 0089c5d8  8b5048               mov edx, dword ptr [eax + 0x48]
// 0089c5db  8bcf                 mov ecx, edi
// 0089c5dd  ffd2                 call edx
// 0089c5df  83f802               cmp eax, 2
// 0089c5e2  740d                 je 0x89c5f1
// 0089c5e4  8b07                 mov eax, dword ptr [edi]
// 0089c5e6  8b5048               mov edx, dword ptr [eax + 0x48]
// 0089c5e9  8bcf                 mov ecx, edi
// 0089c5eb  ffd2                 call edx
// 0089c5ed  85c0                 test eax, eax
// 0089c5ef  7549                 jne 0x89c63a
// 0089c5f1  e82a75f4ff           call 0x7e3b20
// 0089c5f6  6a14                 push 0x14
// 0089c5f8  8bc8                 mov ecx, eax
// 0089c5fa  e8b16cf4ff           call 0x7e32b0
// 0089c5ff  8bf0                 mov esi, eax
// 0089c601  e81a75f4ff           call 0x7e3b20
// 0089c606  6a10                 push 0x10
// 0089c608  8bc8                 mov ecx, eax
// 0089c60a  e8a16cf4ff           call 0x7e32b0
// 0089c60f  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0089c613  8b542420             mov edx, dword ptr [esp + 0x20]
// 0089c617  56                   push esi
// 0089c618  50                   push eax
// 0089c619  8b442424             mov eax, dword ptr [esp + 0x24]
// 0089c61d  2bc8                 sub ecx, eax
// 0089c61f  83e904               sub ecx, 4
// 0089c622  51                   push ecx
// 0089c623  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0089c627  6a02                 push 2
// 0089c629  83c002               add eax, 2
// 0089c62c  50                   push eax
// 0089c62d  52                   push edx
// 0089c62e  e88b0f0e00           call 0x97d5be
// 0089c633  5f                   pop edi
// 0089c634  5e                   pop esi
// 0089c635  5d                   pop ebp
// 0089c636  5b                   pop ebx
// 0089c637  c21800               ret 0x18
// 0089c63a  e8e174f4ff           call 0x7e3b20
// 0089c63f  6a14                 push 0x14
// 0089c641  8bc8                 mov ecx, eax
// 0089c643  e8686cf4ff           call 0x7e32b0
// 0089c648  8bf0                 mov esi, eax
// 0089c64a  e8d174f4ff           call 0x7e3b20
// 0089c64f  6a10                 push 0x10
// 0089c651  8bc8                 mov ecx, eax
// 0089c653  e8586cf4ff           call 0x7e32b0
// 0089c658  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0089c65c  8b542424             mov edx, dword ptr [esp + 0x24]
// 0089c660  56                   push esi
// 0089c661  50                   push eax
// 0089c662  8b442420             mov eax, dword ptr [esp + 0x20]
// 0089c666  2bc8                 sub ecx, eax
// 0089c668  6a02                 push 2
// 0089c66a  83e904               sub ecx, 4
// 0089c66d  51                   push ecx
// 0089c66e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0089c672  52                   push edx
// 0089c673  83c002               add eax, 2
// 0089c676  50                   push eax
// 0089c677  e8420f0e00           call 0x97d5be
// 0089c67c  5f                   pop edi
// 0089c67d  5e                   pop esi
// 0089c67e  5d                   pop ebp
// 0089c67f  5b                   pop ebx
// 0089c680  c21800               ret 0x18
// 0089c683  8b8e04020000         mov ecx, dword ptr [esi + 0x204]
// 0089c689  83793400             cmp dword ptr [ecx + 0x34], 0
// 0089c68d  741d                 je 0x89c6ac
// 0089c68f  8b16                 mov edx, dword ptr [esi]
// 0089c691  50                   push eax
// 0089c692  8b4224               mov eax, dword ptr [edx + 0x24]
// 0089c695  8bce                 mov ecx, esi
// 0089c697  ffd0                 call eax
// 0089c699  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0089c69d  50                   push eax
// 0089c69e  8d4c241c             lea ecx, [esp + 0x1c]
// 0089c6a2  51                   push ecx
// 0089c6a3  8bcf                 mov ecx, edi
// 0089c6a5  e894c0f0ff           call 0x7a873e
// 0089c6aa  eb5e                 jmp 0x89c70a
// 0089c6ac  8b86f8000000         mov eax, dword ptr [esi + 0xf8]
// 0089c6b2  83f8ff               cmp eax, -1
// 0089c6b5  7508                 jne 0x89c6bf
// 0089c6b7  8baef4000000         mov ebp, dword ptr [esi + 0xf4]
// 0089c6bd  eb02                 jmp 0x89c6c1
// 0089c6bf  8be8                 mov ebp, eax
// 0089c6c1  8b9eec000000         mov ebx, dword ptr [esi + 0xec]
// 0089c6c7  83fbff               cmp ebx, -1
// 0089c6ca  7506                 jne 0x89c6d2
// 0089c6cc  8b9ee8000000         mov ebx, dword ptr [esi + 0xe8]
// 0089c6d2  8b17                 mov edx, dword ptr [edi]
// 0089c6d4  8b4248               mov eax, dword ptr [edx + 0x48]
// 0089c6d7  8bcf                 mov ecx, edi
// 0089c6d9  ffd0                 call eax
// 0089c6db  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0089c6df  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0089c6e3  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0089c6e7  50                   push eax
// 0089c6e8  55                   push ebp
// 0089c6e9  53                   push ebx
// 0089c6ea  83ec10               sub esp, 0x10
// 0089c6ed  8bc4                 mov eax, esp
// 0089c6ef  8908                 mov dword ptr [eax], ecx
// 0089c6f1  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0089c6f5  895004               mov dword ptr [eax + 4], edx
// 0089c6f8  8b542440             mov edx, dword ptr [esp + 0x40]
// 0089c6fc  894808               mov dword ptr [eax + 8], ecx
// 0089c6ff  57                   push edi
// 0089c700  8bce                 mov ecx, esi
// 0089c702  89500c               mov dword ptr [eax + 0xc], edx
// 0089c705  e886fbffff           call 0x89c290
// 0089c70a  8b8618010000         mov eax, dword ptr [esi + 0x118]
// 0089c710  83f8ff               cmp eax, -1
// 0089c713  7508                 jne 0x89c71d
// 0089c715  8b8e14010000         mov ecx, dword ptr [esi + 0x114]
// 0089c71b  eb02                 jmp 0x89c71f
// 0089c71d  8bc8                 mov ecx, eax
// 0089c71f  8b860c010000         mov eax, dword ptr [esi + 0x10c]
// 0089c725  83f8ff               cmp eax, -1
// 0089c728  7506                 jne 0x89c730
// 0089c72a  8b8608010000         mov eax, dword ptr [esi + 0x108]
// 0089c730  51                   push ecx
// 0089c731  50                   push eax
// 0089c732  8d442420             lea eax, [esp + 0x20]
// 0089c736  50                   push eax
// 0089c737  8bcf                 mov ecx, edi
// 0089c739  e8fabff0ff           call 0x7a8738
// 0089c73e  5f                   pop edi
// 0089c73f  5e                   pop esi
// 0089c740  5d                   pop ebp
// 0089c741  5b                   pop ebx
// 0089c742  c21800               ret 0x18
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerColors.cpp (function ?FillStateButton@CColorSet@CXTPTabPaintManager@@UAEXPAVCDC@@VCRect@@PAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerColors.cpp
