// roc 2009-12 008591d0  unit: CXTPTabClientWnd  size: 849 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008591d0
//
// 008591d0  55                   push ebp
// 008591d1  8bec                 mov ebp, esp
// 008591d3  83e4f8               and esp, 0xfffffff8
// 008591d6  6aff                 push -1
// 008591d8  68b9e19500           push 0x95e1b9
// 008591dd  64a100000000         mov eax, dword ptr fs:[0]
// 008591e3  50                   push eax
// 008591e4  83ec1c               sub esp, 0x1c
// 008591e7  53                   push ebx
// 008591e8  55                   push ebp
// 008591e9  56                   push esi
// 008591ea  57                   push edi
// 008591eb  a10052b600           mov eax, dword ptr [0xb65200]
// 008591f0  33c4                 xor eax, esp
// 008591f2  50                   push eax
// 008591f3  8d442430             lea eax, [esp + 0x30]
// 008591f7  64a300000000         mov dword ptr fs:[0], eax
// 008591fd  8bf1                 mov esi, ecx
// 008591ff  33ed                 xor ebp, ebp
// 00859201  396e20               cmp dword ptr [esi + 0x20], ebp
// 00859204  0f8403030000         je 0x85950d
// 0085920a  39aec0000000         cmp dword ptr [esi + 0xc0], ebp
// 00859210  0f84f7020000         je 0x85950d
// 00859216  396e5c               cmp dword ptr [esi + 0x5c], ebp
// 00859219  0f85ee020000         jne 0x85950d
// 0085921f  8b8684000000         mov eax, dword ptr [esi + 0x84]
// 00859225  89442424             mov dword ptr [esp + 0x24], eax
// 00859229  3bc5                 cmp eax, ebp
// 0085922b  0f84dc020000         je 0x85950d
// 00859231  39aec4000000         cmp dword ptr [esi + 0xc4], ebp
// 00859237  0f85d0020000         jne 0x85950d
// 0085923d  8b06                 mov eax, dword ptr [esi]
// 0085923f  8b9058010000         mov edx, dword ptr [eax + 0x158]
// 00859245  bf01000000           mov edi, 1
// 0085924a  89bec4000000         mov dword ptr [esi + 0xc4], edi
// 00859250  ffd2                 call edx
// 00859252  8bce                 mov ecx, esi
// 00859254  897e64               mov dword ptr [esi + 0x64], edi
// 00859257  e854bcffff           call 0x854eb0
// 0085925c  8bce                 mov ecx, esi
// 0085925e  89442428             mov dword ptr [esp + 0x28], eax
// 00859262  896c2418             mov dword ptr [esp + 0x18], ebp
// 00859266  896c241c             mov dword ptr [esp + 0x1c], ebp
// 0085926a  33db                 xor ebx, ebx
// 0085926c  e8dfd3ffff           call 0x856650
// 00859271  85c0                 test eax, eax
// 00859273  7e4c                 jle 0x8592c1
// 00859275  53                   push ebx
// 00859276  8bce                 mov ecx, esi
// 00859278  33ff                 xor edi, edi
// 0085927a  e8c1e2ffff           call 0x857540
// 0085927f  39685c               cmp dword ptr [eax + 0x5c], ebp
// 00859282  7e31                 jle 0x8592b5
// 00859284  53                   push ebx
// 00859285  8bce                 mov ecx, esi
// 00859287  e8b4e2ffff           call 0x857540
// 0085928c  3bfd                 cmp edi, ebp
// 0085928e  7c0f                 jl 0x85929f
// 00859290  3b785c               cmp edi, dword ptr [eax + 0x5c]
// 00859293  7d0a                 jge 0x85929f
// 00859295  8b4058               mov eax, dword ptr [eax + 0x58]
// 00859298  8d04b8               lea eax, [eax + edi*4]
// 0085929b  8b00                 mov eax, dword ptr [eax]
// 0085929d  eb02                 jmp 0x8592a1
// 0085929f  33c0                 xor eax, eax
// 008592a1  53                   push ebx
// 008592a2  8bce                 mov ecx, esi
// 008592a4  89a880000000         mov dword ptr [eax + 0x80], ebp
// 008592aa  47                   inc edi
// 008592ab  e890e2ffff           call 0x857540
// 008592b0  3b785c               cmp edi, dword ptr [eax + 0x5c]
// 008592b3  7ccf                 jl 0x859284
// 008592b5  8bce                 mov ecx, esi
// 008592b7  43                   inc ebx
// 008592b8  e893d3ffff           call 0x856650
// 008592bd  3bd8                 cmp ebx, eax
// 008592bf  7cb4                 jl 0x859275
// 008592c1  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008592c4  6a05                 push 5
// 008592c6  51                   push ecx
// 008592c7  ff15fccb9800         call dword ptr [0x98cbfc]
// 008592cd  50                   push eax
// 008592ce  e857a8f9ff           call 0x7f3b2a
// 008592d3  8bd8                 mov ebx, eax
// 008592d5  3bdd                 cmp ebx, ebp
// 008592d7  0f84de000000         je 0x8593bb
// 008592dd  8b4320               mov eax, dword ptr [ebx + 0x20]
// 008592e0  50                   push eax
// 008592e1  8bce                 mov ecx, esi
// 008592e3  e848fbffff           call 0x858e30
// 008592e8  8bcb                 mov ecx, ebx
// 008592ea  8bf8                 mov edi, eax
// 008592ec  e881d10c00           call 0x926472
// 008592f1  3bfd                 cmp edi, ebp
// 008592f3  744a                 je 0x85933f
// 008592f5  a900000010           test eax, 0x10000000
// 008592fa  743a                 je 0x859336
// 008592fc  8b16                 mov edx, dword ptr [esi]
// 008592fe  8b925c010000         mov edx, dword ptr [edx + 0x15c]
// 00859304  53                   push ebx
// 00859305  8d442424             lea eax, [esp + 0x24]
// 00859309  50                   push eax
// 0085930a  8bce                 mov ecx, esi
// 0085930c  ffd2                 call edx
// 0085930e  8bc8                 mov ecx, eax
// 00859310  896c2438             mov dword ptr [esp + 0x38], ebp
// 00859314  ff1580de9800         call dword ptr [0x98de80]
// 0085931a  50                   push eax
// 0085931b  8bcf                 mov ecx, edi
// 0085931d  e80e510700           call 0x8ce430
// 00859322  8d4c2420             lea ecx, [esp + 0x20]
// 00859326  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 0085932e  ff15c0de9800         call dword ptr [0x98dec0]
// 00859334  eb55                 jmp 0x85938b
// 00859336  8bcf                 mov ecx, edi
// 00859338  e8e3730700           call 0x8d0720
// 0085933d  eb60                 jmp 0x85939f
// 0085933f  a900000010           test eax, 0x10000000
// 00859344  7459                 je 0x85939f
// 00859346  8b06                 mov eax, dword ptr [esi]
// 00859348  8b9070010000         mov edx, dword ptr [eax + 0x170]
// 0085934e  53                   push ebx
// 0085934f  8bce                 mov ecx, esi
// 00859351  ffd2                 call edx
// 00859353  8bf8                 mov edi, eax
// 00859355  897c241c             mov dword ptr [esp + 0x1c], edi
// 00859359  3bfd                 cmp edi, ebp
// 0085935b  7442                 je 0x85939f
// 0085935d  3bdd                 cmp ebx, ebp
// 0085935f  7504                 jne 0x859365
// 00859361  33c0                 xor eax, eax
// 00859363  eb03                 jmp 0x859368
// 00859365  8b4320               mov eax, dword ptr [ebx + 0x20]
// 00859368  55                   push ebp
// 00859369  894738               mov dword ptr [edi + 0x38], eax
// 0085936c  8b442428             mov eax, dword ptr [esp + 0x28]
// 00859370  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00859373  57                   push edi
// 00859374  686c280000           push 0x286c
// 00859379  51                   push ecx
// 0085937a  ff15c4cb9800         call dword ptr [0x98cbc4]
// 00859380  8b4f60               mov ecx, dword ptr [edi + 0x60]
// 00859383  8b11                 mov edx, dword ptr [ecx]
// 00859385  8b4220               mov eax, dword ptr [edx + 0x20]
// 00859388  57                   push edi
// 00859389  ffd0                 call eax
// 0085938b  c7878000000001000000 mov dword ptr [edi + 0x80], 1
// 00859395  3b5c2428             cmp ebx, dword ptr [esp + 0x28]
// 00859399  7504                 jne 0x85939f
// 0085939b  897c2418             mov dword ptr [esp + 0x18], edi
// 0085939f  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 008593a2  6a02                 push 2
// 008593a4  51                   push ecx
// 008593a5  ff15fccb9800         call dword ptr [0x98cbfc]
// 008593ab  50                   push eax
// 008593ac  e879a7f9ff           call 0x7f3b2a
// 008593b1  8bd8                 mov ebx, eax
// 008593b3  3bdd                 cmp ebx, ebp
// 008593b5  0f8522ffffff         jne 0x8592dd
// 008593bb  8bce                 mov ecx, esi
// 008593bd  e88ed2ffff           call 0x856650
// 008593c2  8be8                 mov ebp, eax
// 008593c4  83ed01               sub ebp, 1
// 008593c7  0f88d2000000         js 0x85949f
// 008593cd  8d4900               lea ecx, [ecx]
// 008593d0  55                   push ebp
// 008593d1  8bce                 mov ecx, esi
// 008593d3  e868e1ffff           call 0x857540
// 008593d8  8bd8                 mov ebx, eax
// 008593da  8b7b5c               mov edi, dword ptr [ebx + 0x5c]
// 008593dd  83ef01               sub edi, 1
// 008593e0  7826                 js 0x859408
// 008593e2  85ff                 test edi, edi
// 008593e4  7c0d                 jl 0x8593f3
// 008593e6  3b7b5c               cmp edi, dword ptr [ebx + 0x5c]
// 008593e9  7d08                 jge 0x8593f3
// 008593eb  8b5358               mov edx, dword ptr [ebx + 0x58]
// 008593ee  8b0cba               mov ecx, dword ptr [edx + edi*4]
// 008593f1  eb02                 jmp 0x8593f5
// 008593f3  33c9                 xor ecx, ecx
// 008593f5  83b98000000000       cmp dword ptr [ecx + 0x80], 0
// 008593fc  7505                 jne 0x859403
// 008593fe  e81d730700           call 0x8d0720
// 00859403  83ef01               sub edi, 1
// 00859406  79da                 jns 0x8593e2
// 00859408  837b5c00             cmp dword ptr [ebx + 0x5c], 0
// 0085940c  0f8584000000         jne 0x859496
// 00859412  3b9e98000000         cmp ebx, dword ptr [esi + 0x98]
// 00859418  750a                 jne 0x859424
// 0085941a  c7869800000000000000 mov dword ptr [esi + 0x98], 0
// 00859424  8bce                 mov ecx, esi
// 00859426  85ed                 test ebp, ebp
// 00859428  750e                 jne 0x859438
// 0085942a  e821d2ffff           call 0x856650
// 0085942f  83f801               cmp eax, 1
// 00859432  7e29                 jle 0x85945d
// 00859434  6a01                 push 1
// 00859436  eb04                 jmp 0x85943c
// 00859438  8d45ff               lea eax, [ebp - 1]
// 0085943b  50                   push eax
// 0085943c  e8ffe0ffff           call 0x857540
// 00859441  85c0                 test eax, eax
// 00859443  7418                 je 0x85945d
// 00859445  db86d0000000         fild dword ptr [esi + 0xd0]
// 0085944b  dc8398000000         fadd qword ptr [ebx + 0x98]
// 00859451  dc8098000000         fadd qword ptr [eax + 0x98]
// 00859457  dd9898000000         fstp qword ptr [eax + 0x98]
// 0085945d  3b5e7c               cmp ebx, dword ptr [esi + 0x7c]
// 00859460  740b                 je 0x85946d
// 00859462  8b13                 mov edx, dword ptr [ebx]
// 00859464  8b4208               mov eax, dword ptr [edx + 8]
// 00859467  6a01                 push 1
// 00859469  8bcb                 mov ecx, ebx
// 0085946b  ffd0                 call eax
// 0085946d  6a01                 push 1
// 0085946f  55                   push ebp
// 00859470  8d4e68               lea ecx, [esi + 0x68]
// 00859473  e8083efdff           call 0x82d280
// 00859478  83beb400000000       cmp dword ptr [esi + 0xb4], 0
// 0085947f  c7466001000000       mov dword ptr [esi + 0x60], 1
// 00859486  740e                 je 0x859496
// 00859488  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0085948b  6a00                 push 0
// 0085948d  6a00                 push 0
// 0085948f  51                   push ecx
// 00859490  ff15e8cb9800         call dword ptr [0x98cbe8]
// 00859496  83ed01               sub ebp, 1
// 00859499  0f8931ffffff         jns 0x8593d0
// 0085949f  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 008594a3  33db                 xor ebx, ebx
// 008594a5  3bfb                 cmp edi, ebx
// 008594a7  741b                 je 0x8594c4
// 008594a9  8b4f60               mov ecx, dword ptr [edi + 0x60]
// 008594ac  397904               cmp dword ptr [ecx + 4], edi
// 008594af  7408                 je 0x8594b9
// 008594b1  8b11                 mov edx, dword ptr [ecx]
// 008594b3  8b4220               mov eax, dword ptr [edx + 0x20]
// 008594b6  57                   push edi
// 008594b7  ffd0                 call eax
// 008594b9  8b4f60               mov ecx, dword ptr [edi + 0x60]
// 008594bc  51                   push ecx
// 008594bd  8bce                 mov ecx, esi
// 008594bf  e86cbaffff           call 0x854f30
// 008594c4  895e64               mov dword ptr [esi + 0x64], ebx
// 008594c7  395e60               cmp dword ptr [esi + 0x60], ebx
// 008594ca  743b                 je 0x859507
// 008594cc  8b8684000000         mov eax, dword ptr [esi + 0x84]
// 008594d2  3bc3                 cmp eax, ebx
// 008594d4  7504                 jne 0x8594da
// 008594d6  33c0                 xor eax, eax
// 008594d8  eb03                 jmp 0x8594dd
// 008594da  8b4020               mov eax, dword ptr [eax + 0x20]
// 008594dd  50                   push eax
// 008594de  ff1584cc9800         call dword ptr [0x98cc84]
// 008594e4  85c0                 test eax, eax
// 008594e6  740b                 je 0x8594f3
// 008594e8  8b5654               mov edx, dword ptr [esi + 0x54]
// 008594eb  8b4204               mov eax, dword ptr [edx + 4]
// 008594ee  8d4e54               lea ecx, [esi + 0x54]
// 008594f1  ffd0                 call eax
// 008594f3  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008594f7  3bc3                 cmp eax, ebx
// 008594f9  7409                 je 0x859504
// 008594fb  8b4860               mov ecx, dword ptr [eax + 0x60]
// 008594fe  50                   push eax
// 008594ff  e82c4e0700           call 0x8ce330
// 00859504  895e60               mov dword ptr [esi + 0x60], ebx
// 00859507  899ec4000000         mov dword ptr [esi + 0xc4], ebx
// 0085950d  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00859511  64890d00000000       mov dword ptr fs:[0], ecx
// 00859518  59                   pop ecx
// 00859519  5f                   pop edi
// 0085951a  5e                   pop esi
// 0085951b  5d                   pop ebp
// 0085951c  5b                   pop ebx
// 0085951d  8be5                 mov esp, ebp
// 0085951f  5d                   pop ebp
// 00859520  c3                   ret 
// copied from an identical function in another client (function ?UpdateContents@CXTPTabClientWnd@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\CommandBars\XTPTabClientWnd.cpp