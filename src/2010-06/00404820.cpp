// roc 2010-06 00404820  unit: ATL::CRegObject  size: 657 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00404820
//
// 00404820  6aff                 push -1
// 00404822  64a100000000         mov eax, dword ptr fs:[0]
// 00404828  6848da9700           push 0x97da48
// 0040482d  50                   push eax
// 0040482e  64892500000000       mov dword ptr fs:[0], esp
// 00404835  83ec38               sub esp, 0x38
// 00404838  53                   push ebx
// 00404839  55                   push ebp
// 0040483a  56                   push esi
// 0040483b  57                   push edi
// 0040483c  8b7c2458             mov edi, dword ptr [esp + 0x58]
// 00404840  33db                 xor ebx, ebx
// 00404842  8bf1                 mov esi, ecx
// 00404844  3bfb                 cmp edi, ebx
// 00404846  0f844b020000         je 0x404a97
// 0040484c  8b6c245c             mov ebp, dword ptr [esp + 0x5c]
// 00404850  3beb                 cmp ebp, ebx
// 00404852  0f843f020000         je 0x404a97
// 00404858  57                   push edi
// 00404859  895d00               mov dword ptr [ebp], ebx
// 0040485c  ff1588a39e00         call dword ptr [0x9ea388]
// 00404862  03c0                 add eax, eax
// 00404864  50                   push eax
// 00404865  8d4c2420             lea ecx, [esp + 0x20]
// 00404869  e862e7ffff           call 0x402fd0
// 0040486e  895c2450             mov dword ptr [esp + 0x50], ebx
// 00404872  395c2424             cmp dword ptr [esp + 0x24], ebx
// 00404876  7521                 jne 0x404899
// 00404878  53                   push ebx
// 00404879  ff15d8d09e00         call dword ptr [0x9ed0d8]
// 0040487f  5f                   pop edi
// 00404880  5e                   pop esi
// 00404881  5d                   pop ebp
// 00404882  b80e000780           mov eax, 0x8007000e
// 00404887  5b                   pop ebx
// 00404888  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0040488c  64890d00000000       mov dword ptr fs:[0], ecx
// 00404893  83c444               add esp, 0x44
// 00404896  c20800               ret 8
// 00404899  893e                 mov dword ptr [esi], edi
// 0040489b  a0ecfabf00           mov al, byte ptr [0xbffaec]
// 004048a0  895c2414             mov dword ptr [esp + 0x14], ebx
// 004048a4  895c2418             mov dword ptr [esp + 0x18], ebx
// 004048a8  32db                 xor bl, bl
// 004048aa  88442413             mov byte ptr [esp + 0x13], al
// 004048ae  885c2458             mov byte ptr [esp + 0x58], bl
// 004048b2  381f                 cmp byte ptr [edi], bl
// 004048b4  0f8418010000         je 0x4049d2
// 004048ba  8b2d64ba9e00         mov ebp, dword ptr [0x9eba64]
// 004048c0  807c241301           cmp byte ptr [esp + 0x13], 1
// 004048c5  0f85c6000000         jne 0x404991
// 004048cb  837c241800           cmp dword ptr [esp + 0x18], 0
// 004048d0  7547                 jne 0x404919
// 004048d2  8b06                 mov eax, dword ptr [esi]
// 004048d4  680003a000           push 0xa00300
// 004048d9  50                   push eax
// 004048da  ff15d0a89e00         call dword ptr [0x9ea8d0]
// 004048e0  83c408               add esp, 8
// 004048e3  85c0                 test eax, eax
// 004048e5  7432                 je 0x404919
// 004048e7  8b0e                 mov ecx, dword ptr [esi]
// 004048e9  3bc1                 cmp eax, ecx
// 004048eb  752c                 jne 0x404919
// 004048ed  51                   push ecx
// 004048ee  ffd5                 call ebp
// 004048f0  50                   push eax
// 004048f1  8906                 mov dword ptr [esi], eax
// 004048f3  ffd5                 call ebp
// 004048f5  50                   push eax
// 004048f6  8906                 mov dword ptr [esi], eax
// 004048f8  ffd5                 call ebp
// 004048fa  50                   push eax
// 004048fb  8906                 mov dword ptr [esi], eax
// 004048fd  ffd5                 call ebp
// 004048ff  686805a000           push 0xa00568
// 00404904  8d4c2420             lea ecx, [esp + 0x20]
// 00404908  8906                 mov dword ptr [esi], eax
// 0040490a  e881fdffff           call 0x404690
// 0040490f  85c0                 test eax, eax
// 00404911  0f8459010000         je 0x404a70
// 00404917  b301                 mov bl, 1
// 00404919  8b06                 mov eax, dword ptr [esi]
// 0040491b  803827               cmp byte ptr [eax], 0x27
// 0040491e  7536                 jne 0x404956
// 00404920  807c245800           cmp byte ptr [esp + 0x58], 0
// 00404925  7507                 jne 0x40492e
// 00404927  c644245801           mov byte ptr [esp + 0x58], 1
// 0040492c  eb63                 jmp 0x404991
// 0040492e  50                   push eax
// 0040492f  ffd5                 call ebp
// 00404931  803827               cmp byte ptr [eax], 0x27
// 00404934  7407                 je 0x40493d
// 00404936  c644245800           mov byte ptr [esp + 0x58], 0
// 0040493b  eb20                 jmp 0x40495d
// 0040493d  8b0e                 mov ecx, dword ptr [esi]
// 0040493f  51                   push ecx
// 00404940  ffd5                 call ebp
// 00404942  50                   push eax
// 00404943  8d4c2420             lea ecx, [esp + 0x20]
// 00404947  8906                 mov dword ptr [esi], eax
// 00404949  e872e7ffff           call 0x4030c0
// 0040494e  85c0                 test eax, eax
// 00404950  0f841a010000         je 0x404a70
// 00404956  807c245800           cmp byte ptr [esp + 0x58], 0
// 0040495b  7534                 jne 0x404991
// 0040495d  8b16                 mov edx, dword ptr [esi]
// 0040495f  8a02                 mov al, byte ptr [edx]
// 00404961  3c7b                 cmp al, 0x7b
// 00404963  7504                 jne 0x404969
// 00404965  ff442418             inc dword ptr [esp + 0x18]
// 00404969  3c7d                 cmp al, 0x7d
// 0040496b  7524                 jne 0x404991
// 0040496d  836c241801           sub dword ptr [esp + 0x18], 1
// 00404972  751d                 jne 0x404991
// 00404974  80fb01               cmp bl, 1
// 00404977  7518                 jne 0x404991
// 00404979  685005a000           push 0xa00550
// 0040497e  8d4c2420             lea ecx, [esp + 0x20]
// 00404982  e809fdffff           call 0x404690
// 00404987  85c0                 test eax, eax
// 00404989  0f84e1000000         je 0x404a70
// 0040498f  32db                 xor bl, bl
// 00404991  8b3e                 mov edi, dword ptr [esi]
// 00404993  803f25               cmp byte ptr [edi], 0x25
// 00404996  57                   push edi
// 00404997  750c                 jne 0x4049a5
// 00404999  ffd5                 call ebp
// 0040499b  8bf8                 mov edi, eax
// 0040499d  893e                 mov dword ptr [esi], edi
// 0040499f  803f25               cmp byte ptr [edi], 0x25
// 004049a2  7561                 jne 0x404a05
// 004049a4  57                   push edi
// 004049a5  ffd5                 call ebp
// 004049a7  2bc7                 sub eax, edi
// 004049a9  50                   push eax
// 004049aa  57                   push edi
// 004049ab  8d4c2424             lea ecx, [esp + 0x24]
// 004049af  e86ce6ffff           call 0x403020
// 004049b4  85c0                 test eax, eax
// 004049b6  0f84b4000000         je 0x404a70
// 004049bc  8b06                 mov eax, dword ptr [esi]
// 004049be  50                   push eax
// 004049bf  ffd5                 call ebp
// 004049c1  8bc8                 mov ecx, eax
// 004049c3  8906                 mov dword ptr [esi], eax
// 004049c5  803900               cmp byte ptr [ecx], 0
// 004049c8  0f85f2feffff         jne 0x4048c0
// 004049ce  8b6c245c             mov ebp, dword ptr [esp + 0x5c]
// 004049d2  8b442424             mov eax, dword ptr [esp + 0x24]
// 004049d6  c744242400000000     mov dword ptr [esp + 0x24], 0
// 004049de  894500               mov dword ptr [ebp], eax
// 004049e1  8b542424             mov edx, dword ptr [esp + 0x24]
// 004049e5  52                   push edx
// 004049e6  ff15d8d09e00         call dword ptr [0x9ed0d8]
// 004049ec  8b442414             mov eax, dword ptr [esp + 0x14]
// 004049f0  5f                   pop edi
// 004049f1  5e                   pop esi
// 004049f2  5d                   pop ebp
// 004049f3  5b                   pop ebx
// 004049f4  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 004049f8  64890d00000000       mov dword ptr fs:[0], ecx
// 004049ff  83c444               add esp, 0x44
// 00404a02  c20800               ret 8
// 00404a05  6a25                 push 0x25
// 00404a07  57                   push edi
// 00404a08  e8f3e7ffff           call 0x403200
// 00404a0d  8bf8                 mov edi, eax
// 00404a0f  83c408               add esp, 8
// 00404a12  85ff                 test edi, edi
// 00404a14  7467                 je 0x404a7d
// 00404a16  8b0e                 mov ecx, dword ptr [esi]
// 00404a18  2bc1                 sub eax, ecx
// 00404a1a  83f81f               cmp eax, 0x1f
// 00404a1d  7f6b                 jg 0x404a8a
// 00404a1f  50                   push eax
// 00404a20  51                   push ecx
// 00404a21  8d442430             lea eax, [esp + 0x30]
// 00404a25  6a20                 push 0x20
// 00404a27  50                   push eax
// 00404a28  ff15d4a89e00         call dword ptr [0x9ea8d4]
// 00404a2e  50                   push eax
// 00404a2f  e80ce0ffff           call 0x402a40
// 00404a34  83c414               add esp, 0x14
// 00404a37  8d4c2428             lea ecx, [esp + 0x28]
// 00404a3b  51                   push ecx
// 00404a3c  8b4e04               mov ecx, dword ptr [esi + 4]
// 00404a3f  e89cfdffff           call 0x4047e0
// 00404a44  85c0                 test eax, eax
// 00404a46  7435                 je 0x404a7d
// 00404a48  50                   push eax
// 00404a49  8d4c2420             lea ecx, [esp + 0x20]
// 00404a4d  e83efcffff           call 0x404690
// 00404a52  85c0                 test eax, eax
// 00404a54  741a                 je 0x404a70
// 00404a56  393e                 cmp dword ptr [esi], edi
// 00404a58  0f845effffff         je 0x4049bc
// 00404a5e  8bff                 mov edi, edi
// 00404a60  8b16                 mov edx, dword ptr [esi]
// 00404a62  52                   push edx
// 00404a63  ffd5                 call ebp
// 00404a65  8906                 mov dword ptr [esi], eax
// 00404a67  3bc7                 cmp eax, edi
// 00404a69  75f5                 jne 0x404a60
// 00404a6b  e94cffffff           jmp 0x4049bc
// 00404a70  c74424140e000780     mov dword ptr [esp + 0x14], 0x8007000e
// 00404a78  e964ffffff           jmp 0x4049e1
// 00404a7d  c744241409000280     mov dword ptr [esp + 0x14], 0x80020009
// 00404a85  e957ffffff           jmp 0x4049e1
// 00404a8a  c744241405400080     mov dword ptr [esp + 0x14], 0x80004005
// 00404a92  e94affffff           jmp 0x4049e1
// 00404a97  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00404a9b  5f                   pop edi
// 00404a9c  5e                   pop esi
// 00404a9d  5d                   pop ebp
// 00404a9e  b803400080           mov eax, 0x80004003
// 00404aa3  5b                   pop ebx
// 00404aa4  64890d00000000       mov dword ptr fs:[0], ecx
// 00404aab  83c444               add esp, 0x44
// 00404aae  c20800               ret 8
// copied from an identical function in another client (function ?PreProcessBuffer@CRegParser@ATL@@QAEJPADPAPAD@Z)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_atl_rtm_unwind_3caebe54ee562fd5.cpp