// from server: 100% by auto
// roc 2008-06 00727840  unit: CXTPRibbonBar  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00727840
//
// 00727840  51                   push ecx
// 00727841  56                   push esi
// 00727842  8bf1                 mov esi, ecx
// 00727844  8b4608               mov eax, dword ptr [esi + 8]
// 00727847  57                   push edi
// 00727848  33ff                 xor edi, edi
// 0072784a  3bc7                 cmp eax, edi
// 0072784c  746a                 je 0x7278b8
// 0072784e  53                   push ebx
// 0072784f  8b1d28238000         mov ebx, dword ptr [0x802328]
// 00727855  8d4c240c             lea ecx, [esp + 0xc]
// 00727859  51                   push ecx
// 0072785a  50                   push eax
// 0072785b  c7460c01000000       mov dword ptr [esi + 0xc], 1
// 00727862  897c2414             mov dword ptr [esp + 0x14], edi
// 00727866  ffd3                 call ebx
// 00727868  85c0                 test eax, eax
// 0072786a  743a                 je 0x7278a6
// 0072786c  55                   push ebp
// 0072786d  8b2d88228000         mov ebp, dword ptr [0x802288]
// 00727873  817c241003010000     cmp dword ptr [esp + 0x10], 0x103
// 0072787b  7528                 jne 0x7278a5
// 0072787d  8b5608               mov edx, dword ptr [esi + 8]
// 00727880  47                   inc edi
// 00727881  83ff0a               cmp edi, 0xa
// 00727884  7716                 ja 0x72789c
// 00727886  6a64                 push 0x64
// 00727888  52                   push edx
// 00727889  ffd5                 call ebp
// 0072788b  8b4e08               mov ecx, dword ptr [esi + 8]
// 0072788e  8d442410             lea eax, [esp + 0x10]
// 00727892  50                   push eax
// 00727893  51                   push ecx
// 00727894  ffd3                 call ebx
// 00727896  85c0                 test eax, eax
// 00727898  75d9                 jne 0x727873
// 0072789a  eb09                 jmp 0x7278a5
// 0072789c  6a00                 push 0
// 0072789e  52                   push edx
// 0072789f  ff1524238000         call dword ptr [0x802324]
// 007278a5  5d                   pop ebp
// 007278a6  8b4608               mov eax, dword ptr [esi + 8]
// 007278a9  50                   push eax
// 007278aa  ff1534228000         call dword ptr [0x802234]
// 007278b0  c7460800000000       mov dword ptr [esi + 8], 0
// 007278b7  5b                   pop ebx
// 007278b8  5f                   pop edi
// 007278b9  5e                   pop esi
// 007278ba  59                   pop ecx
// 007278bb  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPSoundManager.cpp (function ?StopThread@CXTPSoundManager@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPSoundManager.cpp
