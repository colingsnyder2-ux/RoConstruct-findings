// roc 2009-06 007a9740  unit: XTPPaintThemes::CXTPOffice2003Theme  size: 639 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007a9740
//
// 007a9740  837c242800           cmp dword ptr [esp + 0x28], 0
// 007a9745  53                   push ebx
// 007a9746  55                   push ebp
// 007a9747  56                   push esi
// 007a9748  57                   push edi
// 007a9749  8bf1                 mov esi, ecx
// 007a974b  7454                 je 0x7a97a1
// 007a974d  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 007a9751  6a00                 push 0
// 007a9753  6a00                 push 0
// 007a9755  8d86fc040000         lea eax, [esi + 0x4fc]
// 007a975b  50                   push eax
// 007a975c  8d4c2424             lea ecx, [esp + 0x24]
// 007a9760  51                   push ecx
// 007a9761  57                   push edi
// 007a9762  e8098efcff           call 0x772570
// 007a9767  8bc8                 mov ecx, eax
// 007a9769  e82291fcff           call 0x772890
// 007a976e  8b542418             mov edx, dword ptr [esp + 0x18]
// 007a9772  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007a9776  6a2b                 push 0x2b
// 007a9778  6a2b                 push 0x2b
// 007a977a  83ec10               sub esp, 0x10
// 007a977d  8bc4                 mov eax, esp
// 007a977f  8910                 mov dword ptr [eax], edx
// 007a9781  8b542438             mov edx, dword ptr [esp + 0x38]
// 007a9785  894804               mov dword ptr [eax + 4], ecx
// 007a9788  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 007a978c  895008               mov dword ptr [eax + 8], edx
// 007a978f  89480c               mov dword ptr [eax + 0xc], ecx
// 007a9792  57                   push edi
// 007a9793  8bce                 mov ecx, esi
// 007a9795  e8e691f7ff           call 0x722980
// 007a979a  5f                   pop edi
// 007a979b  5e                   pop esi
// 007a979c  5d                   pop ebp
// 007a979d  5b                   pop ebx
// 007a979e  c23000               ret 0x30
// 007a97a1  83be4005000000       cmp dword ptr [esi + 0x540], 0
// 007a97a8  8b442440             mov eax, dword ptr [esp + 0x40]
// 007a97ac  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 007a97b0  0f84be010000         je 0x7a9974
// 007a97b6  83f902               cmp ecx, 2
// 007a97b9  0f84b5010000         je 0x7a9974
// 007a97bf  83f802               cmp eax, 2
// 007a97c2  7425                 je 0x7a97e9
// 007a97c4  85c0                 test eax, eax
// 007a97c6  7413                 je 0x7a97db
// 007a97c8  83f803               cmp eax, 3
// 007a97cb  741c                 je 0x7a97e9
// 007a97cd  83f801               cmp eax, 1
// 007a97d0  7409                 je 0x7a97db
// 007a97d2  83f804               cmp eax, 4
// 007a97d5  0f8599010000         jne 0x7a9974
// 007a97db  83f803               cmp eax, 3
// 007a97de  7409                 je 0x7a97e9
// 007a97e0  83f805               cmp eax, 5
// 007a97e3  7404                 je 0x7a97e9
// 007a97e5  33ff                 xor edi, edi
// 007a97e7  eb05                 jmp 0x7a97ee
// 007a97e9  bf01000000           mov edi, 1
// 007a97ee  837c243000           cmp dword ptr [esp + 0x30], 0
// 007a97f3  7575                 jne 0x7a986a
// 007a97f5  8b542428             mov edx, dword ptr [esp + 0x28]
// 007a97f9  52                   push edx
// 007a97fa  e8415cf7ff           call 0x71f440
// 007a97ff  83c404               add esp, 4
// 007a9802  85c0                 test eax, eax
// 007a9804  741c                 je 0x7a9822
// 007a9806  837c243400           cmp dword ptr [esp + 0x34], 0
// 007a980b  8d8670050000         lea eax, [esi + 0x570]
// 007a9811  0f8513010000         jne 0x7a992a
// 007a9817  8d8690050000         lea eax, [esi + 0x590]
// 007a981d  e908010000           jmp 0x7a992a
// 007a9822  837c243400           cmp dword ptr [esp + 0x34], 0
// 007a9827  0f848b010000         je 0x7a99b8
// 007a982d  8b542418             mov edx, dword ptr [esp + 0x18]
// 007a9831  8d8e50050000         lea ecx, [esi + 0x550]
// 007a9837  51                   push ecx
// 007a9838  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007a983c  57                   push edi
// 007a983d  6a3a                 push 0x3a
// 007a983f  83ec10               sub esp, 0x10
// 007a9842  8bc4                 mov eax, esp
// 007a9844  8910                 mov dword ptr [eax], edx
// 007a9846  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 007a984a  894804               mov dword ptr [eax + 4], ecx
// 007a984d  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 007a9851  895008               mov dword ptr [eax + 8], edx
// 007a9854  8b542430             mov edx, dword ptr [esp + 0x30]
// 007a9858  89480c               mov dword ptr [eax + 0xc], ecx
// 007a985b  52                   push edx
// 007a985c  8bce                 mov ecx, esi
// 007a985e  e86dfeffff           call 0x7a96d0
// 007a9863  5f                   pop edi
// 007a9864  5e                   pop esi
// 007a9865  5d                   pop ebp
// 007a9866  5b                   pop ebx
// 007a9867  c23000               ret 0x30
// 007a986a  8b442434             mov eax, dword ptr [esp + 0x34]
// 007a986e  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 007a9872  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 007a9876  83f802               cmp eax, 2
// 007a9879  7547                 jne 0x7a98c2
// 007a987b  85ed                 test ebp, ebp
// 007a987d  0f8588000000         jne 0x7a990b
// 007a9883  85db                 test ebx, ebx
// 007a9885  0f8584000000         jne 0x7a990f
// 007a988b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007a988f  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 007a9893  6a33                 push 0x33
// 007a9895  6a32                 push 0x32
// 007a9897  83ec10               sub esp, 0x10
// 007a989a  8bc4                 mov eax, esp
// 007a989c  8908                 mov dword ptr [eax], ecx
// 007a989e  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 007a98a2  895004               mov dword ptr [eax + 4], edx
// 007a98a5  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 007a98a9  894808               mov dword ptr [eax + 8], ecx
// 007a98ac  89500c               mov dword ptr [eax + 0xc], edx
// 007a98af  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 007a98b3  50                   push eax
// 007a98b4  8bce                 mov ecx, esi
// 007a98b6  e8359ff7ff           call 0x7237f0
// 007a98bb  5f                   pop edi
// 007a98bc  5e                   pop esi
// 007a98bd  5d                   pop ebp
// 007a98be  5b                   pop ebx
// 007a98bf  c23000               ret 0x30
// 007a98c2  85c0                 test eax, eax
// 007a98c4  7449                 je 0x7a990f
// 007a98c6  85ed                 test ebp, ebp
// 007a98c8  7541                 jne 0x7a990b
// 007a98ca  85db                 test ebx, ebx
// 007a98cc  7541                 jne 0x7a990f
// 007a98ce  8d8e50050000         lea ecx, [esi + 0x550]
// 007a98d4  51                   push ecx
// 007a98d5  57                   push edi
// 007a98d6  6a25                 push 0x25
// 007a98d8  8b542424             mov edx, dword ptr [esp + 0x24]
// 007a98dc  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007a98e0  83ec10               sub esp, 0x10
// 007a98e3  8bc4                 mov eax, esp
// 007a98e5  8910                 mov dword ptr [eax], edx
// 007a98e7  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 007a98eb  894804               mov dword ptr [eax + 4], ecx
// 007a98ee  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 007a98f2  895008               mov dword ptr [eax + 8], edx
// 007a98f5  8b542430             mov edx, dword ptr [esp + 0x30]
// 007a98f9  89480c               mov dword ptr [eax + 0xc], ecx
// 007a98fc  52                   push edx
// 007a98fd  8bce                 mov ecx, esi
// 007a98ff  e8ccfdffff           call 0x7a96d0
// 007a9904  5f                   pop edi
// 007a9905  5e                   pop esi
// 007a9906  5d                   pop ebp
// 007a9907  5b                   pop ebx
// 007a9908  c23000               ret 0x30
// 007a990b  85db                 test ebx, ebx
// 007a990d  7415                 je 0x7a9924
// 007a990f  53                   push ebx
// 007a9910  e82b5bf7ff           call 0x71f440
// 007a9915  83c404               add esp, 4
// 007a9918  85c0                 test eax, eax
// 007a991a  7508                 jne 0x7a9924
// 007a991c  85ed                 test ebp, ebp
// 007a991e  7441                 je 0x7a9961
// 007a9920  85db                 test ebx, ebx
// 007a9922  7441                 je 0x7a9965
// 007a9924  8d8670050000         lea eax, [esi + 0x570]
// 007a992a  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007a992e  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 007a9932  50                   push eax
// 007a9933  57                   push edi
// 007a9934  6a32                 push 0x32
// 007a9936  83ec10               sub esp, 0x10
// 007a9939  8bc4                 mov eax, esp
// 007a993b  8908                 mov dword ptr [eax], ecx
// 007a993d  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 007a9941  895004               mov dword ptr [eax + 4], edx
// 007a9944  8b542440             mov edx, dword ptr [esp + 0x40]
// 007a9948  894808               mov dword ptr [eax + 8], ecx
// 007a994b  89500c               mov dword ptr [eax + 0xc], edx
// 007a994e  8b442430             mov eax, dword ptr [esp + 0x30]
// 007a9952  50                   push eax
// 007a9953  8bce                 mov ecx, esi
// 007a9955  e876fdffff           call 0x7a96d0
// 007a995a  5f                   pop edi
// 007a995b  5e                   pop esi
// 007a995c  5d                   pop ebp
// 007a995d  5b                   pop ebx
// 007a995e  c23000               ret 0x30
// 007a9961  85db                 test ebx, ebx
// 007a9963  7453                 je 0x7a99b8
// 007a9965  8d8e90050000         lea ecx, [esi + 0x590]
// 007a996b  51                   push ecx
// 007a996c  57                   push edi
// 007a996d  6a20                 push 0x20
// 007a996f  e964ffffff           jmp 0x7a98d8
// 007a9974  8b542430             mov edx, dword ptr [esp + 0x30]
// 007a9978  50                   push eax
// 007a9979  8b442430             mov eax, dword ptr [esp + 0x30]
// 007a997d  51                   push ecx
// 007a997e  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 007a9982  6a00                 push 0
// 007a9984  51                   push ecx
// 007a9985  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 007a9989  52                   push edx
// 007a998a  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 007a998e  50                   push eax
// 007a998f  51                   push ecx
// 007a9990  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 007a9994  83ec10               sub esp, 0x10
// 007a9997  8bc4                 mov eax, esp
// 007a9999  8910                 mov dword ptr [eax], edx
// 007a999b  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 007a999f  894804               mov dword ptr [eax + 4], ecx
// 007a99a2  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 007a99a6  895008               mov dword ptr [eax + 8], edx
// 007a99a9  8b542440             mov edx, dword ptr [esp + 0x40]
// 007a99ad  89480c               mov dword ptr [eax + 0xc], ecx
// 007a99b0  52                   push edx
// 007a99b1  8bce                 mov ecx, esi
// 007a99b3  e848380000           call 0x7ad200
// 007a99b8  5f                   pop edi
// 007a99b9  5e                   pop esi
// 007a99ba  5d                   pop ebp
// 007a99bb  5b                   pop ebx
// 007a99bc  c23000               ret 0x30
// library xtp-11.2.2/Source\CommandBars\XTPOffice2003Theme.cpp (function ?DrawRectangle@CXTPOffice2003Theme@XTPPaintThemes@@MAEXPAVCDC@@VCRect@@HHHHHW4XTPBarType@@W4XTPBarPosition@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2003Theme.cpp
