// from server: 100% by auto
// roc 2012-06 00a49b20  unit: CXTPShadowsManager::CShadowWnd  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a49b20
//
// 00a49b20  83ec30               sub esp, 0x30
// 00a49b23  53                   push ebx
// 00a49b24  8bd9                 mov ebx, ecx
// 00a49b26  53                   push ebx
// 00a49b27  8d4c2408             lea ecx, [esp + 8]
// 00a49b2b  e810b6f8ff           call 0x9d5140
// 00a49b30  8d442438             lea eax, [esp + 0x38]
// 00a49b34  50                   push eax
// 00a49b35  8d4c2408             lea ecx, [esp + 8]
// 00a49b39  51                   push ecx
// 00a49b3a  8d54241c             lea edx, [esp + 0x1c]
// 00a49b3e  52                   push edx
// 00a49b3f  ff15f83cb200         call dword ptr [0xb23cf8]
// 00a49b45  85c0                 test eax, eax
// 00a49b47  7476                 je 0xa49bbf
// 00a49b49  56                   push esi
// 00a49b4a  57                   push edi
// 00a49b4b  53                   push ebx
// 00a49b4c  8d4c2430             lea ecx, [esp + 0x30]
// 00a49b50  e84bb6f8ff           call 0x9d51a0
// 00a49b55  8b3d2c21b200         mov edi, dword ptr [0xb2212c]
// 00a49b5b  8d44242c             lea eax, [esp + 0x2c]
// 00a49b5f  50                   push eax
// 00a49b60  ffd7                 call edi
// 00a49b62  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00a49b66  8bf0                 mov esi, eax
// 00a49b68  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00a49b6c  f7d9                 neg ecx
// 00a49b6e  51                   push ecx
// 00a49b6f  f7d8                 neg eax
// 00a49b71  50                   push eax
// 00a49b72  8d4c2424             lea ecx, [esp + 0x24]
// 00a49b76  51                   push ecx
// 00a49b77  ff15f43ab200         call dword ptr [0xb23af4]
// 00a49b7d  8d54241c             lea edx, [esp + 0x1c]
// 00a49b81  52                   push edx
// 00a49b82  ffd7                 call edi
// 00a49b84  6a04                 push 4
// 00a49b86  8bf8                 mov edi, eax
// 00a49b88  57                   push edi
// 00a49b89  56                   push esi
// 00a49b8a  56                   push esi
// 00a49b8b  ff151421b200         call dword ptr [0xb22114]
// 00a49b91  57                   push edi
// 00a49b92  8b3d7021b200         mov edi, dword ptr [0xb22170]
// 00a49b98  ffd7                 call edi
// 00a49b9a  8b4320               mov eax, dword ptr [ebx + 0x20]
// 00a49b9d  6a00                 push 0
// 00a49b9f  56                   push esi
// 00a49ba0  50                   push eax
// 00a49ba1  ff15983cb200         call dword ptr [0xb23c98]
// 00a49ba7  85c0                 test eax, eax
// 00a49ba9  7503                 jne 0xa49bae
// 00a49bab  56                   push esi
// 00a49bac  ffd7                 call edi
// 00a49bae  5f                   pop edi
// 00a49baf  b801000000           mov eax, 1
// 00a49bb4  5e                   pop esi
// 00a49bb5  894360               mov dword ptr [ebx + 0x60], eax
// 00a49bb8  5b                   pop ebx
// 00a49bb9  83c430               add esp, 0x30
// 00a49bbc  c21000               ret 0x10
// 00a49bbf  b801000000           mov eax, 1
// 00a49bc4  5b                   pop ebx
// 00a49bc5  83c430               add esp, 0x30
// 00a49bc8  c21000               ret 0x10
// library xtp-15.2.1/Source\Common\XTPHookManager.cpp (function ?ExcludeRect@CShadowWnd@CXTPShadowManager@@QAEHVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPHookManager.cpp
