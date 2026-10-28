// from server: 74% by EspClaude
// roc 2008-06 00675360  unit: RBX::AdornRbxGfx  size: 4379 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00675360
//
// 00675360  6aff                 push -1
// 00675362  6822d07d00           push 0x7dd022
// 00675367  64a100000000         mov eax, dword ptr fs:[0]
// 0067536d  50                   push eax
// 0067536e  64892500000000       mov dword ptr fs:[0], esp
// 00675375  81ec48010000         sub esp, 0x148
// 0067537b  d9e8                 fld1 
// 0067537d  53                   push ebx
// 0067537e  55                   push ebp
// 0067537f  d95c245c             fstp dword ptr [esp + 0x5c]
// 00675383  d9ee                 fldz 
// 00675385  56                   push esi
// 00675386  8bf1                 mov esi, ecx
// 00675388  d9542464             fst dword ptr [esp + 0x64]
// 0067538c  57                   push edi
// 0067538d  d954246c             fst dword ptr [esp + 0x6c]
// 00675391  8d8614010000         lea eax, [esi + 0x114]
// 00675397  d95c2470             fstp dword ptr [esp + 0x70]
// 0067539b  50                   push eax
// 0067539c  8d4c2468             lea ecx, [esp + 0x68]
// 006753a0  89742448             mov dword ptr [esp + 0x48], esi
// 006753a4  ff15784c8000         call dword ptr [0x804c78]
// 006753aa  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 006753ad  8b01                 mov eax, dword ptr [ecx]
// 006753af  8b8088010000         mov eax, dword ptr [eax + 0x188]
// 006753b5  8d542464             lea edx, [esp + 0x64]
// 006753b9  52                   push edx
// 006753ba  8d9638010000         lea edx, [esi + 0x138]
// 006753c0  52                   push edx
// 006753c1  ffd0                 call eax
// 006753c3  8b10                 mov edx, dword ptr [eax]
// 006753c5  8bc8                 mov ecx, eax
// 006753c7  8b4270               mov eax, dword ptr [edx + 0x70]
// 006753ca  ffd0                 call eax
// 006753cc  d900                 fld dword ptr [eax]
// 006753ce  d9542464             fst dword ptr [esp + 0x64]
// 006753d2  83ec18               sub esp, 0x18
// 006753d5  d94004               fld dword ptr [eax + 4]
// 006753d8  8d8c24f8000000       lea ecx, [esp + 0xf8]
// 006753df  d9942480000000       fst dword ptr [esp + 0x80]
// 006753e6  d94008               fld dword ptr [eax + 8]
// 006753e9  d9942484000000       fst dword ptr [esp + 0x84]
// 006753f0  dd5c2410             fstp qword ptr [esp + 0x10]
// 006753f4  dd5c2408             fstp qword ptr [esp + 8]
// 006753f8  dd1c24               fstp qword ptr [esp]
// 006753fb  6860d68400           push 0x84d660
// 00675400  6a40                 push 0x40
// 00675402  51                   push ecx
// 00675403  ff15b4278000         call dword ptr [0x8027b4]
// 00675409  8b94248c010000       mov edx, dword ptr [esp + 0x18c]
// 00675410  d94210               fld dword ptr [edx + 0x10]
// 00675413  83c424               add esp, 0x24
// 00675416  6a00                 push 0
// 00675418  6a20                 push 0x20
// 0067541a  6a00                 push 0
// 0067541c  6a06                 push 6
// 0067541e  51                   push ecx
// 0067541f  8d8424a0000000       lea eax, [esp + 0xa0]
// 00675426  d91c24               fstp dword ptr [esp]
// 00675429  50                   push eax
// 0067542a  ff1520438000         call dword ptr [0x804320]
// 00675430  83c418               add esp, 0x18
// 00675433  8bf8                 mov edi, eax
// 00675435  6854d68400           push 0x84d654
// 0067543a  8d8c24c8000000       lea ecx, [esp + 0xc8]
// 00675441  c784246401000000000000 mov dword ptr [esp + 0x164], 0
// 0067544c  ff1558248000         call dword ptr [0x802458]
// 00675452  6850d68400           push 0x84d650
// 00675457  50                   push eax
// 00675458  8d4c2450             lea ecx, [esp + 0x50]
// 0067545c  51                   push ecx
// 0067545d  c684246c01000001     mov byte ptr [esp + 0x16c], 1
// 00675465  ff15e4238000         call dword ptr [0x8023e4]
// 0067546b  57                   push edi
// 0067546c  50                   push eax
// 0067546d  8d9424bc000000       lea edx, [esp + 0xbc]
// 00675474  52                   push edx
// 00675475  c684247801000002     mov byte ptr [esp + 0x178], 2
// 0067547d  ff15a8248000         call dword ptr [0x8024a8]
// 00675483  83c418               add esp, 0x18
// 00675486  6a00                 push 0
// 00675488  c684246401000003     mov byte ptr [esp + 0x164], 3
// 00675490  6a02                 push 2
// 00675492  50                   push eax
// 00675493  ff15744e8000         call dword ptr [0x804e74]
// 00675499  8bc8                 mov ecx, eax
// 0067549b  ff15784e8000         call dword ptr [0x804e78]
// 006754a1  8d8c24a8000000       lea ecx, [esp + 0xa8]
// 006754a8  c684246001000002     mov byte ptr [esp + 0x160], 2
// 006754b0  ff1568248000         call dword ptr [0x802468]
// 006754b6  8d4c2448             lea ecx, [esp + 0x48]
// 006754ba  c684246001000001     mov byte ptr [esp + 0x160], 1
// 006754c2  ff1568248000         call dword ptr [0x802468]
// 006754c8  8d8c24c4000000       lea ecx, [esp + 0xc4]
// 006754cf  c684246001000000     mov byte ptr [esp + 0x160], 0
// 006754d7  ff1568248000         call dword ptr [0x802468]
// 006754dd  8d8c248c000000       lea ecx, [esp + 0x8c]
// 006754e4  c7842460010000ffffffff mov dword ptr [esp + 0x160], 0xffffffff
// 006754ef  ff1568248000         call dword ptr [0x802468]
// 006754f5  8d8424e0000000       lea eax, [esp + 0xe0]
// 006754fc  50                   push eax
// 006754fd  8d4c244c             lea ecx, [esp + 0x4c]
// 00675501  ff1558248000         call dword ptr [0x802458]
// 00675507  8b9ed0000000         mov ebx, dword ptr [esi + 0xd0]
// 0067550d  8baeb8000000         mov ebp, dword ptr [esi + 0xb8]
// 00675513  81c6b8000000         add esi, 0xb8
// 00675519  8d4c2448             lea ecx, [esp + 0x48]
// 0067551d  51                   push ecx
// 0067551e  8d54241c             lea edx, [esp + 0x1c]
// 00675522  52                   push edx
// 00675523  8bce                 mov ecx, esi
// 00675525  c784246801000004000000 mov dword ptr [esp + 0x168], 4
// 00675530  89742428             mov dword ptr [esp + 0x28], esi
// 00675534  e8f7190200           call 0x696f30
// 00675539  8bf8                 mov edi, eax
// 0067553b  8b07                 mov eax, dword ptr [edi]
// 0067553d  85c0                 test eax, eax
// 0067553f  7404                 je 0x675545
// 00675541  3bc5                 cmp eax, ebp
// 00675543  7406                 je 0x67554b
// 00675545  ff1590288000         call dword ptr [0x802890]
// 0067554b  395f04               cmp dword ptr [edi + 4], ebx
// 0067554e  8d4c2448             lea ecx, [esp + 0x48]
// 00675552  0f95c3               setne bl
// 00675555  83cfff               or edi, 0xffffffff
// 00675558  89bc2460010000       mov dword ptr [esp + 0x160], edi
// 0067555f  ff1568248000         call dword ptr [0x802468]
// 00675565  84db                 test bl, bl
// 00675567  0f84b1010000         je 0x67571e
// 0067556d  8d8424e0000000       lea eax, [esp + 0xe0]
// 00675574  50                   push eax
// 00675575  8d4c244c             lea ecx, [esp + 0x4c]
// 00675579  ff1558248000         call dword ptr [0x802458]
// 0067557f  8d4c2448             lea ecx, [esp + 0x48]
// 00675583  51                   push ecx
// 00675584  8bce                 mov ecx, esi
// 00675586  c784246401000005000000 mov dword ptr [esp + 0x164], 5
// 00675591  e87ac3ffff           call 0x671910
// 00675596  8b08                 mov ecx, dword ptr [eax]
// 00675598  8b11                 mov edx, dword ptr [ecx]
// 0067559a  8b823c010000         mov eax, dword ptr [edx + 0x13c]
// 006755a0  6a00                 push 0
// 006755a2  ffd0                 call eax
// 006755a4  85c0                 test eax, eax
// 006755a6  7405                 je 0x6755ad
// 006755a8  8d58e0               lea ebx, [eax - 0x20]
// 006755ab  eb02                 jmp 0x6755af
// 006755ad  33db                 xor ebx, ebx
// 006755af  8d4c2448             lea ecx, [esp + 0x48]
// 006755b3  89bc2460010000       mov dword ptr [esp + 0x160], edi
// 006755ba  ff1568248000         call dword ptr [0x802468]
// 006755c0  8bcb                 mov ecx, ebx
// 006755c2  ff1518438000         call dword ptr [0x804318]
// 006755c8  85c0                 test eax, eax
// 006755ca  0f85900e0000         jne 0x676460
// 006755d0  50                   push eax
// 006755d1  8bcb                 mov ecx, ebx
// 006755d3  ff1564428000         call dword ptr [0x804264]
// 006755d9  8b2d68288000         mov ebp, dword ptr [0x802868]
// 006755df  684cd68400           push 0x84d64c
// 006755e4  8bf8                 mov edi, eax
// 006755e6  ffd5                 call ebp
// 006755e8  d97c2414             fnstcw word ptr [esp + 0x14]
// 006755ec  89442424             mov dword ptr [esp + 0x24], eax
// 006755f0  db442424             fild dword ptr [esp + 0x24]
// 006755f4  0fb7442414           movzx eax, word ptr [esp + 0x14]
// 006755f9  0d000c0000           or eax, 0xc00
// 006755fe  89442424             mov dword ptr [esp + 0x24], eax
// 00675602  83c404               add esp, 4
// 00675605  d96c2420             fldcw word ptr [esp + 0x20]
// 00675609  df7c2418             fistp qword ptr [esp + 0x18]
// 0067560d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00675611  51                   push ecx
// 00675612  8bcb                 mov ecx, ebx
// 00675614  d96c2414             fldcw word ptr [esp + 0x14]
// 00675618  ff156c4c8000         call dword ptr [0x804c6c]
// 0067561e  d9e8                 fld1 
// 00675620  dd0530d28400         fld qword ptr [0x84d230]
// 00675626  e8f5c50200           call 0x6a1c20
// 0067562b  d9542424             fst dword ptr [esp + 0x24]
// 0067562f  8b1f                 mov ebx, dword ptr [edi]
// 00675631  d95c2414             fstp dword ptr [esp + 0x14]
// 00675635  6848d68400           push 0x84d648
// 0067563a  ffd5                 call ebp
// 0067563c  8b5348               mov edx, dword ptr [ebx + 0x48]
// 0067563f  89442424             mov dword ptr [esp + 0x24], eax
// 00675643  db442424             fild dword ptr [esp + 0x24]
// 00675647  8bcf                 mov ecx, edi
// 00675649  d84c2418             fmul dword ptr [esp + 0x18]
// 0067564d  d91c24               fstp dword ptr [esp]
// 00675650  ffd2                 call edx
// 00675652  d9442424             fld dword ptr [esp + 0x24]
// 00675656  8b1f                 mov ebx, dword ptr [edi]
// 00675658  6844d68400           push 0x84d644
// 0067565d  d95c2418             fstp dword ptr [esp + 0x18]
// 00675661  ffd5                 call ebp
// 00675663  89442424             mov dword ptr [esp + 0x24], eax
// 00675667  db442424             fild dword ptr [esp + 0x24]
// 0067566b  8b434c               mov eax, dword ptr [ebx + 0x4c]
// 0067566e  8bcf                 mov ecx, edi
// 00675670  d84c2418             fmul dword ptr [esp + 0x18]
// 00675674  d91c24               fstp dword ptr [esp]
// 00675677  ffd0                 call eax
// 00675679  8b1f                 mov ebx, dword ptr [edi]
// 0067567b  6840d68400           push 0x84d640
// 00675680  ffd5                 call ebp
// 00675682  8b93c0000000         mov edx, dword ptr [ebx + 0xc0]
// 00675688  89442424             mov dword ptr [esp + 0x24], eax
// 0067568c  db442424             fild dword ptr [esp + 0x24]
// 00675690  8bcf                 mov ecx, edi
// 00675692  d91c24               fstp dword ptr [esp]
// 00675695  ffd2                 call edx
// 00675697  8b1f                 mov ebx, dword ptr [edi]
// 00675699  6840d68400           push 0x84d640
// 0067569e  ffd5                 call ebp
// 006756a0  89442424             mov dword ptr [esp + 0x24], eax
// 006756a4  db442424             fild dword ptr [esp + 0x24]
// 006756a8  8b83c4000000         mov eax, dword ptr [ebx + 0xc4]
// 006756ae  8bcf                 mov ecx, edi
// 006756b0  d91c24               fstp dword ptr [esp]
// 006756b3  ffd0                 call eax
// 006756b5  8b17                 mov edx, dword ptr [edi]
// 006756b7  8b82a4000000         mov eax, dword ptr [edx + 0xa4]
// 006756bd  6a00                 push 0
// 006756bf  8bcf                 mov ecx, edi
// 006756c1  ffd0                 call eax
// 006756c3  8d8c24e0000000       lea ecx, [esp + 0xe0]
// 006756ca  51                   push ecx
// 006756cb  8d4c244c             lea ecx, [esp + 0x4c]
// 006756cf  ff1558248000         call dword ptr [0x802458]
// 006756d5  8d542448             lea edx, [esp + 0x48]
// 006756d9  52                   push edx
// 006756da  8d44241c             lea eax, [esp + 0x1c]
// 006756de  c784246401000006000000 mov dword ptr [esp + 0x164], 6
// 006756e9  50                   push eax
// 006756ea  8bce                 mov ecx, esi
// 006756ec  e83f180200           call 0x696f30
// 006756f1  8b4804               mov ecx, dword ptr [eax + 4]
// 006756f4  8b10                 mov edx, dword ptr [eax]
// 006756f6  51                   push ecx
// 006756f7  52                   push edx
// 006756f8  8d442434             lea eax, [esp + 0x34]
// 006756fc  50                   push eax
// 006756fd  8bce                 mov ecx, esi
// 006756ff  e84c150200           call 0x696c50
// 00675704  8d4c2448             lea ecx, [esp + 0x48]
// 00675708  c7842460010000ffffffff mov dword ptr [esp + 0x160], 0xffffffff
// 00675713  ff1568248000         call dword ptr [0x802468]
// 00675719  e9420d0000           jmp 0x676460
// 0067571e  8d4c2474             lea ecx, [esp + 0x74]
// 00675722  e8a93cdbff           call 0x4293d0
// 00675727  8b4618               mov eax, dword ptr [esi + 0x18]
// 0067572a  8b00                 mov eax, dword ptr [eax]
// 0067572c  8b3e                 mov edi, dword ptr [esi]
// 0067572e  8be8                 mov ebp, eax
// 00675730  c784246001000007000000 mov dword ptr [esp + 0x160], 7
// 0067573b  897c2418             mov dword ptr [esp + 0x18], edi
// 0067573f  896c241c             mov dword ptr [esp + 0x1c], ebp
// 00675743  8b5e18               mov ebx, dword ptr [esi + 0x18]
// 00675746  8b06                 mov eax, dword ptr [esi]
// 00675748  85ff                 test edi, edi
// 0067574a  7404                 je 0x675750
// 0067574c  3bf8                 cmp edi, eax
// 0067574e  7406                 je 0x675756
// 00675750  ff1590288000         call dword ptr [0x802890]
// 00675756  3beb                 cmp ebp, ebx
// 00675758  745e                 je 0x6757b8
// 0067575a  85ff                 test edi, edi
// 0067575c  7529                 jne 0x675787
// 0067575e  ff1590288000         call dword ptr [0x802890]
// 00675764  3b6f18               cmp ebp, dword ptr [edi + 0x18]
// 00675767  7506                 jne 0x67576f
// 00675769  ff1590288000         call dword ptr [0x802890]
// 0067576f  8b4d28               mov ecx, dword ptr [ebp + 0x28]
// 00675772  8b11                 mov edx, dword ptr [ecx]
// 00675774  8b823c010000         mov eax, dword ptr [edx + 0x13c]
// 0067577a  6a00                 push 0
// 0067577c  ffd0                 call eax
// 0067577e  85c0                 test eax, eax
// 00675780  7409                 je 0x67578b
// 00675782  8d48e0               lea ecx, [eax - 0x20]
// 00675785  eb06                 jmp 0x67578d
// 00675787  8b3f                 mov edi, dword ptr [edi]
// 00675789  ebd9                 jmp 0x675764
// 0067578b  33c9                 xor ecx, ecx
// 0067578d  ff1518438000         call dword ptr [0x804318]
// 00675793  85c0                 test eax, eax
// 00675795  750e                 jne 0x6757a5
// 00675797  8d4c2418             lea ecx, [esp + 0x18]
// 0067579b  51                   push ecx
// 0067579c  8d4c2478             lea ecx, [esp + 0x78]
// 006757a0  e83be9ffff           call 0x6740e0
// 006757a5  8d4c2418             lea ecx, [esp + 0x18]
// 006757a9  e8f2790100           call 0x68d1a0
// 006757ae  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 006757b2  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 006757b6  eb8b                 jmp 0x675743
// 006757b8  8bb42484000000       mov esi, dword ptr [esp + 0x84]
// 006757bf  2bb42480000000       sub esi, dword ptr [esp + 0x80]
// 006757c6  8b3d68288000         mov edi, dword ptr [0x802868]
// 006757cc  c1fe03               sar esi, 3
// 006757cf  33ed                 xor ebp, ebp
// 006757d1  85f6                 test esi, esi
// 006757d3  0f86e9010000         jbe 0x6759c2
// 006757d9  d9e8                 fld1 
// 006757db  dd0530d28400         fld qword ptr [0x84d230]
// 006757e1  e83ac40200           call 0x6a1c20
// 006757e6  d9542424             fst dword ptr [esp + 0x24]
// 006757ea  d95c242c             fstp dword ptr [esp + 0x2c]
// 006757ee  8bff                 mov edi, edi
// 006757f0  8b1d90288000         mov ebx, dword ptr [0x802890]
// 006757f6  3bee                 cmp ebp, esi
// 006757f8  7202                 jb 0x6757fc
// 006757fa  ffd3                 call ebx
// 006757fc  8b942480000000       mov edx, dword ptr [esp + 0x80]
// 00675803  8b04ea               mov eax, dword ptr [edx + ebp*8]
// 00675806  8d34ea               lea esi, [edx + ebp*8]
// 00675809  85c0                 test eax, eax
// 0067580b  7508                 jne 0x675815
// 0067580d  ffd3                 call ebx
// 0067580f  8b06                 mov eax, dword ptr [esi]
// 00675811  85c0                 test eax, eax
// 00675813  7404                 je 0x675819
// 00675815  8b00                 mov eax, dword ptr [eax]
// 00675817  eb02                 jmp 0x67581b
// 00675819  33c0                 xor eax, eax
// 0067581b  8b4e04               mov ecx, dword ptr [esi + 4]
// 0067581e  3b4818               cmp ecx, dword ptr [eax + 0x18]
// 00675821  7502                 jne 0x675825
// 00675823  ffd3                 call ebx
// 00675825  8b5604               mov edx, dword ptr [esi + 4]
// 00675828  8b4a28               mov ecx, dword ptr [edx + 0x28]
// 0067582b  8b01                 mov eax, dword ptr [ecx]
// 0067582d  8b903c010000         mov edx, dword ptr [eax + 0x13c]
// 00675833  6a00                 push 0
// 00675835  ffd2                 call edx
// 00675837  85c0                 test eax, eax
// 00675839  7405                 je 0x675840
// 0067583b  8d58e0               lea ebx, [eax - 0x20]
// 0067583e  eb02                 jmp 0x675842
// 00675840  33db                 xor ebx, ebx
// 00675842  6a00                 push 0
// 00675844  8bcb                 mov ecx, ebx
// 00675846  ff1564428000         call dword ptr [0x804264]
// 0067584c  8bf0                 mov esi, eax
// 0067584e  8b06                 mov eax, dword ptr [esi]
// 00675850  8b90a4000000         mov edx, dword ptr [eax + 0xa4]
// 00675856  6a00                 push 0
// 00675858  8bce                 mov ecx, esi
// 0067585a  ffd2                 call edx
// 0067585c  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 00675863  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 0067586a  2bc8                 sub ecx, eax
// 0067586c  c1f903               sar ecx, 3
// 0067586f  3be9                 cmp ebp, ecx
// 00675871  720d                 jb 0x675880
// 00675873  ff1590288000         call dword ptr [0x802890]
// 00675879  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 00675880  8b54e804             mov edx, dword ptr [eax + ebp*8 + 4]
// 00675884  8b04e8               mov eax, dword ptr [eax + ebp*8]
// 00675887  52                   push edx
// 00675888  50                   push eax
// 00675889  8d4c2440             lea ecx, [esp + 0x40]
// 0067588d  51                   push ecx
// 0067588e  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00675892  e8b9130200           call 0x696c50
// 00675897  8b5320               mov edx, dword ptr [ebx + 0x20]
// 0067589a  8b4240               mov eax, dword ptr [edx + 0x40]
// 0067589d  8d4b20               lea ecx, [ebx + 0x20]
// 006758a0  ffd0                 call eax
// 006758a2  50                   push eax
// 006758a3  8d8c2490000000       lea ecx, [esp + 0x90]
// 006758aa  6830d68400           push 0x84d630
// 006758af  51                   push ecx
// 006758b0  ff1568238000         call dword ptr [0x802368]
// 006758b6  83c40c               add esp, 0xc
// 006758b9  6a00                 push 0
// 006758bb  6a02                 push 2
// 006758bd  50                   push eax
// 006758be  c684246c01000008     mov byte ptr [esp + 0x16c], 8
// 006758c6  ff15744e8000         call dword ptr [0x804e74]
// 006758cc  8bc8                 mov ecx, eax
// 006758ce  ff15784e8000         call dword ptr [0x804e78]
// 006758d4  8d8c248c000000       lea ecx, [esp + 0x8c]
// 006758db  c684246001000007     mov byte ptr [esp + 0x160], 7
// 006758e3  ff1568248000         call dword ptr [0x802468]
// 006758e9  684cd68400           push 0x84d64c
// 006758ee  ffd7                 call edi
// 006758f0  d97c2414             fnstcw word ptr [esp + 0x14]
// 006758f4  89442418             mov dword ptr [esp + 0x18], eax
// 006758f8  db442418             fild dword ptr [esp + 0x18]
// 006758fc  0fb7442414           movzx eax, word ptr [esp + 0x14]
// 00675901  0d000c0000           or eax, 0xc00
// 00675906  89442418             mov dword ptr [esp + 0x18], eax
// 0067590a  83c404               add esp, 4
// 0067590d  8bcb                 mov ecx, ebx
// 0067590f  d96c2414             fldcw word ptr [esp + 0x14]
// 00675913  df7c2418             fistp qword ptr [esp + 0x18]
// 00675917  8b542418             mov edx, dword ptr [esp + 0x18]
// 0067591b  52                   push edx
// 0067591c  d96c2414             fldcw word ptr [esp + 0x14]
// 00675920  ff156c4c8000         call dword ptr [0x804c6c]
// 00675926  8b1e                 mov ebx, dword ptr [esi]
// 00675928  6848d68400           push 0x84d648
// 0067592d  d9442428             fld dword ptr [esp + 0x28]
// 00675931  d95c242c             fstp dword ptr [esp + 0x2c]
// 00675935  ffd7                 call edi
// 00675937  89442418             mov dword ptr [esp + 0x18], eax
// 0067593b  db442418             fild dword ptr [esp + 0x18]
// 0067593f  8b4348               mov eax, dword ptr [ebx + 0x48]
// 00675942  8bce                 mov ecx, esi
// 00675944  d84c242c             fmul dword ptr [esp + 0x2c]
// 00675948  d91c24               fstp dword ptr [esp]
// 0067594b  ffd0                 call eax
// 0067594d  8b1e                 mov ebx, dword ptr [esi]
// 0067594f  6844d68400           push 0x84d644
// 00675954  ffd7                 call edi
// 00675956  8b534c               mov edx, dword ptr [ebx + 0x4c]
// 00675959  89442418             mov dword ptr [esp + 0x18], eax
// 0067595d  db442418             fild dword ptr [esp + 0x18]
// 00675961  8bce                 mov ecx, esi
// 00675963  d84c2430             fmul dword ptr [esp + 0x30]
// 00675967  d91c24               fstp dword ptr [esp]
// 0067596a  ffd2                 call edx
// 0067596c  8b1e                 mov ebx, dword ptr [esi]
// 0067596e  6840d68400           push 0x84d640
// 00675973  ffd7                 call edi
// 00675975  89442418             mov dword ptr [esp + 0x18], eax
// 00675979  db442418             fild dword ptr [esp + 0x18]
// 0067597d  8b83c0000000         mov eax, dword ptr [ebx + 0xc0]
// 00675983  8bce                 mov ecx, esi
// 00675985  d91c24               fstp dword ptr [esp]
// 00675988  ffd0                 call eax
// 0067598a  8b1e                 mov ebx, dword ptr [esi]
// 0067598c  6840d68400           push 0x84d640
// 00675991  ffd7                 call edi
// 00675993  89442418             mov dword ptr [esp + 0x18], eax
// 00675997  db442418             fild dword ptr [esp + 0x18]
// 0067599b  8b93c4000000         mov edx, dword ptr [ebx + 0xc4]
// 006759a1  d91c24               fstp dword ptr [esp]
// 006759a4  8bce                 mov ecx, esi
// 006759a6  ffd2                 call edx
// 006759a8  8bb42484000000       mov esi, dword ptr [esp + 0x84]
// 006759af  2bb42480000000       sub esi, dword ptr [esp + 0x80]
// 006759b6  45                   inc ebp
// 006759b7  c1fe03               sar esi, 3
// 006759ba  3bee                 cmp ebp, esi
// 006759bc  0f822efeffff         jb 0x6757f0
// 006759c2  8b842468010000       mov eax, dword ptr [esp + 0x168]
// 006759c9  d94010               fld dword ptr [eax + 0x10]
// 006759cc  d80de4a38300         fmul dword ptr [0x83a3e4]
// 006759d2  d9542428             fst dword ptr [esp + 0x28]
// 006759d6  d90580e38100         fld dword ptr [0x81e380]
// 006759dc  d8d1                 fcom st(1)
// 006759de  dfe0                 fnstsw ax
// 006759e0  ddd9                 fstp st(1)
// 006759e2  f6c405               test ah, 5
// 006759e5  7a06                 jp 0x6759ed
// 006759e7  d95c2428             fstp dword ptr [esp + 0x28]
// 006759eb  eb02                 jmp 0x6759ef
// 006759ed  ddd8                 fstp st(0)
// 006759ef  8b5c2444             mov ebx, dword ptr [esp + 0x44]
// 006759f3  8b8bb0000000         mov ecx, dword ptr [ebx + 0xb0]
// 006759f9  2b8bac000000         sub ecx, dword ptr [ebx + 0xac]
// 006759ff  81c3a0000000         add ebx, 0xa0
// 00675a05  33f6                 xor esi, esi
// 00675a07  c1f902               sar ecx, 2
// 00675a0a  89742424             mov dword ptr [esp + 0x24], esi
// 00675a0e  85c9                 test ecx, ecx
// 00675a10  7668                 jbe 0x675a7a
// 00675a12  8b2d64428000         mov ebp, dword ptr [0x804264]
// 00675a18  eb06                 jmp 0x675a20
// 00675a1a  8d9b00000000         lea ebx, [ebx]
// 00675a20  8b5310               mov edx, dword ptr [ebx + 0x10]
// 00675a23  2b530c               sub edx, dword ptr [ebx + 0xc]
// 00675a26  c1fa02               sar edx, 2
// 00675a29  3bf2                 cmp esi, edx
// 00675a2b  7206                 jb 0x675a33
// 00675a2d  ff1590288000         call dword ptr [0x802890]
// 00675a33  8b430c               mov eax, dword ptr [ebx + 0xc]
// 00675a36  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 00675a39  8b11                 mov edx, dword ptr [ecx]
// 00675a3b  8b823c010000         mov eax, dword ptr [edx + 0x13c]
// 00675a41  6a00                 push 0
// 00675a43  ffd0                 call eax
// 00675a45  85c0                 test eax, eax
// 00675a47  7405                 je 0x675a4e
// 00675a49  8d48e0               lea ecx, [eax - 0x20]
// 00675a4c  eb02                 jmp 0x675a50
// 00675a4e  33c9                 xor ecx, ecx
// 00675a50  6a00                 push 0
// 00675a52  ffd5                 call ebp
// 00675a54  8b10                 mov edx, dword ptr [eax]
// 00675a56  8bc8                 mov ecx, eax
// 00675a58  8b82a8000000         mov eax, dword ptr [edx + 0xa8]
// 00675a5e  ffd0                 call eax
// 00675a60  84c0                 test al, al
// 00675a62  0f84da000000         je 0x675b42
// 00675a68  8b4b10               mov ecx, dword ptr [ebx + 0x10]
// 00675a6b  2b4b0c               sub ecx, dword ptr [ebx + 0xc]
// 00675a6e  46                   inc esi
// 00675a6f  c1f902               sar ecx, 2
// 00675a72  3bf1                 cmp esi, ecx
// 00675a74  72aa                 jb 0x675a20
// 00675a76  89742424             mov dword ptr [esp + 0x24], esi
// 00675a7a  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 00675a7e  8b442444             mov eax, dword ptr [esp + 0x44]
// 00675a82  8b90b0000000         mov edx, dword ptr [eax + 0xb0]
// 00675a88  2b90ac000000         sub edx, dword ptr [eax + 0xac]
// 00675a8e  05a0000000           add eax, 0xa0
// 00675a93  c1fa02               sar edx, 2
// 00675a96  89442414             mov dword ptr [esp + 0x14], eax
// 00675a9a  3bf2                 cmp esi, edx
// 00675a9c  0f8562090000         jne 0x676404
// 00675aa2  6818d68400           push 0x84d618
// 00675aa7  8d4c244c             lea ecx, [esp + 0x4c]
// 00675aab  ff1558248000         call dword ptr [0x802458]
// 00675ab1  8b35604e8000         mov esi, dword ptr [0x804e60]
// 00675ab7  c68424600100000b     mov byte ptr [esp + 0x160], 0xb
// 00675abf  ffd6                 call esi
// 00675ac1  8b10                 mov edx, dword ptr [eax]
// 00675ac3  8b5258               mov edx, dword ptr [edx + 0x58]
// 00675ac6  8d4c2448             lea ecx, [esp + 0x48]
// 00675aca  51                   push ecx
// 00675acb  8bc8                 mov ecx, eax
// 00675acd  ffd2                 call edx
// 00675acf  84c0                 test al, al
// 00675ad1  8d4c2448             lea ecx, [esp + 0x48]
// 00675ad5  0f94c3               sete bl
// 00675ad8  c684246001000007     mov byte ptr [esp + 0x160], 7
// 00675ae0  ff1568248000         call dword ptr [0x802468]
// 00675ae6  84db                 test bl, bl
// 00675ae8  0f8442050000         je 0x676030
// 00675aee  6a34                 push 0x34
// 00675af0  e82bae0200           call 0x6a0920
// 00675af5  8be8                 mov ebp, eax
// 00675af7  83c404               add esp, 4
// 00675afa  896c2418             mov dword ptr [esp + 0x18], ebp
// 00675afe  c68424600100000c     mov byte ptr [esp + 0x160], 0xc
// 00675b06  85ed                 test ebp, ebp
// 00675b08  0f8450020000         je 0x675d5e
// 00675b0e  833d9cda970010       cmp dword ptr [0x97da9c], 0x10
// 00675b15  a188da9700           mov eax, dword ptr [0x97da88]
// 00675b1a  7305                 jae 0x675b21
// 00675b1c  b888da9700           mov eax, 0x97da88
// 00675b21  8b0d98da9700         mov ecx, dword ptr [0x97da98]
// 00675b27  6a00                 push 0
// 00675b29  41                   inc ecx
// 00675b2a  51                   push ecx
// 00675b2b  50                   push eax
// 00675b2c  8bcd                 mov ecx, ebp
// 00675b2e  ff155c4e8000         call dword ptr [0x804e5c]
// 00675b34  c74500c46c8200       mov dword ptr [ebp], 0x826cc4
// 00675b3b  8bc5                 mov eax, ebp
// 00675b3d  e91e020000           jmp 0x675d60
// 00675b42  8b5310               mov edx, dword ptr [ebx + 0x10]
// 00675b45  2b530c               sub edx, dword ptr [ebx + 0xc]
// 00675b48  89742424             mov dword ptr [esp + 0x24], esi
// 00675b4c  c1fa02               sar edx, 2
// 00675b4f  3bf2                 cmp esi, edx
// 00675b51  7206                 jb 0x675b59
// 00675b53  ff1590288000         call dword ptr [0x802890]
// 00675b59  8b430c               mov eax, dword ptr [ebx + 0xc]
// 00675b5c  8b2cb0               mov ebp, dword ptr [eax + esi*4]
// 00675b5f  8d8c24e0000000       lea ecx, [esp + 0xe0]
// 00675b66  51                   push ecx
// 00675b67  8d4c244c             lea ecx, [esp + 0x4c]
// 00675b6b  ff1558248000         call dword ptr [0x802458]
// 00675b71  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00675b75  8d542448             lea edx, [esp + 0x48]
// 00675b79  52                   push edx
// 00675b7a  c684246401000009     mov byte ptr [esp + 0x164], 9
// 00675b82  e889bdffff           call 0x671910
// 00675b87  8d4c2448             lea ecx, [esp + 0x48]
// 00675b8b  8928                 mov dword ptr [eax], ebp
// 00675b8d  c684246001000007     mov byte ptr [esp + 0x160], 7
// 00675b95  ff1568248000         call dword ptr [0x802468]
// 00675b9b  d944246c             fld dword ptr [esp + 0x6c]
// 00675b9f  8b4500               mov eax, dword ptr [ebp]
// 00675ba2  8b5068               mov edx, dword ptr [eax + 0x68]
// 00675ba5  83ec0c               sub esp, 0xc
// 00675ba8  d95c2408             fstp dword ptr [esp + 8]
// 00675bac  8bcd                 mov ecx, ebp
// 00675bae  d9442474             fld dword ptr [esp + 0x74]
// 00675bb2  d95c2404             fstp dword ptr [esp + 4]
// 00675bb6  d9442470             fld dword ptr [esp + 0x70]
// 00675bba  d91c24               fstp dword ptr [esp]
// 00675bbd  ffd2                 call edx
// 00675bbf  8b4500               mov eax, dword ptr [ebp]
// 00675bc2  8b903c010000         mov edx, dword ptr [eax + 0x13c]
// 00675bc8  6a00                 push 0
// 00675bca  8bcd                 mov ecx, ebp
// 00675bcc  ffd2                 call edx
// 00675bce  85c0                 test eax, eax
// 00675bd0  7405                 je 0x675bd7
// 00675bd2  8d58e0               lea ebx, [eax - 0x20]
// 00675bd5  eb02                 jmp 0x675bd9
// 00675bd7  33db                 xor ebx, ebx
// 00675bd9  6a00                 push 0
// 00675bdb  8bcb                 mov ecx, ebx
// 00675bdd  895c2418             mov dword ptr [esp + 0x18], ebx
// 00675be1  ff1564428000         call dword ptr [0x804264]
// 00675be7  684cd68400           push 0x84d64c
// 00675bec  8bf0                 mov esi, eax
// 00675bee  ffd7                 call edi
// 00675bf0  d97c2414             fnstcw word ptr [esp + 0x14]
// 00675bf4  89442430             mov dword ptr [esp + 0x30], eax
// 00675bf8  db442430             fild dword ptr [esp + 0x30]
// 00675bfc  0fb7442414           movzx eax, word ptr [esp + 0x14]
// 00675c01  0d000c0000           or eax, 0xc00
// 00675c06  89442430             mov dword ptr [esp + 0x30], eax
// 00675c0a  d84c242c             fmul dword ptr [esp + 0x2c]
// 00675c0e  83c404               add esp, 4
// 00675c11  d96c242c             fldcw word ptr [esp + 0x2c]
// 00675c15  8bcb                 mov ecx, ebx
// 00675c17  df7c2418             fistp qword ptr [esp + 0x18]
// 00675c1b  8b442418             mov eax, dword ptr [esp + 0x18]
// 00675c1f  50                   push eax
// 00675c20  d96c2414             fldcw word ptr [esp + 0x14]
// 00675c24  ff156c4c8000         call dword ptr [0x804c6c]
// 00675c2a  d9442428             fld dword ptr [esp + 0x28]
// 00675c2e  dd0530d28400         fld qword ptr [0x84d230]
// 00675c34  e8e7bf0200           call 0x6a1c20
// 00675c39  d9542410             fst dword ptr [esp + 0x10]
// 00675c3d  8b1e                 mov ebx, dword ptr [esi]
// 00675c3f  d95c2418             fstp dword ptr [esp + 0x18]
// 00675c43  6848d68400           push 0x84d648
// 00675c48  ffd7                 call edi
// 00675c4a  8b5348               mov edx, dword ptr [ebx + 0x48]
// 00675c4d  89442430             mov dword ptr [esp + 0x30], eax
// 00675c51  db442430             fild dword ptr [esp + 0x30]
// 00675c55  8bce                 mov ecx, esi
// 00675c57  d84c241c             fmul dword ptr [esp + 0x1c]
// 00675c5b  d91c24               fstp dword ptr [esp]
// 00675c5e  ffd2                 call edx
// 00675c60  d9442410             fld dword ptr [esp + 0x10]
// 00675c64  8b1e                 mov ebx, dword ptr [esi]
// 00675c66  6844d68400           push 0x84d644
// 00675c6b  d95c2430             fstp dword ptr [esp + 0x30]
// 00675c6f  ffd7                 call edi
// 00675c71  8944241c             mov dword ptr [esp + 0x1c], eax
// 00675c75  db44241c             fild dword ptr [esp + 0x1c]
// 00675c79  8b434c               mov eax, dword ptr [ebx + 0x4c]
// 00675c7c  8bce                 mov ecx, esi
// 00675c7e  d84c2430             fmul dword ptr [esp + 0x30]
// 00675c82  d91c24               fstp dword ptr [esp]
// 00675c85  ffd0                 call eax
// 00675c87  d9442428             fld dword ptr [esp + 0x28]
// 00675c8b  8b1e                 mov ebx, dword ptr [esi]
// 00675c8d  d82594748200         fsub dword ptr [0x827494]
// 00675c93  6840d68400           push 0x84d640
// 00675c98  d80d182a8300         fmul dword ptr [0x832a18]
// 00675c9e  d95c2414             fstp dword ptr [esp + 0x14]
// 00675ca2  ffd7                 call edi
// 00675ca4  8b93c0000000         mov edx, dword ptr [ebx + 0xc0]
// 00675caa  8944241c             mov dword ptr [esp + 0x1c], eax
// 00675cae  db44241c             fild dword ptr [esp + 0x1c]
// 00675cb2  8bce                 mov ecx, esi
// 00675cb4  d8442414             fadd dword ptr [esp + 0x14]
// 00675cb8  d91c24               fstp dword ptr [esp]
// 00675cbb  ffd2                 call edx
// 00675cbd  8b1e                 mov ebx, dword ptr [esi]
// 00675cbf  6840d68400           push 0x84d640
// 00675cc4  ffd7                 call edi
// 00675cc6  8944241c             mov dword ptr [esp + 0x1c], eax
// 00675cca  db44241c             fild dword ptr [esp + 0x1c]
// 00675cce  8b83c4000000         mov eax, dword ptr [ebx + 0xc4]
// 00675cd4  8bce                 mov ecx, esi
// 00675cd6  d8442414             fadd dword ptr [esp + 0x14]
// 00675cda  d91c24               fstp dword ptr [esp]
// 00675cdd  ffd0                 call eax
// 00675cdf  8b16                 mov edx, dword ptr [esi]
// 00675ce1  8b82a4000000         mov eax, dword ptr [edx + 0xa4]
// 00675ce7  6a01                 push 1
// 00675ce9  8bce                 mov ecx, esi
// 00675ceb  ffd0                 call eax
// 00675ced  d9059c838100         fld dword ptr [0x81839c]
// 00675cf3  51                   push ecx
// 00675cf4  d91c24               fstp dword ptr [esp]
// 00675cf7  8b742418             mov esi, dword ptr [esp + 0x18]
// 00675cfb  8bce                 mov ecx, esi
// 00675cfd  ff1514438000         call dword ptr [0x804314]
// 00675d03  8b5620               mov edx, dword ptr [esi + 0x20]
// 00675d06  8b4240               mov eax, dword ptr [edx + 0x40]
// 00675d09  8d4e20               lea ecx, [esi + 0x20]
// 00675d0c  ffd0                 call eax
// 00675d0e  50                   push eax
// 00675d0f  8d8c2490000000       lea ecx, [esp + 0x90]
// 00675d16  680cd68400           push 0x84d60c
// 00675d1b  51                   push ecx
// 00675d1c  ff1568238000         call dword ptr [0x802368]
// 00675d22  83c40c               add esp, 0xc
// 00675d25  6a00                 push 0
// 00675d27  6a02                 push 2
// 00675d29  50                   push eax
// 00675d2a  c684246c0100000a     mov byte ptr [esp + 0x16c], 0xa
// 00675d32  ff15744e8000         call dword ptr [0x804e74]
// 00675d38  8bc8                 mov ecx, eax
// 00675d3a  ff15784e8000         call dword ptr [0x804e78]
// 00675d40  8d8c248c000000       lea ecx, [esp + 0x8c]
// 00675d47  c684246001000007     mov byte ptr [esp + 0x160], 7
// 00675d4f  ff1568248000         call dword ptr [0x802468]
// 00675d55  8b742424             mov esi, dword ptr [esp + 0x24]
// 00675d59  e920fdffff           jmp 0x675a7e
// 00675d5e  33c0                 xor eax, eax
// 00675d60  6a04                 push 4
// 00675d62  c684246401000007     mov byte ptr [esp + 0x164], 7
// 00675d6a  c7442430b46b8200     mov dword ptr [esp + 0x30], 0x826bb4
// 00675d72  89442434             mov dword ptr [esp + 0x34], eax
// 00675d76  e8a5ab0200           call 0x6a0920
// 00675d7b  83c404               add esp, 4
// 00675d7e  85c0                 test eax, eax
// 00675d80  740c                 je 0x675d8e
// 00675d82  c70001000000         mov dword ptr [eax], 1
// 00675d88  89442434             mov dword ptr [esp + 0x34], eax
// 00675d8c  eb08                 jmp 0x675d96
// 00675d8e  c744243400000000     mov dword ptr [esp + 0x34], 0
// 00675d96  b30d                 mov bl, 0xd
// 00675d98  68c4638100           push 0x8163c4
// 00675d9d  8d4c244c             lea ecx, [esp + 0x4c]
// 00675da1  889c2464010000       mov byte ptr [esp + 0x164], bl
// 00675da8  ff1558248000         call dword ptr [0x802458]
// 00675dae  c68424600100000e     mov byte ptr [esp + 0x160], 0xe
// 00675db6  ffd6                 call esi
// 00675db8  8b10                 mov edx, dword ptr [eax]
// 00675dba  8b5208               mov edx, dword ptr [edx + 8]
// 00675dbd  8d4c2448             lea ecx, [esp + 0x48]
// 00675dc1  51                   push ecx
// 00675dc2  8d4c2430             lea ecx, [esp + 0x30]
// 00675dc6  51                   push ecx
// 00675dc7  8bc8                 mov ecx, eax
// 00675dc9  ffd2                 call edx
// 00675dcb  8d4c2448             lea ecx, [esp + 0x48]
// 00675dcf  889c2460010000       mov byte ptr [esp + 0x160], bl
// 00675dd6  ff1568248000         call dword ptr [0x802468]
// 00675ddc  6818d68400           push 0x84d618
// 00675de1  8d4c244c             lea ecx, [esp + 0x4c]
// 00675de5  ff1558248000         call dword ptr [0x802458]
// 00675deb  c68424600100000f     mov byte ptr [esp + 0x160], 0xf
// 00675df3  ffd6                 call esi
// 00675df5  8b10                 mov edx, dword ptr [eax]
// 00675df7  8b524c               mov edx, dword ptr [edx + 0x4c]
// 00675dfa  8d4c2448             lea ecx, [esp + 0x48]
// 00675dfe  51                   push ecx
// 00675dff  8d4c243c             lea ecx, [esp + 0x3c]
// 00675e03  51                   push ecx
// 00675e04  8bc8                 mov ecx, eax
// 00675e06  ffd2                 call edx
// 00675e08  50                   push eax
// 00675e09  b95cda9700           mov ecx, 0x97da5c
// 00675e0e  c684246401000010     mov byte ptr [esp + 0x164], 0x10
// 00675e16  ff1568428000         call dword ptr [0x804268]
// 00675e1c  8b442440             mov eax, dword ptr [esp + 0x40]
// 00675e20  c68424600100000f     mov byte ptr [esp + 0x160], 0xf
// 00675e28  c7442438c46b8200     mov dword ptr [esp + 0x38], 0x826bc4
// 00675e30  85c0                 test eax, eax
// 00675e32  7418                 je 0x675e4c
// 00675e34  ff08                 dec dword ptr [eax]
// 00675e36  8b442440             mov eax, dword ptr [esp + 0x40]
// 00675e3a  833800               cmp dword ptr [eax], 0
// 00675e3d  750d                 jne 0x675e4c
// 00675e3f  8b542438             mov edx, dword ptr [esp + 0x38]
// 00675e43  8b4204               mov eax, dword ptr [edx + 4]
// 00675e46  8d4c2438             lea ecx, [esp + 0x38]
// 00675e4a  ffd0                 call eax
// 00675e4c  8d4c2448             lea ecx, [esp + 0x48]
// 00675e50  889c2460010000       mov byte ptr [esp + 0x160], bl
// 00675e57  ff1568248000         call dword ptr [0x802468]
// 00675e5d  8d8c248c000000       lea ecx, [esp + 0x8c]
// 00675e64  68f4d58400           push 0x84d5f4
// 00675e69  51                   push ecx
// 00675e6a  e84172eeff           call 0x55d0b0
// 00675e6f  83c408               add esp, 8
// 00675e72  8b0d60da9700         mov ecx, dword ptr [0x97da60]
// 00675e78  6a02                 push 2
// 00675e7a  50                   push eax
// 00675e7b  6a00                 push 0
// 00675e7d  6a00                 push 0
// 00675e7f  6a00                 push 0
// 00675e81  c684247401000011     mov byte ptr [esp + 0x174], 0x11
// 00675e89  ff156c428000         call dword ptr [0x80426c]
// 00675e8f  8bc8                 mov ecx, eax
// 00675e91  ff1570428000         call dword ptr [0x804270]
// 00675e97  8bc8                 mov ecx, eax
// 00675e99  ff1510438000         call dword ptr [0x804310]
// 00675e9f  8bc8                 mov ecx, eax
// 00675ea1  ff150c438000         call dword ptr [0x80430c]
// 00675ea7  8d8c248c000000       lea ecx, [esp + 0x8c]
// 00675eae  889c2460010000       mov byte ptr [esp + 0x160], bl
// 00675eb5  ff1568248000         call dword ptr [0x802468]
// 00675ebb  68dcd58400           push 0x84d5dc
// 00675ec0  8d4c244c             lea ecx, [esp + 0x4c]
// 00675ec4  ff1558248000         call dword ptr [0x802458]
// 00675eca  8b2d08438000         mov ebp, dword ptr [0x804308]
// 00675ed0  8d542448             lea edx, [esp + 0x48]
// 00675ed4  52                   push edx
// 00675ed5  c684246401000012     mov byte ptr [esp + 0x164], 0x12
// 00675edd  ffd5                 call ebp
// 00675edf  8bc8                 mov ecx, eax
// 00675ee1  ff1504438000         call dword ptr [0x804304]
// 00675ee7  85c0                 test eax, eax
// 00675ee9  8d4c2448             lea ecx, [esp + 0x48]
// 00675eed  0f94442410           sete byte ptr [esp + 0x10]
// 00675ef2  889c2460010000       mov byte ptr [esp + 0x160], bl
// 00675ef9  ff1568248000         call dword ptr [0x802468]
// 00675eff  807c241000           cmp byte ptr [esp + 0x10], 0
// 00675f04  0f84f6000000         je 0x676000
// 00675f0a  6a34                 push 0x34
// 00675f0c  e80faa0200           call 0x6a0920
// 00675f11  8bf0                 mov esi, eax
// 00675f13  83c404               add esp, 4
// 00675f16  89742418             mov dword ptr [esp + 0x18], esi
// 00675f1a  c684246001000013     mov byte ptr [esp + 0x160], 0x13
// 00675f22  85f6                 test esi, esi
// 00675f24  742e                 je 0x675f54
// 00675f26  833db8da970010       cmp dword ptr [0x97dab8], 0x10
// 00675f2d  a1a4da9700           mov eax, dword ptr [0x97daa4]
// 00675f32  7305                 jae 0x675f39
// 00675f34  b8a4da9700           mov eax, 0x97daa4
// 00675f39  8b0db4da9700         mov ecx, dword ptr [0x97dab4]
// 00675f3f  6a00                 push 0
// 00675f41  41                   inc ecx
// 00675f42  51                   push ecx
// 00675f43  50                   push eax
// 00675f44  8bce                 mov ecx, esi
// 00675f46  ff155c4e8000         call dword ptr [0x804e5c]
// 00675f4c  c706c46c8200         mov dword ptr [esi], 0x826cc4
// 00675f52  eb02                 jmp 0x675f56
// 00675f54  33f6                 xor esi, esi
// 00675f56  6a04                 push 4
// 00675f58  889c2464010000       mov byte ptr [esp + 0x164], bl
// 00675f5f  c744243cb46b8200     mov dword ptr [esp + 0x3c], 0x826bb4
// 00675f67  89742440             mov dword ptr [esp + 0x40], esi
// 00675f6b  e8b0a90200           call 0x6a0920
// 00675f70  83c404               add esp, 4
// 00675f73  85c0                 test eax, eax
// 00675f75  740c                 je 0x675f83
// 00675f77  c70001000000         mov dword ptr [eax], 1
// 00675f7d  89442440             mov dword ptr [esp + 0x40], eax
// 00675f81  eb08                 jmp 0x675f8b
// 00675f83  c744244000000000     mov dword ptr [esp + 0x40], 0
// 00675f8b  68c4638100           push 0x8163c4
// 00675f90  8d4c244c             lea ecx, [esp + 0x4c]
// 00675f94  c684246401000014     mov byte ptr [esp + 0x164], 0x14
// 00675f9c  ff1558248000         call dword ptr [0x802458]
// 00675fa2  c684246001000015     mov byte ptr [esp + 0x160], 0x15
// 00675faa  ffd5                 call ebp
// 00675fac  8b10                 mov edx, dword ptr [eax]
// 00675fae  8b5208               mov edx, dword ptr [edx + 8]
// 00675fb1  8d4c2448             lea ecx, [esp + 0x48]
// 00675fb5  51                   push ecx
// 00675fb6  8d4c243c             lea ecx, [esp + 0x3c]
// 00675fba  51                   push ecx
// 00675fbb  8bc8                 mov ecx, eax
// 00675fbd  ffd2                 call edx
// 00675fbf  8d4c2448             lea ecx, [esp + 0x48]
// 00675fc3  c684246001000014     mov byte ptr [esp + 0x160], 0x14
// 00675fcb  ff1568248000         call dword ptr [0x802468]
// 00675fd1  8b442440             mov eax, dword ptr [esp + 0x40]
// 00675fd5  889c2460010000       mov byte ptr [esp + 0x160], bl
// 00675fdc  c7442438b46b8200     mov dword ptr [esp + 0x38], 0x826bb4
// 00675fe4  85c0                 test eax, eax
// 00675fe6  7418                 je 0x676000
// 00675fe8  ff08                 dec dword ptr [eax]
// 00675fea  8b442440             mov eax, dword ptr [esp + 0x40]
// 00675fee  833800               cmp dword ptr [eax], 0
// 00675ff1  750d                 jne 0x676000
// 00675ff3  8b542438             mov edx, dword ptr [esp + 0x38]
// 00675ff7  8b4204               mov eax, dword ptr [edx + 4]
// 00675ffa  8d4c2438             lea ecx, [esp + 0x38]
// 00675ffe  ffd0                 call eax
// 00676000  8b442434             mov eax, dword ptr [esp + 0x34]
// 00676004  c684246001000007     mov byte ptr [esp + 0x160], 7
// 0067600c  c744242cb46b8200     mov dword ptr [esp + 0x2c], 0x826bb4
// 00676014  85c0                 test eax, eax
// 00676016  7418                 je 0x676030
// 00676018  ff08                 dec dword ptr [eax]
// 0067601a  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0067601e  833900               cmp dword ptr [ecx], 0
// 00676021  750d                 jne 0x676030
// 00676023  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00676027  8b4204               mov eax, dword ptr [edx + 4]
// 0067602a  8d4c242c             lea ecx, [esp + 0x2c]
// 0067602e  ffd0                 call eax
// 00676030  8b5c2444             mov ebx, dword ptr [esp + 0x44]
// 00676034  83bb9c00000000       cmp dword ptr [ebx + 0x9c], 0
// 0067603b  7570                 jne 0x6760ad
// 0067603d  8b4b04               mov ecx, dword ptr [ebx + 4]
// 00676040  8b4904               mov ecx, dword ptr [ecx + 4]
// 00676043  8b11                 mov edx, dword ptr [ecx]
// 00676045  8b82b4000000         mov eax, dword ptr [edx + 0xb4]
// 0067604b  ffd0                 call eax
// 0067604d  8b4b04               mov ecx, dword ptr [ebx + 4]
// 00676050  8bf0                 mov esi, eax
// 00676052  8b4104               mov eax, dword ptr [ecx + 4]
// 00676055  68d4d58400           push 0x84d5d4
// 0067605a  83c004               add eax, 4
// 0067605d  50                   push eax
// 0067605e  8d942494000000       lea edx, [esp + 0x94]
// 00676065  52                   push edx
// 00676066  ff15e4238000         call dword ptr [0x8023e4]
// 0067606c  83c40c               add esp, 0xc
// 0067606f  8b0d6c4e8000         mov ecx, dword ptr [0x804e6c]
// 00676075  8b16                 mov edx, dword ptr [esi]
// 00676077  8b9284010000         mov edx, dword ptr [edx + 0x184]
// 0067607d  51                   push ecx
// 0067607e  8b0d88448000         mov ecx, dword ptr [0x804488]
// 00676084  51                   push ecx
// 00676085  50                   push eax
// 00676086  8bce                 mov ecx, esi
// 00676088  c684246c01000016     mov byte ptr [esp + 0x16c], 0x16
// 00676090  ffd2                 call edx
// 00676092  8d8c248c000000       lea ecx, [esp + 0x8c]
// 00676099  89839c000000         mov dword ptr [ebx + 0x9c], eax
// 0067609f  c684246001000007     mov byte ptr [esp + 0x160], 7
// 006760a7  ff1568248000         call dword ptr [0x802468]
// 006760ad  68dcd58400           push 0x84d5dc
// 006760b2  8d4c244c             lea ecx, [esp + 0x4c]
// 006760b6  ff1558248000         call dword ptr [0x802458]
// 006760bc  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006760c0  8b742444             mov esi, dword ptr [esp + 0x44]
// 006760c4  8b4604               mov eax, dword ptr [esi + 4]
// 006760c7  8b5804               mov ebx, dword ptr [eax + 4]
// 006760ca  6a00                 push 0
// 006760cc  6a20                 push 0x20
// 006760ce  6a00                 push 0
// 006760d0  51                   push ecx
// 006760d1  8d942430010000       lea edx, [esp + 0x130]
// 006760d8  52                   push edx
// 006760d9  c684247401000017     mov byte ptr [esp + 0x174], 0x17
// 006760e1  ff152c4f8000         call dword ptr [0x804f2c]
// 006760e7  8be8                 mov ebp, eax
// 006760e9  8b4604               mov eax, dword ptr [esi + 4]
// 006760ec  8b4004               mov eax, dword ptr [eax + 4]
// 006760ef  68ccd58400           push 0x84d5cc
// 006760f4  83c004               add eax, 4
// 006760f7  50                   push eax
// 006760f8  8d8c24e0000000       lea ecx, [esp + 0xe0]
// 006760ff  51                   push ecx
// 00676100  c684248001000018     mov byte ptr [esp + 0x180], 0x18
// 00676108  ff15e4238000         call dword ptr [0x8023e4]
// 0067610e  55                   push ebp
// 0067610f  50                   push eax
// 00676110  8d9424b4000000       lea edx, [esp + 0xb4]
// 00676117  52                   push edx
// 00676118  c684248c01000019     mov byte ptr [esp + 0x18c], 0x19
// 00676120  ff15a8248000         call dword ptr [0x8024a8]
// 00676126  83c42c               add esp, 0x2c
// 00676129  8b13                 mov edx, dword ptr [ebx]
// 0067612b  8b9228010000         mov edx, dword ptr [edx + 0x128]
// 00676131  8d4c2448             lea ecx, [esp + 0x48]
// 00676135  51                   push ecx
// 00676136  50                   push eax
// 00676137  8bcb                 mov ecx, ebx
// 00676139  c68424680100001a     mov byte ptr [esp + 0x168], 0x1a
// 00676141  ffd2                 call edx
// 00676143  8d8c248c000000       lea ecx, [esp + 0x8c]
// 0067614a  8bd8                 mov ebx, eax
// 0067614c  c684246001000019     mov byte ptr [esp + 0x160], 0x19
// 00676154  ff1568248000         call dword ptr [0x802468]
// 0067615a  8d8c24c4000000       lea ecx, [esp + 0xc4]
// 00676161  c684246001000018     mov byte ptr [esp + 0x160], 0x18
// 00676169  ff1568248000         call dword ptr [0x802468]
// 0067616f  8d8c2420010000       lea ecx, [esp + 0x120]
// 00676176  c684246001000017     mov byte ptr [esp + 0x160], 0x17
// 0067617e  ff1568248000         call dword ptr [0x802468]
// 00676184  8d4c2448             lea ecx, [esp + 0x48]
// 00676188  c684246001000007     mov byte ptr [esp + 0x160], 7
// 00676190  ff1568248000         call dword ptr [0x802468]
// 00676196  85db                 test ebx, ebx
// 00676198  7546                 jne 0x6761e0
// 0067619a  68b4d58400           push 0x84d5b4
// 0067619f  8d4c244c             lea ecx, [esp + 0x4c]
// 006761a3  ff1558248000         call dword ptr [0x802458]
// 006761a9  33f6                 xor esi, esi
// 006761ab  56                   push esi
// 006761ac  8d44244c             lea eax, [esp + 0x4c]
// 006761b0  6a02                 push 2
// 006761b2  50                   push eax
// 006761b3  c684246c0100001b     mov byte ptr [esp + 0x16c], 0x1b
// 006761bb  ff15744e8000         call dword ptr [0x804e74]
// 006761c1  8bc8                 mov ecx, eax
// 006761c3  ff15784e8000         call dword ptr [0x804e78]
// 006761c9  8d4c2448             lea ecx, [esp + 0x48]
// 006761cd  c684246001000007     mov byte ptr [esp + 0x160], 7
// 006761d5  ff1568248000         call dword ptr [0x802468]
// 006761db  e94a020000           jmp 0x67642a
// 006761e0  6a00                 push 0
// 006761e2  8bcb                 mov ecx, ebx
// 006761e4  ff1564428000         call dword ptr [0x804264]
// 006761ea  684cd68400           push 0x84d64c
// 006761ef  8bf0                 mov esi, eax
// 006761f1  ffd7                 call edi
// 006761f3  d97c2414             fnstcw word ptr [esp + 0x14]
// 006761f7  8944241c             mov dword ptr [esp + 0x1c], eax
// 006761fb  db44241c             fild dword ptr [esp + 0x1c]
// 006761ff  0fb7442414           movzx eax, word ptr [esp + 0x14]
// 00676204  0d000c0000           or eax, 0xc00
// 00676209  8944241c             mov dword ptr [esp + 0x1c], eax
// 0067620d  d84c242c             fmul dword ptr [esp + 0x2c]
// 00676211  83c404               add esp, 4
// 00676214  d96c2418             fldcw word ptr [esp + 0x18]
// 00676218  8bcb                 mov ecx, ebx
// 0067621a  df7c2418             fistp qword ptr [esp + 0x18]
// 0067621e  8b542418             mov edx, dword ptr [esp + 0x18]
// 00676222  52                   push edx
// 00676223  d96c2414             fldcw word ptr [esp + 0x14]
// 00676227  ff156c4c8000         call dword ptr [0x804c6c]
// 0067622d  d9442428             fld dword ptr [esp + 0x28]
// 00676231  dd0530d28400         fld qword ptr [0x84d230]
// 00676237  e8e4b90200           call 0x6a1c20
// 0067623c  d9542410             fst dword ptr [esp + 0x10]
// 00676240  8b2e                 mov ebp, dword ptr [esi]
// 00676242  d95c242c             fstp dword ptr [esp + 0x2c]
// 00676246  6848d68400           push 0x84d648
// 0067624b  ffd7                 call edi
// 0067624d  8944241c             mov dword ptr [esp + 0x1c], eax
// 00676251  db44241c             fild dword ptr [esp + 0x1c]
// 00676255  8b4548               mov eax, dword ptr [ebp + 0x48]
// 00676258  8bce                 mov ecx, esi
// 0067625a  d84c2430             fmul dword ptr [esp + 0x30]
// 0067625e  d91c24               fstp dword ptr [esp]
// 00676261  ffd0                 call eax
// 00676263  d9442410             fld dword ptr [esp + 0x10]
// 00676267  8b2e                 mov ebp, dword ptr [esi]
// 00676269  6844d68400           push 0x84d644
// 0067626e  d95c2430             fstp dword ptr [esp + 0x30]
// 00676272  ffd7                 call edi
// 00676274  8b554c               mov edx, dword ptr [ebp + 0x4c]
// 00676277  8944241c             mov dword ptr [esp + 0x1c], eax
// 0067627b  db44241c             fild dword ptr [esp + 0x1c]
// 0067627f  8bce                 mov ecx, esi
// 00676281  d84c2430             fmul dword ptr [esp + 0x30]
// 00676285  d91c24               fstp dword ptr [esp]
// 00676288  ffd2                 call edx
// 0067628a  d9442428             fld dword ptr [esp + 0x28]
// 0067628e  8b2e                 mov ebp, dword ptr [esi]
// 00676290  d82594748200         fsub dword ptr [0x827494]
// 00676296  6840d68400           push 0x84d640
// 0067629b  d80d182a8300         fmul dword ptr [0x832a18]
// 006762a1  d95c2414             fstp dword ptr [esp + 0x14]
// 006762a5  ffd7                 call edi
// 006762a7  8944241c             mov dword ptr [esp + 0x1c], eax
// 006762ab  db44241c             fild dword ptr [esp + 0x1c]
// 006762af  8b85c0000000         mov eax, dword ptr [ebp + 0xc0]
// 006762b5  8bce                 mov ecx, esi
// 006762b7  d8442414             fadd dword ptr [esp + 0x14]
// 006762bb  d91c24               fstp dword ptr [esp]
// 006762be  ffd0                 call eax
// 006762c0  8b2e                 mov ebp, dword ptr [esi]
// 006762c2  6840d68400           push 0x84d640
// 006762c7  ffd7                 call edi
// 006762c9  8b95c4000000         mov edx, dword ptr [ebp + 0xc4]
// 006762cf  8944241c             mov dword ptr [esp + 0x1c], eax
// 006762d3  db44241c             fild dword ptr [esp + 0x1c]
// 006762d7  8bce                 mov ecx, esi
// 006762d9  d8442414             fadd dword ptr [esp + 0x14]
// 006762dd  d91c24               fstp dword ptr [esp]
// 006762e0  ffd2                 call edx
// 006762e2  8b442444             mov eax, dword ptr [esp + 0x44]
// 006762e6  8b889c000000         mov ecx, dword ptr [eax + 0x9c]
// 006762ec  a16c4e8000           mov eax, dword ptr [0x804e6c]
// 006762f1  8b11                 mov edx, dword ptr [ecx]
// 006762f3  8b9288010000         mov edx, dword ptr [edx + 0x188]
// 006762f9  50                   push eax
// 006762fa  a188448000           mov eax, dword ptr [0x804488]
// 006762ff  50                   push eax
// 00676300  ffd2                 call edx
// 00676302  8be8                 mov ebp, eax
// 00676304  8b4500               mov eax, dword ptr [ebp]
// 00676307  8b9030010000         mov edx, dword ptr [eax + 0x130]
// 0067630d  8d7320               lea esi, [ebx + 0x20]
// 00676310  56                   push esi
// 00676311  8bcd                 mov ecx, ebp
// 00676313  896c2428             mov dword ptr [esp + 0x28], ebp
// 00676317  ffd2                 call edx
// 00676319  8b442414             mov eax, dword ptr [esp + 0x14]
// 0067631d  8b400c               mov eax, dword ptr [eax + 0xc]
// 00676320  85c0                 test eax, eax
// 00676322  7504                 jne 0x676328
// 00676324  33c9                 xor ecx, ecx
// 00676326  eb0c                 jmp 0x676334
// 00676328  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0067632c  8b4914               mov ecx, dword ptr [ecx + 0x14]
// 0067632f  2bc8                 sub ecx, eax
// 00676331  c1f902               sar ecx, 2
// 00676334  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00676338  8b7b10               mov edi, dword ptr [ebx + 0x10]
// 0067633b  8bd7                 mov edx, edi
// 0067633d  2bd0                 sub edx, eax
// 0067633f  c1fa02               sar edx, 2
// 00676342  3bd1                 cmp edx, ecx
// 00676344  730a                 jae 0x676350
// 00676346  892f                 mov dword ptr [edi], ebp
// 00676348  83c704               add edi, 4
// 0067634b  897b10               mov dword ptr [ebx + 0x10], edi
// 0067634e  eb1f                 jmp 0x67636f
// 00676350  3bc7                 cmp eax, edi
// 00676352  7606                 jbe 0x67635a
// 00676354  ff1590288000         call dword ptr [0x802890]
// 0067635a  8b03                 mov eax, dword ptr [ebx]
// 0067635c  8d4c2424             lea ecx, [esp + 0x24]
// 00676360  51                   push ecx
// 00676361  57                   push edi
// 00676362  50                   push eax
// 00676363  8d542444             lea edx, [esp + 0x44]
// 00676367  52                   push edx
// 00676368  8bcb                 mov ecx, ebx
// 0067636a  e8f118e5ff           call 0x4c7c60
// 0067636f  8d8424e0000000       lea eax, [esp + 0xe0]
// 00676376  50                   push eax
// 00676377  8d8c24ac000000       lea ecx, [esp + 0xac]
// 0067637e  ff1558248000         call dword ptr [0x802458]
// 00676384  8d8c24a8000000       lea ecx, [esp + 0xa8]
// 0067638b  51                   push ecx
// 0067638c  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00676390  c68424640100001c     mov byte ptr [esp + 0x164], 0x1c
// 00676398  e873b5ffff           call 0x671910
// 0067639d  8d8c24a8000000       lea ecx, [esp + 0xa8]
// 006763a4  8928                 mov dword ptr [eax], ebp
// 006763a6  c684246001000007     mov byte ptr [esp + 0x160], 7
// 006763ae  ff1568248000         call dword ptr [0x802468]
// 006763b4  8b16                 mov edx, dword ptr [esi]
// 006763b6  8b4240               mov eax, dword ptr [edx + 0x40]
// 006763b9  8bce                 mov ecx, esi
// 006763bb  ffd0                 call eax
// 006763bd  50                   push eax
// 006763be  8d8c2440010000       lea ecx, [esp + 0x140]
// 006763c5  6814d58400           push 0x84d514
// 006763ca  51                   push ecx
// 006763cb  ff1568238000         call dword ptr [0x802368]
// 006763d1  83c40c               add esp, 0xc
// 006763d4  6a00                 push 0
// 006763d6  6a02                 push 2
// 006763d8  50                   push eax
// 006763d9  c684246c0100001d     mov byte ptr [esp + 0x16c], 0x1d
// 006763e1  ff15744e8000         call dword ptr [0x804e74]
// 006763e7  8bc8                 mov ecx, eax
// 006763e9  ff15784e8000         call dword ptr [0x804e78]
// 006763ef  8d8c243c010000       lea ecx, [esp + 0x13c]
// 006763f6  c684246001000007     mov byte ptr [esp + 0x160], 7
// 006763fe  ff1568248000         call dword ptr [0x802468]
// 00676404  d944246c             fld dword ptr [esp + 0x6c]
// 00676408  8b5500               mov edx, dword ptr [ebp]
// 0067640b  8b4268               mov eax, dword ptr [edx + 0x68]
// 0067640e  83ec0c               sub esp, 0xc
// 00676411  d95c2408             fstp dword ptr [esp + 8]
// 00676415  8bcd                 mov ecx, ebp
// 00676417  d9442474             fld dword ptr [esp + 0x74]
// 0067641b  d95c2404             fstp dword ptr [esp + 4]
// 0067641f  d9442470             fld dword ptr [esp + 0x70]
// 00676423  d91c24               fstp dword ptr [esp]
// 00676426  ffd0                 call eax
// 00676428  33f6                 xor esi, esi
// 0067642a  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 00676431  3bc6                 cmp eax, esi
// 00676433  7409                 je 0x67643e
// 00676435  50                   push eax
// 00676436  e83fa20200           call 0x6a067a
// 0067643b  83c404               add esp, 4
// 0067643e  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 00676442  51                   push ecx
// 00676443  89b42484000000       mov dword ptr [esp + 0x84], esi
// 0067644a  89b42488000000       mov dword ptr [esp + 0x88], esi
// 00676451  89b4248c000000       mov dword ptr [esp + 0x8c], esi
// 00676458  e81da20200           call 0x6a067a
// 0067645d  83c404               add esp, 4
// 00676460  8b8c2458010000       mov ecx, dword ptr [esp + 0x158]
// 00676467  5f                   pop edi
// 00676468  5e                   pop esi
// 00676469  5d                   pop ebp
// 0067646a  5b                   pop ebx
// 0067646b  64890d00000000       mov dword ptr fs:[0], ecx
// 00676472  81c454010000         add esp, 0x154
// 00676478  c20c00               ret 0xc

// from server: 73% by king_originala
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
#include <algorithm>
#include <cassert>
#include <bitset>
#include <cfloat>
#include <cmath>
#include <cstddef>
#include <ctime>
#include <deque>
#include <fstream>
#include <functional>
#include <hash_map>
#include <hash_set>
#include <iomanip>
#include <iostream>
#include <limits>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stdexcept>
#include <string>
#include <vector>
#define _OgreExport __declspec(dllimport)
// Full explosion source attempt; genuine used Ogre andG3D interfaces.
namespace Ogre {class InstancedGeometry;class MaterialSerializer;class PlaneBoundedVolumeListSceneQuery;class Light {public:enum LightTypes {LT_POINT,LT_DIRECTIONAL,LT_SPOTLIGHT};};}
namespace Ogre{typedef unsigned int uint32;typedef unsigned short uint16;typedef unsigned char uint8;}
namespace Ogre{class __declspec(dllimport)MemoryManager{public:static MemoryManager&instance(void);MemoryManager();~MemoryManager();void*allocMem(const char*szFile,size_t uLine,size_t count)throw();void*rllocMem(const char*szFile,size_t uLine,void*ptr,size_t count)throw();void*cllocMem(const char*szFile,size_t uLine,size_t num,size_t size)throw();void dllocMem(const char*szFile,size_t uLine,void*ptr)throw();};}
namespace Ogre{typedef float Real;typedef unsigned char uchar;typedef unsigned short ushort;typedef unsigned int uint;typedef unsigned long ulong;typedef std::string _StringBase;typedef _StringBase String;class Angle;class Animation;class AnimationState;class AnimationStateSet;class AnimationTrack;class Archive;class ArchiveFactory;class ArchiveManager;class AutoParamDataSource;class AxisAlignedBox;class AxisAlignedBoxSceneQuery;class Billboard;class BillboardChain;class BillboardSet;class Bone;class Camera;class Codec;class ColourValue;class ConfigDialog;template<typename T>class Controller;template<typename T>class ControllerFunction;class ControllerManager;template<typename T>class ControllerValue;class Degree;class DynLib;class DynLibManager;class EdgeData;class EdgeListBuilder;class Entity;class ErrorDialog;class ExternalTextureSourceManager;class Factory;class Font;class FontPtr;class FontManager;struct FrameEvent;class FrameListener;class Frustum;class GpuProgram;class GpuProgramPtr;class GpuProgramManager;class GpuProgramUsage;class HardwareIndexBuffer;class HardwareOcclusionQuery;class HardwareVertexBuffer;class HardwarePixelBuffer;class HardwarePixelBufferSharedPtr;class HighLevelGpuProgram;class HighLevelGpuProgramPtr;class HighLevelGpuProgramManager;class HighLevelGpuProgramFactory;class IndexData;class IntersectionSceneQuery;class IntersectionSceneQueryListener;class Image;class KeyFrame;class Light;class Log;class LogManager;class ManualResourceLoader;class ManualObject;class Material;class MaterialPtr;class MaterialManager;class MaterialScriptCompiler;class Math;class Matrix3;class Matrix4;class MemoryManager;class Mesh;class MeshPtr;class MeshSerializer;class MeshSerializerImpl;class MeshManager;class MovableObject;class MovablePlane;class Node;class NodeAnimationTrack;class NodeKeyFrame;class NumericAnimationTrack;class NumericKeyFrame;class Overlay;class OverlayContainer;class OverlayElement;class OverlayElementFactory;class OverlayManager;class Particle;class ParticleAffector;class ParticleAffectorFactory;class ParticleEmitter;class ParticleEmitterFactory;class ParticleSystem;class ParticleSystemManager;class ParticleSystemRenderer;class ParticleSystemRendererFactory;class ParticleVisualData;class Pass;class PatchMesh;class PixelBox;class Plane;class PlaneBoundedVolume;class Plugin;class Pose;class ProgressiveMesh;class Profile;class Profiler;class Quaternion;class Radian;class Ray;class RaySceneQuery;class RaySceneQueryListener;class Renderable;class RenderPriorityGroup;class RenderQueue;class RenderQueueGroup;class RenderQueueInvocation;class RenderQueueInvocationSequence;class RenderQueueListener;class RenderSystem;class RenderSystemCapabilities;class RenderTarget;class RenderTargetListener;class RenderTexture;class MultiRenderTarget;class RenderWindow;class RenderOperation;class Resource;class ResourceBackgroundQueue;class ResourceGroupManager;class ResourceManager;class RibbonTrail;class Root;class SceneManager;class SceneManagerEnumerator;class SceneNode;class SceneQuery;class SceneQueryListener;class ScriptLoader;class Serializer;class ShadowCaster;class ShadowRenderable;class ShadowTextureManager;class SimpleRenderable;class SimpleSpline;class Skeleton;class SkeletonPtr;class SkeletonInstance;class SkeletonManager;class Sphere;class SphereSceneQuery;class StaticGeometry;class StringConverter;class StringInterface;class SubEntity;class SubMesh;class TagPoint;class Technique;class TempBlendedBufferInfo;class ExternalTextureSource;class TextureUnitState;class Texture;class TexturePtr;class TextureFont;class TextureManager;class TransformKeyFrame;class Timer;class UserDefinedObject;class Vector2;class Vector3;class Vector4;class Viewport;class VertexAnimationTrack;class VertexBufferBinding;class VertexData;class VertexDeclaration;class VertexMorphKeyFrame;class WireBoundingBox;class Compositor;class CompositorManager;class CompositorChain;class CompositorInstance;class CompositionTechnique;class CompositionPass;class CompositionTargetPass;}
namespace Ogre{class Radian{Real mRad;public:explicit Radian(Real r=0):mRad(r){}Radian(const Degree&d);Radian&operator=(const Real&f){mRad=f;return*this;}Radian&operator=(const Radian&r){mRad=r.mRad;return*this;}Radian&operator=(const Degree&d);Real valueDegrees()const;Real valueRadians()const{return mRad;}Real valueAngleUnits()const;const Radian&operator+()const{return*this;}Radian operator+(const Radian&r)const{return Radian(mRad+r.mRad);}Radian operator+(const Degree&d)const;Radian&operator+=(const Radian&r){mRad+=r.mRad;return*this;}Radian&operator+=(const Degree&d);Radian operator-()const{return Radian(-mRad);}Radian operator-(const Radian&r)const{return Radian(mRad-r.mRad);}Radian operator-(const Degree&d)const;Radian&operator-=(const Radian&r){mRad-=r.mRad;return*this;}Radian&operator-=(const Degree&d);Radian operator*(Real f)const{return Radian(mRad*f);}Radian operator*(const Radian&f)const{return Radian(mRad*f.mRad);}Radian&operator*=(Real f){mRad*=f;return*this;}Radian operator/(Real f)const{return Radian(mRad/f);}Radian&operator/=(Real f){mRad/=f;return*this;}bool operator<(const Radian&r)const{return mRad<r.mRad;}bool operator<=(const Radian&r)const{return mRad<=r.mRad;}bool operator==(const Radian&r)const{return mRad==r.mRad;}bool operator!=(const Radian&r)const{return mRad!=r.mRad;}bool operator>=(const Radian&r)const{return mRad>=r.mRad;}bool operator>(const Radian&r)const{return mRad>r.mRad;}};class Degree{Real mDeg;public:explicit Degree(Real d=0):mDeg(d){}Degree(const Radian&r):mDeg(r.valueDegrees()){}Degree&operator=(const Real&f){mDeg=f;return*this;}Degree&operator=(const Degree&d){mDeg=d.mDeg;return*this;}Degree&operator=(const Radian&r){mDeg=r.valueDegrees();return*this;}Real valueDegrees()const{return mDeg;}Real valueRadians()const;Real valueAngleUnits()const;const Degree&operator+()const{return*this;}Degree operator+(const Degree&d)const{return Degree(mDeg+d.mDeg);}Degree operator+(const Radian&r)const{return Degree(mDeg+r.valueDegrees());}Degree&operator+=(const Degree&d){mDeg+=d.mDeg;return*this;}Degree&operator+=(const Radian&r){mDeg+=r.valueDegrees();return*this;}Degree operator-()const{return Degree(-mDeg);}Degree operator-(const Degree&d)const{return Degree(mDeg-d.mDeg);}Degree operator-(const Radian&r)const{return Degree(mDeg-r.valueDegrees());}Degree&operator-=(const Degree&d){mDeg-=d.mDeg;return*this;}Degree&operator-=(const Radian&r){mDeg-=r.valueDegrees();return*this;}Degree operator*(Real f)const{return Degree(mDeg*f);}Degree operator*(const Degree&f)const{return Degree(mDeg*f.mDeg);}Degree&operator*=(Real f){mDeg*=f;return*this;}Degree operator/(Real f)const{return Degree(mDeg/f);}Degree&operator/=(Real f){mDeg/=f;return*this;}bool operator<(const Degree&d)const{return mDeg<d.mDeg;}bool operator<=(const Degree&d)const{return mDeg<=d.mDeg;}bool operator==(const Degree&d)const{return mDeg==d.mDeg;}bool operator!=(const Degree&d)const{return mDeg!=d.mDeg;}bool operator>=(const Degree&d)const{return mDeg>=d.mDeg;}bool operator>(const Degree&d)const{return mDeg>d.mDeg;}};class Angle{Real mAngle;public:explicit Angle(Real angle):mAngle(angle){}operator Radian()const;operator Degree()const;};inline Radian::Radian(const Degree&d):mRad(d.valueRadians()){}inline Radian&Radian::operator=(const Degree&d){mRad=d.valueRadians();return*this;}inline Radian Radian::operator+(const Degree&d)const{return Radian(mRad+d.valueRadians());}inline Radian&Radian::operator+=(const Degree&d){mRad+=d.valueRadians();return*this;}inline Radian Radian::operator-(const Degree&d)const{return Radian(mRad-d.valueRadians());}inline Radian&Radian::operator-=(const Degree&d){mRad-=d.valueRadians();return*this;}class __declspec(dllimport)Math{public:enum AngleUnit{AU_DEGREE,AU_RADIAN};protected:static AngleUnit msAngleUnit;static int mTrigTableSize;static Real mTrigTableFactor;static Real*mSinTable;static Real*mTanTable;void buildTrigTables();static Real SinTable(Real fValue);static Real TanTable(Real fValue);public:Math(unsigned int trigTableSize=4096);~Math();static inline int IAbs(int iValue){return(iValue>=0?iValue:-iValue);}static inline int ICeil(float fValue){return int(ceil(fValue));}static inline int IFloor(float fValue){return int(floor(fValue));}static int ISign(int iValue);static inline Real Abs(Real fValue){return Real(fabs(fValue));}static inline Degree Abs(const Degree&dValue){return Degree(fabs(dValue.valueDegrees()));}static inline Radian Abs(const Radian&rValue){return Radian(fabs(rValue.valueRadians()));}static Radian ACos(Real fValue);static Radian ASin(Real fValue);static inline Radian ATan(Real fValue){return Radian(atan(fValue));}static inline Radian ATan2(Real fY,Real fX){return Radian(atan2(fY,fX));}static inline Real Ceil(Real fValue){return Real(ceil(fValue));}static inline Real Cos(const Radian&fValue,bool useTables=false){return(!useTables)?Real(cos(fValue.valueRadians())):SinTable(fValue.valueRadians()+HALF_PI);}static inline Real Cos(Real fValue,bool useTables=false){return(!useTables)?Real(cos(fValue)):SinTable(fValue+HALF_PI);}static inline Real Exp(Real fValue){return Real(exp(fValue));}static inline Real Floor(Real fValue){return Real(floor(fValue));}static inline Real Log(Real fValue){return Real(log(fValue));}static inline Real Pow(Real fBase,Real fExponent){return Real(pow(fBase,fExponent));}static Real Sign(Real fValue);static inline Radian Sign(const Radian&rValue){return Radian(Sign(rValue.valueRadians()));}static inline Degree Sign(const Degree&dValue){return Degree(Sign(dValue.valueDegrees()));}static inline Real Sin(const Radian&fValue,bool useTables=false){return(!useTables)?Real(sin(fValue.valueRadians())):SinTable(fValue.valueRadians());}static inline Real Sin(Real fValue,bool useTables=false){return(!useTables)?Real(sin(fValue)):SinTable(fValue);}static inline Real Sqr(Real fValue){return fValue*fValue;}static inline Real Sqrt(Real fValue){return Real(sqrt(fValue));}static inline Radian Sqrt(const Radian&fValue){return Radian(sqrt(fValue.valueRadians()));}static inline Degree Sqrt(const Degree&fValue){return Degree(sqrt(fValue.valueDegrees()));}static Real InvSqrt(Real fValue);static Real UnitRandom();static Real RangeRandom(Real fLow,Real fHigh);static Real SymmetricRandom();static inline Real Tan(const Radian&fValue,bool useTables=false){return(!useTables)?Real(tan(fValue.valueRadians())):TanTable(fValue.valueRadians());}static inline Real Tan(Real fValue,bool useTables=false){return(!useTables)?Real(tan(fValue)):TanTable(fValue);}static inline Real DegreesToRadians(Real degrees){return degrees*fDeg2Rad;}static inline Real RadiansToDegrees(Real radians){return radians*fRad2Deg;}static void setAngleUnit(AngleUnit unit);static AngleUnit getAngleUnit(void);static Real AngleUnitsToRadians(Real units);static Real RadiansToAngleUnits(Real radians);static Real AngleUnitsToDegrees(Real units);static Real DegreesToAngleUnits(Real degrees);static bool pointInTri2D(const Vector2&p,const Vector2&a,const Vector2&b,const Vector2&c);static bool pointInTri3D(const Vector3&p,const Vector3&a,const Vector3&b,const Vector3&c,const Vector3&normal);static std::pair<bool,Real>intersects(const Ray&ray,const Plane&plane);static std::pair<bool,Real>intersects(const Ray&ray,const Sphere&sphere,bool discardInside=true);static std::pair<bool,Real>intersects(const Ray&ray,const AxisAlignedBox&box);static bool intersects(const Ray&ray,const AxisAlignedBox&box,Real*d1,Real*d2);static std::pair<bool,Real>intersects(const Ray&ray,const Vector3&a,const Vector3&b,const Vector3&c,const Vector3&normal,bool positiveSide=true,bool negativeSide=true);static std::pair<bool,Real>intersects(const Ray&ray,const Vector3&a,const Vector3&b,const Vector3&c,bool positiveSide=true,bool negativeSide=true);static bool intersects(const Sphere&sphere,const AxisAlignedBox&box);static bool intersects(const Plane&plane,const AxisAlignedBox&box);static std::pair<bool,Real>intersects(const Ray&ray,const std::vector<Plane>&planeList,bool normalIsOutside);static std::pair<bool,Real>intersects(const Ray&ray,const std::list<Plane>&planeList,bool normalIsOutside);static bool intersects(const Sphere&sphere,const Plane&plane);static bool RealEqual(Real a,Real b,Real tolerance=std::numeric_limits<Real>::epsilon());static Vector3 calculateTangentSpaceVector(const Vector3&position1,const Vector3&position2,const Vector3&position3,Real u1,Real v1,Real u2,Real v2,Real u3,Real v3);static Matrix4 buildReflectionMatrix(const Plane&p);static Vector4 calculateFaceNormal(const Vector3&v1,const Vector3&v2,const Vector3&v3);static Vector3 calculateBasicFaceNormal(const Vector3&v1,const Vector3&v2,const Vector3&v3);static Vector4 calculateFaceNormalWithoutNormalize(const Vector3&v1,const Vector3&v2,const Vector3&v3);static Vector3 calculateBasicFaceNormalWithoutNormalize(const Vector3&v1,const Vector3&v2,const Vector3&v3);static Real gaussianDistribution(Real x,Real offset=0.0f,Real scale=1.0f);static const Real POS_INFINITY;static const Real NEG_INFINITY;static const Real PI;static const Real TWO_PI;static const Real HALF_PI;static const Real fDeg2Rad;static const Real fRad2Deg;};inline Real Radian::valueDegrees()const{return Math::RadiansToDegrees(mRad);}inline Real Radian::valueAngleUnits()const{return Math::RadiansToAngleUnits(mRad);}inline Real Degree::valueRadians()const{return Math::DegreesToRadians(mDeg);}inline Real Degree::valueAngleUnits()const{return Math::DegreesToAngleUnits(mDeg);}inline Angle::operator Radian()const{return Radian(Math::AngleUnitsToRadians(mAngle));}inline Angle::operator Degree()const{return Degree(Math::AngleUnitsToDegrees(mAngle));}inline Radian operator*(Real a,const Radian&b){return Radian(a*b.valueRadians());}inline Radian operator/(Real a,const Radian&b){return Radian(a/b.valueRadians());}inline Degree operator*(Real a,const Degree&b){return Degree(a*b.valueDegrees());}inline Degree operator/(Real a,const Degree&b){return Degree(a/b.valueDegrees());}}
namespace Ogre{class __declspec(dllimport)Quaternion{public:inline Quaternion(Real fW=1.0,Real fX=0.0,Real fY=0.0,Real fZ=0.0){w=fW;x=fX;y=fY;z=fZ;}inline Quaternion(const Quaternion&rkQ){w=rkQ.w;x=rkQ.x;y=rkQ.y;z=rkQ.z;}inline Quaternion(const Matrix3&rot){this->FromRotationMatrix(rot);}inline Quaternion(const Radian&rfAngle,const Vector3&rkAxis){this->FromAngleAxis(rfAngle,rkAxis);}inline Quaternion(const Vector3&xaxis,const Vector3&yaxis,const Vector3&zaxis){this->FromAxes(xaxis,yaxis,zaxis);}inline Quaternion(const Vector3*akAxis){this->FromAxes(akAxis);}inline Quaternion(Real*valptr){memcpy(&w,valptr,sizeof(Real)*4);}inline Real operator[](const size_t i)const{((void)0);return*(&w+i);}inline Real&operator[](const size_t i){((void)0);return*(&w+i);}inline Real*ptr(){return&w;}inline const Real*ptr()const{return&w;}void FromRotationMatrix(const Matrix3&kRot);void ToRotationMatrix(Matrix3&kRot)const;void FromAngleAxis(const Radian&rfAngle,const Vector3&rkAxis);void ToAngleAxis(Radian&rfAngle,Vector3&rkAxis)const;inline void ToAngleAxis(Degree&dAngle,Vector3&rkAxis)const{Radian rAngle;ToAngleAxis(rAngle,rkAxis);dAngle=rAngle;}void FromAxes(const Vector3*akAxis);void FromAxes(const Vector3&xAxis,const Vector3&yAxis,const Vector3&zAxis);void ToAxes(Vector3*akAxis)const;void ToAxes(Vector3&xAxis,Vector3&yAxis,Vector3&zAxis)const;Vector3 xAxis(void)const;Vector3 yAxis(void)const;Vector3 zAxis(void)const;inline Quaternion&operator=(const Quaternion&rkQ){w=rkQ.w;x=rkQ.x;y=rkQ.y;z=rkQ.z;return*this;}Quaternion operator+(const Quaternion&rkQ)const;Quaternion operator-(const Quaternion&rkQ)const;Quaternion operator*(const Quaternion&rkQ)const;Quaternion operator*(Real fScalar)const;__declspec(dllimport)friend Quaternion operator*(Real fScalar,const Quaternion&rkQ);Quaternion operator-()const;inline bool operator==(const Quaternion&rhs)const{return(rhs.x==x)&&(rhs.y==y)&&(rhs.z==z)&&(rhs.w==w);}inline bool operator!=(const Quaternion&rhs)const{return!operator==(rhs);}Real Dot(const Quaternion&rkQ)const;Real Norm()const;Real normalise(void);Quaternion Inverse()const;Quaternion UnitInverse()const;Quaternion Exp()const;Quaternion Log()const;Vector3 operator*(const Vector3&rkVector)const;Radian getRoll(bool reprojectAxis=true)const;Radian getPitch(bool reprojectAxis=true)const;Radian getYaw(bool reprojectAxis=true)const;bool equals(const Quaternion&rhs,const Radian&tolerance)const;static Quaternion Slerp(Real fT,const Quaternion&rkP,const Quaternion&rkQ,bool shortestPath=false);static Quaternion SlerpExtraSpins(Real fT,const Quaternion&rkP,const Quaternion&rkQ,int iExtraSpins);static void Intermediate(const Quaternion&rkQ0,const Quaternion&rkQ1,const Quaternion&rkQ2,Quaternion&rka,Quaternion&rkB);static Quaternion Squad(Real fT,const Quaternion&rkP,const Quaternion&rkA,const Quaternion&rkB,const Quaternion&rkQ,bool shortestPath=false);static Quaternion nlerp(Real fT,const Quaternion&rkP,const Quaternion&rkQ,bool shortestPath=false);static const Real ms_fEpsilon;static const Quaternion ZERO;static const Quaternion IDENTITY;Real w,x,y,z;inline __declspec(dllimport)friend std::ostream&operator<<(std::ostream&o,const Quaternion&q){o<<"Quaternion("<<q.w<<", "<<q.x<<", "<<q.y<<", "<<q.z<<")";return o;}};}
namespace Ogre{class __declspec(dllimport)Vector3{public:Real x,y,z;public:inline Vector3(){}inline Vector3(const Real fX,const Real fY,const Real fZ):x(fX),y(fY),z(fZ){}inline explicit Vector3(const Real afCoordinate[3]):x(afCoordinate[0]),y(afCoordinate[1]),z(afCoordinate[2]){}inline explicit Vector3(const int afCoordinate[3]){x=(Real)afCoordinate[0];y=(Real)afCoordinate[1];z=(Real)afCoordinate[2];}inline explicit Vector3(Real*const r):x(r[0]),y(r[1]),z(r[2]){}inline explicit Vector3(const Real scaler):x(scaler),y(scaler),z(scaler){}Vector3(const Vector3&);inline Real operator[](const size_t i)const{((void)0);return*(&x+i);}inline Real&operator[](const size_t i){((void)0);return*(&x+i);}inline Real*ptr(){return&x;}inline const Real*ptr()const{return&x;}inline Vector3&operator=(const Vector3&rkVector){x=rkVector.x;y=rkVector.y;z=rkVector.z;return*this;}inline Vector3&operator=(const Real fScaler){x=fScaler;y=fScaler;z=fScaler;return*this;}inline bool operator==(const Vector3&rkVector)const{return(x==rkVector.x&&y==rkVector.y&&z==rkVector.z);}inline bool operator!=(const Vector3&rkVector)const{return(x!=rkVector.x||y!=rkVector.y||z!=rkVector.z);}inline Vector3 operator+(const Vector3&rkVector)const{return Vector3(x+rkVector.x,y+rkVector.y,z+rkVector.z);}inline Vector3 operator-(const Vector3&rkVector)const{return Vector3(x-rkVector.x,y-rkVector.y,z-rkVector.z);}inline Vector3 operator*(const Real fScalar)const{return Vector3(x*fScalar,y*fScalar,z*fScalar);}inline Vector3 operator*(const Vector3&rhs)const{return Vector3(x*rhs.x,y*rhs.y,z*rhs.z);}inline Vector3 operator/(const Real fScalar)const{((void)0);Real fInv=1.0/fScalar;return Vector3(x*fInv,y*fInv,z*fInv);}inline Vector3 operator/(const Vector3&rhs)const{return Vector3(x/rhs.x,y/rhs.y,z/rhs.z);}inline const Vector3&operator+()const{return*this;}inline Vector3 operator-()const{return Vector3(-x,-y,-z);}inline friend Vector3 operator*(const Real fScalar,const Vector3&rkVector){return Vector3(fScalar*rkVector.x,fScalar*rkVector.y,fScalar*rkVector.z);}inline friend Vector3 operator/(const Real fScalar,const Vector3&rkVector){return Vector3(fScalar/rkVector.x,fScalar/rkVector.y,fScalar/rkVector.z);}inline friend Vector3 operator+(const Vector3&lhs,const Real rhs){return Vector3(lhs.x+rhs,lhs.y+rhs,lhs.z+rhs);}inline friend Vector3 operator+(const Real lhs,const Vector3&rhs){return Vector3(lhs+rhs.x,lhs+rhs.y,lhs+rhs.z);}inline friend Vector3 operator-(const Vector3&lhs,const Real rhs){return Vector3(lhs.x-rhs,lhs.y-rhs,lhs.z-rhs);}inline friend Vector3 operator-(const Real lhs,const Vector3&rhs){return Vector3(lhs-rhs.x,lhs-rhs.y,lhs-rhs.z);}inline Vector3&operator+=(const Vector3&rkVector){x+=rkVector.x;y+=rkVector.y;z+=rkVector.z;return*this;}inline Vector3&operator+=(const Real fScalar){x+=fScalar;y+=fScalar;z+=fScalar;return*this;}inline Vector3&operator-=(const Vector3&rkVector){x-=rkVector.x;y-=rkVector.y;z-=rkVector.z;return*this;}inline Vector3&operator-=(const Real fScalar){x-=fScalar;y-=fScalar;z-=fScalar;return*this;}inline Vector3&operator*=(const Real fScalar){x*=fScalar;y*=fScalar;z*=fScalar;return*this;}inline Vector3&operator*=(const Vector3&rkVector){x*=rkVector.x;y*=rkVector.y;z*=rkVector.z;return*this;}inline Vector3&operator/=(const Real fScalar){((void)0);Real fInv=1.0/fScalar;x*=fInv;y*=fInv;z*=fInv;return*this;}inline Vector3&operator/=(const Vector3&rkVector){x/=rkVector.x;y/=rkVector.y;z/=rkVector.z;return*this;}inline Real length()const{return Math::Sqrt(x*x+y*y+z*z);}inline Real squaredLength()const{return x*x+y*y+z*z;}inline Real distance(const Vector3&rhs)const{return(*this-rhs).length();}inline Real squaredDistance(const Vector3&rhs)const{return(*this-rhs).squaredLength();}inline Real dotProduct(const Vector3&vec)const{return x*vec.x+y*vec.y+z*vec.z;}inline Real absDotProduct(const Vector3&vec)const{return Math::Abs(x*vec.x)+Math::Abs(y*vec.y)+Math::Abs(z*vec.z);}inline Real normalise(){Real fLength=Math::Sqrt(x*x+y*y+z*z);if(fLength>1e-08){Real fInvLength=1.0/fLength;x*=fInvLength;y*=fInvLength;z*=fInvLength;}return fLength;}inline Vector3 crossProduct(const Vector3&rkVector)const{return Vector3(y*rkVector.z-z*rkVector.y,z*rkVector.x-x*rkVector.z,x*rkVector.y-y*rkVector.x);}inline Vector3 midPoint(const Vector3&vec)const{return Vector3((x+vec.x)*0.5,(y+vec.y)*0.5,(z+vec.z)*0.5);}inline bool operator<(const Vector3&rhs)const{if(x<rhs.x&&y<rhs.y&&z<rhs.z)return true;return false;}inline bool operator>(const Vector3&rhs)const{if(x>rhs.x&&y>rhs.y&&z>rhs.z)return true;return false;}inline void makeFloor(const Vector3&cmp){if(cmp.x<x)x=cmp.x;if(cmp.y<y)y=cmp.y;if(cmp.z<z)z=cmp.z;}inline void makeCeil(const Vector3&cmp){if(cmp.x>x)x=cmp.x;if(cmp.y>y)y=cmp.y;if(cmp.z>z)z=cmp.z;}inline Vector3 perpendicular(void)const{static const Real fSquareZero=1e-06*1e-06;Vector3 perp=this->crossProduct(Vector3::UNIT_X);if(perp.squaredLength()<fSquareZero){perp=this->crossProduct(Vector3::UNIT_Y);}perp.normalise();return perp;}inline Vector3 randomDeviant(const Radian&angle,const Vector3&up=Vector3::ZERO)const{Vector3 newUp;if(up==Vector3::ZERO){newUp=this->perpendicular();}else{newUp=up;}Quaternion q;q.FromAngleAxis(Radian(Math::UnitRandom()*Math::TWO_PI),*this);newUp=q*newUp;q.FromAngleAxis(angle,newUp);return q*(*this);}Quaternion getRotationTo(const Vector3&dest,const Vector3&fallbackAxis=Vector3::ZERO)const{Quaternion q;Vector3 v0=*this;Vector3 v1=dest;v0.normalise();v1.normalise();Real d=v0.dotProduct(v1);if(d>=1.0f){return Quaternion::IDENTITY;}if(d<(1e-6f-1.0f)){if(fallbackAxis!=Vector3::ZERO){q.FromAngleAxis(Radian(Math::PI),fallbackAxis);}else{Vector3 axis=Vector3::UNIT_X.crossProduct(*this);if(axis.isZeroLength())axis=Vector3::UNIT_Y.crossProduct(*this);axis.normalise();q.FromAngleAxis(Radian(Math::PI),axis);}}else{Real s=Math::Sqrt((1+d)*2);Real invs=1/s;Vector3 c=v0.crossProduct(v1);q.x=c.x*invs;q.y=c.y*invs;q.z=c.z*invs;q.w=s*0.5;q.normalise();}return q;}inline bool isZeroLength(void)const{Real sqlen=(x*x)+(y*y)+(z*z);return(sqlen<(1e-06*1e-06));}inline Vector3 normalisedCopy(void)const{Vector3 ret=*this;ret.normalise();return ret;}inline Vector3 reflect(const Vector3&normal)const{return Vector3(*this-(2*this->dotProduct(normal)*normal));}inline bool positionEquals(const Vector3&rhs,Real tolerance=1e-03)const{return Math::RealEqual(x,rhs.x,tolerance)&&Math::RealEqual(y,rhs.y,tolerance)&&Math::RealEqual(z,rhs.z,tolerance);}inline bool positionCloses(const Vector3&rhs,Real tolerance=1e-03f)const{return squaredDistance(rhs)<=(squaredLength()+rhs.squaredLength())*tolerance;}inline bool directionEquals(const Vector3&rhs,const Radian&tolerance)const{Real dot=dotProduct(rhs);Radian angle=Math::ACos(dot);return Math::Abs(angle.valueRadians())<=tolerance.valueRadians();}static const Vector3 ZERO;static const Vector3 UNIT_X;static const Vector3 UNIT_Y;static const Vector3 UNIT_Z;static const Vector3 NEGATIVE_UNIT_X;static const Vector3 NEGATIVE_UNIT_Y;static const Vector3 NEGATIVE_UNIT_Z;static const Vector3 UNIT_SCALE;inline __declspec(dllimport)friend std::ostream&operator<<(std::ostream&o,const Vector3&v){o<<"Vector3("<<v.x<<", "<<v.y<<", "<<v.z<<")";return o;}};}
namespace Ogre{class __declspec(dllimport)Sphere{protected:Real mRadius;Vector3 mCenter;public:Sphere():mRadius(1.0),mCenter(Vector3::ZERO){}__forceinline Sphere(const Vector3&center,Real radius):mRadius(radius),mCenter(center){}Real getRadius(void)const{return mRadius;}void setRadius(Real radius){mRadius=radius;}const Vector3&getCenter(void)const{return mCenter;}void setCenter(const Vector3&center){mCenter=center;}bool intersects(const Sphere&s)const{return(s.mCenter-mCenter).squaredLength()<=Math::Sqr(s.mRadius+mRadius);}bool intersects(const AxisAlignedBox&box)const{return Math::intersects(*this,box);}bool intersects(const Plane&plane)const{return Math::intersects(*this,plane);}bool intersects(const Vector3&v)const{return((v-mCenter).squaredLength()<=Math::Sqr(mRadius));}};}
namespace Ogre{class __declspec(dllimport)StringUtil{public:typedef std::ostringstream StrStreamType;static void trim(String&str,bool left=true,bool right=true);static std::vector<String>split(const String&str,const String&delims="\t\n ",unsigned int maxSplits=0);static void toLowerCase(String&str);static void toUpperCase(String&str);static bool startsWith(const String&str,const String&pattern,bool lowerCase=true);static bool endsWith(const String&str,const String&pattern,bool lowerCase=true);static String standardisePath(const String&init);static void splitFilename(const String&qualifiedName,String&outBasename,String&outPath);static void splitFullFilename(const Ogre::String&qualifiedName,Ogre::String&outBasename,Ogre::String&outExtention,Ogre::String&outPath);static void splitBaseFilename(const Ogre::String&fullName,Ogre::String&outBasename,Ogre::String&outExtention);static bool match(const String&str,const String&pattern,bool caseSensitive=true);static const String BLANK;};typedef stdext::hash_compare<_StringBase,std::less<_StringBase> >_StringHash;}
namespace Ogre{template<class T>class VectorIterator{private:typename T::iterator mCurrent;typename T::iterator mEnd;VectorIterator(){};public:typedef typename T::value_type ValueType;VectorIterator(typename T::iterator start,typename T::iterator end):mCurrent(start),mEnd(end){}explicit VectorIterator(T&c):mCurrent(c.begin()),mEnd(c.end()){}bool hasMoreElements(void)const{return mCurrent!=mEnd;}typename T::value_type getNext(void){return*mCurrent++;}typename T::value_type peekNext(void){return*mCurrent;}typename T::pointer peekNextPtr(void){return&(*mCurrent);}void moveNext(void){++mCurrent;}};template<class T>class MapIterator{private:typename T::iterator mCurrent;typename T::iterator mEnd;MapIterator(){};public:typedef typename T::mapped_type MappedType;typedef typename T::key_type KeyType;MapIterator(typename T::iterator start,typename T::iterator end):mCurrent(start),mEnd(end){}explicit MapIterator(T&c):mCurrent(c.begin()),mEnd(c.end()){}bool hasMoreElements(void)const{return mCurrent!=mEnd;}typename T::mapped_type getNext(void){return(mCurrent++)->second;}typename T::mapped_type peekNextValue(void){return mCurrent->second;}typename T::key_type peekNextKey(void){return mCurrent->first;}MapIterator<T>&operator=(MapIterator<T>&rhs){mCurrent=rhs.mCurrent;mEnd=rhs.mEnd;return*this;}typename T::mapped_type*peekNextValuePtr(void){return&(mCurrent->second);}void moveNext(void){++mCurrent;}};template<class T>class ConstVectorIterator{private:mutable typename T::const_iterator mCurrent;typename T::const_iterator mEnd;ConstVectorIterator(){};public:typedef typename T::value_type ValueType;ConstVectorIterator(typename T::const_iterator start,typename T::const_iterator end):mCurrent(start),mEnd(end){}explicit ConstVectorIterator(const T&c):mCurrent(c.begin()),mEnd(c.end()){}bool hasMoreElements(void)const{return mCurrent!=mEnd;}typename T::value_type getNext(void){return*mCurrent++;}typename T::value_type peekNext(void)const{return*mCurrent;}typename T::const_pointer peekNextPtr(void)const{return&(*mCurrent);}void moveNext(void)const{++mCurrent;}};template<class T>class ConstMapIterator{private:mutable typename T::const_iterator mCurrent;typename T::const_iterator mEnd;ConstMapIterator(){};public:typedef typename T::mapped_type MappedType;typedef typename T::key_type KeyType;ConstMapIterator(typename T::const_iterator start,typename T::const_iterator end):mCurrent(start),mEnd(end){}explicit ConstMapIterator(const T&c):mCurrent(c.begin()),mEnd(c.end()){}bool hasMoreElements(void)const{return mCurrent!=mEnd;}typename T::mapped_type getNext(void){return(mCurrent++)->second;}typename T::mapped_type peekNextValue(void)const{return mCurrent->second;}typename T::key_type peekNextKey(void)const{return mCurrent->first;}ConstMapIterator<T>&operator=(ConstMapIterator<T>&rhs){mCurrent=rhs.mCurrent;mEnd=rhs.mEnd;return*this;}const typename T::mapped_type*peekNextValuePtr(void)const{return&(mCurrent->second);}void moveNext(void)const{++mCurrent;}};}
namespace Ogre{class __declspec(dllimport)Vector2{public:Real x,y;public:inline Vector2(){}inline Vector2(const Real fX,const Real fY):x(fX),y(fY){}inline explicit Vector2(const Real scaler):x(scaler),y(scaler){}inline explicit Vector2(const Real afCoordinate[2]):x(afCoordinate[0]),y(afCoordinate[1]){}inline explicit Vector2(const int afCoordinate[2]){x=(Real)afCoordinate[0];y=(Real)afCoordinate[1];}inline explicit Vector2(Real*const r):x(r[0]),y(r[1]){}inline Vector2(const Vector2&rkVector):x(rkVector.x),y(rkVector.y){}inline Real operator[](const size_t i)const{((void)0);return*(&x+i);}inline Real&operator[](const size_t i){((void)0);return*(&x+i);}inline Real*ptr(){return&x;}inline const Real*ptr()const{return&x;}inline Vector2&operator=(const Vector2&rkVector){x=rkVector.x;y=rkVector.y;return*this;}inline Vector2&operator=(const Real fScalar){x=fScalar;y=fScalar;return*this;}inline bool operator==(const Vector2&rkVector)const{return(x==rkVector.x&&y==rkVector.y);}inline bool operator!=(const Vector2&rkVector)const{return(x!=rkVector.x||y!=rkVector.y);}inline Vector2 operator+(const Vector2&rkVector)const{return Vector2(x+rkVector.x,y+rkVector.y);}inline Vector2 operator-(const Vector2&rkVector)const{return Vector2(x-rkVector.x,y-rkVector.y);}inline Vector2 operator*(const Real fScalar)const{return Vector2(x*fScalar,y*fScalar);}inline Vector2 operator*(const Vector2&rhs)const{return Vector2(x*rhs.x,y*rhs.y);}inline Vector2 operator/(const Real fScalar)const{((void)0);Real fInv=1.0/fScalar;return Vector2(x*fInv,y*fInv);}inline Vector2 operator/(const Vector2&rhs)const{return Vector2(x/rhs.x,y/rhs.y);}inline const Vector2&operator+()const{return*this;}inline Vector2 operator-()const{return Vector2(-x,-y);}inline friend Vector2 operator*(const Real fScalar,const Vector2&rkVector){return Vector2(fScalar*rkVector.x,fScalar*rkVector.y);}inline friend Vector2 operator/(const Real fScalar,const Vector2&rkVector){return Vector2(fScalar/rkVector.x,fScalar/rkVector.y);}inline friend Vector2 operator+(const Vector2&lhs,const Real rhs){return Vector2(lhs.x+rhs,lhs.y+rhs);}inline friend Vector2 operator+(const Real lhs,const Vector2&rhs){return Vector2(lhs+rhs.x,lhs+rhs.y);}inline friend Vector2 operator-(const Vector2&lhs,const Real rhs){return Vector2(lhs.x-rhs,lhs.y-rhs);}inline friend Vector2 operator-(const Real lhs,const Vector2&rhs){return Vector2(lhs-rhs.x,lhs-rhs.y);}inline Vector2&operator+=(const Vector2&rkVector){x+=rkVector.x;y+=rkVector.y;return*this;}inline Vector2&operator+=(const Real fScaler){x+=fScaler;y+=fScaler;return*this;}inline Vector2&operator-=(const Vector2&rkVector){x-=rkVector.x;y-=rkVector.y;return*this;}inline Vector2&operator-=(const Real fScaler){x-=fScaler;y-=fScaler;return*this;}inline Vector2&operator*=(const Real fScalar){x*=fScalar;y*=fScalar;return*this;}inline Vector2&operator*=(const Vector2&rkVector){x*=rkVector.x;y*=rkVector.y;return*this;}inline Vector2&operator/=(const Real fScalar){((void)0);Real fInv=1.0/fScalar;x*=fInv;y*=fInv;return*this;}inline Vector2&operator/=(const Vector2&rkVector){x/=rkVector.x;y/=rkVector.y;return*this;}inline Real length()const{return Math::Sqrt(x*x+y*y);}inline Real squaredLength()const{return x*x+y*y;}inline Real dotProduct(const Vector2&vec)const{return x*vec.x+y*vec.y;}inline Real normalise(){Real fLength=Math::Sqrt(x*x+y*y);if(fLength>1e-08){Real fInvLength=1.0/fLength;x*=fInvLength;y*=fInvLength;}return fLength;}inline Vector2 midPoint(const Vector2&vec)const{return Vector2((x+vec.x)*0.5,(y+vec.y)*0.5);}inline bool operator<(const Vector2&rhs)const{if(x<rhs.x&&y<rhs.y)return true;return false;}inline bool operator>(const Vector2&rhs)const{if(x>rhs.x&&y>rhs.y)return true;return false;}inline void makeFloor(const Vector2&cmp){if(cmp.x<x)x=cmp.x;if(cmp.y<y)y=cmp.y;}inline void makeCeil(const Vector2&cmp){if(cmp.x>x)x=cmp.x;if(cmp.y>y)y=cmp.y;}inline Vector2 perpendicular(void)const{return Vector2(-y,x);}inline Real crossProduct(const Vector2&rkVector)const{return x*rkVector.y-y*rkVector.x;}inline Vector2 randomDeviant(Real angle)const{angle*=Math::UnitRandom()*Math::TWO_PI;Real cosa=cos(angle);Real sina=sin(angle);return Vector2(cosa*x-sina*y,sina*x+cosa*y);}inline bool isZeroLength(void)const{Real sqlen=(x*x)+(y*y);return(sqlen<(1e-06*1e-06));}inline Vector2 normalisedCopy(void)const{Vector2 ret=*this;ret.normalise();return ret;}inline Vector2 reflect(const Vector2&normal)const{return Vector2(*this-(2*this->dotProduct(normal)*normal));}static const Vector2 ZERO;static const Vector2 UNIT_X;static const Vector2 UNIT_Y;static const Vector2 NEGATIVE_UNIT_X;static const Vector2 NEGATIVE_UNIT_Y;static const Vector2 UNIT_SCALE;inline __declspec(dllimport)friend std::ostream&operator<<(std::ostream&o,const Vector2&v){o<<"Vector2("<<v.x<<", "<<v.y<<")";return o;}};}
namespace Ogre{class __declspec(dllimport)Vector4{public:Real x,y,z,w;public:inline Vector4(){}inline Vector4(const Real fX,const Real fY,const Real fZ,const Real fW):x(fX),y(fY),z(fZ),w(fW){}inline explicit Vector4(const Real afCoordinate[4]):x(afCoordinate[0]),y(afCoordinate[1]),z(afCoordinate[2]),w(afCoordinate[3]){}inline explicit Vector4(const int afCoordinate[4]){x=(Real)afCoordinate[0];y=(Real)afCoordinate[1];z=(Real)afCoordinate[2];w=(Real)afCoordinate[3];}inline explicit Vector4(Real*const r):x(r[0]),y(r[1]),z(r[2]),w(r[3]){}inline explicit Vector4(const Real scaler):x(scaler),y(scaler),z(scaler),w(scaler){}inline explicit Vector4(const Vector3&rhs):x(rhs.x),y(rhs.y),z(rhs.z),w(1.0f){}inline Vector4(const Vector4&rkVector):x(rkVector.x),y(rkVector.y),z(rkVector.z),w(rkVector.w){}inline Real operator[](const size_t i)const{((void)0);return*(&x+i);}inline Real&operator[](const size_t i){((void)0);return*(&x+i);}inline Real*ptr(){return&x;}inline const Real*ptr()const{return&x;}inline Vector4&operator=(const Vector4&rkVector){x=rkVector.x;y=rkVector.y;z=rkVector.z;w=rkVector.w;return*this;}inline Vector4&operator=(const Real fScalar){x=fScalar;y=fScalar;z=fScalar;w=fScalar;return*this;}inline bool operator==(const Vector4&rkVector)const{return(x==rkVector.x&&y==rkVector.y&&z==rkVector.z&&w==rkVector.w);}inline bool operator!=(const Vector4&rkVector)const{return(x!=rkVector.x||y!=rkVector.y||z!=rkVector.z||w!=rkVector.w);}inline Vector4&operator=(const Vector3&rhs){x=rhs.x;y=rhs.y;z=rhs.z;w=1.0f;return*this;}inline Vector4 operator+(const Vector4&rkVector)const{return Vector4(x+rkVector.x,y+rkVector.y,z+rkVector.z,w+rkVector.w);}inline Vector4 operator-(const Vector4&rkVector)const{return Vector4(x-rkVector.x,y-rkVector.y,z-rkVector.z,w-rkVector.w);}inline Vector4 operator*(const Real fScalar)const{return Vector4(x*fScalar,y*fScalar,z*fScalar,w*fScalar);}inline Vector4 operator*(const Vector4&rhs)const{return Vector4(rhs.x*x,rhs.y*y,rhs.z*z,rhs.w*w);}inline Vector4 operator/(const Real fScalar)const{((void)0);Real fInv=1.0/fScalar;return Vector4(x*fInv,y*fInv,z*fInv,w*fInv);}inline Vector4 operator/(const Vector4&rhs)const{return Vector4(x/rhs.x,y/rhs.y,z/rhs.z,w/rhs.w);}inline const Vector4&operator+()const{return*this;}inline Vector4 operator-()const{return Vector4(-x,-y,-z,-w);}inline friend Vector4 operator*(const Real fScalar,const Vector4&rkVector){return Vector4(fScalar*rkVector.x,fScalar*rkVector.y,fScalar*rkVector.z,fScalar*rkVector.w);}inline friend Vector4 operator/(const Real fScalar,const Vector4&rkVector){return Vector4(fScalar/rkVector.x,fScalar/rkVector.y,fScalar/rkVector.z,fScalar/rkVector.w);}inline friend Vector4 operator+(const Vector4&lhs,const Real rhs){return Vector4(lhs.x+rhs,lhs.y+rhs,lhs.z+rhs,lhs.w+rhs);}inline friend Vector4 operator+(const Real lhs,const Vector4&rhs){return Vector4(lhs+rhs.x,lhs+rhs.y,lhs+rhs.z,lhs+rhs.w);}inline friend Vector4 operator-(const Vector4&lhs,Real rhs){return Vector4(lhs.x-rhs,lhs.y-rhs,lhs.z-rhs,lhs.w-rhs);}inline friend Vector4 operator-(const Real lhs,const Vector4&rhs){return Vector4(lhs-rhs.x,lhs-rhs.y,lhs-rhs.z,lhs-rhs.w);}inline Vector4&operator+=(const Vector4&rkVector){x+=rkVector.x;y+=rkVector.y;z+=rkVector.z;w+=rkVector.w;return*this;}inline Vector4&operator-=(const Vector4&rkVector){x-=rkVector.x;y-=rkVector.y;z-=rkVector.z;w-=rkVector.w;return*this;}inline Vector4&operator*=(const Real fScalar){x*=fScalar;y*=fScalar;z*=fScalar;w*=fScalar;return*this;}inline Vector4&operator+=(const Real fScalar){x+=fScalar;y+=fScalar;z+=fScalar;w+=fScalar;return*this;}inline Vector4&operator-=(const Real fScalar){x-=fScalar;y-=fScalar;z-=fScalar;w-=fScalar;return*this;}inline Vector4&operator*=(const Vector4&rkVector){x*=rkVector.x;y*=rkVector.y;z*=rkVector.z;w*=rkVector.w;return*this;}inline Vector4&operator/=(const Real fScalar){((void)0);Real fInv=1.0/fScalar;x*=fInv;y*=fInv;z*=fInv;w*=fInv;return*this;}inline Vector4&operator/=(const Vector4&rkVector){x/=rkVector.x;y/=rkVector.y;z/=rkVector.z;w/=rkVector.w;return*this;}inline Real dotProduct(const Vector4&vec)const{return x*vec.x+y*vec.y+z*vec.z+w*vec.w;}inline __declspec(dllimport)friend std::ostream&operator<<(std::ostream&o,const Vector4&v){o<<"Vector4("<<v.x<<", "<<v.y<<", "<<v.z<<", "<<v.w<<")";return o;}static const Vector4 ZERO;};}
namespace Ogre{typedef uint32 RGBA;typedef uint32 ARGB;typedef uint32 ABGR;typedef uint32 BGRA;class __declspec(dllimport)ColourValue{public:static const ColourValue ZERO;static const ColourValue Black;static const ColourValue White;static const ColourValue Red;static const ColourValue Green;static const ColourValue Blue;explicit ColourValue(float red=1.0f,float green=1.0f,float blue=1.0f,float alpha=1.0f):r(red),g(green),b(blue),a(alpha){}bool operator==(const ColourValue&rhs)const;bool operator!=(const ColourValue&rhs)const;float r,g,b,a;RGBA getAsRGBA(void)const;ARGB getAsARGB(void)const;BGRA getAsBGRA(void)const;ABGR getAsABGR(void)const;void setAsRGBA(const RGBA val);void setAsARGB(const ARGB val);void setAsBGRA(const BGRA val);void setAsABGR(const ABGR val);void saturate(void){if(r<0)r=0;else if(r>1)r=1;if(g<0)g=0;else if(g>1)g=1;if(b<0)b=0;else if(b>1)b=1;if(a<0)a=0;else if(a>1)a=1;}ColourValue saturateCopy(void)const{ColourValue ret=*this;ret.saturate();return ret;}inline float operator[](const size_t i)const{((void)0);return*(&r+i);}inline float&operator[](const size_t i){((void)0);return*(&r+i);}inline float*ptr(){return&r;}inline const float*ptr()const{return&r;}inline ColourValue operator+(const ColourValue&rkVector)const{ColourValue kSum;kSum.r=r+rkVector.r;kSum.g=g+rkVector.g;kSum.b=b+rkVector.b;kSum.a=a+rkVector.a;return kSum;}inline ColourValue operator-(const ColourValue&rkVector)const{ColourValue kDiff;kDiff.r=r-rkVector.r;kDiff.g=g-rkVector.g;kDiff.b=b-rkVector.b;kDiff.a=a-rkVector.a;return kDiff;}inline ColourValue operator*(const float fScalar)const{ColourValue kProd;kProd.r=fScalar*r;kProd.g=fScalar*g;kProd.b=fScalar*b;kProd.a=fScalar*a;return kProd;}inline ColourValue operator*(const ColourValue&rhs)const{ColourValue kProd;kProd.r=rhs.r*r;kProd.g=rhs.g*g;kProd.b=rhs.b*b;kProd.a=rhs.a*a;return kProd;}inline ColourValue operator/(const ColourValue&rhs)const{ColourValue kProd;kProd.r=rhs.r/r;kProd.g=rhs.g/g;kProd.b=rhs.b/b;kProd.a=rhs.a/a;return kProd;}inline ColourValue operator/(const float fScalar)const{((void)0);ColourValue kDiv;float fInv=1.0/fScalar;kDiv.r=r*fInv;kDiv.g=g*fInv;kDiv.b=b*fInv;kDiv.a=a*fInv;return kDiv;}inline friend ColourValue operator*(const float fScalar,const ColourValue&rkVector){ColourValue kProd;kProd.r=fScalar*rkVector.r;kProd.g=fScalar*rkVector.g;kProd.b=fScalar*rkVector.b;kProd.a=fScalar*rkVector.a;return kProd;}inline ColourValue&operator+=(const ColourValue&rkVector){r+=rkVector.r;g+=rkVector.g;b+=rkVector.b;a+=rkVector.a;return*this;}inline ColourValue&operator-=(const ColourValue&rkVector){r-=rkVector.r;g-=rkVector.g;b-=rkVector.b;a-=rkVector.a;return*this;}inline ColourValue&operator*=(const float fScalar){r*=fScalar;g*=fScalar;b*=fScalar;a*=fScalar;return*this;}inline ColourValue&operator/=(const float fScalar){((void)0);float fInv=1.0/fScalar;r*=fInv;g*=fInv;b*=fInv;a*=fInv;return*this;}void setHSB(Real hue,Real saturation,Real brightness);inline __declspec(dllimport)friend std::ostream&operator<<(std::ostream&o,const ColourValue&c){o<<"ColourValue("<<c.r<<", "<<c.g<<", "<<c.b<<", "<<c.a<<")";return o;}};}
namespace Ogre{template<class T>class SharedPtr{protected:T*pRep;unsigned int*pUseCount;public:SharedPtr():pRep(0),pUseCount(0){}template<class Y>explicit SharedPtr(Y*rep):pRep(rep),pUseCount(new unsigned int(1)){}SharedPtr(const SharedPtr&r):pRep(0),pUseCount(0){if(true){pRep=r.pRep;pUseCount=r.pUseCount;if(pUseCount){++(*pUseCount);}}}SharedPtr&operator=(const SharedPtr&r){if(pRep==r.pRep)return*this;SharedPtr<T>tmp(r);swap(tmp);return*this;}template<class Y>SharedPtr(const SharedPtr<Y>&r):pRep(0),pUseCount(0){if(true){pRep=r.getPointer();pUseCount=r.useCountPointer();if(pUseCount){++(*pUseCount);}}}template<class Y>SharedPtr&operator=(const SharedPtr<Y>&r){if(pRep==r.pRep)return*this;SharedPtr<T>tmp(r);swap(tmp);return*this;}virtual~SharedPtr(){release();}inline T&operator*()const{((void)0);return*pRep;}inline T*operator->()const{((void)0);return pRep;}inline T*get()const{return pRep;}void bind(T*rep){((void)0);pUseCount=new unsigned int(1);pRep=rep;}inline bool unique()const{((void)0);return*pUseCount==1;}inline unsigned int useCount()const{((void)0);return*pUseCount;}inline unsigned int*useCountPointer()const{return pUseCount;}inline T*getPointer()const{return pRep;}inline bool isNull(void)const{return pRep==0;}inline void setNull(void){if(pRep){release();pRep=0;pUseCount=0;}}protected:inline void release(void){bool destroyThis=false;if(true){if(pUseCount){if(--(*pUseCount)==0){destroyThis=true;}}}if(destroyThis)destroy();}virtual void destroy(void){delete pRep;delete pUseCount;}virtual void swap(SharedPtr<T>&other){std::swap(pRep,other.pRep);std::swap(pUseCount,other.pUseCount);}};template<class T,class U>inline bool operator==(SharedPtr<T>const&a,SharedPtr<U>const&b){return a.get()==b.get();}template<class T,class U>inline bool operator!=(SharedPtr<T>const&a,SharedPtr<U>const&b){return a.get()!=b.get();}}
namespace Ogre{typedef std::vector<String>StringVector;typedef SharedPtr<StringVector>StringVectorPtr;}
namespace Ogre{class __declspec(dllimport)Exception:public std::exception{protected:long line;int number;String typeName;String description;String source;String file;mutable String fullDesc;public:enum ExceptionCodes{ERR_CANNOT_WRITE_TO_FILE,ERR_INVALID_STATE,ERR_INVALIDPARAMS,ERR_RENDERINGAPI_ERROR,ERR_DUPLICATE_ITEM,ERR_ITEM_NOT_FOUND,ERR_FILE_NOT_FOUND,ERR_INTERNAL_ERROR,ERR_RT_ASSERTION_FAILED,ERR_NOT_IMPLEMENTED};Exception(int number,const String&description,const String&source);Exception(int number,const String&description,const String&source,const char*type,const char*file,long line);Exception(const Exception&rhs);~Exception()throw(){}void operator=(const Exception&rhs);virtual const String&getFullDescription(void)const;virtual int getNumber(void)const throw();virtual const String&getSource()const{return source;}virtual const String&getFile()const{return file;}virtual long getLine()const{return line;}virtual const String&getDescription(void)const{return description;}const char*what()const throw(){return getFullDescription().c_str();}};template<int num>struct ExceptionCodeType{enum{number=num};};class __declspec(dllimport)UnimplementedException:public Exception{public:UnimplementedException(int number,const String&description,const String&source,const char*file,long line):Exception(number,description,source,"UnimplementedException",file,line){}};class __declspec(dllimport)FileNotFoundException:public Exception{public:FileNotFoundException(int number,const String&description,const String&source,const char*file,long line):Exception(number,description,source,"FileNotFoundException",file,line){}};class __declspec(dllimport)IOException:public Exception{public:IOException(int number,const String&description,const String&source,const char*file,long line):Exception(number,description,source,"IOException",file,line){}};class __declspec(dllimport)InvalidStateException:public Exception{public:InvalidStateException(int number,const String&description,const String&source,const char*file,long line):Exception(number,description,source,"InvalidStateException",file,line){}};class __declspec(dllimport)InvalidParametersException:public Exception{public:InvalidParametersException(int number,const String&description,const String&source,const char*file,long line):Exception(number,description,source,"InvalidParametersException",file,line){}};class __declspec(dllimport)ItemIdentityException:public Exception{public:ItemIdentityException(int number,const String&description,const String&source,const char*file,long line):Exception(number,description,source,"ItemIdentityException",file,line){}};class __declspec(dllimport)InternalErrorException:public Exception{public:InternalErrorException(int number,const String&description,const String&source,const char*file,long line):Exception(number,description,source,"InternalErrorException",file,line){}};class __declspec(dllimport)RenderingAPIException:public Exception{public:RenderingAPIException(int number,const String&description,const String&source,const char*file,long line):Exception(number,description,source,"RenderingAPIException",file,line){}};class __declspec(dllimport)RuntimeAssertionException:public Exception{public:RuntimeAssertionException(int number,const String&description,const String&source,const char*file,long line):Exception(number,description,source,"RuntimeAssertionException",file,line){}};class ExceptionFactory{private:ExceptionFactory(){}public:static UnimplementedException create(ExceptionCodeType<Exception::ERR_NOT_IMPLEMENTED>code,const String&desc,const String&src,const char*file,long line){return UnimplementedException(code.number,desc,src,file,line);}static FileNotFoundException create(ExceptionCodeType<Exception::ERR_FILE_NOT_FOUND>code,const String&desc,const String&src,const char*file,long line){return FileNotFoundException(code.number,desc,src,file,line);}static IOException create(ExceptionCodeType<Exception::ERR_CANNOT_WRITE_TO_FILE>code,const String&desc,const String&src,const char*file,long line){return IOException(code.number,desc,src,file,line);}static InvalidStateException create(ExceptionCodeType<Exception::ERR_INVALID_STATE>code,const String&desc,const String&src,const char*file,long line){return InvalidStateException(code.number,desc,src,file,line);}static InvalidParametersException create(ExceptionCodeType<Exception::ERR_INVALIDPARAMS>code,const String&desc,const String&src,const char*file,long line){return InvalidParametersException(code.number,desc,src,file,line);}static ItemIdentityException create(ExceptionCodeType<Exception::ERR_ITEM_NOT_FOUND>code,const String&desc,const String&src,const char*file,long line){return ItemIdentityException(code.number,desc,src,file,line);}static ItemIdentityException create(ExceptionCodeType<Exception::ERR_DUPLICATE_ITEM>code,const String&desc,const String&src,const char*file,long line){return ItemIdentityException(code.number,desc,src,file,line);}static InternalErrorException create(ExceptionCodeType<Exception::ERR_INTERNAL_ERROR>code,const String&desc,const String&src,const char*file,long line){return InternalErrorException(code.number,desc,src,file,line);}static RenderingAPIException create(ExceptionCodeType<Exception::ERR_RENDERINGAPI_ERROR>code,const String&desc,const String&src,const char*file,long line){return RenderingAPIException(code.number,desc,src,file,line);}static RuntimeAssertionException create(ExceptionCodeType<Exception::ERR_RT_ASSERTION_FAILED>code,const String&desc,const String&src,const char*file,long line){return RuntimeAssertionException(code.number,desc,src,file,line);}};}
namespace Ogre{class Any{public:Any():mContent(0){}template<typename ValueType>explicit Any(const ValueType&value):mContent(new holder<ValueType>(value)){}Any(const Any&other):mContent(other.mContent?other.mContent->clone():0){}virtual~Any(){delete mContent;}public:Any&swap(Any&rhs){std::swap(mContent,rhs.mContent);return*this;}template<typename ValueType>Any&operator=(const ValueType&rhs){Any(rhs).swap(*this);return*this;}Any&operator=(const Any&rhs){Any(rhs).swap(*this);return*this;}public:bool isEmpty()const{return!mContent;}const std::type_info&getType()const{return mContent?mContent->getType():typeid(void);}inline friend std::ostream&operator<<(std::ostream&o,const Any&v){if(v.mContent)v.mContent->writeToStream(o);return o;}protected:class placeholder{public:virtual~placeholder(){}public:virtual const std::type_info&getType()const=0;virtual placeholder*clone()const=0;virtual void writeToStream(std::ostream&o)=0;};template<typename ValueType>class holder:public placeholder{public:holder(const ValueType&value):held(value){}public:virtual const std::type_info&getType()const{return typeid(ValueType);}virtual placeholder*clone()const{return new holder(held);}virtual void writeToStream(std::ostream&o){o<<held;}public:ValueType held;};protected:placeholder*mContent;template<typename ValueType>friend ValueType*any_cast(Any*);public:template<typename ValueType>ValueType operator()()const{if(!mContent){throw Ogre::ExceptionFactory::create(Ogre::ExceptionCodeType<Exception::ERR_INVALIDPARAMS>(),"Bad cast from uninitialised Any","Any::operator()","c:\\users\\mriva\\documents\\codex\\2026-10-22\\try-to-match-as-many-functions-2\\work\\roconstruct\\tools\\libs\\ogre-1.4.5\\ogrenew\\ogremain\\include\\OgreAny.h",190);;}else if(getType()==typeid(ValueType)){return static_cast<Any::holder<ValueType>*>(mContent)->held;}else{StringUtil::StrStreamType str;str<<"Bad cast from type '"<<getType().name()<<"' "<<"to '"<<typeid(ValueType).name()<<"'";throw Ogre::ExceptionFactory::create(Ogre::ExceptionCodeType<Exception::ERR_INVALIDPARAMS>(),str.str(),"Any::operator()","c:\\users\\mriva\\documents\\codex\\2026-10-22\\try-to-match-as-many-functions-2\\work\\roconstruct\\tools\\libs\\ogre-1.4.5\\ogrenew\\ogremain\\include\\OgreAny.h",203);;}}};class AnyNumeric:public Any{public:AnyNumeric():Any(){}template<typename ValueType>AnyNumeric(const ValueType&value){mContent=new numholder<ValueType>(value);}AnyNumeric(const AnyNumeric&other):Any(){mContent=other.mContent?other.mContent->clone():0;}protected:class numplaceholder:public Any::placeholder{public:~numplaceholder(){}virtual placeholder*add(placeholder*rhs)=0;virtual placeholder*subtract(placeholder*rhs)=0;virtual placeholder*multiply(placeholder*rhs)=0;virtual placeholder*multiply(Real factor)=0;virtual placeholder*divide(placeholder*rhs)=0;};template<typename ValueType>class numholder:public numplaceholder{public:numholder(const ValueType&value):held(value){}public:virtual const std::type_info&getType()const{return typeid(ValueType);}virtual placeholder*clone()const{return new numholder(held);}virtual placeholder*add(placeholder*rhs){return new numholder(held+static_cast<numholder*>(rhs)->held);}virtual placeholder*subtract(placeholder*rhs){return new numholder(held-static_cast<numholder*>(rhs)->held);}virtual placeholder*multiply(placeholder*rhs){return new numholder(held*static_cast<numholder*>(rhs)->held);}virtual placeholder*multiply(Real factor){return new numholder(held*factor);}virtual placeholder*divide(placeholder*rhs){return new numholder(held/static_cast<numholder*>(rhs)->held);}virtual void writeToStream(std::ostream&o){o<<held;}public:ValueType held;};AnyNumeric(placeholder*pholder){mContent=pholder;}public:AnyNumeric&operator=(const AnyNumeric&rhs){AnyNumeric(rhs).swap(*this);return*this;}AnyNumeric operator+(const AnyNumeric&rhs)const{return AnyNumeric(static_cast<numplaceholder*>(mContent)->add(rhs.mContent));}AnyNumeric operator-(const AnyNumeric&rhs)const{return AnyNumeric(static_cast<numplaceholder*>(mContent)->subtract(rhs.mContent));}AnyNumeric operator*(const AnyNumeric&rhs)const{return AnyNumeric(static_cast<numplaceholder*>(mContent)->multiply(rhs.mContent));}AnyNumeric operator*(Real factor)const{return AnyNumeric(static_cast<numplaceholder*>(mContent)->multiply(factor));}AnyNumeric operator/(const AnyNumeric&rhs)const{return AnyNumeric(static_cast<numplaceholder*>(mContent)->divide(rhs.mContent));}AnyNumeric&operator+=(const AnyNumeric&rhs){*this=AnyNumeric(static_cast<numplaceholder*>(mContent)->add(rhs.mContent));return*this;}AnyNumeric&operator-=(const AnyNumeric&rhs){*this=AnyNumeric(static_cast<numplaceholder*>(mContent)->subtract(rhs.mContent));return*this;}AnyNumeric&operator*=(const AnyNumeric&rhs){*this=AnyNumeric(static_cast<numplaceholder*>(mContent)->multiply(rhs.mContent));return*this;}AnyNumeric&operator/=(const AnyNumeric&rhs){*this=AnyNumeric(static_cast<numplaceholder*>(mContent)->divide(rhs.mContent));return*this;}};template<typename ValueType>ValueType*any_cast(Any*operand){return operand&&operand->getType()==typeid(ValueType)?&static_cast<Any::holder<ValueType>*>(operand->mContent)->held:0;}template<typename ValueType>const ValueType*any_cast(const Any*operand){return any_cast<ValueType>(const_cast<Any*>(operand));}template<typename ValueType>ValueType any_cast(const Any&operand){const ValueType*result=any_cast<ValueType>(&operand);if(!result){StringUtil::StrStreamType str;str<<"Bad cast from type '"<<operand.getType().name()<<"' "<<"to '"<<typeid(ValueType).name()<<"'";throw Ogre::ExceptionFactory::create(Ogre::ExceptionCodeType<Exception::ERR_INVALIDPARAMS>(),str.str(),"Ogre::any_cast","c:\\users\\mriva\\documents\\codex\\2026-10-22\\try-to-match-as-many-functions-2\\work\\roconstruct\\tools\\libs\\ogre-1.4.5\\ogrenew\\ogremain\\include\\OgreAny.h",396);;}return*result;}}
namespace Ogre{class __declspec(dllimport)AnimableValue{public:enum ValueType{INT,REAL,VECTOR2,VECTOR3,VECTOR4,QUATERNION,COLOUR};protected:ValueType mType;union{int mBaseValueInt;Real mBaseValueReal[4];};virtual void setAsBaseValue(int val){mBaseValueInt=val;}virtual void setAsBaseValue(Real val){mBaseValueReal[0]=val;}virtual void setAsBaseValue(const Vector2&val){memcpy(mBaseValueReal,val.ptr(),sizeof(Real)*2);}virtual void setAsBaseValue(const Vector3&val){memcpy(mBaseValueReal,val.ptr(),sizeof(Real)*3);}virtual void setAsBaseValue(const Vector4&val){memcpy(mBaseValueReal,val.ptr(),sizeof(Real)*4);}virtual void setAsBaseValue(const Quaternion&val){memcpy(mBaseValueReal,val.ptr(),sizeof(Real)*4);}virtual void setAsBaseValue(const Any&val);virtual void setAsBaseValue(const ColourValue&val){mBaseValueReal[0]=val.r;mBaseValueReal[1]=val.g;mBaseValueReal[2]=val.b;mBaseValueReal[3]=val.a;}public:AnimableValue(ValueType t):mType(t){}virtual~AnimableValue(){}ValueType getType(void)const{return mType;}virtual void setCurrentStateAsBaseValue(void)=0;virtual void setValue(int){throw Ogre::ExceptionFactory::create(Ogre::ExceptionCodeType<Exception::ERR_NOT_IMPLEMENTED>(),"","","c:\\users\\mriva\\documents\\codex\\2026-10-22\\try-to-match-as-many-functions-2\\work\\roconstruct\\tools\\libs\\ogre-1.4.5\\ogrenew\\ogremain\\include\\OgreAnimable.h",130);;}virtual void setValue(Real){throw Ogre::ExceptionFactory::create(Ogre::ExceptionCodeType<Exception::ERR_NOT_IMPLEMENTED>(),"","","c:\\users\\mriva\\documents\\codex\\2026-10-22\\try-to-match-as-many-functions-2\\work\\roconstruct\\tools\\libs\\ogre-1.4.5\\ogrenew\\ogremain\\include\\OgreAnimable.h",134);;}virtual void setValue(const Vector2&){throw Ogre::ExceptionFactory::create(Ogre::ExceptionCodeType<Exception::ERR_NOT_IMPLEMENTED>(),"","","c:\\users\\mriva\\documents\\codex\\2026-10-22\\try-to-match-as-many-functions-2\\work\\roconstruct\\tools\\libs\\ogre-1.4.5\\ogrenew\\ogremain\\include\\OgreAnimable.h",138);;}virtual void setValue(const Vector3&){throw Ogre::ExceptionFactory::create(Ogre::ExceptionCodeType<Exception::ERR_NOT_IMPLEMENTED>(),"","","c:\\users\\mriva\\documents\\codex\\2026-10-22\\try-to-match-as-many-functions-2\\work\\roconstruct\\tools\\libs\\ogre-1.4.5\\ogrenew\\ogremain\\include\\OgreAnimable.h",142);;}virtual void setValue(const Vector4&){throw Ogre::ExceptionFactory::create(Ogre::ExceptionCodeType<Exception::ERR_NOT_IMPLEMENTED>(),"","","c:\\users\\mriva\\documents\\codex\\2026-10-22\\try-to-match-as-many-functions-2\\work\\roconstruct\\tools\\libs\\ogre-1.4.5\\ogrenew\\ogremain\\include\\OgreAnimable.h",146);;}virtual void setValue(const Quaternion&){throw Ogre::ExceptionFactory::create(Ogre::ExceptionCodeType<Exception::ERR_NOT_IMPLEMENTED>(),"","","c:\\users\\mriva\\documents\\codex\\2026-10-22\\try-to-match-as-many-functions-2\\work\\roconstruct\\tools\\libs\\ogre-1.4.5\\ogrenew\\ogremain\\include\\OgreAnimable.h",150);;}virtual void setValue(const ColourValue&){throw Ogre::ExceptionFactory::create(Ogre::ExceptionCodeType<Exception::ERR_NOT_IMPLEMENTED>(),"","","c:\\users\\mriva\\documents\\codex\\2026-10-22\\try-to-match-as-many-functions-2\\work\\roconstruct\\tools\\libs\\ogre-1.4.5\\ogrenew\\ogremain\\include\\OgreAnimable.h",154);;}virtual void setValue(const Any&val);virtual void resetToBaseValue(void);virtual void applyDeltaValue(int){throw Ogre::ExceptionFactory::create(Ogre::ExceptionCodeType<Exception::ERR_NOT_IMPLEMENTED>(),"","","c:\\users\\mriva\\documents\\codex\\2026-10-22\\try-to-match-as-many-functions-2\\work\\roconstruct\\tools\\libs\\ogre-1.4.5\\ogrenew\\ogremain\\include\\OgreAnimable.h",164);;}virtual void applyDeltaValue(Real){throw Ogre::ExceptionFactory::create(Ogre::ExceptionCodeType<Exception::ERR_NOT_IMPLEMENTED>(),"","","c:\\users\\mriva\\documents\\codex\\2026-10-22\\try-to-match-as-many-functions-2\\work\\roconstruct\\tools\\libs\\ogre-1.4.5\\ogrenew\\ogremain\\include\\OgreAnimable.h",168);;}virtual void applyDeltaValue(const Vector2&){throw Ogre::ExceptionFactory::create(Ogre::ExceptionCodeType<Exception::ERR_NOT_IMPLEMENTED>(),"","","c:\\users\\mriva\\documents\\codex\\2026-10-22\\try-to-match-as-many-functions-2\\work\\roconstruct\\tools\\libs\\ogre-1.4.5\\ogrenew\\ogremain\\include\\OgreAnimable.h",172);;}virtual void applyDeltaValue(const Vector3&){throw Ogre::ExceptionFactory::create(Ogre::ExceptionCodeType<Exception::ERR_NOT_IMPLEMENTED>(),"","","c:\\users\\mriva\\documents\\codex\\2026-10-22\\try-to-match-as-many-functions-2\\work\\roconstruct\\tools\\libs\\ogre-1.4.5\\ogrenew\\ogremain\\include\\OgreAnimable.h",176);;}virtual void applyDeltaValue(const Vector4&){throw Ogre::ExceptionFactory::create(Ogre::ExceptionCodeType<Exception::ERR_NOT_IMPLEMENTED>(),"","","c:\\users\\mriva\\documents\\codex\\2026-10-22\\try-to-match-as-many-functions-2\\work\\roconstruct\\tools\\libs\\ogre-1.4.5\\ogrenew\\ogremain\\include\\OgreAnimable.h",180);;}virtual void applyDeltaValue(const Quaternion&){throw Ogre::ExceptionFactory::create(Ogre::ExceptionCodeType<Exception::ERR_NOT_IMPLEMENTED>(),"","","c:\\users\\mriva\\documents\\codex\\2026-10-22\\try-to-match-as-many-functions-2\\work\\roconstruct\\tools\\libs\\ogre-1.4.5\\ogrenew\\ogremain\\include\\OgreAnimable.h",184);;}virtual void applyDeltaValue(const ColourValue&){throw Ogre::ExceptionFactory::create(Ogre::ExceptionCodeType<Exception::ERR_NOT_IMPLEMENTED>(),"","","c:\\users\\mriva\\documents\\codex\\2026-10-22\\try-to-match-as-many-functions-2\\work\\roconstruct\\tools\\libs\\ogre-1.4.5\\ogrenew\\ogremain\\include\\OgreAnimable.h",188);;}virtual void applyDeltaValue(const Any&val);};typedef SharedPtr<AnimableValue>AnimableValuePtr;class __declspec(dllimport)AnimableObject{protected:typedef std::map<String,StringVector>AnimableDictionaryMap;static AnimableDictionaryMap msAnimableDictionary;virtual const String&getAnimableDictionaryName(void)const{return StringUtil::BLANK;}void createAnimableDictionary(void)const{if(msAnimableDictionary.find(getAnimableDictionaryName())==msAnimableDictionary.end()){StringVector vec;initialiseAnimableDictionary(vec);msAnimableDictionary[getAnimableDictionaryName()]=vec;}}StringVector&_getAnimableValueNames(void){AnimableDictionaryMap::iterator i=msAnimableDictionary.find(getAnimableDictionaryName());if(i!=msAnimableDictionary.end()){return i->second;}else{throw Ogre::ExceptionFactory::create(Ogre::ExceptionCodeType<Exception::ERR_ITEM_NOT_FOUND>(),"Animable value list not found for "+getAnimableDictionaryName(),"AnimableObject::getAnimableValueNames","c:\\users\\mriva\\documents\\codex\\2026-10-22\\try-to-match-as-many-functions-2\\work\\roconstruct\\tools\\libs\\ogre-1.4.5\\ogrenew\\ogremain\\include\\OgreAnimable.h",244);;}}virtual void initialiseAnimableDictionary(StringVector&)const{}public:AnimableObject(){}virtual~AnimableObject(){}const StringVector&getAnimableValueNames(void)const{createAnimableDictionary();AnimableDictionaryMap::iterator i=msAnimableDictionary.find(getAnimableDictionaryName());if(i!=msAnimableDictionary.end()){return i->second;}else{throw Ogre::ExceptionFactory::create(Ogre::ExceptionCodeType<Exception::ERR_ITEM_NOT_FOUND>(),"Animable value list not found for "+getAnimableDictionaryName(),"AnimableObject::getAnimableValueNames","c:\\users\\mriva\\documents\\codex\\2026-10-22\\try-to-match-as-many-functions-2\\work\\roconstruct\\tools\\libs\\ogre-1.4.5\\ogrenew\\ogremain\\include\\OgreAnimable.h",274);;}}virtual AnimableValuePtr createAnimableValue(const String&valueName){throw Ogre::ExceptionFactory::create(Ogre::ExceptionCodeType<Exception::ERR_ITEM_NOT_FOUND>(),"No animable value named '"+valueName+"' present.","AnimableObject::createAnimableValue","c:\\users\\mriva\\documents\\codex\\2026-10-22\\try-to-match-as-many-functions-2\\work\\roconstruct\\tools\\libs\\ogre-1.4.5\\ogrenew\\ogremain\\include\\OgreAnimable.h",289);;}};}
namespace Ogre{class __declspec(dllimport)Matrix3{public:inline Matrix3(){};inline explicit Matrix3(const Real arr[3][3]){memcpy(m,arr,9*sizeof(Real));}inline Matrix3(const Matrix3&rkMatrix){memcpy(m,rkMatrix.m,9*sizeof(Real));}Matrix3(Real fEntry00,Real fEntry01,Real fEntry02,Real fEntry10,Real fEntry11,Real fEntry12,Real fEntry20,Real fEntry21,Real fEntry22){m[0][0]=fEntry00;m[0][1]=fEntry01;m[0][2]=fEntry02;m[1][0]=fEntry10;m[1][1]=fEntry11;m[1][2]=fEntry12;m[2][0]=fEntry20;m[2][1]=fEntry21;m[2][2]=fEntry22;}inline Real*operator[](size_t iRow)const{return(Real*)m[iRow];}Vector3 GetColumn(size_t iCol)const;void SetColumn(size_t iCol,const Vector3&vec);void FromAxes(const Vector3&xAxis,const Vector3&yAxis,const Vector3&zAxis);inline Matrix3&operator=(const Matrix3&rkMatrix){memcpy(m,rkMatrix.m,9*sizeof(Real));return*this;}bool operator==(const Matrix3&rkMatrix)const;inline bool operator!=(const Matrix3&rkMatrix)const{return!operator==(rkMatrix);}Matrix3 operator+(const Matrix3&rkMatrix)const;Matrix3 operator-(const Matrix3&rkMatrix)const;Matrix3 operator*(const Matrix3&rkMatrix)const;Matrix3 operator-()const;Vector3 operator*(const Vector3&rkVector)const;__declspec(dllimport)friend Vector3 operator*(const Vector3&rkVector,const Matrix3&rkMatrix);Matrix3 operator*(Real fScalar)const;__declspec(dllimport)friend Matrix3 operator*(Real fScalar,const Matrix3&rkMatrix);Matrix3 Transpose()const;bool Inverse(Matrix3&rkInverse,Real fTolerance=1e-06)const;Matrix3 Inverse(Real fTolerance=1e-06)const;Real Determinant()const;void SingularValueDecomposition(Matrix3&rkL,Vector3&rkS,Matrix3&rkR)const;void SingularValueComposition(const Matrix3&rkL,const Vector3&rkS,const Matrix3&rkR);void Orthonormalize();void QDUDecomposition(Matrix3&rkQ,Vector3&rkD,Vector3&rkU)const;Real SpectralNorm()const;void ToAxisAngle(Vector3&rkAxis,Radian&rfAngle)const;inline void ToAxisAngle(Vector3&rkAxis,Degree&rfAngle)const{Radian r;ToAxisAngle(rkAxis,r);rfAngle=r;}void FromAxisAngle(const Vector3&rkAxis,const Radian&fRadians);bool ToEulerAnglesXYZ(Radian&rfYAngle,Radian&rfPAngle,Radian&rfRAngle)const;bool ToEulerAnglesXZY(Radian&rfYAngle,Radian&rfPAngle,Radian&rfRAngle)const;bool ToEulerAnglesYXZ(Radian&rfYAngle,Radian&rfPAngle,Radian&rfRAngle)const;bool ToEulerAnglesYZX(Radian&rfYAngle,Radian&rfPAngle,Radian&rfRAngle)const;bool ToEulerAnglesZXY(Radian&rfYAngle,Radian&rfPAngle,Radian&rfRAngle)const;bool ToEulerAnglesZYX(Radian&rfYAngle,Radian&rfPAngle,Radian&rfRAngle)const;void FromEulerAnglesXYZ(const Radian&fYAngle,const Radian&fPAngle,const Radian&fRAngle);void FromEulerAnglesXZY(const Radian&fYAngle,const Radian&fPAngle,const Radian&fRAngle);void FromEulerAnglesYXZ(const Radian&fYAngle,const Radian&fPAngle,const Radian&fRAngle);void FromEulerAnglesYZX(const Radian&fYAngle,const Radian&fPAngle,const Radian&fRAngle);void FromEulerAnglesZXY(const Radian&fYAngle,const Radian&fPAngle,const Radian&fRAngle);void FromEulerAnglesZYX(const Radian&fYAngle,const Radian&fPAngle,const Radian&fRAngle);void EigenSolveSymmetric(Real afEigenvalue[3],Vector3 akEigenvector[3])const;static void TensorProduct(const Vector3&rkU,const Vector3&rkV,Matrix3&rkProduct);static const Real EPSILON;static const Matrix3 ZERO;static const Matrix3 IDENTITY;protected:void Tridiagonal(Real afDiag[3],Real afSubDiag[3]);bool QLAlgorithm(Real afDiag[3],Real afSubDiag[3]);static const Real ms_fSvdEpsilon;static const unsigned int ms_iSvdMaxIterations;static void Bidiagonalize(Matrix3&kA,Matrix3&kL,Matrix3&kR);static void GolubKahanStep(Matrix3&kA,Matrix3&kL,Matrix3&kR);static Real MaxCubicRoot(Real afCoeff[3]);Real m[3][3];friend class Matrix4;};}
namespace Ogre{class __declspec(dllimport)Plane{public:Plane();Plane(const Plane&rhs);Plane(const Vector3&rkNormal,Real fConstant);Plane(const Vector3&rkNormal,const Vector3&rkPoint);Plane(const Vector3&rkPoint0,const Vector3&rkPoint1,const Vector3&rkPoint2);enum Side{NO_SIDE,POSITIVE_SIDE,NEGATIVE_SIDE,BOTH_SIDE};Side getSide(const Vector3&rkPoint)const;Side getSide(const AxisAlignedBox&rkBox)const;Side getSide(const Vector3&centre,const Vector3&halfSize)const;Real getDistance(const Vector3&rkPoint)const;void redefine(const Vector3&rkPoint0,const Vector3&rkPoint1,const Vector3&rkPoint2);void redefine(const Vector3&rkNormal,const Vector3&rkPoint);Vector3 projectVector(const Vector3&v)const;Real normalise(void);Vector3 normal;Real d;bool operator==(const Plane&rhs)const{return(rhs.d==d&&rhs.normal==normal);}bool operator!=(const Plane&rhs)const{return(rhs.d!=d&&rhs.normal!=normal);}__declspec(dllimport)friend std::ostream&operator<<(std::ostream&o,const Plane&p);};typedef std::vector<Plane>PlaneList;}
namespace Ogre{class __declspec(dllimport)Matrix4{protected:union{Real m[4][4];Real _m[16];};public:inline Matrix4(){}inline Matrix4(Real m00,Real m01,Real m02,Real m03,Real m10,Real m11,Real m12,Real m13,Real m20,Real m21,Real m22,Real m23,Real m30,Real m31,Real m32,Real m33){m[0][0]=m00;m[0][1]=m01;m[0][2]=m02;m[0][3]=m03;m[1][0]=m10;m[1][1]=m11;m[1][2]=m12;m[1][3]=m13;m[2][0]=m20;m[2][1]=m21;m[2][2]=m22;m[2][3]=m23;m[3][0]=m30;m[3][1]=m31;m[3][2]=m32;m[3][3]=m33;}inline Matrix4(const Matrix3&m3x3){operator=(IDENTITY);operator=(m3x3);}inline Matrix4(const Quaternion&rot){Matrix3 m3x3;rot.ToRotationMatrix(m3x3);operator=(IDENTITY);operator=(m3x3);}inline Real*operator[](size_t iRow){((void)0);return m[iRow];}inline const Real*const operator[](size_t iRow)const{((void)0);return m[iRow];}inline Matrix4 concatenate(const Matrix4&m2)const{Matrix4 r;r.m[0][0]=m[0][0]*m2.m[0][0]+m[0][1]*m2.m[1][0]+m[0][2]*m2.m[2][0]+m[0][3]*m2.m[3][0];r.m[0][1]=m[0][0]*m2.m[0][1]+m[0][1]*m2.m[1][1]+m[0][2]*m2.m[2][1]+m[0][3]*m2.m[3][1];r.m[0][2]=m[0][0]*m2.m[0][2]+m[0][1]*m2.m[1][2]+m[0][2]*m2.m[2][2]+m[0][3]*m2.m[3][2];r.m[0][3]=m[0][0]*m2.m[0][3]+m[0][1]*m2.m[1][3]+m[0][2]*m2.m[2][3]+m[0][3]*m2.m[3][3];r.m[1][0]=m[1][0]*m2.m[0][0]+m[1][1]*m2.m[1][0]+m[1][2]*m2.m[2][0]+m[1][3]*m2.m[3][0];r.m[1][1]=m[1][0]*m2.m[0][1]+m[1][1]*m2.m[1][1]+m[1][2]*m2.m[2][1]+m[1][3]*m2.m[3][1];r.m[1][2]=m[1][0]*m2.m[0][2]+m[1][1]*m2.m[1][2]+m[1][2]*m2.m[2][2]+m[1][3]*m2.m[3][2];r.m[1][3]=m[1][0]*m2.m[0][3]+m[1][1]*m2.m[1][3]+m[1][2]*m2.m[2][3]+m[1][3]*m2.m[3][3];r.m[2][0]=m[2][0]*m2.m[0][0]+m[2][1]*m2.m[1][0]+m[2][2]*m2.m[2][0]+m[2][3]*m2.m[3][0];r.m[2][1]=m[2][0]*m2.m[0][1]+m[2][1]*m2.m[1][1]+m[2][2]*m2.m[2][1]+m[2][3]*m2.m[3][1];r.m[2][2]=m[2][0]*m2.m[0][2]+m[2][1]*m2.m[1][2]+m[2][2]*m2.m[2][2]+m[2][3]*m2.m[3][2];r.m[2][3]=m[2][0]*m2.m[0][3]+m[2][1]*m2.m[1][3]+m[2][2]*m2.m[2][3]+m[2][3]*m2.m[3][3];r.m[3][0]=m[3][0]*m2.m[0][0]+m[3][1]*m2.m[1][0]+m[3][2]*m2.m[2][0]+m[3][3]*m2.m[3][0];r.m[3][1]=m[3][0]*m2.m[0][1]+m[3][1]*m2.m[1][1]+m[3][2]*m2.m[2][1]+m[3][3]*m2.m[3][1];r.m[3][2]=m[3][0]*m2.m[0][2]+m[3][1]*m2.m[1][2]+m[3][2]*m2.m[2][2]+m[3][3]*m2.m[3][2];r.m[3][3]=m[3][0]*m2.m[0][3]+m[3][1]*m2.m[1][3]+m[3][2]*m2.m[2][3]+m[3][3]*m2.m[3][3];return r;}inline Matrix4 operator*(const Matrix4&m2)const{return concatenate(m2);}inline Vector3 operator*(const Vector3&v)const{Vector3 r;Real fInvW=1.0/(m[3][0]*v.x+m[3][1]*v.y+m[3][2]*v.z+m[3][3]);r.x=(m[0][0]*v.x+m[0][1]*v.y+m[0][2]*v.z+m[0][3])*fInvW;r.y=(m[1][0]*v.x+m[1][1]*v.y+m[1][2]*v.z+m[1][3])*fInvW;r.z=(m[2][0]*v.x+m[2][1]*v.y+m[2][2]*v.z+m[2][3])*fInvW;return r;}inline Vector4 operator*(const Vector4&v)const{return Vector4(m[0][0]*v.x+m[0][1]*v.y+m[0][2]*v.z+m[0][3]*v.w,m[1][0]*v.x+m[1][1]*v.y+m[1][2]*v.z+m[1][3]*v.w,m[2][0]*v.x+m[2][1]*v.y+m[2][2]*v.z+m[2][3]*v.w,m[3][0]*v.x+m[3][1]*v.y+m[3][2]*v.z+m[3][3]*v.w);}inline Plane operator*(const Plane&p)const{Plane ret;Matrix4 invTrans=inverse().transpose();Vector4 v4(p.normal.x,p.normal.y,p.normal.z,p.d);v4=invTrans*v4;ret.normal.x=v4.x;ret.normal.y=v4.y;ret.normal.z=v4.z;ret.d=v4.w/ret.normal.normalise();return ret;}inline Matrix4 operator+(const Matrix4&m2)const{Matrix4 r;r.m[0][0]=m[0][0]+m2.m[0][0];r.m[0][1]=m[0][1]+m2.m[0][1];r.m[0][2]=m[0][2]+m2.m[0][2];r.m[0][3]=m[0][3]+m2.m[0][3];r.m[1][0]=m[1][0]+m2.m[1][0];r.m[1][1]=m[1][1]+m2.m[1][1];r.m[1][2]=m[1][2]+m2.m[1][2];r.m[1][3]=m[1][3]+m2.m[1][3];r.m[2][0]=m[2][0]+m2.m[2][0];r.m[2][1]=m[2][1]+m2.m[2][1];r.m[2][2]=m[2][2]+m2.m[2][2];r.m[2][3]=m[2][3]+m2.m[2][3];r.m[3][0]=m[3][0]+m2.m[3][0];r.m[3][1]=m[3][1]+m2.m[3][1];r.m[3][2]=m[3][2]+m2.m[3][2];r.m[3][3]=m[3][3]+m2.m[3][3];return r;}inline Matrix4 operator-(const Matrix4&m2)const{Matrix4 r;r.m[0][0]=m[0][0]-m2.m[0][0];r.m[0][1]=m[0][1]-m2.m[0][1];r.m[0][2]=m[0][2]-m2.m[0][2];r.m[0][3]=m[0][3]-m2.m[0][3];r.m[1][0]=m[1][0]-m2.m[1][0];r.m[1][1]=m[1][1]-m2.m[1][1];r.m[1][2]=m[1][2]-m2.m[1][2];r.m[1][3]=m[1][3]-m2.m[1][3];r.m[2][0]=m[2][0]-m2.m[2][0];r.m[2][1]=m[2][1]-m2.m[2][1];r.m[2][2]=m[2][2]-m2.m[2][2];r.m[2][3]=m[2][3]-m2.m[2][3];r.m[3][0]=m[3][0]-m2.m[3][0];r.m[3][1]=m[3][1]-m2.m[3][1];r.m[3][2]=m[3][2]-m2.m[3][2];r.m[3][3]=m[3][3]-m2.m[3][3];return r;}inline bool operator==(const Matrix4&m2)const{if(m[0][0]!=m2.m[0][0]||m[0][1]!=m2.m[0][1]||m[0][2]!=m2.m[0][2]||m[0][3]!=m2.m[0][3]||m[1][0]!=m2.m[1][0]||m[1][1]!=m2.m[1][1]||m[1][2]!=m2.m[1][2]||m[1][3]!=m2.m[1][3]||m[2][0]!=m2.m[2][0]||m[2][1]!=m2.m[2][1]||m[2][2]!=m2.m[2][2]||m[2][3]!=m2.m[2][3]||m[3][0]!=m2.m[3][0]||m[3][1]!=m2.m[3][1]||m[3][2]!=m2.m[3][2]||m[3][3]!=m2.m[3][3])return false;return true;}inline bool operator!=(const Matrix4&m2)const{if(m[0][0]!=m2.m[0][0]||m[0][1]!=m2.m[0][1]||m[0][2]!=m2.m[0][2]||m[0][3]!=m2.m[0][3]||m[1][0]!=m2.m[1][0]||m[1][1]!=m2.m[1][1]||m[1][2]!=m2.m[1][2]||m[1][3]!=m2.m[1][3]||m[2][0]!=m2.m[2][0]||m[2][1]!=m2.m[2][1]||m[2][2]!=m2.m[2][2]||m[2][3]!=m2.m[2][3]||m[3][0]!=m2.m[3][0]||m[3][1]!=m2.m[3][1]||m[3][2]!=m2.m[3][2]||m[3][3]!=m2.m[3][3])return true;return false;}inline void operator=(const Matrix3&mat3){m[0][0]=mat3.m[0][0];m[0][1]=mat3.m[0][1];m[0][2]=mat3.m[0][2];m[1][0]=mat3.m[1][0];m[1][1]=mat3.m[1][1];m[1][2]=mat3.m[1][2];m[2][0]=mat3.m[2][0];m[2][1]=mat3.m[2][1];m[2][2]=mat3.m[2][2];}inline Matrix4 transpose(void)const{return Matrix4(m[0][0],m[1][0],m[2][0],m[3][0],m[0][1],m[1][1],m[2][1],m[3][1],m[0][2],m[1][2],m[2][2],m[3][2],m[0][3],m[1][3],m[2][3],m[3][3]);}inline void setTrans(const Vector3&v){m[0][3]=v.x;m[1][3]=v.y;m[2][3]=v.z;}inline Vector3 getTrans()const{return Vector3(m[0][3],m[1][3],m[2][3]);}inline void makeTrans(const Vector3&v){m[0][0]=1.0;m[0][1]=0.0;m[0][2]=0.0;m[0][3]=v.x;m[1][0]=0.0;m[1][1]=1.0;m[1][2]=0.0;m[1][3]=v.y;m[2][0]=0.0;m[2][1]=0.0;m[2][2]=1.0;m[2][3]=v.z;m[3][0]=0.0;m[3][1]=0.0;m[3][2]=0.0;m[3][3]=1.0;}inline void makeTrans(Real tx,Real ty,Real tz){m[0][0]=1.0;m[0][1]=0.0;m[0][2]=0.0;m[0][3]=tx;m[1][0]=0.0;m[1][1]=1.0;m[1][2]=0.0;m[1][3]=ty;m[2][0]=0.0;m[2][1]=0.0;m[2][2]=1.0;m[2][3]=tz;m[3][0]=0.0;m[3][1]=0.0;m[3][2]=0.0;m[3][3]=1.0;}inline static Matrix4 getTrans(const Vector3&v){Matrix4 r;r.m[0][0]=1.0;r.m[0][1]=0.0;r.m[0][2]=0.0;r.m[0][3]=v.x;r.m[1][0]=0.0;r.m[1][1]=1.0;r.m[1][2]=0.0;r.m[1][3]=v.y;r.m[2][0]=0.0;r.m[2][1]=0.0;r.m[2][2]=1.0;r.m[2][3]=v.z;r.m[3][0]=0.0;r.m[3][1]=0.0;r.m[3][2]=0.0;r.m[3][3]=1.0;return r;}inline static Matrix4 getTrans(Real t_x,Real t_y,Real t_z){Matrix4 r;r.m[0][0]=1.0;r.m[0][1]=0.0;r.m[0][2]=0.0;r.m[0][3]=t_x;r.m[1][0]=0.0;r.m[1][1]=1.0;r.m[1][2]=0.0;r.m[1][3]=t_y;r.m[2][0]=0.0;r.m[2][1]=0.0;r.m[2][2]=1.0;r.m[2][3]=t_z;r.m[3][0]=0.0;r.m[3][1]=0.0;r.m[3][2]=0.0;r.m[3][3]=1.0;return r;}inline void setScale(const Vector3&v){m[0][0]=v.x;m[1][1]=v.y;m[2][2]=v.z;}inline static Matrix4 getScale(const Vector3&v){Matrix4 r;r.m[0][0]=v.x;r.m[0][1]=0.0;r.m[0][2]=0.0;r.m[0][3]=0.0;r.m[1][0]=0.0;r.m[1][1]=v.y;r.m[1][2]=0.0;r.m[1][3]=0.0;r.m[2][0]=0.0;r.m[2][1]=0.0;r.m[2][2]=v.z;r.m[2][3]=0.0;r.m[3][0]=0.0;r.m[3][1]=0.0;r.m[3][2]=0.0;r.m[3][3]=1.0;return r;}inline static Matrix4 getScale(Real s_x,Real s_y,Real s_z){Matrix4 r;r.m[0][0]=s_x;r.m[0][1]=0.0;r.m[0][2]=0.0;r.m[0][3]=0.0;r.m[1][0]=0.0;r.m[1][1]=s_y;r.m[1][2]=0.0;r.m[1][3]=0.0;r.m[2][0]=0.0;r.m[2][1]=0.0;r.m[2][2]=s_z;r.m[2][3]=0.0;r.m[3][0]=0.0;r.m[3][1]=0.0;r.m[3][2]=0.0;r.m[3][3]=1.0;return r;}inline void extract3x3Matrix(Matrix3&m3x3)const{m3x3.m[0][0]=m[0][0];m3x3.m[0][1]=m[0][1];m3x3.m[0][2]=m[0][2];m3x3.m[1][0]=m[1][0];m3x3.m[1][1]=m[1][1];m3x3.m[1][2]=m[1][2];m3x3.m[2][0]=m[2][0];m3x3.m[2][1]=m[2][1];m3x3.m[2][2]=m[2][2];}inline Quaternion extractQuaternion()const{Matrix3 m3x3;extract3x3Matrix(m3x3);return Quaternion(m3x3);}static const Matrix4 ZERO;static const Matrix4 IDENTITY;static const Matrix4 CLIPSPACE2DTOIMAGESPACE;inline Matrix4 operator*(Real scalar)const{return Matrix4(scalar*m[0][0],scalar*m[0][1],scalar*m[0][2],scalar*m[0][3],scalar*m[1][0],scalar*m[1][1],scalar*m[1][2],scalar*m[1][3],scalar*m[2][0],scalar*m[2][1],scalar*m[2][2],scalar*m[2][3],scalar*m[3][0],scalar*m[3][1],scalar*m[3][2],scalar*m[3][3]);}inline __declspec(dllimport)friend std::ostream&operator<<(std::ostream&o,const Matrix4&m){o<<"Matrix4(";for(size_t i=0;i<4;++i){o<<" row"<<(unsigned)i<<"{";for(size_t j=0;j<4;++j){o<<m[i][j]<<" ";}o<<"}";}o<<")";return o;}Matrix4 adjoint()const;Real determinant()const;Matrix4 inverse()const;void makeTransform(const Vector3&position,const Vector3&scale,const Quaternion&orientation);void makeInverseTransform(const Vector3&position,const Vector3&scale,const Quaternion&orientation);inline bool isAffine(void)const{return m[3][0]==0&&m[3][1]==0&&m[3][2]==0&&m[3][3]==1;}Matrix4 inverseAffine(void)const;inline Matrix4 concatenateAffine(const Matrix4&m2)const{((void)0);return Matrix4(m[0][0]*m2.m[0][0]+m[0][1]*m2.m[1][0]+m[0][2]*m2.m[2][0],m[0][0]*m2.m[0][1]+m[0][1]*m2.m[1][1]+m[0][2]*m2.m[2][1],m[0][0]*m2.m[0][2]+m[0][1]*m2.m[1][2]+m[0][2]*m2.m[2][2],m[0][0]*m2.m[0][3]+m[0][1]*m2.m[1][3]+m[0][2]*m2.m[2][3]+m[0][3],m[1][0]*m2.m[0][0]+m[1][1]*m2.m[1][0]+m[1][2]*m2.m[2][0],m[1][0]*m2.m[0][1]+m[1][1]*m2.m[1][1]+m[1][2]*m2.m[2][1],m[1][0]*m2.m[0][2]+m[1][1]*m2.m[1][2]+m[1][2]*m2.m[2][2],m[1][0]*m2.m[0][3]+m[1][1]*m2.m[1][3]+m[1][2]*m2.m[2][3]+m[1][3],m[2][0]*m2.m[0][0]+m[2][1]*m2.m[1][0]+m[2][2]*m2.m[2][0],m[2][0]*m2.m[0][1]+m[2][1]*m2.m[1][1]+m[2][2]*m2.m[2][1],m[2][0]*m2.m[0][2]+m[2][1]*m2.m[1][2]+m[2][2]*m2.m[2][2],m[2][0]*m2.m[0][3]+m[2][1]*m2.m[1][3]+m[2][2]*m2.m[2][3]+m[2][3],0,0,0,1);}inline Vector3 transformAffine(const Vector3&v)const{((void)0);return Vector3(m[0][0]*v.x+m[0][1]*v.y+m[0][2]*v.z+m[0][3],m[1][0]*v.x+m[1][1]*v.y+m[1][2]*v.z+m[1][3],m[2][0]*v.x+m[2][1]*v.y+m[2][2]*v.z+m[2][3]);}inline Vector4 transformAffine(const Vector4&v)const{((void)0);return Vector4(m[0][0]*v.x+m[0][1]*v.y+m[0][2]*v.z+m[0][3]*v.w,m[1][0]*v.x+m[1][1]*v.y+m[1][2]*v.z+m[1][3]*v.w,m[2][0]*v.x+m[2][1]*v.y+m[2][2]*v.z+m[2][3]*v.w,v.w);}};inline Vector4 operator*(const Vector4&v,const Matrix4&mat){return Vector4(v.x*mat[0][0]+v.y*mat[1][0]+v.z*mat[2][0]+v.w*mat[3][0],v.x*mat[0][1]+v.y*mat[1][1]+v.z*mat[2][1]+v.w*mat[3][1],v.x*mat[0][2]+v.y*mat[1][2]+v.z*mat[2][2]+v.w*mat[3][2],v.x*mat[0][3]+v.y*mat[1][3]+v.z*mat[2][3]+v.w*mat[3][3]);}}
namespace Ogre{class __declspec(dllimport)HardwareBuffer{public:enum Usage{HBU_STATIC=1,HBU_DYNAMIC=2,HBU_WRITE_ONLY=4,HBU_DISCARDABLE=8,HBU_STATIC_WRITE_ONLY=5,HBU_DYNAMIC_WRITE_ONLY=6,HBU_DYNAMIC_WRITE_ONLY_DISCARDABLE=14};enum LockOptions{HBL_NORMAL,HBL_DISCARD,HBL_READ_ONLY,HBL_NO_OVERWRITE};protected:size_t mSizeInBytes;Usage mUsage;bool mIsLocked;size_t mLockStart;size_t mLockSize;bool mSystemMemory;bool mUseShadowBuffer;HardwareBuffer*mpShadowBuffer;bool mShadowUpdated;bool mSuppressHardwareUpdate;virtual void*lockImpl(size_t offset,size_t length,LockOptions options)=0;virtual void unlockImpl(void)=0;public:HardwareBuffer(Usage usage,bool systemMemory,bool useShadowBuffer):mUsage(usage),mIsLocked(false),mSystemMemory(systemMemory),mUseShadowBuffer(useShadowBuffer),mpShadowBuffer(0),mShadowUpdated(false),mSuppressHardwareUpdate(false){if(useShadowBuffer&&usage==HBU_DYNAMIC){mUsage=HBU_DYNAMIC_WRITE_ONLY;}else if(useShadowBuffer&&usage==HBU_STATIC){mUsage=HBU_STATIC_WRITE_ONLY;}}virtual~HardwareBuffer(){}virtual void*lock(size_t offset,size_t length,LockOptions options){((void)0);void*ret;if(mUseShadowBuffer){if(options!=HBL_READ_ONLY){mShadowUpdated=true;}ret=mpShadowBuffer->lock(offset,length,options);}else{ret=lockImpl(offset,length,options);mIsLocked=true;}mLockStart=offset;mLockSize=length;return ret;}void*lock(LockOptions options){return this->lock(0,mSizeInBytes,options);}virtual void unlock(void){((void)0);if(mUseShadowBuffer&&mpShadowBuffer->isLocked()){mpShadowBuffer->unlock();_updateFromShadow();}else{unlockImpl();mIsLocked=false;}}virtual void readData(size_t offset,size_t length,void*pDest)=0;virtual void writeData(size_t offset,size_t length,const void*pSource,bool discardWholeBuffer=false)=0;virtual void copyData(HardwareBuffer&srcBuffer,size_t srcOffset,size_t dstOffset,size_t length,bool discardWholeBuffer=false){const void*srcData=srcBuffer.lock(srcOffset,length,HBL_READ_ONLY);this->writeData(dstOffset,length,srcData,discardWholeBuffer);srcBuffer.unlock();}virtual void _updateFromShadow(void){if(mUseShadowBuffer&&mShadowUpdated&&!mSuppressHardwareUpdate){const void*srcData=mpShadowBuffer->lockImpl(mLockStart,mLockSize,HBL_READ_ONLY);LockOptions lockOpt;if(mLockStart==0&&mLockSize==mSizeInBytes)lockOpt=HBL_DISCARD;else lockOpt=HBL_NORMAL;void*destData=this->lockImpl(mLockStart,mLockSize,lockOpt);memcpy(destData,srcData,mLockSize);this->unlockImpl();mpShadowBuffer->unlockImpl();mShadowUpdated=false;}}size_t getSizeInBytes(void)const{return mSizeInBytes;}Usage getUsage(void)const{return mUsage;}bool isSystemMemory(void)const{return mSystemMemory;}bool hasShadowBuffer(void)const{return mUseShadowBuffer;}bool isLocked(void)const{return mIsLocked||(mUseShadowBuffer&&mpShadowBuffer->isLocked());}void suppressHardwareUpdate(bool suppress){mSuppressHardwareUpdate=suppress;if(!suppress)_updateFromShadow();}};}
namespace Ogre{class __declspec(dllimport)HardwareVertexBuffer:public HardwareBuffer{protected:size_t mNumVertices;size_t mVertexSize;public:HardwareVertexBuffer(size_t vertexSize,size_t numVertices,HardwareBuffer::Usage usage,bool useSystemMemory,bool useShadowBuffer);~HardwareVertexBuffer();size_t getVertexSize(void)const{return mVertexSize;}size_t getNumVertices(void)const{return mNumVertices;}};class __declspec(dllimport)HardwareVertexBufferSharedPtr:public SharedPtr<HardwareVertexBuffer>{public:HardwareVertexBufferSharedPtr():SharedPtr<HardwareVertexBuffer>(){}explicit HardwareVertexBufferSharedPtr(HardwareVertexBuffer*buf);};enum VertexElementSemantic{VES_POSITION=1,VES_BLEND_WEIGHTS=2,VES_BLEND_INDICES=3,VES_NORMAL=4,VES_DIFFUSE=5,VES_SPECULAR=6,VES_TEXTURE_COORDINATES=7,VES_BINORMAL=8,VES_TANGENT=9};enum VertexElementType{VET_FLOAT1=0,VET_FLOAT2=1,VET_FLOAT3=2,VET_FLOAT4=3,VET_COLOUR=4,VET_SHORT1=5,VET_SHORT2=6,VET_SHORT3=7,VET_SHORT4=8,VET_UBYTE4=9,VET_COLOUR_ARGB=10,VET_COLOUR_ABGR=11};class __declspec(dllimport)VertexElement{protected:unsigned short mSource;size_t mOffset;VertexElementType mType;VertexElementSemantic mSemantic;unsigned short mIndex;public:VertexElement(unsigned short source,size_t offset,VertexElementType theType,VertexElementSemantic semantic,unsigned short index=0);unsigned short getSource(void)const{return mSource;}size_t getOffset(void)const{return mOffset;}VertexElementType getType(void)const{return mType;}VertexElementSemantic getSemantic(void)const{return mSemantic;}unsigned short getIndex(void)const{return mIndex;}size_t getSize(void)const;static size_t getTypeSize(VertexElementType etype);static unsigned short getTypeCount(VertexElementType etype);static VertexElementType multiplyTypeCount(VertexElementType baseType,unsigned short count);static VertexElementType getBaseType(VertexElementType multiType);static void convertColourValue(VertexElementType srcType,VertexElementType dstType,uint32*ptr);static uint32 convertColourValue(const ColourValue&src,VertexElementType dst);static VertexElementType getBestColourVertexElementType(void);inline bool operator==(const VertexElement&rhs)const{if(mType!=rhs.mType||mIndex!=rhs.mIndex||mOffset!=rhs.mOffset||mSemantic!=rhs.mSemantic||mSource!=rhs.mSource)return false;else return true;}inline void baseVertexPointerToElement(void*pBase,void**pElem)const{*pElem=static_cast<void*>(static_cast<unsigned char*>(pBase)+mOffset);}inline void baseVertexPointerToElement(void*pBase,float**pElem)const{*pElem=static_cast<float*>(static_cast<void*>(static_cast<unsigned char*>(pBase)+mOffset));}inline void baseVertexPointerToElement(void*pBase,RGBA**pElem)const{*pElem=static_cast<RGBA*>(static_cast<void*>(static_cast<unsigned char*>(pBase)+mOffset));}inline void baseVertexPointerToElement(void*pBase,unsigned char**pElem)const{*pElem=static_cast<unsigned char*>(pBase)+mOffset;}inline void baseVertexPointerToElement(void*pBase,unsigned short**pElem)const{*pElem=static_cast<unsigned short*>(pBase)+mOffset;}};class __declspec(dllimport)VertexDeclaration{public:typedef std::list<VertexElement>VertexElementList;static bool vertexElementLess(const VertexElement&e1,const VertexElement&e2);protected:VertexElementList mElementList;public:VertexDeclaration();virtual~VertexDeclaration();size_t getElementCount(void){return mElementList.size();}const VertexElementList&getElements(void)const;const VertexElement*getElement(unsigned short index);void sort(void);void closeGapsInSource(void);VertexDeclaration*getAutoOrganisedDeclaration(bool skeletalAnimation,bool vertexAnimation);unsigned short getMaxSource(void)const;virtual const VertexElement&addElement(unsigned short source,size_t offset,VertexElementType theType,VertexElementSemantic semantic,unsigned short index=0);virtual const VertexElement&insertElement(unsigned short atPosition,unsigned short source,size_t offset,VertexElementType theType,VertexElementSemantic semantic,unsigned short index=0);virtual void removeElement(unsigned short elem_index);virtual void removeElement(VertexElementSemantic semantic,unsigned short index=0);virtual void removeAllElements(void);virtual void modifyElement(unsigned short elem_index,unsigned short source,size_t offset,VertexElementType theType,VertexElementSemantic semantic,unsigned short index=0);virtual const VertexElement*findElementBySemantic(VertexElementSemantic sem,unsigned short index=0);virtual VertexElementList findElementsBySource(unsigned short source);virtual size_t getVertexSize(unsigned short source);virtual VertexDeclaration*clone(void);inline bool operator==(const VertexDeclaration&rhs)const{if(mElementList.size()!=rhs.mElementList.size())return false;VertexElementList::const_iterator i,iend,rhsi,rhsiend;iend=mElementList.end();rhsiend=rhs.mElementList.end();rhsi=rhs.mElementList.begin();for(i=mElementList.begin();i!=iend&&rhsi!=rhsiend;++i,++rhsi){if(!(*i==*rhsi))return false;}return true;}inline bool operator!=(const VertexDeclaration&rhs)const{return!(*this==rhs);}};class __declspec(dllimport)VertexBufferBinding{public:typedef std::map<unsigned short,HardwareVertexBufferSharedPtr>VertexBufferBindingMap;protected:VertexBufferBindingMap mBindingMap;mutable unsigned short mHighIndex;public:VertexBufferBinding();virtual~VertexBufferBinding();virtual void setBinding(unsigned short index,const HardwareVertexBufferSharedPtr&buffer);virtual void unsetBinding(unsigned short index);virtual void unsetAllBindings(void);virtual const VertexBufferBindingMap&getBindings(void)const;virtual const HardwareVertexBufferSharedPtr&getBuffer(unsigned short index)const;virtual bool isBufferBound(unsigned short index)const;virtual size_t getBufferCount(void)const{return mBindingMap.size();}virtual unsigned short getNextIndex(void)const{return mHighIndex++;}virtual unsigned short getLastBoundIndex(void)const;typedef std::map<ushort,ushort>BindingIndexMap;virtual bool hasGaps(void)const;virtual void closeGaps(BindingIndexMap&bindingIndexMap);};}
namespace Ogre{class __declspec(dllimport)DataStream{protected:String mName;size_t mSize;public:DataStream():mSize(0){}DataStream(const String&name):mName(name),mSize(0){}const String&getName(void){return mName;}virtual~DataStream(){}template<typename T>DataStream&operator>>(T&val);virtual size_t read(void*buf,size_t count)=0;virtual size_t readLine(char*buf,size_t maxCount,const String&delim="\n");virtual String getLine(bool trimAfter=true);virtual String getAsString(void);virtual size_t skipLine(const String&delim="\n");virtual void skip(long count)=0;virtual void seek(size_t pos)=0;virtual size_t tell(void)const=0;virtual bool eof(void)const=0;size_t size(void)const{return mSize;}virtual void close(void)=0;};typedef SharedPtr<DataStream>DataStreamPtr;typedef std::list<DataStreamPtr>DataStreamList;typedef SharedPtr<DataStreamList>DataStreamListPtr;class __declspec(dllimport)MemoryDataStream:public DataStream{protected:uchar*mData;uchar*mPos;uchar*mEnd;bool mFreeOnClose;public:MemoryDataStream(void*pMem,size_t size,bool freeOnClose=false);MemoryDataStream(const String&name,void*pMem,size_t size,bool freeOnClose=false);MemoryDataStream(DataStream&sourceStream,bool freeOnClose=true);MemoryDataStream(DataStreamPtr&sourceStream,bool freeOnClose=true);MemoryDataStream(const String&name,DataStream&sourceStream,bool freeOnClose=true);MemoryDataStream(const String&name,const DataStreamPtr&sourceStream,bool freeOnClose=true);MemoryDataStream(size_t size,bool freeOnClose=true);MemoryDataStream(const String&name,size_t size,bool freeOnClose=true);~MemoryDataStream();uchar*getPtr(void){return mData;}uchar*getCurrentPtr(void){return mPos;}size_t read(void*buf,size_t count);size_t readLine(char*buf,size_t maxCount,const String&delim="\n");size_t skipLine(const String&delim="\n");void skip(long count);void seek(size_t pos);size_t tell(void)const;bool eof(void)const;void close(void);void setFreeOnClose(bool free){mFreeOnClose=free;}};typedef SharedPtr<MemoryDataStream>MemoryDataStreamPtr;class __declspec(dllimport)FileStreamDataStream:public DataStream{protected:std::ifstream*mpStream;bool mFreeOnClose;public:FileStreamDataStream(std::ifstream*s,bool freeOnClose=true);FileStreamDataStream(const String&name,std::ifstream*s,bool freeOnClose=true);FileStreamDataStream(const String&name,std::ifstream*s,size_t size,bool freeOnClose=true);~FileStreamDataStream();size_t read(void*buf,size_t count);size_t readLine(char*buf,size_t maxCount,const String&delim="\n");void skip(long count);void seek(size_t pos);size_t tell(void)const;bool eof(void)const;void close(void);};class __declspec(dllimport)FileHandleDataStream:public DataStream{protected:FILE*mFileHandle;public:FileHandleDataStream(FILE*handle);FileHandleDataStream(const String&name,FILE*handle);~FileHandleDataStream();size_t read(void*buf,size_t count);void skip(long count);void seek(size_t pos);size_t tell(void)const;bool eof(void)const;void close(void);};}
namespace Ogre{enum CompareFunction{CMPF_ALWAYS_FAIL,CMPF_ALWAYS_PASS,CMPF_LESS,CMPF_LESS_EQUAL,CMPF_EQUAL,CMPF_NOT_EQUAL,CMPF_GREATER_EQUAL,CMPF_GREATER};enum TextureFilterOptions{TFO_NONE,TFO_BILINEAR,TFO_TRILINEAR,TFO_ANISOTROPIC};enum FilterType{FT_MIN,FT_MAG,FT_MIP};enum FilterOptions{FO_NONE,FO_POINT,FO_LINEAR,FO_ANISOTROPIC};enum ShadeOptions{SO_FLAT,SO_GOURAUD,SO_PHONG};enum FogMode{FOG_NONE,FOG_EXP,FOG_EXP2,FOG_LINEAR};enum CullingMode{CULL_NONE=1,CULL_CLOCKWISE=2,CULL_ANTICLOCKWISE=3};enum ManualCullingMode{MANUAL_CULL_NONE=1,MANUAL_CULL_BACK=2,MANUAL_CULL_FRONT=3};enum WaveformType{WFT_SINE,WFT_TRIANGLE,WFT_SQUARE,WFT_SAWTOOTH,WFT_INVERSE_SAWTOOTH,WFT_PWM};enum PolygonMode{PM_POINTS=1,PM_WIREFRAME=2,PM_SOLID=3};enum ShadowTechnique{SHADOWTYPE_NONE=0x00,SHADOWDETAILTYPE_ADDITIVE=0x01,SHADOWDETAILTYPE_MODULATIVE=0x02,SHADOWDETAILTYPE_INTEGRATED=0x04,SHADOWDETAILTYPE_STENCIL=0x10,SHADOWDETAILTYPE_TEXTURE=0x20,SHADOWTYPE_STENCIL_MODULATIVE=0x12,SHADOWTYPE_STENCIL_ADDITIVE=0x11,SHADOWTYPE_TEXTURE_MODULATIVE=0x22,SHADOWTYPE_TEXTURE_ADDITIVE=0x21,SHADOWTYPE_TEXTURE_ADDITIVE_INTEGRATED=0x25,SHADOWTYPE_TEXTURE_MODULATIVE_INTEGRATED=0x26};typedef int TrackVertexColourType;enum TrackVertexColourEnum{TVC_NONE=0x0,TVC_AMBIENT=0x1,TVC_DIFFUSE=0x2,TVC_SPECULAR=0x4,TVC_EMISSIVE=0x8};enum SortMode{SM_DIRECTION,SM_DISTANCE};enum FrameBufferType{FBT_COLOUR=0x1,FBT_DEPTH=0x2,FBT_STENCIL=0x4};class Light;typedef std::vector<Light*>LightList;typedef std::map<String,bool>UnaryOptionList;typedef std::map<String,String>BinaryOptionList;typedef std::map<String,String>NameValuePairList;typedef std::map<String,String>AliasTextureNamePairList;template<typename T>struct TRect{T left,top,right,bottom;TRect(){}TRect(T const&l,T const&t,T const&r,T const&b):left(l),top(t),right(r),bottom(b){}TRect(TRect const&o):left(o.left),top(o.top),right(o.right),bottom(o.bottom){}TRect&operator=(TRect const&o){left=o.left;top=o.top;right=o.right;bottom=o.bottom;return*this;}T width()const{return right-left;}T height()const{return bottom-top;}};typedef TRect<float>FloatRect;typedef TRect<long>Rect;struct Box{size_t left,top,right,bottom,front,back;Box(){}Box(size_t l,size_t t,size_t r,size_t b):left(l),top(t),right(r),bottom(b),front(0),back(1){((void)0);}Box(size_t l,size_t t,size_t ff,size_t r,size_t b,size_t bb):left(l),top(t),right(r),bottom(b),front(ff),back(bb){((void)0);}bool contains(const Box&def)const{return(def.left>=left&&def.top>=top&&def.front>=front&&def.right<=right&&def.bottom<=bottom&&def.back<=back);}size_t getWidth()const{return right-left;}size_t getHeight()const{return bottom-top;}size_t getDepth()const{return back-front;}};int __declspec(dllimport)findCommandLineOpts(int numargs,char**argv,UnaryOptionList&unaryOptList,BinaryOptionList&binOptList);}
namespace Ogre{enum ParameterType{PT_BOOL,PT_REAL,PT_INT,PT_UNSIGNED_INT,PT_SHORT,PT_UNSIGNED_SHORT,PT_LONG,PT_UNSIGNED_LONG,PT_STRING,PT_VECTOR3,PT_MATRIX3,PT_MATRIX4,PT_QUATERNION,PT_COLOURVALUE};class __declspec(dllimport)ParameterDef{public:String name;String description;ParameterType paramType;ParameterDef(const String&newName,const String&newDescription,ParameterType newType):name(newName),description(newDescription),paramType(newType){}};typedef std::vector<ParameterDef>ParameterList;class __declspec(dllimport)ParamCommand{public:virtual String doGet(const void*target)const=0;virtual void doSet(void*target,const String&val)=0;virtual~ParamCommand(){}};typedef std::map<String,ParamCommand*>ParamCommandMap;class __declspec(dllimport)ParamDictionary{friend class StringInterface;protected:ParameterList mParamDefs;ParamCommandMap mParamCommands;ParamCommand*getParamCommand(const String&name){ParamCommandMap::iterator i=mParamCommands.find(name);if(i!=mParamCommands.end()){return i->second;}else{return 0;}}const ParamCommand*getParamCommand(const String&name)const{ParamCommandMap::const_iterator i=mParamCommands.find(name);if(i!=mParamCommands.end()){return i->second;}else{return 0;}}public:ParamDictionary(){}void addParameter(const ParameterDef&paramDef,ParamCommand*paramCmd){mParamDefs.push_back(paramDef);mParamCommands[paramDef.name]=paramCmd;}const ParameterList&getParameters(void)const{return mParamDefs;}};typedef std::map<String,ParamDictionary>ParamDictionaryMap;class __declspec(dllimport)StringInterface{protected:static ParamDictionaryMap msDictionary;String mParamDictName;bool createParamDictionary(const String&className){mParamDictName=className;if(msDictionary.find(className)==msDictionary.end()){msDictionary[className]=ParamDictionary();return true;}return false;}public:virtual~StringInterface(){}ParamDictionary*getParamDictionary(void){ParamDictionaryMap::iterator i=msDictionary.find(mParamDictName);if(i!=msDictionary.end()){return&(i->second);}else{return 0;}}const ParamDictionary*getParamDictionary(void)const{ParamDictionaryMap::const_iterator i=msDictionary.find(mParamDictName);if(i!=msDictionary.end()){return&(i->second);}else{return 0;}}const ParameterList&getParameters(void)const;virtual bool setParameter(const String&name,const String&value);virtual void setParameterList(const NameValuePairList&paramList);virtual String getParameter(const String&name)const{const ParamDictionary*dict=getParamDictionary();if(dict){const ParamCommand*cmd=dict->getParamCommand(name);if(cmd){return cmd->doGet(this);}}return"";}virtual void copyParametersTo(StringInterface*dest)const{const ParamDictionary*dict=getParamDictionary();if(dict){ParameterList::const_iterator i;for(i=dict->mParamDefs.begin();i!=dict->mParamDefs.end();++i){dest->setParameter(i->name,getParameter(i->name));}}}static void cleanupDictionary();};}
namespace Ogre{typedef unsigned long ResourceHandle;class ManualResourceLoader;class __declspec(dllimport)Resource:public StringInterface{public:class Listener{public:Listener(){}virtual~Listener(){}virtual void backgroundLoadingComplete(Resource*){}};enum LoadingState{LOADSTATE_UNLOADED,LOADSTATE_LOADING,LOADSTATE_LOADED,LOADSTATE_UNLOADING};protected:ResourceManager*mCreator;String mName;String mGroup;ResourceHandle mHandle;volatile LoadingState mLoadingState;volatile bool mIsBackgroundLoaded;size_t mSize;bool mIsManual;String mOrigin;ManualResourceLoader*mLoader;typedef std::list<Listener*>ListenerList;ListenerList mListenerList;Resource():mCreator(0),mHandle(0),mLoadingState(LOADSTATE_UNLOADED),mIsBackgroundLoaded(false),mSize(0),mIsManual(0),mLoader(0){}virtual void preLoadImpl(void){}virtual void postLoadImpl(void){}virtual void preUnloadImpl(void){}virtual void postUnloadImpl(void){}virtual void loadImpl(void)=0;virtual void unloadImpl(void)=0;virtual size_t calculateSize(void)const=0;virtual void queueFireBackgroundLoadingComplete(void);public:Resource(ResourceManager*creator,const String&name,ResourceHandle handle,const String&group,bool isManual=false,ManualResourceLoader*loader=0);virtual~Resource();virtual void load(bool backgroundThread=false);virtual void reload(void);bool isReloadable(void)const{return!mIsManual||mLoader;}bool isManuallyLoaded(void)const{return mIsManual;}virtual void unload(void);size_t getSize(void)const{return mSize;}virtual void touch(void);const String&getName(void)const{return mName;}ResourceHandle getHandle(void)const{return mHandle;}bool isLoaded(void)const{return(mLoadingState==LOADSTATE_LOADED);}LoadingState isLoading()const{return mLoadingState;}LoadingState getLoadingState()const{return mLoadingState;}bool isBackgroundLoaded(void)const{return mIsBackgroundLoaded;}void setBackgroundLoaded(bool bl){mIsBackgroundLoaded=bl;}void escalateLoading();void addListener(Listener*lis);void removeListener(Listener*lis);const String&getGroup(void){return mGroup;}void changeGroupOwnership(const String&newGroup);ResourceManager*getCreator(void){return mCreator;}const String&getOrigin(void)const{return mOrigin;}void _notifyOrigin(const String&origin){mOrigin=origin;}};typedef SharedPtr<Resource>ResourcePtr;class __declspec(dllimport)ManualResourceLoader{public:ManualResourceLoader(){}virtual~ManualResourceLoader(){}virtual void loadResource(Resource*resource)=0;};}
namespace Ogre{template<typename T>class Singleton{protected:static T*ms_Singleton;public:Singleton(void){((void)0);ms_Singleton=static_cast<T*>(this);}~Singleton(void){((void)0);ms_Singleton=0;}static T&getSingleton(void){((void)0);return(*ms_Singleton);}static T*getSingletonPtr(void){return ms_Singleton;}};}
namespace Ogre{class __declspec(dllimport)ScriptLoader{public:virtual~ScriptLoader();virtual const StringVector&getScriptPatterns(void)const=0;virtual void parseScript(DataStreamPtr&stream,const String&groupName)=0;virtual Real getLoadingOrder(void)const=0;};}
namespace Ogre{class __declspec(dllimport)ResourceManager:public ScriptLoader{public:ResourceManager();virtual~ResourceManager();virtual ResourcePtr create(const String&name,const String&group,bool isManual=false,ManualResourceLoader*loader=0,const NameValuePairList*createParams=0);typedef std::pair<ResourcePtr,bool>ResourceCreateOrRetrieveResult;virtual ResourceCreateOrRetrieveResult createOrRetrieve(const String&name,const String&group,bool isManual=false,ManualResourceLoader*loader=0,const NameValuePairList*createParams=0);virtual void setMemoryBudget(size_t bytes);virtual size_t getMemoryBudget(void)const;virtual size_t getMemoryUsage(void)const{return mMemoryUsage;}virtual void unload(const String&name);virtual void unload(ResourceHandle handle);virtual void unloadAll(bool reloadableOnly=true);virtual void reloadAll(bool reloadableOnly=true);virtual void unloadUnreferencedResources(bool reloadableOnly=true);virtual void reloadUnreferencedResources(bool reloadableOnly=true);virtual void remove(ResourcePtr&r);virtual void remove(const String&name);virtual void remove(ResourceHandle handle);virtual void removeAll(void);virtual ResourcePtr getByName(const String&name);virtual ResourcePtr getByHandle(ResourceHandle handle);virtual bool resourceExists(const String&name){return!getByName(name).isNull();}virtual bool resourceExists(ResourceHandle handle){return!getByHandle(handle).isNull();}virtual void _notifyResourceTouched(Resource*res);virtual void _notifyResourceLoaded(Resource*res);virtual void _notifyResourceUnloaded(Resource*res);virtual ResourcePtr load(const String&name,const String&group,bool isManual=false,ManualResourceLoader*loader=0,const NameValuePairList*loadParams=0);virtual const StringVector&getScriptPatterns(void)const{return mScriptPatterns;}virtual void parseScript(DataStreamPtr&stream,const String&groupName){}virtual Real getLoadingOrder(void)const{return mLoadOrder;}const String&getResourceType(void)const{return mResourceType;}protected:ResourceHandle getNextHandle(void);virtual Resource*createImpl(const String&name,ResourceHandle handle,const String&group,bool isManual,ManualResourceLoader*loader,const NameValuePairList*createParams)=0;virtual void addImpl(ResourcePtr&res);virtual void removeImpl(ResourcePtr&res);virtual void checkUsage(void);public:typedef::stdext::hash_map<String,ResourcePtr>ResourceMap;typedef std::map<ResourceHandle,ResourcePtr>ResourceHandleMap;protected:ResourceHandleMap mResourcesByHandle;ResourceMap mResources;ResourceHandle mNextHandle;size_t mMemoryBudget;size_t mMemoryUsage;StringVector mScriptPatterns;Real mLoadOrder;String mResourceType;public:typedef MapIterator<ResourceHandleMap>ResourceMapIterator;ResourceMapIterator getResourceIterator(void){return ResourceMapIterator(mResourcesByHandle.begin(),mResourcesByHandle.end());}};}
namespace Ogre{class __declspec(dllimport)AxisAlignedBox{protected:enum Extent{EXTENT_NULL,EXTENT_FINITE,EXTENT_INFINITE};Vector3 mMinimum;Vector3 mMaximum;Extent mExtent;mutable Vector3*mpCorners;public:typedef enum{FAR_LEFT_BOTTOM=0,FAR_LEFT_TOP=1,FAR_RIGHT_TOP=2,FAR_RIGHT_BOTTOM=3,NEAR_RIGHT_BOTTOM=7,NEAR_LEFT_BOTTOM=6,NEAR_LEFT_TOP=5,NEAR_RIGHT_TOP=4}CornerEnum;inline AxisAlignedBox():mpCorners(0){setMinimum(-0.5,-0.5,-0.5);setMaximum(0.5,0.5,0.5);mExtent=EXTENT_NULL;}inline AxisAlignedBox(const AxisAlignedBox&rkBox):mpCorners(0){if(rkBox.isNull())setNull();else if(rkBox.isInfinite())setInfinite();else setExtents(rkBox.mMinimum,rkBox.mMaximum);}inline AxisAlignedBox(const Vector3&min,const Vector3&max):mpCorners(0){setExtents(min,max);}inline AxisAlignedBox(Real mx,Real my,Real mz,Real Mx,Real My,Real Mz):mpCorners(0){setExtents(mx,my,mz,Mx,My,Mz);}AxisAlignedBox&operator=(const AxisAlignedBox&rhs){if(rhs.isNull())setNull();else if(rhs.isInfinite())setInfinite();else setExtents(rhs.mMinimum,rhs.mMaximum);return*this;}~AxisAlignedBox(){if(mpCorners)delete[]mpCorners;}inline const Vector3&getMinimum(void)const{return mMinimum;}inline Vector3&getMinimum(void){return mMinimum;}inline const Vector3&getMaximum(void)const{return mMaximum;}inline Vector3&getMaximum(void){return mMaximum;}inline void setMinimum(const Vector3&vec){mExtent=EXTENT_FINITE;mMinimum=vec;}inline void setMinimum(Real x,Real y,Real z){mExtent=EXTENT_FINITE;mMinimum.x=x;mMinimum.y=y;mMinimum.z=z;}inline void setMinimumX(Real x){mMinimum.x=x;}inline void setMinimumY(Real y){mMinimum.y=y;}inline void setMinimumZ(Real z){mMinimum.z=z;}inline void setMaximum(const Vector3&vec){mExtent=EXTENT_FINITE;mMaximum=vec;}inline void setMaximum(Real x,Real y,Real z){mExtent=EXTENT_FINITE;mMaximum.x=x;mMaximum.y=y;mMaximum.z=z;}inline void setMaximumX(Real x){mMaximum.x=x;}inline void setMaximumY(Real y){mMaximum.y=y;}inline void setMaximumZ(Real z){mMaximum.z=z;}inline void setExtents(const Vector3&min,const Vector3&max){((void)0);mExtent=EXTENT_FINITE;mMinimum=min;mMaximum=max;}inline void setExtents(Real mx,Real my,Real mz,Real Mx,Real My,Real Mz){((void)0);mExtent=EXTENT_FINITE;mMinimum.x=mx;mMinimum.y=my;mMinimum.z=mz;mMaximum.x=Mx;mMaximum.y=My;mMaximum.z=Mz;}inline const Vector3*getAllCorners(void)const{((void)0);if(!mpCorners)mpCorners=new Vector3[8];mpCorners[0]=mMinimum;mpCorners[1].x=mMinimum.x;mpCorners[1].y=mMaximum.y;mpCorners[1].z=mMinimum.z;mpCorners[2].x=mMaximum.x;mpCorners[2].y=mMaximum.y;mpCorners[2].z=mMinimum.z;mpCorners[3].x=mMaximum.x;mpCorners[3].y=mMinimum.y;mpCorners[3].z=mMinimum.z;mpCorners[4]=mMaximum;mpCorners[5].x=mMinimum.x;mpCorners[5].y=mMaximum.y;mpCorners[5].z=mMaximum.z;mpCorners[6].x=mMinimum.x;mpCorners[6].y=mMinimum.y;mpCorners[6].z=mMaximum.z;mpCorners[7].x=mMaximum.x;mpCorners[7].y=mMinimum.y;mpCorners[7].z=mMaximum.z;return mpCorners;}Vector3 getCorner(CornerEnum cornerToGet)const{switch(cornerToGet){case FAR_LEFT_BOTTOM:return mMinimum;case FAR_LEFT_TOP:return Vector3(mMinimum.x,mMaximum.y,mMinimum.z);case FAR_RIGHT_TOP:return Vector3(mMaximum.x,mMaximum.y,mMinimum.z);case FAR_RIGHT_BOTTOM:return Vector3(mMaximum.x,mMinimum.y,mMinimum.z);case NEAR_RIGHT_BOTTOM:return Vector3(mMaximum.x,mMinimum.y,mMaximum.z);case NEAR_LEFT_BOTTOM:return Vector3(mMinimum.x,mMinimum.y,mMaximum.z);case NEAR_LEFT_TOP:return Vector3(mMinimum.x,mMaximum.y,mMaximum.z);case NEAR_RIGHT_TOP:return mMaximum;default:return Vector3();}}__declspec(dllimport)friend std::ostream&operator<<(std::ostream&o,const AxisAlignedBox aab){switch(aab.mExtent){case EXTENT_NULL:o<<"AxisAlignedBox(null)";return o;case EXTENT_FINITE:o<<"AxisAlignedBox(min="<<aab.mMinimum<<", max="<<aab.mMaximum<<")";return o;case EXTENT_INFINITE:o<<"AxisAlignedBox(infinite)";return o;default:((void)0);return o;}}void merge(const AxisAlignedBox&rhs){if((rhs.mExtent==EXTENT_NULL)||(mExtent==EXTENT_INFINITE)){return;}else if(rhs.mExtent==EXTENT_INFINITE){mExtent=EXTENT_INFINITE;}else if(mExtent==EXTENT_NULL){setExtents(rhs.mMinimum,rhs.mMaximum);}else{Vector3 min=mMinimum;Vector3 max=mMaximum;max.makeCeil(rhs.mMaximum);min.makeFloor(rhs.mMinimum);setExtents(min,max);}}inline void merge(const Vector3&point){switch(mExtent){case EXTENT_NULL:setExtents(point,point);return;case EXTENT_FINITE:mMaximum.makeCeil(point);mMinimum.makeFloor(point);return;case EXTENT_INFINITE:return;}((void)0);}inline void transform(const Matrix4&matrix){if(mExtent!=EXTENT_FINITE)return;Vector3 oldMin,oldMax,currentCorner;oldMin=mMinimum;oldMax=mMaximum;setNull();currentCorner=oldMin;merge(matrix*currentCorner);currentCorner.z=oldMax.z;merge(matrix*currentCorner);currentCorner.y=oldMax.y;merge(matrix*currentCorner);currentCorner.z=oldMin.z;merge(matrix*currentCorner);currentCorner.x=oldMax.x;merge(matrix*currentCorner);currentCorner.z=oldMax.z;merge(matrix*currentCorner);currentCorner.y=oldMin.y;merge(matrix*currentCorner);currentCorner.z=oldMin.z;merge(matrix*currentCorner);}void transformAffine(const Matrix4&m){((void)0);if(mExtent!=EXTENT_FINITE)return;Vector3 centre=getCenter();Vector3 halfSize=getHalfSize();Vector3 newCentre=m.transformAffine(centre);Vector3 newHalfSize(Math::Abs(m[0][0])*halfSize.x+Math::Abs(m[0][1])*halfSize.y+Math::Abs(m[0][2])*halfSize.z,Math::Abs(m[1][0])*halfSize.x+Math::Abs(m[1][1])*halfSize.y+Math::Abs(m[1][2])*halfSize.z,Math::Abs(m[2][0])*halfSize.x+Math::Abs(m[2][1])*halfSize.y+Math::Abs(m[2][2])*halfSize.z);setExtents(newCentre-newHalfSize,newCentre+newHalfSize);}inline void setNull(){mExtent=EXTENT_NULL;}inline bool isNull(void)const{return(mExtent==EXTENT_NULL);}bool isFinite(void)const{return(mExtent==EXTENT_FINITE);}inline void setInfinite(){mExtent=EXTENT_INFINITE;}bool isInfinite(void)const{return(mExtent==EXTENT_INFINITE);}inline bool intersects(const AxisAlignedBox&b2)const{if(this->isNull()||b2.isNull())return false;if(this->isInfinite()||b2.isInfinite())return true;if(mMaximum.x<b2.mMinimum.x)return false;if(mMaximum.y<b2.mMinimum.y)return false;if(mMaximum.z<b2.mMinimum.z)return false;if(mMinimum.x>b2.mMaximum.x)return false;if(mMinimum.y>b2.mMaximum.y)return false;if(mMinimum.z>b2.mMaximum.z)return false;return true;}inline AxisAlignedBox intersection(const AxisAlignedBox&b2)const{if(this->isNull()||b2.isNull()){return AxisAlignedBox();}else if(this->isInfinite()){return b2;}else if(b2.isInfinite()){return*this;}Vector3 intMin=mMinimum;Vector3 intMax=mMaximum;intMin.makeCeil(b2.getMinimum());intMax.makeFloor(b2.getMaximum());if(intMin.x<intMax.x&&intMin.y<intMax.y&&intMin.z<intMax.z){return AxisAlignedBox(intMin,intMax);}return AxisAlignedBox();}Real volume(void)const{switch(mExtent){case EXTENT_NULL:return 0.0f;case EXTENT_FINITE:{Vector3 diff=mMaximum-mMinimum;return diff.x*diff.y*diff.z;}case EXTENT_INFINITE:return Math::POS_INFINITY;default:((void)0);return 0.0f;}}inline void scale(const Vector3&s){if(mExtent!=EXTENT_FINITE)return;Vector3 min=mMinimum*s;Vector3 max=mMaximum*s;setExtents(min,max);}bool intersects(const Sphere&s)const{return Math::intersects(s,*this);}bool intersects(const Plane&p)const{return Math::intersects(p,*this);}bool intersects(const Vector3&v)const{switch(mExtent){case EXTENT_NULL:return false;case EXTENT_FINITE:return(v.x>=mMinimum.x&&v.x<=mMaximum.x&&v.y>=mMinimum.y&&v.y<=mMaximum.y&&v.z>=mMinimum.z&&v.z<=mMaximum.z);case EXTENT_INFINITE:return true;default:((void)0);return false;}}Vector3 getCenter(void)const{((void)0);return Vector3((mMaximum.x+mMinimum.x)*0.5,(mMaximum.y+mMinimum.y)*0.5,(mMaximum.z+mMinimum.z)*0.5);}Vector3 getSize(void)const{switch(mExtent){case EXTENT_NULL:return Vector3::ZERO;case EXTENT_FINITE:return mMaximum-mMinimum;case EXTENT_INFINITE:return Vector3(Math::POS_INFINITY,Math::POS_INFINITY,Math::POS_INFINITY);default:((void)0);return Vector3::ZERO;}}Vector3 getHalfSize(void)const{switch(mExtent){case EXTENT_NULL:return Vector3::ZERO;case EXTENT_FINITE:return(mMaximum-mMinimum)*0.5;case EXTENT_INFINITE:return Vector3(Math::POS_INFINITY,Math::POS_INFINITY,Math::POS_INFINITY);default:((void)0);return Vector3::ZERO;}}bool contains(const Vector3&v)const{if(isNull())return false;if(isInfinite())return true;return mMinimum.x<=v.x&&v.x<=mMaximum.x&&mMinimum.y<=v.y&&v.y<=mMaximum.y&&mMinimum.z<=v.z&&v.z<=mMaximum.z;}bool contains(const AxisAlignedBox&other)const{if(other.isNull()||this->isInfinite())return true;if(this->isNull()||other.isInfinite())return false;return this->mMinimum.x<=other.mMinimum.x&&this->mMinimum.y<=other.mMinimum.y&&this->mMinimum.z<=other.mMinimum.z&&other.mMaximum.x<=this->mMaximum.x&&other.mMaximum.y<=this->mMaximum.y&&other.mMaximum.z<=this->mMaximum.z;}bool operator==(const AxisAlignedBox&rhs)const{if(this->mExtent!=rhs.mExtent)return false;if(!this->isFinite())return true;return this->mMinimum==rhs.mMinimum&&this->mMaximum==rhs.mMaximum;}bool operator!=(const AxisAlignedBox&rhs)const{return!(*this==rhs);}};}
namespace Ogre{enum RenderQueueGroupID{RENDER_QUEUE_BACKGROUND=0,RENDER_QUEUE_SKIES_EARLY=5,RENDER_QUEUE_1=10,RENDER_QUEUE_2=20,RENDER_QUEUE_WORLD_GEOMETRY_1=25,RENDER_QUEUE_3=30,RENDER_QUEUE_4=40,RENDER_QUEUE_MAIN=50,RENDER_QUEUE_6=60,RENDER_QUEUE_7=70,RENDER_QUEUE_WORLD_GEOMETRY_2=75,RENDER_QUEUE_8=80,RENDER_QUEUE_9=90,RENDER_QUEUE_SKIES_LATE=95,RENDER_QUEUE_OVERLAY=100,RENDER_QUEUE_MAX=105};class __declspec(dllimport)RenderQueue{public:typedef std::map<uint8,RenderQueueGroup*>RenderQueueGroupMap;typedef MapIterator<RenderQueueGroupMap>QueueGroupIterator;class __declspec(dllimport)RenderableListener{public:RenderableListener(){}virtual~RenderableListener(){}virtual bool renderableQueued(Renderable*rend,uint8 groupID,ushort priority,Technique**ppTech)=0;};protected:RenderQueueGroupMap mGroups;uint8 mDefaultQueueGroup;ushort mDefaultRenderablePriority;bool mSplitPassesByLightingType;bool mSplitNoShadowPasses;bool mShadowCastersCannotBeReceivers;RenderableListener*mRenderableListener;public:RenderQueue();virtual~RenderQueue();void clear(bool destroyPassMaps=false);RenderQueueGroup*getQueueGroup(uint8 qid);void addRenderable(Renderable*pRend,uint8 groupID,ushort priority);void addRenderable(Renderable*pRend,uint8 groupId);void addRenderable(Renderable*pRend);uint8 getDefaultQueueGroup(void)const;void setDefaultRenderablePriority(ushort priority);ushort getDefaultRenderablePriority(void)const;void setDefaultQueueGroup(uint8 grp);QueueGroupIterator _getQueueGroupIterator(void);void setSplitPassesByLightingType(bool split);void setSplitNoShadowPasses(bool split);void setShadowCastersCannotBeReceivers(bool ind);void setRenderableListener(RenderableListener*listener){mRenderableListener=listener;}RenderableListener*getRenderableListener(void)const{return mRenderableListener;}};}
namespace Ogre{class __declspec(dllimport)HardwareIndexBuffer:public HardwareBuffer{public:enum IndexType{IT_16BIT,IT_32BIT};protected:IndexType mIndexType;size_t mNumIndexes;size_t mIndexSize;public:HardwareIndexBuffer(IndexType idxType,size_t numIndexes,HardwareBuffer::Usage usage,bool useSystemMemory,bool useShadowBuffer);~HardwareIndexBuffer();IndexType getType(void)const{return mIndexType;}size_t getNumIndexes(void)const{return mNumIndexes;}size_t getIndexSize(void)const{return mIndexSize;}};class __declspec(dllimport)HardwareIndexBufferSharedPtr:public SharedPtr<HardwareIndexBuffer>{public:HardwareIndexBufferSharedPtr():SharedPtr<HardwareIndexBuffer>(){}explicit HardwareIndexBufferSharedPtr(HardwareIndexBuffer*buf);};}
namespace Ogre{typedef std::vector<HardwareBuffer::Usage>BufferUsageList;class __declspec(dllimport)VertexData{private:VertexData(const VertexData&rhs);VertexData&operator=(const VertexData&rhs);public:VertexData();~VertexData();VertexDeclaration*vertexDeclaration;VertexBufferBinding*vertexBufferBinding;size_t vertexStart;size_t vertexCount;struct HardwareAnimationData{const VertexElement*targetVertexElement;Real parametric;};typedef std::vector<HardwareAnimationData>HardwareAnimationDataList;HardwareAnimationDataList hwAnimationDataList;size_t hwAnimDataItemsUsed;VertexData*clone(bool copyData=true)const;void prepareForShadowVolume(void);HardwareVertexBufferSharedPtr hardwareShadowVolWBuffer;void reorganiseBuffers(VertexDeclaration*newDeclaration,const BufferUsageList&bufferUsage);void reorganiseBuffers(VertexDeclaration*newDeclaration);void closeGapsInBindings(void);void removeUnusedBuffers(void);void convertPackedColour(VertexElementType srcType,VertexElementType destType);void allocateHardwareAnimationElements(ushort count);};class __declspec(dllimport)IndexData{protected:IndexData(const IndexData&rhs);IndexData&operator=(const IndexData&rhs);public:IndexData();~IndexData();HardwareIndexBufferSharedPtr indexBuffer;size_t indexStart;size_t indexCount;IndexData*clone(bool copyData=true)const;void optimiseVertexCacheTriList(void);};class __declspec(dllimport)VertexCacheProfiler{public:enum CacheType{FIFO,LRU};VertexCacheProfiler(unsigned int cachesize=16,CacheType cachetype=FIFO):size(cachesize),type(cachetype),tail(0),buffersize(0),hit(0),miss(0){cache=new uint32[size];};~VertexCacheProfiler(){delete[]cache;}void profile(const HardwareIndexBufferSharedPtr&indexBuffer);void reset(){hit=0;miss=0;tail=0;buffersize=0;};void flush(){tail=0;buffersize=0;};unsigned int getHits(){return hit;};unsigned int getMisses(){return miss;};unsigned int getSize(){return size;};private:unsigned int size;uint32*cache;CacheType type;unsigned int tail,buffersize;unsigned int hit,miss;bool inCache(unsigned int index);};}
namespace Ogre{class RenderOperation{public:enum OperationType{OT_POINT_LIST=1,OT_LINE_LIST=2,OT_LINE_STRIP=3,OT_TRIANGLE_LIST=4,OT_TRIANGLE_STRIP=5,OT_TRIANGLE_FAN=6};VertexData*vertexData;OperationType operationType;bool useIndexes;IndexData*indexData;const Renderable*srcRenderable;RenderOperation():vertexData(0),operationType(OT_TRIANGLE_LIST),useIndexes(true),indexData(0){}};}
namespace Ogre {
    enum LayerBlendType
    {
        LBT_COLOUR,
        LBT_ALPHA
    };
    enum LayerBlendOperation {
        LBO_REPLACE,
        LBO_ADD,
        LBO_MODULATE,
        LBO_ALPHA_BLEND
    };
    enum LayerBlendOperationEx {
        LBX_SOURCE1,
        LBX_SOURCE2,
        LBX_MODULATE,
        LBX_MODULATE_X2,
        LBX_MODULATE_X4,
        LBX_ADD,
        LBX_ADD_SIGNED,
        LBX_ADD_SMOOTH,
        LBX_SUBTRACT,
        LBX_BLEND_DIFFUSE_ALPHA,
        LBX_BLEND_TEXTURE_ALPHA,
        LBX_BLEND_CURRENT_ALPHA,
        LBX_BLEND_MANUAL,
        LBX_DOTPRODUCT,
        LBX_BLEND_DIFFUSE_COLOUR
    };
    enum LayerBlendSource
    {
        LBS_CURRENT,
        LBS_TEXTURE,
        LBS_DIFFUSE,
        LBS_SPECULAR,
        LBS_MANUAL
    };
    class __declspec( dllimport ) LayerBlendModeEx
    {
    public:
        LayerBlendType blendType;
        LayerBlendOperationEx operation;
        LayerBlendSource source1;
        LayerBlendSource source2;
        ColourValue colourArg1;
        ColourValue colourArg2;
        Real alphaArg1;
        Real alphaArg2;
        Real factor;
        bool operator==(const LayerBlendModeEx& rhs) const
        {
            if (blendType != rhs.blendType) return false;
            if (blendType == LBT_COLOUR)
            {
                if (operation == rhs.operation &&
                    source1 == rhs.source1 &&
                    source2 == rhs.source2 &&
                    colourArg1 == rhs.colourArg1 &&
                    colourArg2 == rhs.colourArg2 &&
                    factor == rhs.factor)
                {
                    return true;
                }
            }
            else 
            {
                if (operation == rhs.operation &&
                    source1 == rhs.source1 &&
                    source2 == rhs.source2 &&
                    alphaArg1 == rhs.alphaArg1 &&
                    alphaArg2 == rhs.alphaArg2 &&
                    factor == rhs.factor)
                {
                    return true;
                }
            }
            return false;
        }
        bool operator!=(const LayerBlendModeEx& rhs) const
        {
            return !(*this == rhs);
        }
    };
    enum SceneBlendType
    {
        SBT_TRANSPARENT_ALPHA,
        SBT_TRANSPARENT_COLOUR,
        SBT_ADD,
		SBT_MODULATE,
        SBT_REPLACE
    };
    enum SceneBlendFactor
    {
        SBF_ONE,
        SBF_ZERO,
        SBF_DEST_COLOUR,
        SBF_SOURCE_COLOUR,
        SBF_ONE_MINUS_DEST_COLOUR,
        SBF_ONE_MINUS_SOURCE_COLOUR,
        SBF_DEST_ALPHA,
        SBF_SOURCE_ALPHA,
        SBF_ONE_MINUS_DEST_ALPHA,
        SBF_ONE_MINUS_SOURCE_ALPHA
    };
}
namespace Ogre {
	class MaterialPtr;
    class __declspec( dllimport ) Material : public Resource
    {
        friend class SceneManager;
        friend class MaterialManager;
    public:
        typedef std::vector<Real> LodDistanceList;
        typedef ConstVectorIterator<LodDistanceList> LodDistanceIterator;
    protected:
        void applyDefaults(void);
        typedef std::vector<Technique*> Techniques;
        Techniques mTechniques;
        Techniques mSupportedTechniques;
		typedef std::map<unsigned short, Technique*> LodTechniques;
        typedef std::map<unsigned short, LodTechniques*> BestTechniquesBySchemeList;
        BestTechniquesBySchemeList mBestTechniquesBySchemeList;
        LodDistanceList mLodDistances;
        bool mReceiveShadows;
		bool mTransparencyCastsShadows;
        bool mCompilationRequired;
		String mUnsupportedReasons;
		void insertSupportedTechnique(Technique* t);
		void clearBestTechniqueList(void);
		void loadImpl(void);
		void unloadImpl(void);
		size_t calculateSize(void) const { return 0; } 
    public:
		Material(ResourceManager* creator, const String& name, ResourceHandle handle,
			const String& group, bool isManual = false, ManualResourceLoader* loader = 0);
        ~Material();
        Material& operator=( const Material& rhs );
        bool isTransparent(void) const;
        void setReceiveShadows(bool enabled) { mReceiveShadows = enabled; }
        bool getReceiveShadows(void) const { return mReceiveShadows; }
		void setTransparencyCastsShadows(bool enabled) { mTransparencyCastsShadows = enabled; }
		bool getTransparencyCastsShadows(void) const { return mTransparencyCastsShadows; }
        Technique* createTechnique(void);
        Technique* getTechnique(unsigned short index);
        Technique* getTechnique(const String& name);
        unsigned short getNumTechniques(void) const;
        void removeTechnique(unsigned short index);		
        void removeAllTechniques(void);
        typedef VectorIterator<Techniques> TechniqueIterator;
        TechniqueIterator getTechniqueIterator(void);
        TechniqueIterator getSupportedTechniqueIterator(void);
        Technique* getSupportedTechnique(unsigned short index);
        unsigned short getNumSupportedTechniques(void) const;
		const String& getUnsupportedTechniquesExplanation() const { return mUnsupportedReasons; }
        unsigned short getNumLodLevels(unsigned short schemeIndex) const;
        unsigned short getNumLodLevels(const String& schemeName) const;
        Technique* getBestTechnique(unsigned short lodIndex = 0);
        MaterialPtr clone(const String& newName, bool changeGroup = false, 
			const String& newGroup = StringUtil::BLANK) const;
        void copyDetailsTo(MaterialPtr& mat) const;
        void compile(bool autoManageTextureUnits = true);
        void setPointSize(Real ps);
        void setAmbient(Real red, Real green, Real blue);
        void setAmbient(const ColourValue& ambient);
        void setDiffuse(Real red, Real green, Real blue, Real alpha);
        void setDiffuse(const ColourValue& diffuse);
        void setSpecular(Real red, Real green, Real blue, Real alpha);
        void setSpecular(const ColourValue& specular);
        void setShininess(Real val);
        void setSelfIllumination(Real red, Real green, Real blue);
        void setSelfIllumination(const ColourValue& selfIllum);
        void setDepthCheckEnabled(bool enabled);
        void setDepthWriteEnabled(bool enabled);
        void setDepthFunction( CompareFunction func );
		void setColourWriteEnabled(bool enabled);
        void setCullingMode( CullingMode mode );
        void setManualCullingMode( ManualCullingMode mode );
        void setLightingEnabled(bool enabled);
        void setShadingMode( ShadeOptions mode );
        void setFog(
            bool overrideScene,
            FogMode mode = FOG_NONE,
            const ColourValue& colour = ColourValue::White,
            Real expDensity = 0.001, Real linearStart = 0.0, Real linearEnd = 1.0 );
        void setDepthBias(float constantBias, float slopeScaleBias);
        void setTextureFiltering(TextureFilterOptions filterType);
        void setTextureAnisotropy(int maxAniso);
        void setSceneBlending( const SceneBlendType sbt );
        void setSceneBlending( const SceneBlendFactor sourceFactor, const SceneBlendFactor destFactor);
        void _notifyNeedsRecompile(void);
        void setLodLevels(const LodDistanceList& lodDistances);
        LodDistanceIterator getLodDistanceIterator(void) const;
        unsigned short getLodIndex(Real d) const;
        unsigned short getLodIndexSquaredDepth(Real squaredDepth) const;
        void touch(void) 
        { 
            if (mCompilationRequired) 
                compile();
            Resource::touch();
        }
        bool applyTextureAliases(const AliasTextureNamePairList& aliasList, const bool apply = true) const;
	    bool getCompilationRequired() const
	    {
		    return mCompilationRequired;
	    }
    };
	class __declspec( dllimport ) MaterialPtr : public SharedPtr<Material> 
	{
	public:
		MaterialPtr() : SharedPtr<Material>() {}
		explicit MaterialPtr(Material* rep) : SharedPtr<Material>(rep) {}
		MaterialPtr(const MaterialPtr& r) : SharedPtr<Material>(r) {} 
		MaterialPtr(const ResourcePtr& r) : SharedPtr<Material>()
		{
            if(true)
            {
			    pRep = static_cast<Material*>(r.getPointer());
			    pUseCount = r.useCountPointer();
			    if (pUseCount)
			    {
				    ++(*pUseCount);
			    }
            }
		}
		MaterialPtr& operator=(const ResourcePtr& r)
		{
			if (pRep == static_cast<Material*>(r.getPointer()))
				return *this;
			release();
            if(true)
            {
			    pRep = static_cast<Material*>(r.getPointer());
			    pUseCount = r.useCountPointer();
			    if (pUseCount)
			    {
				    ++(*pUseCount);
			    }
            }
			else
			{
				((void)0);
				setNull();
			}
			return *this;
		}
	};
}
namespace Ogre {class GpuProgramParameters {public:struct AutoConstantEntry;};}
namespace Ogre{class __declspec(dllimport)Renderable{public:Renderable();virtual~Renderable();virtual const MaterialPtr&getMaterial(void)const=0;virtual Technique*getTechnique(void)const;virtual void getRenderOperation(RenderOperation&op)=0;virtual void getWorldTransforms(Matrix4*xform)const=0;virtual const Quaternion&getWorldOrientation(void)const=0;virtual const Vector3&getWorldPosition(void)const=0;virtual unsigned short getNumWorldTransforms(void)const;void setUseIdentityProjection(bool useIdentityProjection);bool getUseIdentityProjection(void)const;void setUseIdentityView(bool useIdentityView);bool getUseIdentityView(void)const;virtual Real getSquaredViewDepth(const Camera*cam)const=0;virtual bool getNormaliseNormals(void)const;virtual const LightList&getLights(void)const=0;virtual const PlaneList&getClipPlanes()const;;virtual bool getCastsShadows(void)const;void setCustomParameter(size_t index,const Vector4&value);const Vector4&getCustomParameter(size_t index)const;virtual void _updateCustomGpuParameter(const GpuProgramParameters::AutoConstantEntry&constantEntry,GpuProgramParameters*params)const;virtual void setPolygonModeOverrideable(bool override);virtual bool getPolygonModeOverrideable(void)const;protected:static const PlaneList msDummyPlaneList;typedef std::map<size_t,Vector4>CustomParameterMap;CustomParameterMap mCustomParameters;bool mPolygonModeOverrideable;bool mUseIdentityProjection;bool mUseIdentityView;};}
namespace Ogre{class __declspec(dllimport)ShadowRenderable:public Renderable{protected:MaterialPtr mMaterial;RenderOperation mRenderOp;ShadowRenderable*mLightCap;public:ShadowRenderable():mMaterial(),mLightCap(0){}virtual~ShadowRenderable(){delete mLightCap;}void setMaterial(const MaterialPtr&mat){mMaterial=mat;}const MaterialPtr&getMaterial(void)const{return mMaterial;}void getRenderOperation(RenderOperation&op){op=mRenderOp;}RenderOperation*getRenderOperationForUpdate(void){return&mRenderOp;}void getWorldTransforms(Matrix4*xform)const=0;const Quaternion&getWorldOrientation(void)const=0;const Vector3&getWorldPosition(void)const=0;Real getSquaredViewDepth(const Camera*)const{return 0;}const LightList&getLights(void)const;bool isLightCapSeparate(void)const{return mLightCap!=0;}ShadowRenderable*getLightCapRenderable(void){return mLightCap;}virtual bool isVisible(void)const{return true;}};enum ShadowRenderableFlags{SRF_INCLUDE_LIGHT_CAP=0x00000001,SRF_INCLUDE_DARK_CAP=0x00000002,SRF_EXTRUDE_TO_INFINITY=0x00000004};class __declspec(dllimport)ShadowCaster{public:virtual~ShadowCaster(){}virtual bool getCastShadows(void)const=0;virtual EdgeData*getEdgeList(void)=0;virtual bool hasEdgeList(void)=0;virtual const AxisAlignedBox&getWorldBoundingBox(bool derive=false)const=0;virtual const AxisAlignedBox&getLightCapBounds(void)const=0;virtual const AxisAlignedBox&getDarkCapBounds(const Light&light,Real dirLightExtrusionDist)const=0;typedef std::vector<ShadowRenderable*>ShadowRenderableList;typedef VectorIterator<ShadowRenderableList>ShadowRenderableListIterator;virtual ShadowRenderableListIterator getShadowVolumeRenderableIterator(ShadowTechnique shadowTechnique,const Light*light,HardwareIndexBufferSharedPtr*indexBuffer,bool extrudeVertices,Real extrusionDistance,unsigned long flags=0)=0;static void extrudeVertices(const HardwareVertexBufferSharedPtr&vertexBuffer,size_t originalVertexCount,const Vector4&lightPos,Real extrudeDist);virtual Real getPointExtrusionDistance(const Light*l)const=0;protected:Real getExtrusionDistance(const Vector3&objectPos,const Light*light)const;virtual void updateEdgeListLightFacing(EdgeData*edgeData,const Vector4&lightPos);virtual void generateShadowVolume(EdgeData*edgeData,const HardwareIndexBufferSharedPtr&indexBuffer,const Light*light,ShadowRenderableList&shadowRenderables,unsigned long flags);virtual void extrudeBounds(AxisAlignedBox&box,const Vector4&lightPos,Real extrudeDist)const;};}
namespace Ogre{template<typename T>class FactoryObj{public:virtual~FactoryObj(){};virtual const String&getType()const=0;virtual T*createInstance(const String&name)=0;virtual void destroyInstance(T*)=0;};}
namespace Ogre{class __declspec(dllimport)UserDefinedObject{public:UserDefinedObject();virtual~UserDefinedObject(){}virtual long getTypeID(void)const;virtual const String&getTypeName(void)const;};}
namespace Ogre{class MovableObjectFactory;class __declspec(dllimport)MovableObject:public ShadowCaster,public AnimableObject{public:class __declspec(dllimport)Listener{public:Listener(void){}virtual~Listener(){}virtual void objectDestroyed(MovableObject*){}virtual void objectAttached(MovableObject*){}virtual void objectDetached(MovableObject*){}virtual void objectMoved(MovableObject*){}virtual bool objectRendering(const MovableObject*,const Camera*){return true;}virtual const LightList*objectQueryLights(const MovableObject*){return 0;}};protected:String mName;MovableObjectFactory*mCreator;SceneManager*mManager;Node*mParentNode;bool mParentIsTagPoint;bool mVisible;Real mUpperDistance;Real mSquaredUpperDistance;bool mBeyondFarDistance;Any mUserAny;uint8 mRenderQueueID;bool mRenderQueueIDSet;uint32 mQueryFlags;uint32 mVisibilityFlags;mutable AxisAlignedBox mWorldAABB;mutable Sphere mWorldBoundingSphere;mutable AxisAlignedBox mWorldDarkCapBounds;bool mCastShadows;bool mRenderingDisabled;Listener*mListener;mutable LightList mLightList;mutable ulong mLightListUpdated;static uint32 msDefaultQueryFlags;static uint32 msDefaultVisibilityFlags;public:MovableObject();MovableObject(const String&name);virtual~MovableObject();virtual void _notifyCreator(MovableObjectFactory*fact){mCreator=fact;}virtual MovableObjectFactory*_getCreator(void)const{return mCreator;}virtual void _notifyManager(SceneManager*man){mManager=man;}virtual SceneManager*_getManager(void)const{return mManager;}virtual const String&getName(void)const{return mName;}virtual const String&getMovableType(void)const=0;virtual Node*getParentNode(void)const;virtual SceneNode*getParentSceneNode(void)const;virtual void _notifyAttached(Node*parent,bool isTagPoint=false);virtual bool isAttached(void)const;virtual bool isInScene(void)const;virtual void _notifyMoved(void);virtual void _notifyCurrentCamera(Camera*cam);virtual const AxisAlignedBox&getBoundingBox(void)const=0;virtual Real getBoundingRadius(void)const=0;virtual const AxisAlignedBox&getWorldBoundingBox(bool derive=false)const;virtual const Sphere&getWorldBoundingSphere(bool derive=false)const;virtual void _updateRenderQueue(RenderQueue*queue)=0;virtual void setVisible(bool visible);virtual bool getVisible(void)const;virtual bool isVisible(void)const;virtual void setRenderingDistance(Real dist){mUpperDistance=dist;mSquaredUpperDistance=mUpperDistance*mUpperDistance;}virtual Real getRenderingDistance(void)const{return mUpperDistance;}virtual void setUserObject(UserDefinedObject*obj){mUserAny=Any(obj);}virtual UserDefinedObject*getUserObject(void){return mUserAny.isEmpty()?0:any_cast<UserDefinedObject*>(mUserAny);}virtual void setUserAny(const Any&anything){mUserAny=anything;}virtual const Any&getUserAny(void)const{return mUserAny;}virtual void setRenderQueueGroup(uint8 queueID);virtual uint8 getRenderQueueGroup(void)const;virtual const Matrix4&_getParentNodeFullTransform(void)const;virtual void setQueryFlags(uint32 flags){mQueryFlags=flags;}virtual void addQueryFlags(uint32 flags){mQueryFlags|=flags;}virtual void removeQueryFlags(unsigned long flags){mQueryFlags&=~flags;}virtual uint32 getQueryFlags(void)const{return mQueryFlags;}static void setDefaultQueryFlags(uint32 flags){msDefaultQueryFlags=flags;}static uint32 getDefaultQueryFlags(){return msDefaultQueryFlags;}virtual void setVisibilityFlags(uint32 flags){mVisibilityFlags=flags;}virtual void addVisibilityFlags(uint32 flags){mVisibilityFlags|=flags;}virtual void removeVisibilityFlags(uint32 flags){mVisibilityFlags&=~flags;}virtual uint32 getVisibilityFlags(void)const{return mVisibilityFlags;}static void setDefaultVisibilityFlags(uint32 flags){msDefaultVisibilityFlags=flags;}static uint32 getDefaultVisibilityFlags(){return msDefaultVisibilityFlags;}virtual void setListener(Listener*listener){mListener=listener;}virtual Listener*getListener(void)const{return mListener;}virtual const LightList&queryLights(void)const;EdgeData*getEdgeList(void){return 0;}bool hasEdgeList(void){return false;}ShadowRenderableListIterator getShadowVolumeRenderableIterator(ShadowTechnique shadowTechnique,const Light*light,HardwareIndexBufferSharedPtr*indexBuffer,bool extrudeVertices,Real extrusionDist,unsigned long flags=0);const AxisAlignedBox&getLightCapBounds(void)const;const AxisAlignedBox&getDarkCapBounds(const Light&light,Real dirLightExtrusionDist)const;void setCastShadows(bool enabled){mCastShadows=enabled;}bool getCastShadows(void)const{return mCastShadows;}Real getPointExtrusionDistance(const Light*l)const;virtual uint32 getTypeFlags(void)const;};class __declspec(dllimport)MovableObjectFactory{protected:unsigned long mTypeFlag;virtual MovableObject*createInstanceImpl(const String&name,const NameValuePairList*params=0)=0;public:MovableObjectFactory():mTypeFlag(0xFFFFFFFF){}virtual~MovableObjectFactory(){}virtual const String&getType(void)const=0;virtual MovableObject*createInstance(const String&name,SceneManager*manager,const NameValuePairList*params=0);virtual void destroyInstance(MovableObject*obj)=0;virtual bool requestTypeFlags(void)const{return false;}void _notifyTypeFlags(unsigned long flag){mTypeFlag=flag;}unsigned long getTypeFlags(void)const{return mTypeFlag;}};}
namespace Ogre{template<class TContainer,class TContainerValueType,typename TCompValueType>class RadixSort{public:typedef typename TContainer::iterator ContainerIter;protected:int mCounters[4][256];int mOffsets[256];int mSortSize;int mNumPasses;struct SortEntry{TCompValueType key;ContainerIter iter;SortEntry(){}SortEntry(TCompValueType k,ContainerIter it):key(k),iter(it){}};std::vector<SortEntry>mSortArea1;std::vector<SortEntry>mSortArea2;std::vector<SortEntry>*mSrc;std::vector<SortEntry>*mDest;TContainer mTmpContainer;void sortPass(int byteIndex){mOffsets[0]=0;for(int i=1;i<256;++i){mOffsets[i]=mOffsets[i-1]+mCounters[byteIndex][i-1];}for(int i=0;i<mSortSize;++i){unsigned char byteVal=getByte(byteIndex,(*mSrc)[i].key);(*mDest)[mOffsets[byteVal]++]=(*mSrc)[i];}}template<typename T>void finalPass(int byteIndex,T val){sortPass(byteIndex);}void finalPass(int byteIndex,int val){int numNeg=0;for(int i=128;i<256;++i){numNeg+=mCounters[byteIndex][i];}mOffsets[0]=numNeg;for(int i=1;i<128;++i){mOffsets[i]=mOffsets[i-1]+mCounters[byteIndex][i-1];}mOffsets[128]=0;for(int i=129;i<256;++i){mOffsets[i]=mOffsets[i-1]+mCounters[byteIndex][i-1];}for(int i=0;i<mSortSize;++i){unsigned char byteVal=getByte(byteIndex,(*mSrc)[i].key);(*mDest)[mOffsets[byteVal]++]=(*mSrc)[i];}}void finalPass(int byteIndex,float val){int numNeg=0;for(int i=128;i<256;++i){numNeg+=mCounters[byteIndex][i];}mOffsets[0]=numNeg;for(int i=1;i<128;++i){mOffsets[i]=mOffsets[i-1]+mCounters[byteIndex][i-1];}mOffsets[255]=mCounters[byteIndex][255];for(int i=254;i>127;--i){mOffsets[i]=mOffsets[i+1]+mCounters[byteIndex][i];}for(int i=0;i<mSortSize;++i){unsigned char byteVal=getByte(byteIndex,(*mSrc)[i].key);if(byteVal>127){(*mDest)[--mOffsets[byteVal]]=(*mSrc)[i];}else{(*mDest)[mOffsets[byteVal]++]=(*mSrc)[i];}}}inline unsigned char getByte(int byteIndex,TCompValueType val){return((unsigned char*)(&val))[byteIndex];}public:RadixSort(){}~RadixSort(){}template<class TFunction>void sort(TContainer&container,TFunction func){if(container.empty())return;mSortSize=static_cast<int>(container.size());mSortArea1.resize(container.size());mSortArea2.resize(container.size());mTmpContainer=container;mNumPasses=sizeof(TCompValueType);int p;for(p=0;p<mNumPasses;++p)memset(mCounters[p],0,sizeof(int)*256);ContainerIter i=mTmpContainer.begin();TCompValueType prevValue=func.operator()(*i);bool needsSorting=false;for(int u=0;i!=mTmpContainer.end();++i,++u){TCompValueType val=func.operator()(*i);if(!needsSorting&&val<prevValue)needsSorting=true;mSortArea1[u].key=val;mSortArea1[u].iter=i;for(p=0;p<mNumPasses;++p){unsigned char byteVal=getByte(p,val);mCounters[p][byteVal]++;}prevValue=val;}if(!needsSorting)return;mSrc=&mSortArea1;mDest=&mSortArea2;for(p=0;p<mNumPasses-1;++p){sortPass(p);std::vector<SortEntry>*tmp=mSrc;mSrc=mDest;mDest=tmp;}finalPass(p,prevValue);int c=0;for(i=container.begin();i!=container.end();++i,++c){*i=*((*mDest)[c].iter);}}};}
namespace Ogre{class __declspec(dllimport)Node:public Renderable{public:enum TransformSpace{TS_LOCAL,TS_PARENT,TS_WORLD};typedef::stdext::hash_map<String,Node*>ChildNodeMap;typedef MapIterator<ChildNodeMap>ChildNodeIterator;typedef ConstMapIterator<ChildNodeMap>ConstChildNodeIterator;class __declspec(dllimport)Listener{public:Listener(){}virtual~Listener(){}virtual void nodeUpdated(const Node*){}virtual void nodeDestroyed(const Node*){};virtual void nodeAttached(const Node*){};virtual void nodeDetached(const Node*){};};protected:Node*mParent;ChildNodeMap mChildren;typedef std::set<Node*>ChildUpdateSet;mutable ChildUpdateSet mChildrenToUpdate;mutable bool mNeedParentUpdate;mutable bool mNeedChildUpdate;mutable bool mParentNotified;mutable bool mQueuedForUpdate;String mName;static unsigned long msNextGeneratedNameExt;Quaternion mOrientation;Vector3 mPosition;Vector3 mScale;bool mInheritOrientation;bool mInheritScale;mutable MaterialPtr mpMaterial;virtual void setParent(Node*parent);mutable Quaternion mDerivedOrientation;mutable Vector3 mDerivedPosition;mutable Vector3 mDerivedScale;virtual void _updateFromParent(void)const;virtual void updateFromParentImpl(void)const;virtual Node*createChildImpl(void)=0;virtual Node*createChildImpl(const String&name)=0;Vector3 mInitialPosition;Quaternion mInitialOrientation;Vector3 mInitialScale;mutable Matrix4 mCachedTransform;mutable bool mCachedTransformOutOfDate;Listener*mListener;typedef std::vector<Node*>QueuedUpdates;static QueuedUpdates msQueuedUpdates;public:Node();Node(const String&name);virtual~Node();const String&getName(void)const;virtual Node*getParent(void)const;virtual const Quaternion&getOrientation()const;virtual void setOrientation(const Quaternion&q);virtual void setOrientation(Real w,Real x,Real y,Real z);virtual void resetOrientation(void);virtual void setPosition(const Vector3&pos);virtual void setPosition(Real x,Real y,Real z);virtual const Vector3&getPosition(void)const;virtual void setScale(const Vector3&scale);virtual void setScale(Real x,Real y,Real z);virtual const Vector3&getScale(void)const;virtual void setInheritOrientation(bool inherit);virtual bool getInheritOrientation(void)const;virtual void setInheritScale(bool inherit);virtual bool getInheritScale(void)const;virtual void scale(const Vector3&scale);virtual void scale(Real x,Real y,Real z);virtual void translate(const Vector3&d,TransformSpace relativeTo=TS_PARENT);virtual void translate(Real x,Real y,Real z,TransformSpace relativeTo=TS_PARENT);virtual void translate(const Matrix3&axes,const Vector3&move,TransformSpace relativeTo=TS_PARENT);virtual void translate(const Matrix3&axes,Real x,Real y,Real z,TransformSpace relativeTo=TS_PARENT);virtual void roll(const Radian&angle,TransformSpace relativeTo=TS_LOCAL);virtual void pitch(const Radian&angle,TransformSpace relativeTo=TS_LOCAL);virtual void yaw(const Radian&angle,TransformSpace relativeTo=TS_LOCAL);virtual void rotate(const Vector3&axis,const Radian&angle,TransformSpace relativeTo=TS_LOCAL);virtual void rotate(const Quaternion&q,TransformSpace relativeTo=TS_LOCAL);virtual Matrix3 getLocalAxes(void)const;virtual Node*createChild(const Vector3&translate=Vector3::ZERO,const Quaternion&rotate=Quaternion::IDENTITY);virtual Node*createChild(const String&name,const Vector3&translate=Vector3::ZERO,const Quaternion&rotate=Quaternion::IDENTITY);virtual void addChild(Node*child);virtual unsigned short numChildren(void)const;virtual Node*getChild(unsigned short index)const;virtual Node*getChild(const String&name)const;virtual ChildNodeIterator getChildIterator(void);virtual ConstChildNodeIterator getChildIterator(void)const;virtual Node*removeChild(unsigned short index);virtual Node*removeChild(Node*child);virtual Node*removeChild(const String&name);virtual void removeAllChildren(void);virtual const Quaternion&_getDerivedOrientation(void)const;virtual const Vector3&_getDerivedPosition(void)const;virtual const Vector3&_getDerivedScale(void)const;virtual const Matrix4&_getFullTransform(void)const;virtual void _update(bool updateChildren,bool parentHasChanged);virtual void setListener(Listener*listener){mListener=listener;}virtual Listener*getListener(void)const{return mListener;}const MaterialPtr&getMaterial(void)const;void getRenderOperation(RenderOperation&op);void getWorldTransforms(Matrix4*xform)const;const Quaternion&getWorldOrientation(void)const;const Vector3&getWorldPosition(void)const;virtual void setInitialState(void);virtual void resetToInitialState(void);virtual const Vector3&getInitialPosition(void)const;virtual const Quaternion&getInitialOrientation(void)const;virtual const Vector3&getInitialScale(void)const;Real getSquaredViewDepth(const Camera*cam)const;virtual void needUpdate(bool forceParentUpdate=false);virtual void requestUpdate(Node*child,bool forceParentUpdate=false);virtual void cancelUpdate(Node*child);static void queueNeedUpdate(Node*n);static void processQueuedUpdates(void);const LightList&getLights(void)const;};}
namespace Ogre{enum LoggingLevel{LL_LOW=1,LL_NORMAL=2,LL_BOREME=3};enum LogMessageLevel{LML_TRIVIAL=1,LML_NORMAL=2,LML_CRITICAL=3};class LogListener{public:virtual~LogListener(){};virtual void messageLogged(const String&message,LogMessageLevel lml,bool maskDebug,const String&logName)=0;};class __declspec(dllimport)Log{protected:std::ofstream mfpLog;LoggingLevel mLogLevel;bool mDebugOut;bool mSuppressFile;String mLogName;typedef std::vector<LogListener*>mtLogListener;mtLogListener mListeners;public:Log(const String&name,bool debugOutput=true,bool suppressFileOutput=false);~Log();const String&getName()const{return mLogName;}bool isDebugOutputEnabled()const{return mDebugOut;}bool isFileOutputSuppressed()const{return mSuppressFile;}void logMessage(const String&message,LogMessageLevel lml=LML_NORMAL,bool maskDebug=false);void setLogDetail(LoggingLevel ll);LoggingLevel getLogDetail()const{return mLogLevel;}void addListener(LogListener*listener);void removeListener(LogListener*listener);};}
namespace Ogre{class __declspec(dllimport)LogManager:public Singleton<LogManager>{protected:typedef std::map<String,Log*,std::less<String> >LogList;LogList mLogs;Log*mDefaultLog;public:LogManager();~LogManager();Log*createLog(const String&name,bool defaultLog=false,bool debuggerOutput=true,bool suppressFileOutput=false);Log*getLog(const String&name);Log*getDefaultLog();void destroyLog(const String&name);void destroyLog(Log*log);Log*setDefaultLog(Log*newLog);void logMessage(const String&message,LogMessageLevel lml=LML_NORMAL,bool maskDebug=false);void logMessage(LogMessageLevel lml,const String&message,bool maskDebug=false){logMessage(message,lml,maskDebug);}void setLogDetail(LoggingLevel ll);static LogManager&getSingleton(void);static LogManager*getSingletonPtr(void);};}
namespace Ogre{class __declspec(dllimport)MaterialManager:public ResourceManager,public Singleton<MaterialManager>{protected:FilterOptions mDefaultMinFilter;FilterOptions mDefaultMagFilter;FilterOptions mDefaultMipFilter;unsigned int mDefaultMaxAniso;MaterialScriptCompiler*mScriptCompiler;MaterialSerializer*mSerializer;MaterialPtr mDefaultSettings;Resource*createImpl(const String&name,ResourceHandle handle,const String&group,bool isManual,ManualResourceLoader*loader,const NameValuePairList*params);typedef std::map<String,unsigned short>SchemeMap;SchemeMap mSchemes;String mActiveSchemeName;unsigned short mActiveSchemeIndex;public:static String DEFAULT_SCHEME_NAME;MaterialManager();virtual~MaterialManager();void initialise(void);void parseScript(DataStreamPtr&stream,const String&groupName);virtual void setDefaultTextureFiltering(TextureFilterOptions fo);virtual void setDefaultTextureFiltering(FilterType ftype,FilterOptions opts);virtual void setDefaultTextureFiltering(FilterOptions minFilter,FilterOptions magFilter,FilterOptions mipFilter);virtual FilterOptions getDefaultTextureFiltering(FilterType ftype)const;void setDefaultAnisotropy(unsigned int maxAniso);unsigned int getDefaultAnisotropy()const;virtual MaterialPtr getDefaultSettings(void)const{return mDefaultSettings;}virtual unsigned short _getSchemeIndex(const String&name);virtual const String&_getSchemeName(unsigned short index);virtual unsigned short _getActiveSchemeIndex(void)const;virtual const String&getActiveScheme(void)const;virtual void setActiveScheme(const String&schemeName);static MaterialManager&getSingleton(void);static MaterialManager*getSingletonPtr(void);};}
namespace Ogre{struct VisibleObjectsBoundsInfo;class __declspec(dllimport)SceneNode:public Node{public:typedef::stdext::hash_map<String,MovableObject*>ObjectMap;typedef MapIterator<ObjectMap>ObjectIterator;typedef ConstMapIterator<ObjectMap>ConstObjectIterator;protected:ObjectMap mObjectsByName;WireBoundingBox*mWireBoundingBox;bool mShowBoundingBox;SceneManager*mCreator;AxisAlignedBox mWorldAABB;void updateFromParentImpl(void)const;Node*createChildImpl(void);Node*createChildImpl(const String&name);void setParent(Node*parent);virtual void setInSceneGraph(bool inGraph);bool mYawFixed;Vector3 mYawFixedAxis;SceneNode*mAutoTrackTarget;Vector3 mAutoTrackOffset;Vector3 mAutoTrackLocalDirection;bool mIsInSceneGraph;public:SceneNode(SceneManager*creator);SceneNode(SceneManager*creator,const String&name);~SceneNode();virtual void attachObject(MovableObject*obj);virtual unsigned short numAttachedObjects(void)const;virtual MovableObject*getAttachedObject(unsigned short index);virtual MovableObject*getAttachedObject(const String&name);virtual MovableObject*detachObject(unsigned short index);virtual void detachObject(MovableObject*obj);virtual MovableObject*detachObject(const String&name);virtual void detachAllObjects(void);virtual bool isInSceneGraph(void)const{return mIsInSceneGraph;}virtual void _notifyRootNode(void){mIsInSceneGraph=true;}virtual void _update(bool updateChildren,bool parentHasChanged);virtual void _updateBounds(void);virtual void _findVisibleObjects(Camera*cam,RenderQueue*queue,VisibleObjectsBoundsInfo*visibleBounds,bool includeChildren=true,bool displayNodes=false,bool onlyShadowCasters=false);virtual const AxisAlignedBox&_getWorldAABB(void)const;virtual ObjectIterator getAttachedObjectIterator(void);virtual ConstObjectIterator getAttachedObjectIterator(void)const;SceneManager*getCreator(void)const{return mCreator;}virtual void removeAndDestroyChild(const String&name);virtual void removeAndDestroyChild(unsigned short index);virtual void removeAndDestroyAllChildren(void);virtual void showBoundingBox(bool bShow);virtual void _addBoundingBoxToQueue(RenderQueue*queue);virtual bool getShowBoundingBox()const;virtual SceneNode*createChildSceneNode(const Vector3&translate=Vector3::ZERO,const Quaternion&rotate=Quaternion::IDENTITY);virtual SceneNode*createChildSceneNode(const String&name,const Vector3&translate=Vector3::ZERO,const Quaternion&rotate=Quaternion::IDENTITY);virtual void findLights(LightList&destList,Real radius)const;virtual void setFixedYawAxis(bool useFixed,const Vector3&fixedAxis=Vector3::UNIT_Y);virtual void yaw(const Radian&angle,TransformSpace relativeTo=TS_LOCAL);virtual void setDirection(Real x,Real y,Real z,TransformSpace relativeTo=TS_LOCAL,const Vector3&localDirectionVector=Vector3::NEGATIVE_UNIT_Z);virtual void setDirection(const Vector3&vec,TransformSpace relativeTo=TS_LOCAL,const Vector3&localDirectionVector=Vector3::NEGATIVE_UNIT_Z);virtual void lookAt(const Vector3&targetPoint,TransformSpace relativeTo,const Vector3&localDirectionVector=Vector3::NEGATIVE_UNIT_Z);virtual void setAutoTracking(bool enabled,SceneNode*target=0,const Vector3&localDirectionVector=Vector3::NEGATIVE_UNIT_Z,const Vector3&offset=Vector3::ZERO);virtual SceneNode*getAutoTrackTarget(void){return mAutoTrackTarget;}virtual const Vector3&getAutoTrackOffset(void){return mAutoTrackOffset;}virtual const Vector3&getAutoTrackLocalDirection(void){return mAutoTrackLocalDirection;}void _autoTrack(void);SceneNode*getParentSceneNode(void)const;virtual void setVisible(bool visible,bool cascade=true);virtual void flipVisibility(bool cascade=true);};}
namespace Ogre{class __declspec(dllimport)ParticleAffector:public StringInterface{protected:String mType;void addBaseParameters(void){}ParticleSystem*mParent;public:ParticleAffector(ParticleSystem*parent):mParent(parent){}virtual~ParticleAffector();virtual void _initParticle(Particle*pParticle){}virtual void _affectParticles(ParticleSystem*pSystem,Real timeElapsed)=0;const String&getType(void)const{return mType;}};}
namespace Ogre{namespace EmitterCommands{class __declspec(dllimport)CmdAngle:public ParamCommand{public:String doGet(const void*target)const;void doSet(void*target,const String&val);};class __declspec(dllimport)CmdColour:public ParamCommand{public:String doGet(const void*target)const;void doSet(void*target,const String&val);};class __declspec(dllimport)CmdColourRangeStart:public ParamCommand{public:String doGet(const void*target)const;void doSet(void*target,const String&val);};class __declspec(dllimport)CmdColourRangeEnd:public ParamCommand{public:String doGet(const void*target)const;void doSet(void*target,const String&val);};class __declspec(dllimport)CmdDirection:public ParamCommand{public:String doGet(const void*target)const;void doSet(void*target,const String&val);};class __declspec(dllimport)CmdEmissionRate:public ParamCommand{public:String doGet(const void*target)const;void doSet(void*target,const String&val);};class __declspec(dllimport)CmdVelocity:public ParamCommand{public:String doGet(const void*target)const;void doSet(void*target,const String&val);};class __declspec(dllimport)CmdMinVelocity:public ParamCommand{public:String doGet(const void*target)const;void doSet(void*target,const String&val);};class __declspec(dllimport)CmdMaxVelocity:public ParamCommand{public:String doGet(const void*target)const;void doSet(void*target,const String&val);};class __declspec(dllimport)CmdTTL:public ParamCommand{public:String doGet(const void*target)const;void doSet(void*target,const String&val);};class __declspec(dllimport)CmdMinTTL:public ParamCommand{public:String doGet(const void*target)const;void doSet(void*target,const String&val);};class __declspec(dllimport)CmdMaxTTL:public ParamCommand{public:String doGet(const void*target)const;void doSet(void*target,const String&val);};class __declspec(dllimport)CmdPosition:public ParamCommand{public:String doGet(const void*target)const;void doSet(void*target,const String&val);};class __declspec(dllimport)CmdDuration:public ParamCommand{public:String doGet(const void*target)const;void doSet(void*target,const String&val);};class __declspec(dllimport)CmdMinDuration:public ParamCommand{public:String doGet(const void*target)const;void doSet(void*target,const String&val);};class __declspec(dllimport)CmdMaxDuration:public ParamCommand{public:String doGet(const void*target)const;void doSet(void*target,const String&val);};class __declspec(dllimport)CmdRepeatDelay:public ParamCommand{public:String doGet(const void*target)const;void doSet(void*target,const String&val);};class __declspec(dllimport)CmdMinRepeatDelay:public ParamCommand{public:String doGet(const void*target)const;void doSet(void*target,const String&val);};class __declspec(dllimport)CmdMaxRepeatDelay:public ParamCommand{public:String doGet(const void*target)const;void doSet(void*target,const String&val);};class __declspec(dllimport)CmdName:public ParamCommand{public:String doGet(const void*target)const;void doSet(void*target,const String&val);};class __declspec(dllimport)CmdEmittedEmitter:public ParamCommand{public:String doGet(const void*target)const;void doSet(void*target,const String&val);};}}
namespace Ogre{class __declspec(dllimport)ParticleVisualData{public:ParticleVisualData(){}virtual~ParticleVisualData(){}};class __declspec(dllimport)Particle{protected:ParticleSystem*mParentSystem;ParticleVisualData*mVisual;public:enum ParticleType{Visual,Emitter};bool mOwnDimensions;Real mWidth;Real mHeight;Radian rotation;Vector3 position;Vector3 direction;ColourValue colour;Real timeToLive;Real totalTimeToLive;Radian rotationSpeed;ParticleType particleType;Particle():mParentSystem(0),mVisual(0),mOwnDimensions(false),rotation(0),position(Vector3::ZERO),direction(Vector3::ZERO),colour(ColourValue::White),timeToLive(10),totalTimeToLive(10),rotationSpeed(0),particleType(Visual){}void setDimensions(Real width,Real height);bool hasOwnDimensions(void)const{return mOwnDimensions;}Real getOwnWidth(void)const{return mWidth;}Real getOwnHeight(void)const{return mHeight;}void setRotation(const Radian&rad);const Radian&getRotation(void)const{return rotation;}void _notifyOwner(ParticleSystem*owner);void _notifyVisualData(ParticleVisualData*vis){mVisual=vis;}ParticleVisualData*getVisualData(void)const{return mVisual;}void resetDimensions(void);};}
namespace Ogre{class __declspec(dllimport)ParticleEmitter:public StringInterface,public Particle{protected:static EmitterCommands::CmdAngle msAngleCmd;static EmitterCommands::CmdColour msColourCmd;static EmitterCommands::CmdColourRangeStart msColourRangeStartCmd;static EmitterCommands::CmdColourRangeEnd msColourRangeEndCmd;static EmitterCommands::CmdDirection msDirectionCmd;static EmitterCommands::CmdEmissionRate msEmissionRateCmd;static EmitterCommands::CmdMaxTTL msMaxTTLCmd;static EmitterCommands::CmdMaxVelocity msMaxVelocityCmd;static EmitterCommands::CmdMinTTL msMinTTLCmd;static EmitterCommands::CmdMinVelocity msMinVelocityCmd;static EmitterCommands::CmdPosition msPositionCmd;static EmitterCommands::CmdTTL msTTLCmd;static EmitterCommands::CmdVelocity msVelocityCmd;static EmitterCommands::CmdDuration msDurationCmd;static EmitterCommands::CmdMinDuration msMinDurationCmd;static EmitterCommands::CmdMaxDuration msMaxDurationCmd;static EmitterCommands::CmdRepeatDelay msRepeatDelayCmd;static EmitterCommands::CmdMinRepeatDelay msMinRepeatDelayCmd;static EmitterCommands::CmdMaxRepeatDelay msMaxRepeatDelayCmd;static EmitterCommands::CmdName msNameCmd;static EmitterCommands::CmdEmittedEmitter msEmittedEmitterCmd;ParticleSystem*mParent;Vector3 mPosition;Real mEmissionRate;String mType;Vector3 mDirection;Vector3 mUp;Radian mAngle;Real mMinSpeed;Real mMaxSpeed;Real mMinTTL;Real mMaxTTL;ColourValue mColourRangeStart;ColourValue mColourRangeEnd;bool mEnabled;Real mStartTime;Real mDurationMin;Real mDurationMax;Real mDurationRemain;Real mRepeatDelayMin;Real mRepeatDelayMax;Real mRepeatDelayRemain;Real mRemainder;String mName;String mEmittedEmitter;bool mEmitted;virtual void genEmissionDirection(Vector3&destVector);virtual void genEmissionVelocity(Vector3&destVector);virtual Real genEmissionTTL(void);virtual void genEmissionColour(ColourValue&destColour);virtual unsigned short genConstantEmissionCount(Real timeElapsed);void addBaseParameters(void);void initDurationRepeat(void);public:ParticleEmitter(ParticleSystem*psys);virtual~ParticleEmitter();virtual void setPosition(const Vector3&pos);virtual const Vector3&getPosition(void)const;virtual void setDirection(const Vector3&direction);virtual const Vector3&getDirection(void)const;virtual void setAngle(const Radian&angle);virtual const Radian&getAngle(void)const;virtual void setParticleVelocity(Real speed);virtual void setParticleVelocity(Real min,Real max);virtual void setMinParticleVelocity(Real min);virtual void setMaxParticleVelocity(Real max);virtual Real getParticleVelocity(void)const;virtual Real getMinParticleVelocity(void)const;virtual Real getMaxParticleVelocity(void)const;virtual void setEmissionRate(Real particlesPerSecond);virtual Real getEmissionRate(void)const;virtual void setTimeToLive(Real ttl);virtual void setTimeToLive(Real minTtl,Real maxTtl);virtual void setMinTimeToLive(Real min);virtual void setMaxTimeToLive(Real max);virtual Real getTimeToLive(void)const;virtual Real getMinTimeToLive(void)const;virtual Real getMaxTimeToLive(void)const;virtual void setColour(const ColourValue&colour);virtual void setColour(const ColourValue&colourStart,const ColourValue&colourEnd);virtual void setColourRangeStart(const ColourValue&colour);virtual void setColourRangeEnd(const ColourValue&colour);virtual const ColourValue&getColour(void)const;virtual const ColourValue&getColourRangeStart(void)const;virtual const ColourValue&getColourRangeEnd(void)const;virtual unsigned short _getEmissionCount(Real timeElapsed)=0;virtual void _initParticle(Particle*pParticle){pParticle->resetDimensions();}const String&getType(void)const{return mType;}virtual void setEnabled(bool enabled);virtual bool getEnabled(void)const;virtual void setStartTime(Real startTime);virtual Real getStartTime(void)const;virtual void setDuration(Real duration);virtual Real getDuration(void)const;virtual void setDuration(Real min,Real max);virtual void setMinDuration(Real min);virtual void setMaxDuration(Real max);virtual Real getMinDuration(void)const;virtual Real getMaxDuration(void)const;virtual void setRepeatDelay(Real duration);virtual Real getRepeatDelay(void)const;virtual void setRepeatDelay(Real min,Real max);virtual void setMinRepeatDelay(Real min);virtual void setMaxRepeatDelay(Real max);virtual Real getMinRepeatDelay(void)const;virtual Real getMaxRepeatDelay(void)const;const String&getName(void)const;virtual void setName(const String&newName);const String&getEmittedEmitter(void)const;virtual void setEmittedEmitter(const String&emittedEmitter);virtual bool isEmitted(void)const;virtual void setEmitted(bool emitted);};}
namespace Ogre{class __declspec(dllimport)ParticleIterator{friend class ParticleSystem;protected:std::list<Particle*>::iterator mPos;std::list<Particle*>::iterator mStart;std::list<Particle*>::iterator mEnd;ParticleIterator(std::list<Particle*>::iterator start,std::list<Particle*>::iterator end);public:bool end(void);Particle*getNext(void);};}
namespace Ogre{class __declspec(dllimport)ParticleSystem:public StringInterface,public MovableObject{public:class CmdQuota:public ParamCommand{public:String doGet(const void*target)const;void doSet(void*target,const String&val);};class CmdEmittedEmitterQuota:public ParamCommand{public:String doGet(const void*target)const;void doSet(void*target,const String&val);};class CmdMaterial:public ParamCommand{public:String doGet(const void*target)const;void doSet(void*target,const String&val);};class CmdCull:public ParamCommand{public:String doGet(const void*target)const;void doSet(void*target,const String&val);};class CmdWidth:public ParamCommand{public:String doGet(const void*target)const;void doSet(void*target,const String&val);};class CmdHeight:public ParamCommand{public:String doGet(const void*target)const;void doSet(void*target,const String&val);};class CmdRenderer:public ParamCommand{public:String doGet(const void*target)const;void doSet(void*target,const String&val);};class CmdSorted:public ParamCommand{public:String doGet(const void*target)const;void doSet(void*target,const String&val);};class CmdLocalSpace:public ParamCommand{public:String doGet(const void*target)const;void doSet(void*target,const String&val);};class CmdIterationInterval:public ParamCommand{public:String doGet(const void*target)const;void doSet(void*target,const String&val);};class CmdNonvisibleTimeout:public ParamCommand{public:String doGet(const void*target)const;void doSet(void*target,const String&val);};ParticleSystem();ParticleSystem(const String&name,const String&resourceGroupName);virtual~ParticleSystem();void setRenderer(const String&typeName);ParticleSystemRenderer*getRenderer(void)const;const String&getRendererName(void)const;ParticleEmitter*addEmitter(const String&emitterType);ParticleEmitter*getEmitter(unsigned short index)const;unsigned short getNumEmitters(void)const;void removeEmitter(unsigned short index);void removeAllEmitters(void);ParticleAffector*addAffector(const String&affectorType);ParticleAffector*getAffector(unsigned short index)const;unsigned short getNumAffectors(void)const;void removeAffector(unsigned short index);void removeAllAffectors(void);void clear();size_t getNumParticles(void)const;Particle*createParticle(void);Particle*createEmitterParticle(const String&emitterName);Particle*getParticle(size_t index);size_t getParticleQuota(void)const;void setParticleQuota(size_t quota);size_t getEmittedEmitterQuota(void)const;void setEmittedEmitterQuota(size_t quota);ParticleSystem&operator=(const ParticleSystem&rhs);void _update(Real timeElapsed);ParticleIterator _getIterator(void);virtual void setMaterialName(const String&name);virtual const String&getMaterialName(void)const;virtual void _notifyCurrentCamera(Camera*cam);void _notifyAttached(Node*parent,bool isTagPoint=false);virtual const AxisAlignedBox&getBoundingBox(void)const{return mAABB;}virtual Real getBoundingRadius(void)const{return mBoundingRadius;}virtual void _updateRenderQueue(RenderQueue*queue);void fastForward(Real time,Real interval=0.1);void setSpeedFactor(Real speedFactor){mSpeedFactor=speedFactor;}Real getSpeedFactor(void)const{return mSpeedFactor;}void setIterationInterval(Real iterationInterval);Real getIterationInterval(void)const{return mIterationInterval;}static void setDefaultIterationInterval(Real iterationInterval){msDefaultIterationInterval=iterationInterval;}static Real getDefaultIterationInterval(void){return msDefaultIterationInterval;}void setNonVisibleUpdateTimeout(Real timeout);Real getNonVisibleUpdateTimeout(void)const{return mNonvisibleTimeout;}static void setDefaultNonVisibleUpdateTimeout(Real timeout){msDefaultNonvisibleTimeout=timeout;}static Real getDefaultNonVisibleUpdateTimeout(void){return msDefaultNonvisibleTimeout;}const String&getMovableType(void)const;virtual void _notifyParticleResized(void);virtual void _notifyParticleRotated(void);virtual void setDefaultDimensions(Real width,Real height);virtual void setDefaultWidth(Real width);virtual Real getDefaultWidth(void)const;virtual void setDefaultHeight(Real height);virtual Real getDefaultHeight(void)const;virtual bool getCullIndividually(void)const;virtual void setCullIndividually(bool cullIndividual);virtual const String&getResourceGroupName(void)const{return mResourceGroupName;}const String&getOrigin(void)const{return mOrigin;}void _notifyOrigin(const String&origin){mOrigin=origin;}void setRenderQueueGroup(uint8 queueID);void setSortingEnabled(bool enabled){mSorted=enabled;}bool getSortingEnabled(void)const{return mSorted;}void setBounds(const AxisAlignedBox&aabb);void setBoundsAutoUpdated(bool autoUpdate,Real stopIn=0.0f);void setKeepParticlesInLocalSpace(bool keepLocal);bool getKeepParticlesInLocalSpace(void)const{return mLocalSpace;}void _updateBounds(void);uint32 getTypeFlags(void)const;protected:static CmdCull msCullCmd;static CmdHeight msHeightCmd;static CmdMaterial msMaterialCmd;static CmdQuota msQuotaCmd;static CmdEmittedEmitterQuota msEmittedEmitterQuotaCmd;static CmdWidth msWidthCmd;static CmdRenderer msRendererCmd;static CmdSorted msSortedCmd;static CmdLocalSpace msLocalSpaceCmd;static CmdIterationInterval msIterationIntervalCmd;static CmdNonvisibleTimeout msNonvisibleTimeoutCmd;AxisAlignedBox mAABB;Real mBoundingRadius;bool mBoundsAutoUpdate;Real mBoundsUpdateTime;Real mUpdateRemainTime;AxisAlignedBox mWorldAABB;String mResourceGroupName;String mMaterialName;bool mIsRendererConfigured;MaterialPtr mpMaterial;Real mDefaultWidth;Real mDefaultHeight;Real mSpeedFactor;Real mIterationInterval;bool mIterationIntervalSet;bool mSorted;bool mLocalSpace;Real mNonvisibleTimeout;bool mNonvisibleTimeoutSet;Real mTimeSinceLastVisible;unsigned long mLastVisibleFrame;Controller<Real>*mTimeController;bool mEmittedEmitterPoolInitialised;typedef std::list<Particle*>ActiveParticleList;typedef std::list<Particle*>FreeParticleList;typedef std::vector<Particle*>ParticlePool;struct SortByDirectionFunctor{Vector3 sortDir;SortByDirectionFunctor(const Vector3&dir);float operator()(Particle*p)const;};struct SortByDistanceFunctor{Vector3 sortPos;SortByDistanceFunctor(const Vector3&pos);float operator()(Particle*p)const;};static RadixSort<ActiveParticleList,Particle*,float>mRadixSorter;ActiveParticleList mActiveParticles;FreeParticleList mFreeParticles;ParticlePool mParticlePool;typedef std::list<ParticleEmitter*>FreeEmittedEmitterList;typedef std::list<ParticleEmitter*>ActiveEmittedEmitterList;typedef std::vector<ParticleEmitter*>EmittedEmitterList;typedef std::map<String,FreeEmittedEmitterList>FreeEmittedEmitterMap;typedef std::map<String,EmittedEmitterList>EmittedEmitterPool;EmittedEmitterPool mEmittedEmitterPool;FreeEmittedEmitterMap mFreeEmittedEmitters;ActiveEmittedEmitterList mActiveEmittedEmitters;typedef std::vector<ParticleEmitter*>ParticleEmitterList;typedef std::vector<ParticleAffector*>ParticleAffectorList;ParticleEmitterList mEmitters;ParticleAffectorList mAffectors;ParticleSystemRenderer*mRenderer;bool mCullIndividual;String mRendererType;size_t mPoolSize;size_t mEmittedEmitterPoolSize;String mOrigin;static Real msDefaultIterationInterval;static Real msDefaultNonvisibleTimeout;void _expire(Real timeElapsed);void _triggerEmitters(Real timeElapsed);void _executeTriggerEmitters(ParticleEmitter*emitter,unsigned requested,Real timeElapsed);void _applyMotion(Real timeElapsed);void _triggerAffectors(Real timeElapsed);void _sortParticles(Camera*cam);void increasePool(size_t size);void increaseEmittedEmitterPool(size_t size);void initParameters(void);void configureRenderer(void);void createVisualParticles(size_t poolstart,size_t poolend);void destroyVisualParticles(size_t poolstart,size_t poolend);void initialiseEmittedEmitters(void);void initialiseEmittedEmitterPool(void);void addFreeEmittedEmitters(void);void removeAllEmittedEmitters(void);FreeEmittedEmitterList*findFreeEmittedEmitter(const String&name);void removeFromActiveEmittedEmitters(ParticleEmitter*emitter);void addActiveEmittedEmittersToFreeList(void);void _notifyReorganiseEmittedEmitterData(void);};}
namespace Ogre{class ParticleSystemFactory;class __declspec(dllimport)ParticleSystemManager:public Singleton<ParticleSystemManager>,public ScriptLoader{friend class ParticleSystemFactory;public:typedef std::map<String,ParticleSystem*>ParticleTemplateMap;typedef std::map<String,ParticleAffectorFactory*>ParticleAffectorFactoryMap;typedef std::map<String,ParticleEmitterFactory*>ParticleEmitterFactoryMap;typedef std::map<String,ParticleSystemRendererFactory*>ParticleSystemRendererFactoryMap;protected:ParticleTemplateMap mSystemTemplates;ParticleEmitterFactoryMap mEmitterFactories;ParticleAffectorFactoryMap mAffectorFactories;ParticleSystemRendererFactoryMap mRendererFactories;StringVector mScriptPatterns;ParticleSystemFactory*mFactory;void parseNewEmitter(const String&type,DataStreamPtr&chunk,ParticleSystem*sys);void parseNewAffector(const String&type,DataStreamPtr&chunk,ParticleSystem*sys);void parseAttrib(const String&line,ParticleSystem*sys);void parseEmitterAttrib(const String&line,ParticleEmitter*sys);void parseAffectorAttrib(const String&line,ParticleAffector*sys);void skipToNextCloseBrace(DataStreamPtr&chunk);void skipToNextOpenBrace(DataStreamPtr&chunk);ParticleSystem*createSystemImpl(const String&name,size_t quota,const String&resourceGroup);ParticleSystem*createSystemImpl(const String&name,const String&templateName);void destroySystemImpl(ParticleSystem*sys);public:ParticleSystemManager();virtual~ParticleSystemManager();void addEmitterFactory(ParticleEmitterFactory*factory);void addAffectorFactory(ParticleAffectorFactory*factory);void addRendererFactory(ParticleSystemRendererFactory*factory);void addTemplate(const String&name,ParticleSystem*sysTemplate);void removeTemplate(const String&name,bool deleteTemplate=true);void removeAllTemplates(bool deleteTemplate=true);ParticleSystem*createTemplate(const String&name,const String&resourceGroup);ParticleSystem*getTemplate(const String&name);ParticleEmitter*_createEmitter(const String&emitterType,ParticleSystem*psys);void _destroyEmitter(ParticleEmitter*emitter);ParticleAffector*_createAffector(const String&affectorType,ParticleSystem*psys);void _destroyAffector(ParticleAffector*affector);ParticleSystemRenderer*_createRenderer(const String&rendererType);void _destroyRenderer(ParticleSystemRenderer*renderer);void _initialise(void);const StringVector&getScriptPatterns(void)const;void parseScript(DataStreamPtr&stream,const String&groupName);Real getLoadingOrder(void)const;typedef MapIterator<ParticleAffectorFactoryMap>ParticleAffectorFactoryIterator;typedef MapIterator<ParticleEmitterFactoryMap>ParticleEmitterFactoryIterator;typedef MapIterator<ParticleSystemRendererFactoryMap>ParticleRendererFactoryIterator;ParticleAffectorFactoryIterator getAffectorFactoryIterator(void);ParticleEmitterFactoryIterator getEmitterFactoryIterator(void);ParticleRendererFactoryIterator getRendererFactoryIterator(void);typedef MapIterator<ParticleTemplateMap>ParticleSystemTemplateIterator;ParticleSystemTemplateIterator getTemplateIterator(void){return ParticleSystemTemplateIterator(mSystemTemplates.begin(),mSystemTemplates.end());}ParticleSystemFactory*_getFactory(void){return mFactory;}static ParticleSystemManager&getSingleton(void);static ParticleSystemManager*getSingletonPtr(void);};class __declspec(dllimport)ParticleSystemFactory:public MovableObjectFactory{protected:MovableObject*createInstanceImpl(const String&name,const NameValuePairList*params);public:ParticleSystemFactory(){}~ParticleSystemFactory(){}static String FACTORY_TYPE_NAME;const String&getType(void)const;void destroyInstance(MovableObject*obj);};}
namespace Ogre{struct RenderablePass{Renderable*renderable;Pass*pass;RenderablePass(Renderable*rend,Pass*p);};class __declspec(dllimport)QueuedRenderableVisitor{public:QueuedRenderableVisitor();virtual~QueuedRenderableVisitor();virtual void visit(const RenderablePass*rp)=0;virtual bool visit(const Pass*p)=0;virtual void visit(const Renderable*r)=0;};class __declspec(dllimport)QueuedRenderableCollection{public:enum OrganisationMode{OM_PASS_GROUP=1,OM_SORT_DESCENDING=2,OM_SORT_ASCENDING=6};protected:struct PassGroupLess{bool __declspec(dllimport)operator()(const Pass*a,const Pass*b)const;};struct DepthSortDescendingLess{const Camera*camera;DepthSortDescendingLess(const Camera*cam);bool __declspec(dllimport)operator()(const RenderablePass&a,const RenderablePass&b)const;};typedef std::vector<RenderablePass>RenderablePassList;typedef std::vector<Renderable*>RenderableList;typedef std::map<Pass*,RenderableList*,PassGroupLess>PassGroupRenderableMap;struct RadixSortFunctorPass{uint32 operator()(const RenderablePass&p)const;};static RadixSort<RenderablePassList,RenderablePass,uint32>msRadixSorter1;struct RadixSortFunctorDistance{const Camera*camera;RadixSortFunctorDistance(const Camera*cam);float operator()(const RenderablePass&p)const;};static RadixSort<RenderablePassList,RenderablePass,float>msRadixSorter2;uint8 mOrganisationMode;PassGroupRenderableMap mGrouped;RenderablePassList mSortedDescending;void acceptVisitorGrouped(QueuedRenderableVisitor*visitor)const;void acceptVisitorDescending(QueuedRenderableVisitor*visitor)const;void acceptVisitorAscending(QueuedRenderableVisitor*visitor)const;public:QueuedRenderableCollection();~QueuedRenderableCollection();void clear(void);void removePassGroup(Pass*p);void resetOrganisationModes(void);void addOrganisationMode(OrganisationMode om);void addRenderable(Pass*pass,Renderable*rend);void sort(const Camera*cam);void acceptVisitor(QueuedRenderableVisitor*visitor,OrganisationMode om)const;};class __declspec(dllimport)RenderPriorityGroup{protected:RenderQueueGroup*mParent;bool mSplitPassesByLightingType;bool mSplitNoShadowPasses;bool mShadowCastersNotReceivers;QueuedRenderableCollection mSolidsBasic;QueuedRenderableCollection mSolidsDiffuseSpecular;QueuedRenderableCollection mSolidsDecal;QueuedRenderableCollection mSolidsNoShadowReceive;QueuedRenderableCollection mTransparents;void removePassEntry(Pass*p);void addSolidRenderable(Technique*pTech,Renderable*rend,bool toNoShadowMap);void addSolidRenderableSplitByLightType(Technique*pTech,Renderable*rend);void addTransparentRenderable(Technique*pTech,Renderable*rend);public:RenderPriorityGroup(RenderQueueGroup*parent,bool splitPassesByLightingType,bool splitNoShadowPasses,bool shadowCastersNotReceivers);~RenderPriorityGroup();const QueuedRenderableCollection&getSolidsBasic(void)const;const QueuedRenderableCollection&getSolidsDiffuseSpecular(void)const;const QueuedRenderableCollection&getSolidsDecal(void)const;const QueuedRenderableCollection&getSolidsNoShadowReceive(void)const;const QueuedRenderableCollection&getTransparents(void)const;void resetOrganisationModes(void);void addOrganisationMode(QueuedRenderableCollection::OrganisationMode om);void defaultOrganisationMode(void);void addRenderable(Renderable*pRend,Technique*pTech);void sort(const Camera*cam);void clear(void);void setSplitPassesByLightingType(bool split);void setSplitNoShadowPasses(bool split);void setShadowCastersCannotBeReceivers(bool ind);};class __declspec(dllimport)RenderQueueGroup{public:typedef std::map<ushort,RenderPriorityGroup*,std::less<ushort> >PriorityMap;typedef MapIterator<PriorityMap>PriorityMapIterator;protected:RenderQueue*mParent;bool mSplitPassesByLightingType;bool mSplitNoShadowPasses;bool mShadowCastersNotReceivers;PriorityMap mPriorityGroups;bool mShadowsEnabled;public:RenderQueueGroup(RenderQueue*parent,bool splitPassesByLightingType,bool splitNoShadowPasses,bool shadowCastersNotReceivers);~RenderQueueGroup();PriorityMapIterator getIterator(void);void addRenderable(Renderable*pRend,Technique*pTech,ushort priority);void clear(bool destroy=false);void setShadowsEnabled(bool enabled);bool getShadowsEnabled(void)const;void setSplitPassesByLightingType(bool split);void setSplitNoShadowPasses(bool split);void setShadowCastersCannotBeReceivers(bool ind);void resetOrganisationModes(void);void addOrganisationMode(QueuedRenderableCollection::OrganisationMode om);void defaultOrganisationMode(void);};}
namespace Ogre {class ResourceGroupManager {public:static String DEFAULT_RESOURCE_GROUP_NAME;};}
namespace Ogre{struct ViewPoint{Vector3 position;Quaternion orientation;};class DefaultIntersectionSceneQuery;class DefaultRaySceneQuery;class DefaultSphereSceneQuery;class DefaultAxisAlignedBoxSceneQuery;struct VisibleObjectsBoundsInfo{AxisAlignedBox aabb;Real minDistance;Real maxDistance;VisibleObjectsBoundsInfo();void reset();void merge(const AxisAlignedBox&boxBounds,const Sphere&sphereBounds,const Camera*cam);};class __declspec(dllimport)ShadowListener{public:ShadowListener();virtual~ShadowListener();virtual void shadowTexturesUpdated(size_t numberOfShadowTextures)=0;virtual void shadowTextureCasterPreViewProj(Light*light,Camera*camera)=0;virtual void shadowTextureReceiverPreViewProj(Light*light,Frustum*frustum)=0;virtual bool sortLightsAffectingFrustum(LightList&lightList);};class __declspec(dllimport)SceneManager{public:static uint32 WORLD_GEOMETRY_TYPE_MASK;static uint32 ENTITY_TYPE_MASK;static uint32 FX_TYPE_MASK;static uint32 STATICGEOMETRY_TYPE_MASK;static uint32 LIGHT_TYPE_MASK;static uint32 USER_TYPE_MASK_LIMIT;struct materialLess{__declspec(dllimport)bool operator()(const Material*x,const Material*y)const;};struct lightLess{__declspec(dllimport)bool operator()(const Light*a,const Light*b)const;};enum IlluminationRenderStage{IRS_NONE,IRS_RENDER_TO_TEXTURE,IRS_RENDER_RECEIVER_PASS};enum SpecialCaseRenderQueueMode{SCRQM_INCLUDE,SCRQM_EXCLUDE};struct SkyDomeGenParameters{Real skyDomeCurvature;Real skyDomeTiling;Real skyDomeDistance;int skyDomeXSegments;int skyDomeYSegments;int skyDomeYSegments_keep;};struct SkyPlaneGenParameters{Real skyPlaneScale;Real skyPlaneTiling;Real skyPlaneBow;int skyPlaneXSegments;int skyPlaneYSegments;};struct SkyBoxGenParameters{Real skyBoxDistance;};protected:String mName;typedef std::map<String,Camera*>CameraList;typedef std::map<String,StaticGeometry*>StaticGeometryList;typedef std::map<String,InstancedGeometry*>InstancedGeometryList;typedef std::map<String,SceneNode*>SceneNodeList;typedef std::set<SceneNode*>AutoTrackingSceneNodes;typedef std::set<uint8>SpecialCaseRenderQueueList;protected:typedef std::map<const Camera*,VisibleObjectsBoundsInfo>CamVisibleObjectsMap;typedef std::map<const Camera*,const Light*>ShadowCamLightMapping;struct __declspec(dllimport)LightInfo{Light*light;int type;Real range;Vector3 position;bool operator==(const LightInfo&rhs)const;bool operator!=(const LightInfo&rhs)const;};typedef std::vector<LightInfo>LightInfoList;typedef std::map<String,MovableObject*>MovableObjectMap;struct MovableObjectCollection{MovableObjectMap map;};typedef std::map<String,MovableObjectCollection*>MovableObjectCollectionMap;virtual void initRenderQueue(void);enum BoxPlane{BP_FRONT=0,BP_BACK=1,BP_LEFT=2,BP_RIGHT=3,BP_UP=4,BP_DOWN=5};typedef std::map<String,Animation*>AnimationList;typedef std::vector<RenderQueueListener*>RenderQueueListenerList;typedef std::vector<ShadowListener*>ShadowListenerList;virtual void setViewport(Viewport*vp);virtual void renderVisibleObjectsDefaultSequence(void);virtual void renderVisibleObjectsCustomSequence(RenderQueueInvocationSequence*s);virtual void prepareRenderQueue(void);virtual void renderSingleObject(const Renderable*rend,const Pass*pass,bool doLightIteration,const LightList*manualLightList=0);typedef std::vector<Camera*>ShadowTextureCameraList;struct lightsForShadowTextureLess{__declspec(dllimport)bool operator()(const Light*l1,const Light*l2)const;};virtual void findLightsAffectingFrustum(const Camera*camera);virtual void initShadowVolumeMaterials(void);virtual void ensureShadowTexturesCreated();virtual void destroyShadowTextures(void);virtual void prepareShadowTextures(Camera*cam,Viewport*vp);virtual void renderShadowVolumesToStencil(const Light*light,const Camera*cam);virtual void setShadowVolumeStencilState(bool secondpass,bool zfail,bool twosided);typedef std::vector<ShadowCaster*>ShadowCasterList;class ShadowCasterSceneQueryListener;virtual const ShadowCasterList&findShadowCastersForLight(const Light*light,const Camera*camera);virtual void renderBasicQueueGroupObjects(RenderQueueGroup*pGroup,QueuedRenderableCollection::OrganisationMode om);virtual void renderAdditiveStencilShadowedQueueGroupObjects(RenderQueueGroup*group,QueuedRenderableCollection::OrganisationMode om);virtual void renderModulativeStencilShadowedQueueGroupObjects(RenderQueueGroup*group,QueuedRenderableCollection::OrganisationMode om);virtual void renderTextureShadowCasterQueueGroupObjects(RenderQueueGroup*group,QueuedRenderableCollection::OrganisationMode om);virtual void renderTextureShadowReceiverQueueGroupObjects(RenderQueueGroup*group,QueuedRenderableCollection::OrganisationMode om);virtual void renderModulativeTextureShadowedQueueGroupObjects(RenderQueueGroup*group,QueuedRenderableCollection::OrganisationMode om);virtual void renderAdditiveTextureShadowedQueueGroupObjects(RenderQueueGroup*group,QueuedRenderableCollection::OrganisationMode om);virtual void renderObjects(const QueuedRenderableCollection&objs,QueuedRenderableCollection::OrganisationMode om,bool doLightIteration,const LightList*manualLightList=0);virtual void renderTransparentShadowCasterObjects(const QueuedRenderableCollection&objs,QueuedRenderableCollection::OrganisationMode om,bool doLightIteration,const LightList*manualLightList=0);virtual void updateRenderQueueSplitOptions(void);virtual void updateRenderQueueGroupSplitOptions(RenderQueueGroup*group,bool suppressShadows,bool suppressRenderState);class __declspec(dllimport)SceneMgrQueuedRenderableVisitor:public QueuedRenderableVisitor{protected:const Pass*mUsedPass;public:SceneMgrQueuedRenderableVisitor();~SceneMgrQueuedRenderableVisitor();void visit(const Renderable*r);bool visit(const Pass*p);void visit(const RenderablePass*rp);SceneManager*targetSceneMgr;bool transparentShadowCastersMode;bool autoLights;const LightList*manualLightList;};friend class SceneMgrQueuedRenderableVisitor;public:virtual~SceneManager();const String&getName(void)const{return mName;}virtual const String&getTypeName(void)const=0;virtual Camera*createCamera(const String&name);virtual Camera*getCamera(const String&name)const;virtual bool hasCamera(const String&name)const;virtual void destroyCamera(Camera*cam);virtual void destroyCamera(const String&name);virtual void destroyAllCameras(void);virtual Light*createLight(const String&name);virtual Light*getLight(const String&name)const;virtual bool hasLight(const String&name)const;virtual void destroyLight(const String&name);virtual void destroyLight(Light*light);virtual void destroyAllLights(void);virtual void _notifyLightsDirty(void);virtual const LightList&_getLightsAffectingFrustum(void)const;virtual void _populateLightList(const Vector3&position,Real radius,LightList&destList);virtual SceneNode*createSceneNode(void);virtual SceneNode*createSceneNode(const String&name);virtual void destroySceneNode(const String&name);virtual SceneNode*getRootSceneNode(void)const;virtual SceneNode*getSceneNode(const String&name)const;virtual bool hasSceneNode(const String&name)const;virtual Entity*createEntity(const String&entityName,const String&meshName);enum PrefabType{PT_PLANE,PT_CUBE,PT_SPHERE};virtual Entity*createEntity(const String&entityName,PrefabType ptype);virtual Entity*getEntity(const String&name)const;virtual bool hasEntity(const String&name)const;virtual void destroyEntity(Entity*ent);virtual void destroyEntity(const String&name);virtual void destroyAllEntities(void);virtual ManualObject*createManualObject(const String&name);virtual ManualObject*getManualObject(const String&name)const;virtual bool hasManualObject(const String&name)const;virtual void destroyManualObject(ManualObject*obj);virtual void destroyManualObject(const String&name);virtual void destroyAllManualObjects(void);virtual BillboardChain*createBillboardChain(const String&name);virtual BillboardChain*getBillboardChain(const String&name)const;virtual bool hasBillboardChain(const String&name)const;virtual void destroyBillboardChain(BillboardChain*obj);virtual void destroyBillboardChain(const String&name);virtual void destroyAllBillboardChains(void);virtual RibbonTrail*createRibbonTrail(const String&name);virtual RibbonTrail*getRibbonTrail(const String&name)const;virtual bool hasRibbonTrail(const String&name)const;virtual void destroyRibbonTrail(RibbonTrail*obj);virtual void destroyRibbonTrail(const String&name);virtual void destroyAllRibbonTrails(void);virtual ParticleSystem*createParticleSystem(const String&name,const String&templateName);virtual ParticleSystem*createParticleSystem(const String&name,size_t quota=500,const String&resourceGroup=ResourceGroupManager::DEFAULT_RESOURCE_GROUP_NAME);virtual ParticleSystem*getParticleSystem(const String&name)const;virtual bool hasParticleSystem(const String&name)const;virtual void destroyParticleSystem(ParticleSystem*obj);virtual void destroyParticleSystem(const String&name);virtual void destroyAllParticleSystems(void);virtual void clearScene(void);virtual void setWorldGeometry(const String&filename);virtual void setWorldGeometry(DataStreamPtr&stream,const String&typeName=StringUtil::BLANK);virtual size_t estimateWorldGeometry(const String&filename);virtual size_t estimateWorldGeometry(DataStreamPtr&stream,const String&typeName=StringUtil::BLANK);virtual ViewPoint getSuggestedViewpoint(bool random=false);virtual bool setOption(const String&strKey,const void*pValue);virtual bool getOption(const String&strKey,void*pDestValue);virtual bool hasOption(const String&strKey)const;virtual bool getOptionValues(const String&strKey,StringVector&refValueList);virtual bool getOptionKeys(StringVector&refKeys);virtual void _updateSceneGraph(Camera*cam);virtual void _findVisibleObjects(Camera*cam,VisibleObjectsBoundsInfo*visibleBounds,bool onlyShadowCasters);virtual void _applySceneAnimations(void);virtual void _renderVisibleObjects(void);virtual void _renderScene(Camera*camera,Viewport*vp,bool includeOverlays);virtual void _queueSkiesForRendering(Camera*cam);virtual void _setDestinationRenderSystem(RenderSystem*sys);virtual void setSkyPlane(bool enable,const Plane&plane,const String&materialName,Real scale=1000,Real tiling=10,bool drawFirst=true,Real bow=0,int xsegments=1,int ysegments=1,const String&groupName=ResourceGroupManager::DEFAULT_RESOURCE_GROUP_NAME);virtual bool isSkyPlaneEnabled(void)const;virtual SceneNode*getSkyPlaneNode(void)const;virtual const SkyPlaneGenParameters&getSkyPlaneGenParameters(void)const;virtual void setSkyBox(bool enable,const String&materialName,Real distance=5000,bool drawFirst=true,const Quaternion&orientation=Quaternion::IDENTITY,const String&groupName=ResourceGroupManager::DEFAULT_RESOURCE_GROUP_NAME);virtual bool isSkyBoxEnabled(void)const;virtual SceneNode*getSkyBoxNode(void)const;virtual const SkyBoxGenParameters&getSkyBoxGenParameters(void)const;virtual void setSkyDome(bool enable,const String&materialName,Real curvature=10,Real tiling=8,Real distance=4000,bool drawFirst=true,const Quaternion&orientation=Quaternion::IDENTITY,int xsegments=16,int ysegments=16,int ysegments_keep=-1,const String&groupName=ResourceGroupManager::DEFAULT_RESOURCE_GROUP_NAME);virtual bool isSkyDomeEnabled(void)const;virtual SceneNode*getSkyDomeNode(void)const;virtual const SkyDomeGenParameters&getSkyDomeGenParameters(void)const;virtual FogMode getFogMode(void)const;virtual const ColourValue&getFogColour(void)const;virtual Real getFogStart(void)const;virtual Real getFogEnd(void)const;virtual Real getFogDensity(void)const;virtual BillboardSet*createBillboardSet(const String&name,unsigned int poolSize=20);typedef MapIterator<CameraList>CameraIterator;typedef MapIterator<AnimationList>AnimationIterator;typedef MapIterator<MovableObjectMap>MovableObjectIterator;};}
namespace Ogre{class __declspec(dllimport)StringConverter{public:static String toString(Real val,unsigned short precision=6,unsigned short width=0,char fill=' ',std::ios::fmtflags flags=std::ios::fmtflags(0));static String toString(Radian val,unsigned short precision=6,unsigned short width=0,char fill=' ',std::ios::fmtflags flags=std::ios::fmtflags(0)){return toString(val.valueAngleUnits(),precision,width,fill,flags);}static String toString(Degree val,unsigned short precision=6,unsigned short width=0,char fill=' ',std::ios::fmtflags flags=std::ios::fmtflags(0)){return toString(val.valueAngleUnits(),precision,width,fill,flags);}static String toString(int val,unsigned short width=0,char fill=' ',std::ios::fmtflags flags=std::ios::fmtflags(0));static String toString(size_t val,unsigned short width=0,char fill=' ',std::ios::fmtflags flags=std::ios::fmtflags(0));static String toString(unsigned long val,unsigned short width=0,char fill=' ',std::ios::fmtflags flags=std::ios::fmtflags(0));static String toString(long val,unsigned short width=0,char fill=' ',std::ios::fmtflags flags=std::ios::fmtflags(0));static String toString(bool val,bool yesNo=false);static String toString(const Vector2&val);static String toString(const Vector3&val);static String toString(const Vector4&val);static String toString(const Matrix3&val);static String toString(const Matrix4&val);static String toString(const Quaternion&val);static String toString(const ColourValue&val);static String toString(const StringVector&val);static Real parseReal(const String&val);static inline Radian parseAngle(const String&val){return Angle(parseReal(val));}static int parseInt(const String&val);static unsigned int parseUnsignedInt(const String&val);static long parseLong(const String&val);static unsigned long parseUnsignedLong(const String&val);static bool parseBool(const String&val);static Vector3 parseVector3(const String&val);static Matrix3 parseMatrix3(const String&val);static Matrix4 parseMatrix4(const String&val);static Quaternion parseQuaternion(const String&val);static ColourValue parseColourValue(const String&val);static StringVector parseStringVector(const String&val);static bool isNumber(const String&val);};}
namespace Ogre {
enum TextureType {TEX_TYPE_1D=1,TEX_TYPE_2D=2,TEX_TYPE_3D=3,TEX_TYPE_CUBE_MAP=4};
// Existing nonvirtual used interfaces only; no objects, RTTI or sizeof claims for these pointer views.
class __declspec(dllimport) TextureUnitState {public:void setTextureName(const String&,TextureType ttype=TEX_TYPE_2D);};
class __declspec(dllimport) Pass {public:TextureUnitState*getTextureUnitState(unsigned short index);};
class __declspec(dllimport) Technique {public:Pass*getPass(unsigned short index);};
}
namespace G3D {
class Vector3 {public:float x,y,z;Vector3():x(0),y(0),z(0){}Vector3(float a,float b,float c):x(a),y(b),z(c){}Vector3(const Vector3&v):x(v.x),y(v.y),z(v.z){}Vector3&operator=(const Vector3&v){x=v.x;y=v.y;z=v.z;return *this;}};
class Sphere {public:Vector3 center;float radius;virtual ~Sphere(){}};
class Color4 {public:float r,g,b,a;};
}
using namespace Ogre;
extern String explosionMaterialScript;
extern String explosionParticleScript;
extern MaterialPtr explosionMaterial;
extern String resolveParticleTexture(const char*);
static __forceinline void explosionParameters(ParticleSystem* system,ParticleEmitter* emitter,float scale) {
    system->setParticleQuota(static_cast<unsigned>(static_cast<float>(atoi("400"))*scale));
    float velocity=static_cast<float>(pow(static_cast<double>(scale),static_cast<double>(1.0f/3.0f)));
    emitter->setMinParticleVelocity(atoi("20")*velocity);
    emitter->setMaxParticleVelocity(atoi("30")*static_cast<float>(pow(static_cast<double>(scale),static_cast<double>(1.0f/3.0f))));
    float extra=(scale-1.0f)*0.4f;
    emitter->setMinDuration(atoi("1.2")+extra);
    emitter->setMaxDuration(atoi("1.2")+extra);
}

struct NativeExplosionContext {char unobserved00[4];SceneManager*scene;};
class ExplosionAdornRecovery {public:
 char unobserved00[4];NativeExplosionContext*engine;char unobserved08[0x28];SceneNode*coordinateNode;
 char unobserved34[0x68];SceneNode*explosionParent;std::vector<SceneNode*>nodes;std::map<String,SceneNode*>cache;
 char unobservedd8[0x3c];Matrix3 rotation;Vector3 translation;
 void explosion(const G3D::Sphere&,const G3D::Color4&,const G3D::Color4&);
};
void ExplosionAdornRecovery::explosion(const G3D::Sphere& sphere,const G3D::Color4&,const G3D::Color4&) {
    Vector3 position;
    {
        const Matrix3& rotation=this->rotation;
        Quaternion orientation(1,0,0,0);
        orientation.FromRotationMatrix(rotation);
        position=coordinateNode->createChildSceneNode(translation,orientation)->getPosition();
    }
    char name[64];
    _snprintf(name,64,"%.3f %.3f %.3f",position.x,position.y,position.z);
    LogManager::getSingleton().logMessage(String("RBX expl ")+" r="+StringConverter::toString(sphere.radius));
    typedef std::map<String,SceneNode*> Cache;
    if(cache.find(name)!=cache.end()) {
        ParticleSystem* system=static_cast<ParticleSystem*>(cache[name]->getAttachedObject(0));
        if(system->getNumParticles()) return;
        ParticleEmitter* emitter=system->getEmitter(0);
        explosionParameters(system,emitter,1.0f);
        emitter->setEnabled(false);
        cache.erase(cache.find(name));
        return;
    }
    std::vector<Cache::iterator> retired;
    Cache::iterator it;
    for(it=cache.begin();it!=cache.end();++it)
        if(!static_cast<ParticleSystem*>(it->second->getAttachedObject(0))->getNumParticles()) retired.push_back(it);
    for(unsigned i=0;i<retired.size();++i) {
        ParticleSystem* system=static_cast<ParticleSystem*>(retired[i]->second->getAttachedObject(0));
        ParticleEmitter* emitter=system->getEmitter(0);
        emitter->setEnabled(false);
        cache.erase(retired[i]);
        LogManager::getSingleton().logMessage("RBX retired "+system->getName());
        explosionParameters(system,emitter,1.0f);
    }
    float scale=sphere.radius*0.25f;
    if(scale>3.0f) scale=3.0f;
    std::vector<SceneNode*>& nodePool=nodes;
    unsigned index;
    SceneNode* selected;
    for(index=0;index<nodePool.size();++index) {
        if(!static_cast<ParticleSystem*>(nodePool[index]->getAttachedObject(0))->getEmitter(0)->getEnabled()) {
            selected=nodePool[index];
            cache[name]=selected;
            selected->setPosition(position.x,position.y,position.z);
            ParticleSystem* system=static_cast<ParticleSystem*>(selected->getAttachedObject(0));
            ParticleEmitter* emitter=system->getEmitter(0);
            explosionParameters(system,emitter,scale);
            emitter->setEnabled(true);
            system->_update(0.001f);
            LogManager::getSingleton().logMessage("RBX use "+system->getName());
            break;
        }
    }
    if(index==nodePool.size()) {
        if(!MaterialManager::getSingleton().resourceExists("explosion/explosionMatl")) {
            DataStreamPtr script(new MemoryDataStream(const_cast<char*>(explosionMaterialScript.c_str()),explosionMaterialScript.size()+1,false));
            MaterialManager::getSingleton().parseScript(script,"General");
            explosionMaterial=MaterialManager::getSingleton().getByName("explosion/explosionMatl");
            explosionMaterial->getTechnique(0)->getPass(0)->getTextureUnitState(0)->setTextureName(resolveParticleTexture("textures\\explosion.png"),TEX_TYPE_2D);
            if(!ParticleSystemManager::getSingleton().getTemplate("explosion/explosion1")) {
                DataStreamPtr particles(new MemoryDataStream(const_cast<char*>(explosionParticleScript.c_str()),explosionParticleScript.size()+1,false));
                ParticleSystemManager::getSingleton().parseScript(particles,"General");
            }
        }
        if(!explosionParent) {
            SceneNode* root=engine->scene->getRootSceneNode();
            explosionParent=root->createChildSceneNode(engine->scene->getName()+"rbxexpl");
        }
        ParticleSystem* system;
        {
            String templateName("explosion/explosion1");
            SceneManager* receiver=engine->scene;
            system=receiver->createParticleSystem(engine->scene->getName()+"expl"+StringConverter::toString(index),templateName);
        }
        if(!system) {
            LogManager::getSingleton().logMessage("RBX Error creating psys");
            return;
        }
        ParticleEmitter* emitter=system->getEmitter(0);
        explosionParameters(system,emitter,scale);
        selected=explosionParent->createChildSceneNode();
        selected->attachObject(system);
        nodePool.push_back(selected);
        cache[name]=selected;
        LogManager::getSingleton().logMessage("RBX created "+system->getName());
    }
    selected->setPosition(position.x,position.y,position.z);
}

typedef char native_explosion_sphere[sizeof(G3D::Sphere)==20?1:-1];
typedef char native_explosion_radius[offsetof(G3D::Sphere,radius)==0x10?1:-1];
typedef char native_explosion_cache[offsetof(ExplosionAdornRecovery,cache)==0xb8?1:-1];
typedef char native_explosion_nodes[offsetof(ExplosionAdornRecovery,nodes)==0xa0?1:-1];
typedef char native_explosion_rotation[offsetof(ExplosionAdornRecovery,rotation)==0x114?1:-1];
typedef char native_explosion_translation[offsetof(ExplosionAdornRecovery,translation)==0x138?1:-1];

typedef char native_explosion_quaternion[sizeof(Ogre::Quaternion)==16?1:-1];
typedef char native_explosion_matrix[sizeof(Ogre::Matrix3)==36?1:-1];
typedef char native_explosion_vector[sizeof(Ogre::Vector3)==12?1:-1];
typedef char native_explosion_scene_node[sizeof(Ogre::SceneNode)==552?1:-1];
typedef char native_explosion_stream[sizeof(Ogre::MemoryDataStream)==52?1:-1];
typedef char native_explosion_stream_owner[sizeof(Ogre::DataStreamPtr)==12?1:-1];
typedef char native_explosion_material_owner[sizeof(Ogre::MaterialPtr)==12?1:-1];
typedef char native_explosion_node_vector[sizeof(std::vector<Ogre::SceneNode*>)==24?1:-1];
typedef char native_explosion_node_map[sizeof(std::map<Ogre::String,Ogre::SceneNode*>)==32?1:-1];
typedef char native_explosion_iterator[sizeof(std::map<Ogre::String,Ogre::SceneNode*>::iterator)==8?1:-1];
typedef char native_explosion_context[offsetof(NativeExplosionContext,scene)==4?1:-1];
