// from server: 100% by auto
// roc 2008-06 0079c620  unit: CXTPTabPaintManager::CColorSetDefault  size: 389 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0079c620
//
// 0079c620  8b442418             mov eax, dword ptr [esp + 0x18]
// 0079c624  53                   push ebx
// 0079c625  55                   push ebp
// 0079c626  56                   push esi
// 0079c627  57                   push edi
// 0079c628  8b7860               mov edi, dword ptr [eax + 0x60]
// 0079c62b  8bf1                 mov esi, ecx
// 0079c62d  394704               cmp dword ptr [edi + 4], eax
// 0079c630  0f84ad000000         je 0x79c6e3
// 0079c636  8b07                 mov eax, dword ptr [edi]
// 0079c638  8b5048               mov edx, dword ptr [eax + 0x48]
// 0079c63b  8bcf                 mov ecx, edi
// 0079c63d  ffd2                 call edx
// 0079c63f  83f802               cmp eax, 2
// 0079c642  740d                 je 0x79c651
// 0079c644  8b07                 mov eax, dword ptr [edi]
// 0079c646  8b5048               mov edx, dword ptr [eax + 0x48]
// 0079c649  8bcf                 mov ecx, edi
// 0079c64b  ffd2                 call edx
// 0079c64d  85c0                 test eax, eax
// 0079c64f  7549                 jne 0x79c69a
// 0079c651  e8ea36f4ff           call 0x6dfd40
// 0079c656  6a14                 push 0x14
// 0079c658  8bc8                 mov ecx, eax
// 0079c65a  e8c12ef4ff           call 0x6df520
// 0079c65f  8bf0                 mov esi, eax
// 0079c661  e8da36f4ff           call 0x6dfd40
// 0079c666  6a10                 push 0x10
// 0079c668  8bc8                 mov ecx, eax
// 0079c66a  e8b12ef4ff           call 0x6df520
// 0079c66f  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0079c673  8b542420             mov edx, dword ptr [esp + 0x20]
// 0079c677  56                   push esi
// 0079c678  50                   push eax
// 0079c679  8b442424             mov eax, dword ptr [esp + 0x24]
// 0079c67d  2bc8                 sub ecx, eax
// 0079c67f  83e904               sub ecx, 4
// 0079c682  51                   push ecx
// 0079c683  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0079c687  6a02                 push 2
// 0079c689  83c002               add eax, 2
// 0079c68c  50                   push eax
// 0079c68d  52                   push edx
// 0079c68e  e8cf010200           call 0x7bc862
// 0079c693  5f                   pop edi
// 0079c694  5e                   pop esi
// 0079c695  5d                   pop ebp
// 0079c696  5b                   pop ebx
// 0079c697  c21800               ret 0x18
// 0079c69a  e8a136f4ff           call 0x6dfd40
// 0079c69f  6a14                 push 0x14
// 0079c6a1  8bc8                 mov ecx, eax
// 0079c6a3  e8782ef4ff           call 0x6df520
// 0079c6a8  8bf0                 mov esi, eax
// 0079c6aa  e89136f4ff           call 0x6dfd40
// 0079c6af  6a10                 push 0x10
// 0079c6b1  8bc8                 mov ecx, eax
// 0079c6b3  e8682ef4ff           call 0x6df520
// 0079c6b8  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0079c6bc  8b542424             mov edx, dword ptr [esp + 0x24]
// 0079c6c0  56                   push esi
// 0079c6c1  50                   push eax
// 0079c6c2  8b442420             mov eax, dword ptr [esp + 0x20]
// 0079c6c6  2bc8                 sub ecx, eax
// 0079c6c8  6a02                 push 2
// 0079c6ca  83e904               sub ecx, 4
// 0079c6cd  51                   push ecx
// 0079c6ce  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0079c6d2  52                   push edx
// 0079c6d3  83c002               add eax, 2
// 0079c6d6  50                   push eax
// 0079c6d7  e886010200           call 0x7bc862
// 0079c6dc  5f                   pop edi
// 0079c6dd  5e                   pop esi
// 0079c6de  5d                   pop ebp
// 0079c6df  5b                   pop ebx
// 0079c6e0  c21800               ret 0x18
// 0079c6e3  8b8e04020000         mov ecx, dword ptr [esi + 0x204]
// 0079c6e9  83793400             cmp dword ptr [ecx + 0x34], 0
// 0079c6ed  741d                 je 0x79c70c
// 0079c6ef  8b16                 mov edx, dword ptr [esi]
// 0079c6f1  50                   push eax
// 0079c6f2  8b4224               mov eax, dword ptr [edx + 0x24]
// 0079c6f5  8bce                 mov ecx, esi
// 0079c6f7  ffd0                 call eax
// 0079c6f9  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0079c6fd  50                   push eax
// 0079c6fe  8d4c241c             lea ecx, [esp + 0x1c]
// 0079c702  51                   push ecx
// 0079c703  8bcf                 mov ecx, edi
// 0079c705  e8544cf0ff           call 0x6a135e
// 0079c70a  eb5e                 jmp 0x79c76a
// 0079c70c  8b86f8000000         mov eax, dword ptr [esi + 0xf8]
// 0079c712  83f8ff               cmp eax, -1
// 0079c715  7508                 jne 0x79c71f
// 0079c717  8baef4000000         mov ebp, dword ptr [esi + 0xf4]
// 0079c71d  eb02                 jmp 0x79c721
// 0079c71f  8be8                 mov ebp, eax
// 0079c721  8b9eec000000         mov ebx, dword ptr [esi + 0xec]
// 0079c727  83fbff               cmp ebx, -1
// 0079c72a  7506                 jne 0x79c732
// 0079c72c  8b9ee8000000         mov ebx, dword ptr [esi + 0xe8]
// 0079c732  8b17                 mov edx, dword ptr [edi]
// 0079c734  8b4248               mov eax, dword ptr [edx + 0x48]
// 0079c737  8bcf                 mov ecx, edi
// 0079c739  ffd0                 call eax
// 0079c73b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0079c73f  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0079c743  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0079c747  50                   push eax
// 0079c748  55                   push ebp
// 0079c749  53                   push ebx
// 0079c74a  83ec10               sub esp, 0x10
// 0079c74d  8bc4                 mov eax, esp
// 0079c74f  8908                 mov dword ptr [eax], ecx
// 0079c751  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0079c755  895004               mov dword ptr [eax + 4], edx
// 0079c758  8b542440             mov edx, dword ptr [esp + 0x40]
// 0079c75c  894808               mov dword ptr [eax + 8], ecx
// 0079c75f  57                   push edi
// 0079c760  8bce                 mov ecx, esi
// 0079c762  89500c               mov dword ptr [eax + 0xc], edx
// 0079c765  e886fbffff           call 0x79c2f0
// 0079c76a  8b8618010000         mov eax, dword ptr [esi + 0x118]
// 0079c770  83f8ff               cmp eax, -1
// 0079c773  7508                 jne 0x79c77d
// 0079c775  8b8e14010000         mov ecx, dword ptr [esi + 0x114]
// 0079c77b  eb02                 jmp 0x79c77f
// 0079c77d  8bc8                 mov ecx, eax
// 0079c77f  8b860c010000         mov eax, dword ptr [esi + 0x10c]
// 0079c785  83f8ff               cmp eax, -1
// 0079c788  7506                 jne 0x79c790
// 0079c78a  8b8608010000         mov eax, dword ptr [esi + 0x108]
// 0079c790  51                   push ecx
// 0079c791  50                   push eax
// 0079c792  8d442420             lea eax, [esp + 0x20]
// 0079c796  50                   push eax
// 0079c797  8bcf                 mov ecx, edi
// 0079c799  e8ba4bf0ff           call 0x6a1358
// 0079c79e  5f                   pop edi
// 0079c79f  5e                   pop esi
// 0079c7a0  5d                   pop ebp
// 0079c7a1  5b                   pop ebx
// 0079c7a2  c21800               ret 0x18
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerColors.cpp (function ?FillStateButton@CColorSet@CXTPTabPaintManager@@UAEXPAVCDC@@VCRect@@PAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerColors.cpp
