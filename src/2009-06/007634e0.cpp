// roc 2009-06 007634e0  unit: CXTPCustomizeSheet  size: 809 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007634e0
//
// 007634e0  6aff                 push -1
// 007634e2  6809868700           push 0x878609
// 007634e7  64a100000000         mov eax, dword ptr fs:[0]
// 007634ed  50                   push eax
// 007634ee  83ec48               sub esp, 0x48
// 007634f1  53                   push ebx
// 007634f2  55                   push ebp
// 007634f3  56                   push esi
// 007634f4  57                   push edi
// 007634f5  a1304fa200           mov eax, dword ptr [0xa24f30]
// 007634fa  33c4                 xor eax, esp
// 007634fc  50                   push eax
// 007634fd  8d44245c             lea eax, [esp + 0x5c]
// 00763501  64a300000000         mov dword ptr fs:[0], eax
// 00763507  8bf1                 mov esi, ecx
// 00763509  bb94038b00           mov ebx, 0x8b0394
// 0076350e  33ff                 xor edi, edi
// 00763510  895c2428             mov dword ptr [esp + 0x28], ebx
// 00763514  897c242c             mov dword ptr [esp + 0x2c], edi
// 00763518  897c2464             mov dword ptr [esp + 0x64], edi
// 0076351c  e81f7c0300           call 0x79b140
// 00763521  8b10                 mov edx, dword ptr [eax]
// 00763523  8b520c               mov edx, dword ptr [edx + 0xc]
// 00763526  68a1230000           push 0x23a1
// 0076352b  8d4c242c             lea ecx, [esp + 0x2c]
// 0076352f  51                   push ecx
// 00763530  8bc8                 mov ecx, eax
// 00763532  ffd2                 call edx
// 00763534  85c0                 test eax, eax
// 00763536  7509                 jne 0x763541
// 00763538  895c2428             mov dword ptr [esp + 0x28], ebx
// 0076353c  e9a3020000           jmp 0x7637e4
// 00763541  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00763545  57                   push edi
// 00763546  50                   push eax
// 00763547  ff151cee8900         call dword ptr [0x89ee1c]
// 0076354d  50                   push eax
// 0076354e  e86f5bfbff           call 0x7190c2
// 00763553  8be8                 mov ebp, eax
// 00763555  896c241c             mov dword ptr [esp + 0x1c], ebp
// 00763559  3bef                 cmp ebp, edi
// 0076355b  74db                 je 0x763538
// 0076355d  57                   push edi
// 0076355e  e84d360000           call 0x766bb0
// 00763563  8b8eb8000000         mov ecx, dword ptr [esi + 0xb8]
// 00763569  8986bc000000         mov dword ptr [esi + 0xbc], eax
// 0076356f  8b89a0000000         mov ecx, dword ptr [ecx + 0xa0]
// 00763575  8988e4000000         mov dword ptr [eax + 0xe4], ecx
// 0076357b  8b96bc000000         mov edx, dword ptr [esi + 0xbc]
// 00763581  89b208010000         mov dword ptr [edx + 0x108], esi
// 00763587  8b8eb8000000         mov ecx, dword ptr [esi + 0xb8]
// 0076358d  83c404               add esp, 4
// 00763590  e86b64fcff           call 0x729a00
// 00763595  8b1dd0e18900         mov ebx, dword ptr [0x89e1d0]
// 0076359b  8bf8                 mov edi, eax
// 0076359d  8d4704               lea eax, [edi + 4]
// 007635a0  50                   push eax
// 007635a1  ffd3                 call ebx
// 007635a3  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 007635a9  57                   push edi
// 007635aa  e8719efcff           call 0x72d420
// 007635af  8b86c0000000         mov eax, dword ptr [esi + 0xc0]
// 007635b5  83c004               add eax, 4
// 007635b8  50                   push eax
// 007635b9  ffd3                 call ebx
// 007635bb  8b8eb8000000         mov ecx, dword ptr [esi + 0xb8]
// 007635c1  e8ea60fcff           call 0x7296b0
// 007635c6  8b8ec0000000         mov ecx, dword ptr [esi + 0xc0]
// 007635cc  894178               mov dword ptr [ecx + 0x78], eax
// 007635cf  8b8ec0000000         mov ecx, dword ptr [esi + 0xc0]
// 007635d5  51                   push ecx
// 007635d6  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 007635dc  e8bf9efcff           call 0x72d4a0
// 007635e1  8b5504               mov edx, dword ptr [ebp + 4]
// 007635e4  33db                 xor ebx, ebx
// 007635e6  52                   push edx
// 007635e7  895c2418             mov dword ptr [esp + 0x18], ebx
// 007635eb  ff1524ee8900         call dword ptr [0x89ee24]
// 007635f1  85c0                 test eax, eax
// 007635f3  0f8ee3010000         jle 0x7637dc
// 007635f9  8da42400000000       lea esp, [esp]
// 00763600  8b4d04               mov ecx, dword ptr [ebp + 4]
// 00763603  33c0                 xor eax, eax
// 00763605  89442438             mov dword ptr [esp + 0x38], eax
// 00763609  8944243c             mov dword ptr [esp + 0x3c], eax
// 0076360d  89442440             mov dword ptr [esp + 0x40], eax
// 00763611  89442444             mov dword ptr [esp + 0x44], eax
// 00763615  89442448             mov dword ptr [esp + 0x48], eax
// 00763619  8944244c             mov dword ptr [esp + 0x4c], eax
// 0076361d  89442450             mov dword ptr [esp + 0x50], eax
// 00763621  89442454             mov dword ptr [esp + 0x54], eax
// 00763625  89442458             mov dword ptr [esp + 0x58], eax
// 00763629  8d442430             lea eax, [esp + 0x30]
// 0076362d  50                   push eax
// 0076362e  6a01                 push 1
// 00763630  53                   push ebx
// 00763631  51                   push ecx
// 00763632  c74424402c000000     mov dword ptr [esp + 0x40], 0x2c
// 0076363a  c744244411000000     mov dword ptr [esp + 0x44], 0x11
// 00763642  ff15dcee8900         call dword ptr [0x89eedc]
// 00763648  8b5504               mov edx, dword ptr [ebp + 4]
// 0076364b  53                   push ebx
// 0076364c  52                   push edx
// 0076364d  ff1520ee8900         call dword ptr [0x89ee20]
// 00763653  8bf8                 mov edi, eax
// 00763655  8d4c2418             lea ecx, [esp + 0x18]
// 00763659  897c2420             mov dword ptr [esp + 0x20], edi
// 0076365d  ff15bcfc8900         call dword ptr [0x89fcbc]
// 00763663  6800040000           push 0x400
// 00763668  8d44241c             lea eax, [esp + 0x1c]
// 0076366c  50                   push eax
// 0076366d  53                   push ebx
// 0076366e  55                   push ebp
// 0076366f  c644247401           mov byte ptr [esp + 0x74], 1
// 00763674  e8c77a0300           call 0x79b140
// 00763679  8bc8                 mov ecx, eax
// 0076367b  e800760300           call 0x79ac80
// 00763680  f744243800080000     test dword ptr [esp + 0x38], 0x800
// 00763688  0f8529010000         jne 0x7637b7
// 0076368e  85ff                 test edi, edi
// 00763690  0f8421010000         je 0x7637b7
// 00763696  81ffaa230000         cmp edi, 0x23aa
// 0076369c  7577                 jne 0x763715
// 0076369e  6884010000           push 0x184
// 007636a3  e89053fbff           call 0x718a38
// 007636a8  83c404               add esp, 4
// 007636ab  89442424             mov dword ptr [esp + 0x24], eax
// 007636af  c644246402           mov byte ptr [esp + 0x64], 2
// 007636b4  85c0                 test eax, eax
// 007636b6  740b                 je 0x7636c3
// 007636b8  8bc8                 mov ecx, eax
// 007636ba  e841c6ffff           call 0x75fd00
// 007636bf  8bf8                 mov edi, eax
// 007636c1  eb02                 jmp 0x7636c5
// 007636c3  33ff                 xor edi, edi
// 007636c5  685c020000           push 0x25c
// 007636ca  c644246801           mov byte ptr [esp + 0x68], 1
// 007636cf  e86453fbff           call 0x718a38
// 007636d4  83c404               add esp, 4
// 007636d7  89442424             mov dword ptr [esp + 0x24], eax
// 007636db  c644246403           mov byte ptr [esp + 0x64], 3
// 007636e0  85c0                 test eax, eax
// 007636e2  740b                 je 0x7636ef
// 007636e4  8bc8                 mov ecx, eax
// 007636e6  e8456a0000           call 0x76a130
// 007636eb  8be8                 mov ebp, eax
// 007636ed  eb02                 jmp 0x7636f1
// 007636ef  33ed                 xor ebp, ebp
// 007636f1  55                   push ebp
// 007636f2  8bcf                 mov ecx, edi
// 007636f4  c644246801           mov byte ptr [esp + 0x68], 1
// 007636f9  c785d8000000aa230000 mov dword ptr [ebp + 0xd8], 0x23aa
// 00763703  e878d1ffff           call 0x760880
// 00763708  8bcd                 mov ecx, ebp
// 0076370a  e89958fbff           call 0x718fa8
// 0076370f  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00763713  eb57                 jmp 0x76376c
// 00763715  81ffa5230000         cmp edi, 0x23a5
// 0076371b  7523                 jne 0x763740
// 0076371d  68b0010000           push 0x1b0
// 00763722  e81153fbff           call 0x718a38
// 00763727  83c404               add esp, 4
// 0076372a  89442424             mov dword ptr [esp + 0x24], eax
// 0076372e  c644246404           mov byte ptr [esp + 0x64], 4
// 00763733  85c0                 test eax, eax
// 00763735  742c                 je 0x763763
// 00763737  8bc8                 mov ecx, eax
// 00763739  e842f4ffff           call 0x762b80
// 0076373e  eb25                 jmp 0x763765
// 00763740  6874010000           push 0x174
// 00763745  e8ee52fbff           call 0x718a38
// 0076374a  83c404               add esp, 4
// 0076374d  89442424             mov dword ptr [esp + 0x24], eax
// 00763751  c644246405           mov byte ptr [esp + 0x64], 5
// 00763756  85c0                 test eax, eax
// 00763758  7409                 je 0x763763
// 0076375a  8bc8                 mov ecx, eax
// 0076375c  e85ff4ffff           call 0x762bc0
// 00763761  eb02                 jmp 0x763765
// 00763763  33c0                 xor eax, eax
// 00763765  8bf8                 mov edi, eax
// 00763767  c644246401           mov byte ptr [esp + 0x64], 1
// 0076376c  8d4c2418             lea ecx, [esp + 0x18]
// 00763770  ff15d0fc8900         call dword ptr [0x89fcd0]
// 00763776  50                   push eax
// 00763777  8bcf                 mov ecx, edi
// 00763779  e8a2c8fbff           call 0x720020
// 0076377e  8b542420             mov edx, dword ptr [esp + 0x20]
// 00763782  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 00763788  8b89fc000000         mov ecx, dword ptr [ecx + 0xfc]
// 0076378e  6a00                 push 0
// 00763790  6aff                 push -1
// 00763792  6a00                 push 0
// 00763794  52                   push edx
// 00763795  57                   push edi
// 00763796  e8959a0000           call 0x76d230
// 0076379b  837c241400           cmp dword ptr [esp + 0x14], 0
// 007637a0  741d                 je 0x7637bf
// 007637a2  8b07                 mov eax, dword ptr [edi]
// 007637a4  8b5064               mov edx, dword ptr [eax + 0x64]
// 007637a7  6a01                 push 1
// 007637a9  8bcf                 mov ecx, edi
// 007637ab  ffd2                 call edx
// 007637ad  c744241400000000     mov dword ptr [esp + 0x14], 0
// 007637b5  eb08                 jmp 0x7637bf
// 007637b7  c744241401000000     mov dword ptr [esp + 0x14], 1
// 007637bf  8d4c2418             lea ecx, [esp + 0x18]
// 007637c3  ff1510fd8900         call dword ptr [0x89fd10]
// 007637c9  8b4504               mov eax, dword ptr [ebp + 4]
// 007637cc  50                   push eax
// 007637cd  43                   inc ebx
// 007637ce  ff1524ee8900         call dword ptr [0x89ee24]
// 007637d4  3bd8                 cmp ebx, eax
// 007637d6  0f8c24feffff         jl 0x763600
// 007637dc  c744242894038b00     mov dword ptr [esp + 0x28], 0x8b0394
// 007637e4  8d4c2428             lea ecx, [esp + 0x28]
// 007637e8  c7442464ffffffff     mov dword ptr [esp + 0x64], 0xffffffff
// 007637f0  e8b55bfbff           call 0x7193aa
// 007637f5  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 007637f9  64890d00000000       mov dword ptr fs:[0], ecx
// 00763800  59                   pop ecx
// 00763801  5f                   pop edi
// 00763802  5e                   pop esi
// 00763803  5d                   pop ebp
// 00763804  5b                   pop ebx
// 00763805  83c454               add esp, 0x54
// 00763808  c3                   ret 
// copied from an identical function in another client (function ?CreateContextMenu@CXTPCustomizeSheet@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\CommandBars\XTPCustomizeSheet.cpp