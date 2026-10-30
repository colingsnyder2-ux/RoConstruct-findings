// roc 2010-06 00824310  unit: CXTPNewToolbarDlg  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00824310
//
// 00824310  51                   push ecx
// 00824311  56                   push esi
// 00824312  8bf1                 mov esi, ecx
// 00824314  8b4608               mov eax, dword ptr [esi + 8]
// 00824317  57                   push edi
// 00824318  33ff                 xor edi, edi
// 0082431a  3bc7                 cmp eax, edi
// 0082431c  746a                 je 0x824388
// 0082431e  53                   push ebx
// 0082431f  8b1d48a29e00         mov ebx, dword ptr [0x9ea248]
// 00824325  8d4c240c             lea ecx, [esp + 0xc]
// 00824329  51                   push ecx
// 0082432a  50                   push eax
// 0082432b  c7460c01000000       mov dword ptr [esi + 0xc], 1
// 00824332  897c2414             mov dword ptr [esp + 0x14], edi
// 00824336  ffd3                 call ebx
// 00824338  85c0                 test eax, eax
// 0082433a  743a                 je 0x824376
// 0082433c  55                   push ebp
// 0082433d  8b2dc8a39e00         mov ebp, dword ptr [0x9ea3c8]
// 00824343  817c241003010000     cmp dword ptr [esp + 0x10], 0x103
// 0082434b  7528                 jne 0x824375
// 0082434d  8b5608               mov edx, dword ptr [esi + 8]
// 00824350  47                   inc edi
// 00824351  83ff0a               cmp edi, 0xa
// 00824354  7716                 ja 0x82436c
// 00824356  6a64                 push 0x64
// 00824358  52                   push edx
// 00824359  ffd5                 call ebp
// 0082435b  8b4e08               mov ecx, dword ptr [esi + 8]
// 0082435e  8d442410             lea eax, [esp + 0x10]
// 00824362  50                   push eax
// 00824363  51                   push ecx
// 00824364  ffd3                 call ebx
// 00824366  85c0                 test eax, eax
// 00824368  75d9                 jne 0x824343
// 0082436a  eb09                 jmp 0x824375
// 0082436c  6a00                 push 0
// 0082436e  52                   push edx
// 0082436f  ff154ca29e00         call dword ptr [0x9ea24c]
// 00824375  5d                   pop ebp
// 00824376  8b4608               mov eax, dword ptr [esi + 8]
// 00824379  50                   push eax
// 0082437a  ff15cca39e00         call dword ptr [0x9ea3cc]
// 00824380  c7460800000000       mov dword ptr [esi + 8], 0
// 00824387  5b                   pop ebx
// 00824388  5f                   pop edi
// 00824389  5e                   pop esi
// 0082438a  59                   pop ecx
// 0082438b  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPSoundManager.cpp (function ?StopThread@CXTPSoundManager@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPSoundManager.cpp
