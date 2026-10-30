// roc 2009-12 00820510  unit: CXTPReportControl  size: 1770 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00820510
//
// 00820510  6aff                 push -1
// 00820512  6897af9500           push 0x95af97
// 00820517  64a100000000         mov eax, dword ptr fs:[0]
// 0082051d  50                   push eax
// 0082051e  81ecf8000000         sub esp, 0xf8
// 00820524  a10052b600           mov eax, dword ptr [0xb65200]
// 00820529  33c4                 xor eax, esp
// 0082052b  898424f4000000       mov dword ptr [esp + 0xf4], eax
// 00820532  53                   push ebx
// 00820533  55                   push ebp
// 00820534  56                   push esi
// 00820535  57                   push edi
// 00820536  a10052b600           mov eax, dword ptr [0xb65200]
// 0082053b  33c4                 xor eax, esp
// 0082053d  50                   push eax
// 0082053e  8d84240c010000       lea eax, [esp + 0x10c]
// 00820545  64a300000000         mov dword ptr fs:[0], eax
// 0082054b  8bf1                 mov esi, ecx
// 0082054d  56                   push esi
// 0082054e  8d8c24b8000000       lea ecx, [esp + 0xb8]
// 00820555  e8963cfdff           call 0x7f41f0
// 0082055a  33db                 xor ebx, ebx
// 0082055c  56                   push esi
// 0082055d  8d4c2430             lea ecx, [esp + 0x30]
// 00820561  899c2418010000       mov dword ptr [esp + 0x118], ebx
// 00820568  e863ad0200           call 0x84b2d0
// 0082056d  395e5c               cmp dword ptr [esi + 0x5c], ebx
// 00820570  0f85f5050000         jne 0x820b6b
// 00820576  395e54               cmp dword ptr [esi + 0x54], ebx
// 00820579  7513                 jne 0x82058e
// 0082057b  8d86b0010000         lea eax, [esi + 0x1b0]
// 00820581  3bc3                 cmp eax, ebx
// 00820583  7409                 je 0x82058e
// 00820585  395804               cmp dword ptr [eax + 4], ebx
// 00820588  0f85dd050000         jne 0x820b6b
// 0082058e  8d4c2468             lea ecx, [esp + 0x68]
// 00820592  e8175f1000           call 0x9264ae
// 00820597  8b8424b8000000       mov eax, dword ptr [esp + 0xb8]
// 0082059e  50                   push eax
// 0082059f  c684241801000001     mov byte ptr [esp + 0x118], 1
// 008205a7  ff1554b19800         call dword ptr [0x98b154]
// 008205ad  50                   push eax
// 008205ae  8d4c246c             lea ecx, [esp + 0x6c]
// 008205b2  e8e55e1000           call 0x92649c
// 008205b7  8dbeb0010000         lea edi, [esi + 0x1b0]
// 008205bd  8bcf                 mov ecx, edi
// 008205bf  e85a38fdff           call 0x7f3e1e
// 008205c4  8b442438             mov eax, dword ptr [esp + 0x38]
// 008205c8  2b442430             sub eax, dword ptr [esp + 0x30]
// 008205cc  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008205d0  2b4c242c             sub ecx, dword ptr [esp + 0x2c]
// 008205d4  50                   push eax
// 008205d5  51                   push ecx
// 008205d6  8b8c24c0000000       mov ecx, dword ptr [esp + 0xc0]
// 008205dd  51                   push ecx
// 008205de  ff1550b19800         call dword ptr [0x98b150]
// 008205e4  50                   push eax
// 008205e5  8bcf                 mov ecx, edi
// 008205e7  e83e38fdff           call 0x7f3e2a
// 008205ec  3bfb                 cmp edi, ebx
// 008205ee  7504                 jne 0x8205f4
// 008205f0  33ff                 xor edi, edi
// 008205f2  eb03                 jmp 0x8205f7
// 008205f4  8b7f04               mov edi, dword ptr [edi + 4]
// 008205f7  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 008205fb  57                   push edi
// 008205fc  52                   push edx
// 008205fd  e8f65f1000           call 0x9265f8
// 00820602  8bf8                 mov edi, eax
// 00820604  8b06                 mov eax, dword ptr [esi]
// 00820606  8b90a8010000         mov edx, dword ptr [eax + 0x1a8]
// 0082060c  8d4c2468             lea ecx, [esp + 0x68]
// 00820610  51                   push ecx
// 00820611  8bce                 mov ecx, esi
// 00820613  897c247c             mov dword ptr [esp + 0x7c], edi
// 00820617  ffd2                 call edx
// 00820619  8bce                 mov ecx, esi
// 0082061b  895e54               mov dword ptr [esi + 0x54], ebx
// 0082061e  e883601000           call 0x9266a6
// 00820623  85c0                 test eax, eax
// 00820625  7520                 jne 0x820647
// 00820627  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 0082062b  6880808000           push 0x808080
// 00820630  68fafafa00           push 0xfafafa
// 00820635  8d442434             lea eax, [esp + 0x34]
// 00820639  50                   push eax
// 0082063a  51                   push ecx
// 0082063b  e870fefeff           call 0x8104b0
// 00820640  8bc8                 mov ecx, eax
// 00820642  e8c98ffeff           call 0x809610
// 00820647  399ebc020000         cmp dword ptr [esi + 0x2bc], ebx
// 0082064d  0f84c9040000         je 0x820b1c
// 00820653  8bbe90000000         mov edi, dword ptr [esi + 0x90]
// 00820659  8b9694000000         mov edx, dword ptr [esi + 0x94]
// 0082065f  8b8e98000000         mov ecx, dword ptr [esi + 0x98]
// 00820665  8bae9c000000         mov ebp, dword ptr [esi + 0x9c]
// 0082066b  897c241c             mov dword ptr [esp + 0x1c], edi
// 0082066f  89542420             mov dword ptr [esp + 0x20], edx
// 00820673  894c2424             mov dword ptr [esp + 0x24], ecx
// 00820677  896c2428             mov dword ptr [esp + 0x28], ebp
// 0082067b  399ef4010000         cmp dword ptr [esi + 0x1f4], ebx
// 00820681  7407                 je 0x82068a
// 00820683  8b5674               mov edx, dword ptr [esi + 0x74]
// 00820686  89542420             mov dword ptr [esp + 0x20], edx
// 0082068a  399ef8010000         cmp dword ptr [esi + 0x1f8], ebx
// 00820690  740a                 je 0x82069c
// 00820692  8bae8c000000         mov ebp, dword ptr [esi + 0x8c]
// 00820698  896c2428             mov dword ptr [esp + 0x28], ebp
// 0082069c  8b9ec8020000         mov ebx, dword ptr [esi + 0x2c8]
// 008206a2  8b86cc020000         mov eax, dword ptr [esi + 0x2cc]
// 008206a8  895c2444             mov dword ptr [esp + 0x44], ebx
// 008206ac  8bd8                 mov ebx, eax
// 008206ae  8b86dc020000         mov eax, dword ptr [esi + 0x2dc]
// 008206b4  89542458             mov dword ptr [esp + 0x58], edx
// 008206b8  894c245c             mov dword ptr [esp + 0x5c], ecx
// 008206bc  896c2460             mov dword ptr [esp + 0x60], ebp
// 008206c0  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 008206c8  c744244000000000     mov dword ptr [esp + 0x40], 0
// 008206d0  895c2448             mov dword ptr [esp + 0x48], ebx
// 008206d4  a900010000           test eax, 0x100
// 008206d9  754f                 jne 0x82072a
// 008206db  8b9ec8020000         mov ebx, dword ptr [esi + 0x2c8]
// 008206e1  8bc1                 mov eax, ecx
// 008206e3  2bc7                 sub eax, edi
// 008206e5  3bd8                 cmp ebx, eax
// 008206e7  7e06                 jle 0x8206ef
// 008206e9  89442444             mov dword ptr [esp + 0x44], eax
// 008206ed  eb07                 jmp 0x8206f6
// 008206ef  8d0c3b               lea ecx, [ebx + edi]
// 008206f2  894c2424             mov dword ptr [esp + 0x24], ecx
// 008206f6  8b86cc020000         mov eax, dword ptr [esi + 0x2cc]
// 008206fc  8bdd                 mov ebx, ebp
// 008206fe  2bda                 sub ebx, edx
// 00820700  3bc3                 cmp eax, ebx
// 00820702  7e0a                 jle 0x82070e
// 00820704  8bdd                 mov ebx, ebp
// 00820706  2bda                 sub ebx, edx
// 00820708  895c2448             mov dword ptr [esp + 0x48], ebx
// 0082070c  eb0b                 jmp 0x820719
// 0082070e  8b5c2448             mov ebx, dword ptr [esp + 0x48]
// 00820712  8d2c10               lea ebp, [eax + edx]
// 00820715  896c2428             mov dword ptr [esp + 0x28], ebp
// 00820719  8b86dc020000         mov eax, dword ptr [esi + 0x2dc]
// 0082071f  a900010000           test eax, 0x100
// 00820724  0f84b3000000         je 0x8207dd
// 0082072a  a900020000           test eax, 0x200
// 0082072f  7428                 je 0x820759
// 00820731  8bc1                 mov eax, ecx
// 00820733  2bc7                 sub eax, edi
// 00820735  39442444             cmp dword ptr [esp + 0x44], eax
// 00820739  7e04                 jle 0x82073f
// 0082073b  89442444             mov dword ptr [esp + 0x44], eax
// 0082073f  8b5c2448             mov ebx, dword ptr [esp + 0x48]
// 00820743  8bc5                 mov eax, ebp
// 00820745  2bc2                 sub eax, edx
// 00820747  3bd8                 cmp ebx, eax
// 00820749  8b86dc020000         mov eax, dword ptr [esi + 0x2dc]
// 0082074f  7e08                 jle 0x820759
// 00820751  8bdd                 mov ebx, ebp
// 00820753  2bda                 sub ebx, edx
// 00820755  895c2448             mov dword ptr [esp + 0x48], ebx
// 00820759  a900010000           test eax, 0x100
// 0082075e  747d                 je 0x8207dd
// 00820760  a900040000           test eax, 0x400
// 00820765  742c                 je 0x820793
// 00820767  8b442444             mov eax, dword ptr [esp + 0x44]
// 0082076b  8bd9                 mov ebx, ecx
// 0082076d  2bdf                 sub ebx, edi
// 0082076f  3bc3                 cmp eax, ebx
// 00820771  7d07                 jge 0x82077a
// 00820773  8d0c07               lea ecx, [edi + eax]
// 00820776  894c2424             mov dword ptr [esp + 0x24], ecx
// 0082077a  8b5c2448             mov ebx, dword ptr [esp + 0x48]
// 0082077e  8bc5                 mov eax, ebp
// 00820780  2bc2                 sub eax, edx
// 00820782  3bd8                 cmp ebx, eax
// 00820784  8b86dc020000         mov eax, dword ptr [esi + 0x2dc]
// 0082078a  7d07                 jge 0x820793
// 0082078c  8d2c13               lea ebp, [ebx + edx]
// 0082078f  896c2428             mov dword ptr [esp + 0x28], ebp
// 00820793  a900010000           test eax, 0x100
// 00820798  7443                 je 0x8207dd
// 0082079a  a900080000           test eax, 0x800
// 0082079f  743c                 je 0x8207dd
// 008207a1  8bc5                 mov eax, ebp
// 008207a3  2bc2                 sub eax, edx
// 008207a5  8944244c             mov dword ptr [esp + 0x4c], eax
// 008207a9  0faf442444           imul eax, dword ptr [esp + 0x44]
// 008207ae  99                   cdq 
// 008207af  f7fb                 idiv ebx
// 008207b1  8bd1                 mov edx, ecx
// 008207b3  2bd7                 sub edx, edi
// 008207b5  3bd0                 cmp edx, eax
// 008207b7  7e07                 jle 0x8207c0
// 008207b9  8d0c38               lea ecx, [eax + edi]
// 008207bc  894c2424             mov dword ptr [esp + 0x24], ecx
// 008207c0  8bc1                 mov eax, ecx
// 008207c2  2bc7                 sub eax, edi
// 008207c4  0fafc3               imul eax, ebx
// 008207c7  99                   cdq 
// 008207c8  f77c2444             idiv dword ptr [esp + 0x44]
// 008207cc  8b542420             mov edx, dword ptr [esp + 0x20]
// 008207d0  3944244c             cmp dword ptr [esp + 0x4c], eax
// 008207d4  7e07                 jle 0x8207dd
// 008207d6  8d2c10               lea ebp, [eax + edx]
// 008207d9  896c2428             mov dword ptr [esp + 0x28], ebp
// 008207dd  8b9edc020000         mov ebx, dword ptr [esi + 0x2dc]
// 008207e3  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 008207e7  83e30f               and ebx, 0xf
// 008207ea  83eb02               sub ebx, 2
// 008207ed  895c244c             mov dword ptr [esp + 0x4c], ebx
// 008207f1  8b1d6ccc9800         mov ebx, dword ptr [0x98cc6c]
// 008207f7  7421                 je 0x82081a
// 008207f9  8b5c244c             mov ebx, dword ptr [esp + 0x4c]
// 008207fd  83eb02               sub ebx, 2
// 00820800  8b1d6ccc9800         mov ebx, dword ptr [0x98cc6c]
// 00820806  7531                 jne 0x820839
// 00820808  8bd7                 mov edx, edi
// 0082080a  2bc2                 sub eax, edx
// 0082080c  2bc1                 sub eax, ecx
// 0082080e  03c7                 add eax, edi
// 00820810  6a00                 push 0
// 00820812  50                   push eax
// 00820813  8d442424             lea eax, [esp + 0x24]
// 00820817  50                   push eax
// 00820818  eb15                 jmp 0x82082f
// 0082081a  8bd7                 mov edx, edi
// 0082081c  2bc2                 sub eax, edx
// 0082081e  2bc1                 sub eax, ecx
// 00820820  03c7                 add eax, edi
// 00820822  99                   cdq 
// 00820823  2bc2                 sub eax, edx
// 00820825  6a00                 push 0
// 00820827  d1f8                 sar eax, 1
// 00820829  50                   push eax
// 0082082a  8d4c2424             lea ecx, [esp + 0x24]
// 0082082e  51                   push ecx
// 0082082f  ffd3                 call ebx
// 00820831  8b542420             mov edx, dword ptr [esp + 0x20]
// 00820835  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00820839  8b86dc020000         mov eax, dword ptr [esi + 0x2dc]
// 0082083f  25f0000000           and eax, 0xf0
// 00820844  83f820               cmp eax, 0x20
// 00820847  741b                 je 0x820864
// 00820849  83f840               cmp eax, 0x40
// 0082084c  7531                 jne 0x82087f
// 0082084e  8b442460             mov eax, dword ptr [esp + 0x60]
// 00820852  2b442458             sub eax, dword ptr [esp + 0x58]
// 00820856  2bc5                 sub eax, ebp
// 00820858  03c2                 add eax, edx
// 0082085a  50                   push eax
// 0082085b  6a00                 push 0
// 0082085d  8d542424             lea edx, [esp + 0x24]
// 00820861  52                   push edx
// 00820862  eb19                 jmp 0x82087d
// 00820864  8b442460             mov eax, dword ptr [esp + 0x60]
// 00820868  2b442458             sub eax, dword ptr [esp + 0x58]
// 0082086c  2bc5                 sub eax, ebp
// 0082086e  03c2                 add eax, edx
// 00820870  99                   cdq 
// 00820871  2bc2                 sub eax, edx
// 00820873  d1f8                 sar eax, 1
// 00820875  50                   push eax
// 00820876  6a00                 push 0
// 00820878  8d442424             lea eax, [esp + 0x24]
// 0082087c  50                   push eax
// 0082087d  ffd3                 call ebx
// 0082087f  8b8ebc020000         mov ecx, dword ptr [esi + 0x2bc]
// 00820885  51                   push ecx
// 00820886  8d9424b8000000       lea edx, [esp + 0xb8]
// 0082088d  52                   push edx
// 0082088e  8d8c24a8000000       lea ecx, [esp + 0xa8]
// 00820895  e876b00200           call 0x84b910
// 0082089a  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 008208a0  8b9890000000         mov ebx, dword ptr [eax + 0x90]
// 008208a6  83fbff               cmp ebx, -1
// 008208a9  7506                 jne 0x8208b1
// 008208ab  8b988c000000         mov ebx, dword ptr [eax + 0x8c]
// 008208b1  8b442438             mov eax, dword ptr [esp + 0x38]
// 008208b5  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008208b9  2b442430             sub eax, dword ptr [esp + 0x30]
// 008208bd  2b4c242c             sub ecx, dword ptr [esp + 0x2c]
// 008208c1  33d2                 xor edx, edx
// 008208c3  bf18229a00           mov edi, 0x9a2218
// 008208c8  8954247c             mov dword ptr [esp + 0x7c], edx
// 008208cc  89942480000000       mov dword ptr [esp + 0x80], edx
// 008208d3  898c2484000000       mov dword ptr [esp + 0x84], ecx
// 008208da  89842488000000       mov dword ptr [esp + 0x88], eax
// 008208e1  89542418             mov dword ptr [esp + 0x18], edx
// 008208e5  897c2414             mov dword ptr [esp + 0x14], edi
// 008208e9  8b2d50b19800         mov ebp, dword ptr [0x98b150]
// 008208ef  50                   push eax
// 008208f0  8b8424bc000000       mov eax, dword ptr [esp + 0xbc]
// 008208f7  51                   push ecx
// 008208f8  50                   push eax
// 008208f9  c684242001000003     mov byte ptr [esp + 0x120], 3
// 00820901  ffd5                 call ebp
// 00820903  50                   push eax
// 00820904  8d4c2418             lea ecx, [esp + 0x18]
// 00820908  e81d35fdff           call 0x7f3e2a
// 0082090d  8d4c2414             lea ecx, [esp + 0x14]
// 00820911  51                   push ecx
// 00820912  8d9424b8000000       lea edx, [esp + 0xb8]
// 00820919  52                   push edx
// 0082091a  8d8c2494000000       lea ecx, [esp + 0x94]
// 00820921  e85aaf0200           call 0x84b880
// 00820926  53                   push ebx
// 00820927  8d842480000000       lea eax, [esp + 0x80]
// 0082092e  50                   push eax
// 0082092f  8d8c2494000000       lea ecx, [esp + 0x94]
// 00820936  c684241c01000004     mov byte ptr [esp + 0x11c], 4
// 0082093e  e8bb3cfdff           call 0x7f45fe
// 00820943  f786dc02000000010000 test dword ptr [esi + 0x2dc], 0x100
// 0082094d  0f840b010000         je 0x820a5e
// 00820953  c744245000000000     mov dword ptr [esp + 0x50], 0
// 0082095b  897c244c             mov dword ptr [esp + 0x4c], edi
// 0082095f  8b442438             mov eax, dword ptr [esp + 0x38]
// 00820963  2b442430             sub eax, dword ptr [esp + 0x30]
// 00820967  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0082096b  2b4c242c             sub ecx, dword ptr [esp + 0x2c]
// 0082096f  50                   push eax
// 00820970  51                   push ecx
// 00820971  8b8c24c0000000       mov ecx, dword ptr [esp + 0xc0]
// 00820978  51                   push ecx
// 00820979  c684242001000005     mov byte ptr [esp + 0x120], 5
// 00820981  ffd5                 call ebp
// 00820983  50                   push eax
// 00820984  8d4c2450             lea ecx, [esp + 0x50]
// 00820988  e89d34fdff           call 0x7f3e2a
// 0082098d  8d54244c             lea edx, [esp + 0x4c]
// 00820991  52                   push edx
// 00820992  8d8424b8000000       lea eax, [esp + 0xb8]
// 00820999  50                   push eax
// 0082099a  8d4c245c             lea ecx, [esp + 0x5c]
// 0082099e  e8ddae0200           call 0x84b880
// 008209a3  68ffffff00           push 0xffffff
// 008209a8  8d4c2430             lea ecx, [esp + 0x30]
// 008209ac  51                   push ecx
// 008209ad  8d4c245c             lea ecx, [esp + 0x5c]
// 008209b1  c684241c01000006     mov byte ptr [esp + 0x11c], 6
// 008209b9  e8403cfdff           call 0x7f45fe
// 008209be  6a04                 push 4
// 008209c0  8d4c2458             lea ecx, [esp + 0x58]
// 008209c4  e8d75c1000           call 0x9266a0
// 008209c9  8b542448             mov edx, dword ptr [esp + 0x48]
// 008209cd  2b542440             sub edx, dword ptr [esp + 0x40]
// 008209d1  8b442444             mov eax, dword ptr [esp + 0x44]
// 008209d5  2b44243c             sub eax, dword ptr [esp + 0x3c]
// 008209d9  682000cc00           push 0xcc0020
// 008209de  52                   push edx
// 008209df  8b542430             mov edx, dword ptr [esp + 0x30]
// 008209e3  50                   push eax
// 008209e4  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008209e8  6a00                 push 0
// 008209ea  6a00                 push 0
// 008209ec  8d8c24b4000000       lea ecx, [esp + 0xb4]
// 008209f3  51                   push ecx
// 008209f4  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008209f8  2bd0                 sub edx, eax
// 008209fa  52                   push edx
// 008209fb  8b542440             mov edx, dword ptr [esp + 0x40]
// 008209ff  2bd1                 sub edx, ecx
// 00820a01  52                   push edx
// 00820a02  50                   push eax
// 00820a03  51                   push ecx
// 00820a04  8d4c247c             lea ecx, [esp + 0x7c]
// 00820a08  e893d7fdff           call 0x7fe1a0
// 00820a0d  0fb686c0020000       movzx eax, byte ptr [esi + 0x2c0]
// 00820a14  8b542458             mov edx, dword ptr [esp + 0x58]
// 00820a18  50                   push eax
// 00820a19  8d4c2430             lea ecx, [esp + 0x30]
// 00820a1d  51                   push ecx
// 00820a1e  52                   push edx
// 00820a1f  8bc1                 mov eax, ecx
// 00820a21  8b8c249c000000       mov ecx, dword ptr [esp + 0x9c]
// 00820a28  50                   push eax
// 00820a29  51                   push ecx
// 00820a2a  e881fafeff           call 0x8104b0
// 00820a2f  8bc8                 mov ecx, eax
// 00820a31  e83a97feff           call 0x80a170
// 00820a36  8d4c2454             lea ecx, [esp + 0x54]
// 00820a3a  c684241401000005     mov byte ptr [esp + 0x114], 5
// 00820a42  e849af0200           call 0x84b990
// 00820a47  8d4c244c             lea ecx, [esp + 0x4c]
// 00820a4b  c684241401000004     mov byte ptr [esp + 0x114], 4
// 00820a53  897c244c             mov dword ptr [esp + 0x4c], edi
// 00820a57  e8d4e7beff           call 0x40f230
// 00820a5c  eb2e                 jmp 0x820a8c
// 00820a5e  0fb696c0020000       movzx edx, byte ptr [esi + 0x2c0]
// 00820a65  8b8c24a4000000       mov ecx, dword ptr [esp + 0xa4]
// 00820a6c  52                   push edx
// 00820a6d  8d442440             lea eax, [esp + 0x40]
// 00820a71  50                   push eax
// 00820a72  8b842498000000       mov eax, dword ptr [esp + 0x98]
// 00820a79  51                   push ecx
// 00820a7a  8d542428             lea edx, [esp + 0x28]
// 00820a7e  52                   push edx
// 00820a7f  50                   push eax
// 00820a80  e82bfafeff           call 0x8104b0
// 00820a85  8bc8                 mov ecx, eax
// 00820a87  e8e496feff           call 0x80a170
// 00820a8c  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 00820a90  53                   push ebx
// 00820a91  8d8c2480000000       lea ecx, [esp + 0x80]
// 00820a98  51                   push ecx
// 00820a99  52                   push edx
// 00820a9a  8bc1                 mov eax, ecx
// 00820a9c  8b8c249c000000       mov ecx, dword ptr [esp + 0x9c]
// 00820aa3  50                   push eax
// 00820aa4  51                   push ecx
// 00820aa5  e806fafeff           call 0x8104b0
// 00820aaa  8bc8                 mov ecx, eax
// 00820aac  e86f94feff           call 0x809f20
// 00820ab1  8b942490000000       mov edx, dword ptr [esp + 0x90]
// 00820ab8  8b442438             mov eax, dword ptr [esp + 0x38]
// 00820abc  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00820ac0  682000cc00           push 0xcc0020
// 00820ac5  6a00                 push 0
// 00820ac7  6a00                 push 0
// 00820ac9  52                   push edx
// 00820aca  8b54247c             mov edx, dword ptr [esp + 0x7c]
// 00820ace  50                   push eax
// 00820acf  51                   push ecx
// 00820ad0  6a00                 push 0
// 00820ad2  6a00                 push 0
// 00820ad4  52                   push edx
// 00820ad5  ff1548b19800         call dword ptr [0x98b148]
// 00820adb  8d8c248c000000       lea ecx, [esp + 0x8c]
// 00820ae2  c684241401000003     mov byte ptr [esp + 0x114], 3
// 00820aea  e8a1ae0200           call 0x84b990
// 00820aef  8d4c2414             lea ecx, [esp + 0x14]
// 00820af3  c684241401000002     mov byte ptr [esp + 0x114], 2
// 00820afb  897c2414             mov dword ptr [esp + 0x14], edi
// 00820aff  e82ce7beff           call 0x40f230
// 00820b04  8d8c24a0000000       lea ecx, [esp + 0xa0]
// 00820b0b  c684241401000001     mov byte ptr [esp + 0x114], 1
// 00820b13  e878ae0200           call 0x84b990
// 00820b18  8b7c2478             mov edi, dword ptr [esp + 0x78]
// 00820b1c  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 00820b20  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00820b24  8b542434             mov edx, dword ptr [esp + 0x34]
// 00820b28  682000cc00           push 0xcc0020
// 00820b2d  6a00                 push 0
// 00820b2f  6a00                 push 0
// 00820b31  50                   push eax
// 00820b32  8b8424c8000000       mov eax, dword ptr [esp + 0xc8]
// 00820b39  51                   push ecx
// 00820b3a  52                   push edx
// 00820b3b  6a00                 push 0
// 00820b3d  6a00                 push 0
// 00820b3f  50                   push eax
// 00820b40  ff1548b19800         call dword ptr [0x98b148]
// 00820b46  85ff                 test edi, edi
// 00820b48  7403                 je 0x820b4d
// 00820b4a  8b7f04               mov edi, dword ptr [edi + 4]
// 00820b4d  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 00820b51  57                   push edi
// 00820b52  51                   push ecx
// 00820b53  e8a05a1000           call 0x9265f8
// 00820b58  8d4c2468             lea ecx, [esp + 0x68]
// 00820b5c  c684241401000000     mov byte ptr [esp + 0x114], 0
// 00820b64  e83f591000           call 0x9264a8
// 00820b69  eb50                 jmp 0x820bbb
// 00820b6b  81c6b0010000         add esi, 0x1b0
// 00820b71  56                   push esi
// 00820b72  8d9424b8000000       lea edx, [esp + 0xb8]
// 00820b79  52                   push edx
// 00820b7a  8d8c24a8000000       lea ecx, [esp + 0xa8]
// 00820b81  e8faac0200           call 0x84b880
// 00820b86  8b8424a4000000       mov eax, dword ptr [esp + 0xa4]
// 00820b8d  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00820b91  8b542434             mov edx, dword ptr [esp + 0x34]
// 00820b95  682000cc00           push 0xcc0020
// 00820b9a  53                   push ebx
// 00820b9b  53                   push ebx
// 00820b9c  50                   push eax
// 00820b9d  8b8424c8000000       mov eax, dword ptr [esp + 0xc8]
// 00820ba4  51                   push ecx
// 00820ba5  52                   push edx
// 00820ba6  53                   push ebx
// 00820ba7  53                   push ebx
// 00820ba8  50                   push eax
// 00820ba9  ff1548b19800         call dword ptr [0x98b148]
// 00820baf  8d8c24a0000000       lea ecx, [esp + 0xa0]
// 00820bb6  e8d5ad0200           call 0x84b990
// 00820bbb  8d8c24b4000000       lea ecx, [esp + 0xb4]
// 00820bc2  c7842414010000ffffffff mov dword ptr [esp + 0x114], 0xffffffff
// 00820bcd  e81836fdff           call 0x7f41ea
// 00820bd2  8b8c240c010000       mov ecx, dword ptr [esp + 0x10c]
// 00820bd9  64890d00000000       mov dword ptr fs:[0], ecx
// 00820be0  59                   pop ecx
// 00820be1  5f                   pop edi
// 00820be2  5e                   pop esi
// 00820be3  5d                   pop ebp
// 00820be4  5b                   pop ebx
// 00820be5  8b8c24f4000000       mov ecx, dword ptr [esp + 0xf4]
// 00820bec  33cc                 xor ecx, esp
// 00820bee  e8a747fdff           call 0x7f539a
// 00820bf3  81c404010000         add esp, 0x104
// 00820bf9  c3                   ret 
// copied from an identical function in another client (function ?OnPaint@CXTPReportControl@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportControl.cpp