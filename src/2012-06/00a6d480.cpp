// roc 2012-06 00a6d480  unit: CXTPTabPaintManager::CColorSetDefault  size: 389 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a6d480
//
// 00a6d480  8b442418             mov eax, dword ptr [esp + 0x18]
// 00a6d484  53                   push ebx
// 00a6d485  55                   push ebp
// 00a6d486  56                   push esi
// 00a6d487  57                   push edi
// 00a6d488  8b7860               mov edi, dword ptr [eax + 0x60]
// 00a6d48b  8bf1                 mov esi, ecx
// 00a6d48d  394704               cmp dword ptr [edi + 4], eax
// 00a6d490  0f84ad000000         je 0xa6d543
// 00a6d496  8b07                 mov eax, dword ptr [edi]
// 00a6d498  8b5048               mov edx, dword ptr [eax + 0x48]
// 00a6d49b  8bcf                 mov ecx, edi
// 00a6d49d  ffd2                 call edx
// 00a6d49f  83f802               cmp eax, 2
// 00a6d4a2  740d                 je 0xa6d4b1
// 00a6d4a4  8b07                 mov eax, dword ptr [edi]
// 00a6d4a6  8b5048               mov edx, dword ptr [eax + 0x48]
// 00a6d4a9  8bcf                 mov ecx, edi
// 00a6d4ab  ffd2                 call edx
// 00a6d4ad  85c0                 test eax, eax
// 00a6d4af  7549                 jne 0xa6d4fa
// 00a6d4b1  e8aa03f5ff           call 0x9bd860
// 00a6d4b6  6a14                 push 0x14
// 00a6d4b8  8bc8                 mov ecx, eax
// 00a6d4ba  e821fbf4ff           call 0x9bcfe0
// 00a6d4bf  8bf0                 mov esi, eax
// 00a6d4c1  e89a03f5ff           call 0x9bd860
// 00a6d4c6  6a10                 push 0x10
// 00a6d4c8  8bc8                 mov ecx, eax
// 00a6d4ca  e811fbf4ff           call 0x9bcfe0
// 00a6d4cf  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00a6d4d3  8b542420             mov edx, dword ptr [esp + 0x20]
// 00a6d4d7  56                   push esi
// 00a6d4d8  50                   push eax
// 00a6d4d9  8b442424             mov eax, dword ptr [esp + 0x24]
// 00a6d4dd  2bc8                 sub ecx, eax
// 00a6d4df  83e904               sub ecx, 4
// 00a6d4e2  51                   push ecx
// 00a6d4e3  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00a6d4e7  6a02                 push 2
// 00a6d4e9  83c002               add eax, 2
// 00a6d4ec  50                   push eax
// 00a6d4ed  52                   push edx
// 00a6d4ee  e8b7c70200           call 0xa99caa
// 00a6d4f3  5f                   pop edi
// 00a6d4f4  5e                   pop esi
// 00a6d4f5  5d                   pop ebp
// 00a6d4f6  5b                   pop ebx
// 00a6d4f7  c21800               ret 0x18
// 00a6d4fa  e86103f5ff           call 0x9bd860
// 00a6d4ff  6a14                 push 0x14
// 00a6d501  8bc8                 mov ecx, eax
// 00a6d503  e8d8faf4ff           call 0x9bcfe0
// 00a6d508  8bf0                 mov esi, eax
// 00a6d50a  e85103f5ff           call 0x9bd860
// 00a6d50f  6a10                 push 0x10
// 00a6d511  8bc8                 mov ecx, eax
// 00a6d513  e8c8faf4ff           call 0x9bcfe0
// 00a6d518  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00a6d51c  8b542424             mov edx, dword ptr [esp + 0x24]
// 00a6d520  56                   push esi
// 00a6d521  50                   push eax
// 00a6d522  8b442420             mov eax, dword ptr [esp + 0x20]
// 00a6d526  2bc8                 sub ecx, eax
// 00a6d528  6a02                 push 2
// 00a6d52a  83e904               sub ecx, 4
// 00a6d52d  51                   push ecx
// 00a6d52e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00a6d532  52                   push edx
// 00a6d533  83c002               add eax, 2
// 00a6d536  50                   push eax
// 00a6d537  e86ec70200           call 0xa99caa
// 00a6d53c  5f                   pop edi
// 00a6d53d  5e                   pop esi
// 00a6d53e  5d                   pop ebp
// 00a6d53f  5b                   pop ebx
// 00a6d540  c21800               ret 0x18
// 00a6d543  8b8e04020000         mov ecx, dword ptr [esi + 0x204]
// 00a6d549  83793400             cmp dword ptr [ecx + 0x34], 0
// 00a6d54d  741d                 je 0xa6d56c
// 00a6d54f  8b16                 mov edx, dword ptr [esi]
// 00a6d551  50                   push eax
// 00a6d552  8b4224               mov eax, dword ptr [edx + 0x24]
// 00a6d555  8bce                 mov ecx, esi
// 00a6d557  ffd0                 call eax
// 00a6d559  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00a6d55d  50                   push eax
// 00a6d55e  8d4c241c             lea ecx, [esp + 0x1c]
// 00a6d562  51                   push ecx
// 00a6d563  8bcf                 mov ecx, edi
// 00a6d565  e84259f1ff           call 0x982eac
// 00a6d56a  eb5e                 jmp 0xa6d5ca
// 00a6d56c  8b86f8000000         mov eax, dword ptr [esi + 0xf8]
// 00a6d572  83f8ff               cmp eax, -1
// 00a6d575  7508                 jne 0xa6d57f
// 00a6d577  8baef4000000         mov ebp, dword ptr [esi + 0xf4]
// 00a6d57d  eb02                 jmp 0xa6d581
// 00a6d57f  8be8                 mov ebp, eax
// 00a6d581  8b9eec000000         mov ebx, dword ptr [esi + 0xec]
// 00a6d587  83fbff               cmp ebx, -1
// 00a6d58a  7506                 jne 0xa6d592
// 00a6d58c  8b9ee8000000         mov ebx, dword ptr [esi + 0xe8]
// 00a6d592  8b17                 mov edx, dword ptr [edi]
// 00a6d594  8b4248               mov eax, dword ptr [edx + 0x48]
// 00a6d597  8bcf                 mov ecx, edi
// 00a6d599  ffd0                 call eax
// 00a6d59b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a6d59f  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00a6d5a3  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00a6d5a7  50                   push eax
// 00a6d5a8  55                   push ebp
// 00a6d5a9  53                   push ebx
// 00a6d5aa  83ec10               sub esp, 0x10
// 00a6d5ad  8bc4                 mov eax, esp
// 00a6d5af  8908                 mov dword ptr [eax], ecx
// 00a6d5b1  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00a6d5b5  895004               mov dword ptr [eax + 4], edx
// 00a6d5b8  8b542440             mov edx, dword ptr [esp + 0x40]
// 00a6d5bc  894808               mov dword ptr [eax + 8], ecx
// 00a6d5bf  57                   push edi
// 00a6d5c0  8bce                 mov ecx, esi
// 00a6d5c2  89500c               mov dword ptr [eax + 0xc], edx
// 00a6d5c5  e886fbffff           call 0xa6d150
// 00a6d5ca  8b8618010000         mov eax, dword ptr [esi + 0x118]
// 00a6d5d0  83f8ff               cmp eax, -1
// 00a6d5d3  7508                 jne 0xa6d5dd
// 00a6d5d5  8b8e14010000         mov ecx, dword ptr [esi + 0x114]
// 00a6d5db  eb02                 jmp 0xa6d5df
// 00a6d5dd  8bc8                 mov ecx, eax
// 00a6d5df  8b860c010000         mov eax, dword ptr [esi + 0x10c]
// 00a6d5e5  83f8ff               cmp eax, -1
// 00a6d5e8  7506                 jne 0xa6d5f0
// 00a6d5ea  8b8608010000         mov eax, dword ptr [esi + 0x108]
// 00a6d5f0  51                   push ecx
// 00a6d5f1  50                   push eax
// 00a6d5f2  8d442420             lea eax, [esp + 0x20]
// 00a6d5f6  50                   push eax
// 00a6d5f7  8bcf                 mov ecx, edi
// 00a6d5f9  e8a858f1ff           call 0x982ea6
// 00a6d5fe  5f                   pop edi
// 00a6d5ff  5e                   pop esi
// 00a6d600  5d                   pop ebp
// 00a6d601  5b                   pop ebx
// 00a6d602  c21800               ret 0x18
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerColors.cpp (function ?FillStateButton@CColorSet@CXTPTabPaintManager@@UAEXPAVCDC@@VCRect@@PAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerColors.cpp
