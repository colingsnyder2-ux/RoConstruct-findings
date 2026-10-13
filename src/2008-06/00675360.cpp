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

void func_00675360()
{
}
