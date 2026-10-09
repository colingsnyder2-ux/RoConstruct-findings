// roc 2009-12 00870300  unit: CXTPNewToolbarDlg  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00870300
//
// 00870300  51                   push ecx
// 00870301  56                   push esi
// 00870302  8bf1                 mov esi, ecx
// 00870304  8b4608               mov eax, dword ptr [esi + 8]
// 00870307  57                   push edi
// 00870308  33ff                 xor edi, edi
// 0087030a  3bc7                 cmp eax, edi
// 0087030c  746a                 je 0x870378
// 0087030e  53                   push ebx
// 0087030f  8b1d44b39800         mov ebx, dword ptr [0x98b344]
// 00870315  8d4c240c             lea ecx, [esp + 0xc]
// 00870319  51                   push ecx
// 0087031a  50                   push eax
// 0087031b  c7460c01000000       mov dword ptr [esi + 0xc], 1
// 00870322  897c2414             mov dword ptr [esp + 0x14], edi
// 00870326  ffd3                 call ebx
// 00870328  85c0                 test eax, eax
// 0087032a  743a                 je 0x870366
// 0087032c  55                   push ebp
// 0087032d  8b2d58b29800         mov ebp, dword ptr [0x98b258]
// 00870333  817c241003010000     cmp dword ptr [esp + 0x10], 0x103
// 0087033b  7528                 jne 0x870365
// 0087033d  8b5608               mov edx, dword ptr [esi + 8]
// 00870340  47                   inc edi
// 00870341  83ff0a               cmp edi, 0xa
// 00870344  7716                 ja 0x87035c
// 00870346  6a64                 push 0x64
// 00870348  52                   push edx
// 00870349  ffd5                 call ebp
// 0087034b  8b4e08               mov ecx, dword ptr [esi + 8]
// 0087034e  8d442410             lea eax, [esp + 0x10]
// 00870352  50                   push eax
// 00870353  51                   push ecx
// 00870354  ffd3                 call ebx
// 00870356  85c0                 test eax, eax
// 00870358  75d9                 jne 0x870333
// 0087035a  eb09                 jmp 0x870365
// 0087035c  6a00                 push 0
// 0087035e  52                   push edx
// 0087035f  ff1540b39800         call dword ptr [0x98b340]
// 00870365  5d                   pop ebp
// 00870366  8b4608               mov eax, dword ptr [esi + 8]
// 00870369  50                   push eax
// 0087036a  ff155cb29800         call dword ptr [0x98b25c]
// 00870370  c7460800000000       mov dword ptr [esi + 8], 0
// 00870377  5b                   pop ebx
// 00870378  5f                   pop edi
// 00870379  5e                   pop esi
// 0087037a  59                   pop ecx
// 0087037b  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPSoundManager.cpp (function ?StopThread@CXTPSoundManager@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPSoundManager.cpp
