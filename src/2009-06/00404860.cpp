// roc 2009-06 00404860  unit: ATL::CRegObject  size: 657 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00404860
//
// 00404860  6aff                 push -1
// 00404862  64a100000000         mov eax, dword ptr fs:[0]
// 00404868  6868cb8400           push 0x84cb68
// 0040486d  50                   push eax
// 0040486e  64892500000000       mov dword ptr fs:[0], esp
// 00404875  83ec38               sub esp, 0x38
// 00404878  53                   push ebx
// 00404879  55                   push ebp
// 0040487a  56                   push esi
// 0040487b  57                   push edi
// 0040487c  8b7c2458             mov edi, dword ptr [esp + 0x58]
// 00404880  33db                 xor ebx, ebx
// 00404882  8bf1                 mov esi, ecx
// 00404884  3bfb                 cmp edi, ebx
// 00404886  0f844b020000         je 0x404ad7
// 0040488c  8b6c245c             mov ebp, dword ptr [esp + 0x5c]
// 00404890  3beb                 cmp ebp, ebx
// 00404892  0f843f020000         je 0x404ad7
// 00404898  57                   push edi
// 00404899  895d00               mov dword ptr [ebp], ebx
// 0040489c  ff15e0e18900         call dword ptr [0x89e1e0]
// 004048a2  03c0                 add eax, eax
// 004048a4  50                   push eax
// 004048a5  8d4c2420             lea ecx, [esp + 0x20]
// 004048a9  e802eaffff           call 0x4032b0
// 004048ae  895c2450             mov dword ptr [esp + 0x50], ebx
// 004048b2  395c2424             cmp dword ptr [esp + 0x24], ebx
// 004048b6  7521                 jne 0x4048d9
// 004048b8  53                   push ebx
// 004048b9  ff1504038a00         call dword ptr [0x8a0304]
// 004048bf  5f                   pop edi
// 004048c0  5e                   pop esi
// 004048c1  5d                   pop ebp
// 004048c2  b80e000780           mov eax, 0x8007000e
// 004048c7  5b                   pop ebx
// 004048c8  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 004048cc  64890d00000000       mov dword ptr fs:[0], ecx
// 004048d3  83c444               add esp, 0x44
// 004048d6  c20800               ret 8
// 004048d9  893e                 mov dword ptr [esi], edi
// 004048db  a05497a300           mov al, byte ptr [0xa39754]
// 004048e0  895c2414             mov dword ptr [esp + 0x14], ebx
// 004048e4  895c2418             mov dword ptr [esp + 0x18], ebx
// 004048e8  32db                 xor bl, bl
// 004048ea  88442413             mov byte ptr [esp + 0x13], al
// 004048ee  885c2458             mov byte ptr [esp + 0x58], bl
// 004048f2  381f                 cmp byte ptr [edi], bl
// 004048f4  0f8418010000         je 0x404a12
// 004048fa  8b2d80ee8900         mov ebp, dword ptr [0x89ee80]
// 00404900  807c241301           cmp byte ptr [esp + 0x13], 1
// 00404905  0f85c6000000         jne 0x4049d1
// 0040490b  837c241800           cmp dword ptr [esp + 0x18], 0
// 00404910  7547                 jne 0x404959
// 00404912  8b06                 mov eax, dword ptr [esi]
// 00404914  6820cc8a00           push 0x8acc20
// 00404919  50                   push eax
// 0040491a  ff159ce98900         call dword ptr [0x89e99c]
// 00404920  83c408               add esp, 8
// 00404923  85c0                 test eax, eax
// 00404925  7432                 je 0x404959
// 00404927  8b0e                 mov ecx, dword ptr [esi]
// 00404929  3bc1                 cmp eax, ecx
// 0040492b  752c                 jne 0x404959
// 0040492d  51                   push ecx
// 0040492e  ffd5                 call ebp
// 00404930  50                   push eax
// 00404931  8906                 mov dword ptr [esi], eax
// 00404933  ffd5                 call ebp
// 00404935  50                   push eax
// 00404936  8906                 mov dword ptr [esi], eax
// 00404938  ffd5                 call ebp
// 0040493a  50                   push eax
// 0040493b  8906                 mov dword ptr [esi], eax
// 0040493d  ffd5                 call ebp
// 0040493f  6868ce8a00           push 0x8ace68
// 00404944  8d4c2420             lea ecx, [esp + 0x20]
// 00404948  8906                 mov dword ptr [esi], eax
// 0040494a  e881fdffff           call 0x4046d0
// 0040494f  85c0                 test eax, eax
// 00404951  0f8459010000         je 0x404ab0
// 00404957  b301                 mov bl, 1
// 00404959  8b06                 mov eax, dword ptr [esi]
// 0040495b  803827               cmp byte ptr [eax], 0x27
// 0040495e  7536                 jne 0x404996
// 00404960  807c245800           cmp byte ptr [esp + 0x58], 0
// 00404965  7507                 jne 0x40496e
// 00404967  c644245801           mov byte ptr [esp + 0x58], 1
// 0040496c  eb63                 jmp 0x4049d1
// 0040496e  50                   push eax
// 0040496f  ffd5                 call ebp
// 00404971  803827               cmp byte ptr [eax], 0x27
// 00404974  7407                 je 0x40497d
// 00404976  c644245800           mov byte ptr [esp + 0x58], 0
// 0040497b  eb20                 jmp 0x40499d
// 0040497d  8b0e                 mov ecx, dword ptr [esi]
// 0040497f  51                   push ecx
// 00404980  ffd5                 call ebp
// 00404982  50                   push eax
// 00404983  8d4c2420             lea ecx, [esp + 0x20]
// 00404987  8906                 mov dword ptr [esi], eax
// 00404989  e812eaffff           call 0x4033a0
// 0040498e  85c0                 test eax, eax
// 00404990  0f841a010000         je 0x404ab0
// 00404996  807c245800           cmp byte ptr [esp + 0x58], 0
// 0040499b  7534                 jne 0x4049d1
// 0040499d  8b16                 mov edx, dword ptr [esi]
// 0040499f  8a02                 mov al, byte ptr [edx]
// 004049a1  3c7b                 cmp al, 0x7b
// 004049a3  7504                 jne 0x4049a9
// 004049a5  ff442418             inc dword ptr [esp + 0x18]
// 004049a9  3c7d                 cmp al, 0x7d
// 004049ab  7524                 jne 0x4049d1
// 004049ad  836c241801           sub dword ptr [esp + 0x18], 1
// 004049b2  751d                 jne 0x4049d1
// 004049b4  80fb01               cmp bl, 1
// 004049b7  7518                 jne 0x4049d1
// 004049b9  6854ce8a00           push 0x8ace54
// 004049be  8d4c2420             lea ecx, [esp + 0x20]
// 004049c2  e809fdffff           call 0x4046d0
// 004049c7  85c0                 test eax, eax
// 004049c9  0f84e1000000         je 0x404ab0
// 004049cf  32db                 xor bl, bl
// 004049d1  8b3e                 mov edi, dword ptr [esi]
// 004049d3  803f25               cmp byte ptr [edi], 0x25
// 004049d6  57                   push edi
// 004049d7  750c                 jne 0x4049e5
// 004049d9  ffd5                 call ebp
// 004049db  8bf8                 mov edi, eax
// 004049dd  893e                 mov dword ptr [esi], edi
// 004049df  803f25               cmp byte ptr [edi], 0x25
// 004049e2  7561                 jne 0x404a45
// 004049e4  57                   push edi
// 004049e5  ffd5                 call ebp
// 004049e7  2bc7                 sub eax, edi
// 004049e9  50                   push eax
// 004049ea  57                   push edi
// 004049eb  8d4c2424             lea ecx, [esp + 0x24]
// 004049ef  e80ce9ffff           call 0x403300
// 004049f4  85c0                 test eax, eax
// 004049f6  0f84b4000000         je 0x404ab0
// 004049fc  8b06                 mov eax, dword ptr [esi]
// 004049fe  50                   push eax
// 004049ff  ffd5                 call ebp
// 00404a01  8bc8                 mov ecx, eax
// 00404a03  8906                 mov dword ptr [esi], eax
// 00404a05  803900               cmp byte ptr [ecx], 0
// 00404a08  0f85f2feffff         jne 0x404900
// 00404a0e  8b6c245c             mov ebp, dword ptr [esp + 0x5c]
// 00404a12  8b442424             mov eax, dword ptr [esp + 0x24]
// 00404a16  c744242400000000     mov dword ptr [esp + 0x24], 0
// 00404a1e  894500               mov dword ptr [ebp], eax
// 00404a21  8b542424             mov edx, dword ptr [esp + 0x24]
// 00404a25  52                   push edx
// 00404a26  ff1504038a00         call dword ptr [0x8a0304]
// 00404a2c  8b442414             mov eax, dword ptr [esp + 0x14]
// 00404a30  5f                   pop edi
// 00404a31  5e                   pop esi
// 00404a32  5d                   pop ebp
// 00404a33  5b                   pop ebx
// 00404a34  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00404a38  64890d00000000       mov dword ptr fs:[0], ecx
// 00404a3f  83c444               add esp, 0x44
// 00404a42  c20800               ret 8
// 00404a45  6a25                 push 0x25
// 00404a47  57                   push edi
// 00404a48  e893eaffff           call 0x4034e0
// 00404a4d  8bf8                 mov edi, eax
// 00404a4f  83c408               add esp, 8
// 00404a52  85ff                 test edi, edi
// 00404a54  7467                 je 0x404abd
// 00404a56  8b0e                 mov ecx, dword ptr [esi]
// 00404a58  2bc1                 sub eax, ecx
// 00404a5a  83f81f               cmp eax, 0x1f
// 00404a5d  7f6b                 jg 0x404aca
// 00404a5f  50                   push eax
// 00404a60  51                   push ecx
// 00404a61  8d442430             lea eax, [esp + 0x30]
// 00404a65  6a20                 push 0x20
// 00404a67  50                   push eax
// 00404a68  ff15a0e98900         call dword ptr [0x89e9a0]
// 00404a6e  50                   push eax
// 00404a6f  e8ace2ffff           call 0x402d20
// 00404a74  83c414               add esp, 0x14
// 00404a77  8d4c2428             lea ecx, [esp + 0x28]
// 00404a7b  51                   push ecx
// 00404a7c  8b4e04               mov ecx, dword ptr [esi + 4]
// 00404a7f  e89cfdffff           call 0x404820
// 00404a84  85c0                 test eax, eax
// 00404a86  7435                 je 0x404abd
// 00404a88  50                   push eax
// 00404a89  8d4c2420             lea ecx, [esp + 0x20]
// 00404a8d  e83efcffff           call 0x4046d0
// 00404a92  85c0                 test eax, eax
// 00404a94  741a                 je 0x404ab0
// 00404a96  393e                 cmp dword ptr [esi], edi
// 00404a98  0f845effffff         je 0x4049fc
// 00404a9e  8bff                 mov edi, edi
// 00404aa0  8b16                 mov edx, dword ptr [esi]
// 00404aa2  52                   push edx
// 00404aa3  ffd5                 call ebp
// 00404aa5  8906                 mov dword ptr [esi], eax
// 00404aa7  3bc7                 cmp eax, edi
// 00404aa9  75f5                 jne 0x404aa0
// 00404aab  e94cffffff           jmp 0x4049fc
// 00404ab0  c74424140e000780     mov dword ptr [esp + 0x14], 0x8007000e
// 00404ab8  e964ffffff           jmp 0x404a21
// 00404abd  c744241409000280     mov dword ptr [esp + 0x14], 0x80020009
// 00404ac5  e957ffffff           jmp 0x404a21
// 00404aca  c744241405400080     mov dword ptr [esp + 0x14], 0x80004005
// 00404ad2  e94affffff           jmp 0x404a21
// 00404ad7  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00404adb  5f                   pop edi
// 00404adc  5e                   pop esi
// 00404add  5d                   pop ebp
// 00404ade  b803400080           mov eax, 0x80004003
// 00404ae3  5b                   pop ebx
// 00404ae4  64890d00000000       mov dword ptr fs:[0], ecx
// 00404aeb  83c444               add esp, 0x44
// 00404aee  c20800               ret 8
// copied from an identical function in another client (function ?PreProcessBuffer@CRegParser@ATL@@QAEJPADPAPAD@Z)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_atl_rtm_unwind_3caebe54ee562fd5.cpp