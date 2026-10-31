// roc 2009-12 00404700  unit: ATL::CRegObject  size: 657 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00404700
//
// 00404700  6aff                 push -1
// 00404702  64a100000000         mov eax, dword ptr fs:[0]
// 00404708  68c8709200           push 0x9270c8
// 0040470d  50                   push eax
// 0040470e  64892500000000       mov dword ptr fs:[0], esp
// 00404715  83ec38               sub esp, 0x38
// 00404718  53                   push ebx
// 00404719  55                   push ebp
// 0040471a  56                   push esi
// 0040471b  57                   push edi
// 0040471c  8b7c2458             mov edi, dword ptr [esp + 0x58]
// 00404720  33db                 xor ebx, ebx
// 00404722  8bf1                 mov esi, ecx
// 00404724  3bfb                 cmp edi, ebx
// 00404726  0f844b020000         je 0x404977
// 0040472c  8b6c245c             mov ebp, dword ptr [esp + 0x5c]
// 00404730  3beb                 cmp ebp, ebx
// 00404732  0f843f020000         je 0x404977
// 00404738  57                   push edi
// 00404739  895d00               mov dword ptr [ebp], ebx
// 0040473c  ff1518b29800         call dword ptr [0x98b218]
// 00404742  03c0                 add eax, eax
// 00404744  50                   push eax
// 00404745  8d4c2420             lea ecx, [esp + 0x20]
// 00404749  e832e8ffff           call 0x402f80
// 0040474e  895c2450             mov dword ptr [esp + 0x50], ebx
// 00404752  395c2424             cmp dword ptr [esp + 0x24], ebx
// 00404756  7521                 jne 0x404779
// 00404758  53                   push ebx
// 00404759  ff15a0e09800         call dword ptr [0x98e0a0]
// 0040475f  5f                   pop edi
// 00404760  5e                   pop esi
// 00404761  5d                   pop ebp
// 00404762  b80e000780           mov eax, 0x8007000e
// 00404767  5b                   pop ebx
// 00404768  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0040476c  64890d00000000       mov dword ptr fs:[0], ecx
// 00404773  83c444               add esp, 0x44
// 00404776  c20800               ret 8
// 00404779  893e                 mov dword ptr [esi], edi
// 0040477b  a03c95b700           mov al, byte ptr [0xb7953c]
// 00404780  895c2414             mov dword ptr [esp + 0x14], ebx
// 00404784  895c2418             mov dword ptr [esp + 0x18], ebx
// 00404788  32db                 xor bl, bl
// 0040478a  88442413             mov byte ptr [esp + 0x13], al
// 0040478e  885c2458             mov byte ptr [esp + 0x58], bl
// 00404792  381f                 cmp byte ptr [edi], bl
// 00404794  0f8418010000         je 0x4048b2
// 0040479a  8b2dd4cb9800         mov ebp, dword ptr [0x98cbd4]
// 004047a0  807c241301           cmp byte ptr [esp + 0x13], 1
// 004047a5  0f85c6000000         jne 0x404871
// 004047ab  837c241800           cmp dword ptr [esp + 0x18], 0
// 004047b0  7547                 jne 0x4047f9
// 004047b2  8b06                 mov eax, dword ptr [esi]
// 004047b4  6860f79900           push 0x99f760
// 004047b9  50                   push eax
// 004047ba  ff1570b79800         call dword ptr [0x98b770]
// 004047c0  83c408               add esp, 8
// 004047c3  85c0                 test eax, eax
// 004047c5  7432                 je 0x4047f9
// 004047c7  8b0e                 mov ecx, dword ptr [esi]
// 004047c9  3bc1                 cmp eax, ecx
// 004047cb  752c                 jne 0x4047f9
// 004047cd  51                   push ecx
// 004047ce  ffd5                 call ebp
// 004047d0  50                   push eax
// 004047d1  8906                 mov dword ptr [esi], eax
// 004047d3  ffd5                 call ebp
// 004047d5  50                   push eax
// 004047d6  8906                 mov dword ptr [esi], eax
// 004047d8  ffd5                 call ebp
// 004047da  50                   push eax
// 004047db  8906                 mov dword ptr [esi], eax
// 004047dd  ffd5                 call ebp
// 004047df  68a8f99900           push 0x99f9a8
// 004047e4  8d4c2420             lea ecx, [esp + 0x20]
// 004047e8  8906                 mov dword ptr [esi], eax
// 004047ea  e881fdffff           call 0x404570
// 004047ef  85c0                 test eax, eax
// 004047f1  0f8459010000         je 0x404950
// 004047f7  b301                 mov bl, 1
// 004047f9  8b06                 mov eax, dword ptr [esi]
// 004047fb  803827               cmp byte ptr [eax], 0x27
// 004047fe  7536                 jne 0x404836
// 00404800  807c245800           cmp byte ptr [esp + 0x58], 0
// 00404805  7507                 jne 0x40480e
// 00404807  c644245801           mov byte ptr [esp + 0x58], 1
// 0040480c  eb63                 jmp 0x404871
// 0040480e  50                   push eax
// 0040480f  ffd5                 call ebp
// 00404811  803827               cmp byte ptr [eax], 0x27
// 00404814  7407                 je 0x40481d
// 00404816  c644245800           mov byte ptr [esp + 0x58], 0
// 0040481b  eb20                 jmp 0x40483d
// 0040481d  8b0e                 mov ecx, dword ptr [esi]
// 0040481f  51                   push ecx
// 00404820  ffd5                 call ebp
// 00404822  50                   push eax
// 00404823  8d4c2420             lea ecx, [esp + 0x20]
// 00404827  8906                 mov dword ptr [esi], eax
// 00404829  e842e8ffff           call 0x403070
// 0040482e  85c0                 test eax, eax
// 00404830  0f841a010000         je 0x404950
// 00404836  807c245800           cmp byte ptr [esp + 0x58], 0
// 0040483b  7534                 jne 0x404871
// 0040483d  8b16                 mov edx, dword ptr [esi]
// 0040483f  8a02                 mov al, byte ptr [edx]
// 00404841  3c7b                 cmp al, 0x7b
// 00404843  7504                 jne 0x404849
// 00404845  ff442418             inc dword ptr [esp + 0x18]
// 00404849  3c7d                 cmp al, 0x7d
// 0040484b  7524                 jne 0x404871
// 0040484d  836c241801           sub dword ptr [esp + 0x18], 1
// 00404852  751d                 jne 0x404871
// 00404854  80fb01               cmp bl, 1
// 00404857  7518                 jne 0x404871
// 00404859  6894f99900           push 0x99f994
// 0040485e  8d4c2420             lea ecx, [esp + 0x20]
// 00404862  e809fdffff           call 0x404570
// 00404867  85c0                 test eax, eax
// 00404869  0f84e1000000         je 0x404950
// 0040486f  32db                 xor bl, bl
// 00404871  8b3e                 mov edi, dword ptr [esi]
// 00404873  803f25               cmp byte ptr [edi], 0x25
// 00404876  57                   push edi
// 00404877  750c                 jne 0x404885
// 00404879  ffd5                 call ebp
// 0040487b  8bf8                 mov edi, eax
// 0040487d  893e                 mov dword ptr [esi], edi
// 0040487f  803f25               cmp byte ptr [edi], 0x25
// 00404882  7561                 jne 0x4048e5
// 00404884  57                   push edi
// 00404885  ffd5                 call ebp
// 00404887  2bc7                 sub eax, edi
// 00404889  50                   push eax
// 0040488a  57                   push edi
// 0040488b  8d4c2424             lea ecx, [esp + 0x24]
// 0040488f  e83ce7ffff           call 0x402fd0
// 00404894  85c0                 test eax, eax
// 00404896  0f84b4000000         je 0x404950
// 0040489c  8b06                 mov eax, dword ptr [esi]
// 0040489e  50                   push eax
// 0040489f  ffd5                 call ebp
// 004048a1  8bc8                 mov ecx, eax
// 004048a3  8906                 mov dword ptr [esi], eax
// 004048a5  803900               cmp byte ptr [ecx], 0
// 004048a8  0f85f2feffff         jne 0x4047a0
// 004048ae  8b6c245c             mov ebp, dword ptr [esp + 0x5c]
// 004048b2  8b442424             mov eax, dword ptr [esp + 0x24]
// 004048b6  c744242400000000     mov dword ptr [esp + 0x24], 0
// 004048be  894500               mov dword ptr [ebp], eax
// 004048c1  8b542424             mov edx, dword ptr [esp + 0x24]
// 004048c5  52                   push edx
// 004048c6  ff15a0e09800         call dword ptr [0x98e0a0]
// 004048cc  8b442414             mov eax, dword ptr [esp + 0x14]
// 004048d0  5f                   pop edi
// 004048d1  5e                   pop esi
// 004048d2  5d                   pop ebp
// 004048d3  5b                   pop ebx
// 004048d4  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 004048d8  64890d00000000       mov dword ptr fs:[0], ecx
// 004048df  83c444               add esp, 0x44
// 004048e2  c20800               ret 8
// 004048e5  6a25                 push 0x25
// 004048e7  57                   push edi
// 004048e8  e8c3e8ffff           call 0x4031b0
// 004048ed  8bf8                 mov edi, eax
// 004048ef  83c408               add esp, 8
// 004048f2  85ff                 test edi, edi
// 004048f4  7467                 je 0x40495d
// 004048f6  8b0e                 mov ecx, dword ptr [esi]
// 004048f8  2bc1                 sub eax, ecx
// 004048fa  83f81f               cmp eax, 0x1f
// 004048fd  7f6b                 jg 0x40496a
// 004048ff  50                   push eax
// 00404900  51                   push ecx
// 00404901  8d442430             lea eax, [esp + 0x30]
// 00404905  6a20                 push 0x20
// 00404907  50                   push eax
// 00404908  ff156cb79800         call dword ptr [0x98b76c]
// 0040490e  50                   push eax
// 0040490f  e8dce0ffff           call 0x4029f0
// 00404914  83c414               add esp, 0x14
// 00404917  8d4c2428             lea ecx, [esp + 0x28]
// 0040491b  51                   push ecx
// 0040491c  8b4e04               mov ecx, dword ptr [esi + 4]
// 0040491f  e89cfdffff           call 0x4046c0
// 00404924  85c0                 test eax, eax
// 00404926  7435                 je 0x40495d
// 00404928  50                   push eax
// 00404929  8d4c2420             lea ecx, [esp + 0x20]
// 0040492d  e83efcffff           call 0x404570
// 00404932  85c0                 test eax, eax
// 00404934  741a                 je 0x404950
// 00404936  393e                 cmp dword ptr [esi], edi
// 00404938  0f845effffff         je 0x40489c
// 0040493e  8bff                 mov edi, edi
// 00404940  8b16                 mov edx, dword ptr [esi]
// 00404942  52                   push edx
// 00404943  ffd5                 call ebp
// 00404945  8906                 mov dword ptr [esi], eax
// 00404947  3bc7                 cmp eax, edi
// 00404949  75f5                 jne 0x404940
// 0040494b  e94cffffff           jmp 0x40489c
// 00404950  c74424140e000780     mov dword ptr [esp + 0x14], 0x8007000e
// 00404958  e964ffffff           jmp 0x4048c1
// 0040495d  c744241409000280     mov dword ptr [esp + 0x14], 0x80020009
// 00404965  e957ffffff           jmp 0x4048c1
// 0040496a  c744241405400080     mov dword ptr [esp + 0x14], 0x80004005
// 00404972  e94affffff           jmp 0x4048c1
// 00404977  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0040497b  5f                   pop edi
// 0040497c  5e                   pop esi
// 0040497d  5d                   pop ebp
// 0040497e  b803400080           mov eax, 0x80004003
// 00404983  5b                   pop ebx
// 00404984  64890d00000000       mov dword ptr fs:[0], ecx
// 0040498b  83c444               add esp, 0x44
// 0040498e  c20800               ret 8
// copied from an identical function in another client (function ?PreProcessBuffer@CRegParser@ATL@@QAEJPADPAPAD@Z)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_atl_rtm_unwind_3caebe54ee562fd5.cpp