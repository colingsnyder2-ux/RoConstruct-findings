// roc 2012-06 00a4b280  unit: CXTPControlCustom  size: 259 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a4b280
//
// 00a4b280  53                   push ebx
// 00a4b281  56                   push esi
// 00a4b282  57                   push edi
// 00a4b283  8bf1                 mov esi, ecx
// 00a4b285  8d442410             lea eax, [esp + 0x10]
// 00a4b289  50                   push eax
// 00a4b28a  8dbec0000000         lea edi, [esi + 0xc0]
// 00a4b290  57                   push edi
// 00a4b291  ff15e03cb200         call dword ptr [0xb23ce0]
// 00a4b297  85c0                 test eax, eax
// 00a4b299  742e                 je 0xa4b2c9
// 00a4b29b  8b8e7c010000         mov ecx, dword ptr [esi + 0x17c]
// 00a4b2a1  85c9                 test ecx, ecx
// 00a4b2a3  0f84d4000000         je 0xa4b37d
// 00a4b2a9  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 00a4b2af  85c0                 test eax, eax
// 00a4b2b1  7504                 jne 0xa4b2b7
// 00a4b2b3  33db                 xor ebx, ebx
// 00a4b2b5  eb03                 jmp 0xa4b2ba
// 00a4b2b7  8b5820               mov ebx, dword ptr [eax + 0x20]
// 00a4b2ba  51                   push ecx
// 00a4b2bb  ff15503ab200         call dword ptr [0xb23a50]
// 00a4b2c1  3bc3                 cmp eax, ebx
// 00a4b2c3  0f84b4000000         je 0xa4b37d
// 00a4b2c9  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00a4b2cd  8b542414             mov edx, dword ptr [esp + 0x14]
// 00a4b2d1  8b442418             mov eax, dword ptr [esp + 0x18]
// 00a4b2d5  890f                 mov dword ptr [edi], ecx
// 00a4b2d7  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00a4b2db  895704               mov dword ptr [edi + 4], edx
// 00a4b2de  8b967c010000         mov edx, dword ptr [esi + 0x17c]
// 00a4b2e4  894708               mov dword ptr [edi + 8], eax
// 00a4b2e7  52                   push edx
// 00a4b2e8  894f0c               mov dword ptr [edi + 0xc], ecx
// 00a4b2eb  e87673f3ff           call 0x982666
// 00a4b2f0  8bf8                 mov edi, eax
// 00a4b2f2  85ff                 test edi, edi
// 00a4b2f4  0f8483000000         je 0xa4b37d
// 00a4b2fa  8b4720               mov eax, dword ptr [edi + 0x20]
// 00a4b2fd  85c0                 test eax, eax
// 00a4b2ff  747c                 je 0xa4b37d
// 00a4b301  50                   push eax
// 00a4b302  ff15143bb200         call dword ptr [0xb23b14]
// 00a4b308  85c0                 test eax, eax
// 00a4b30a  7471                 je 0xa4b37d
// 00a4b30c  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 00a4b312  50                   push eax
// 00a4b313  8bcf                 mov ecx, edi
// 00a4b315  e8f67ef7ff           call 0x9c3210
// 00a4b31a  6a00                 push 0
// 00a4b31c  6800000040           push 0x40000000
// 00a4b321  6800000080           push 0x80000000
// 00a4b326  8bcf                 mov ecx, edi
// 00a4b328  e82b75f3ff           call 0x982858
// 00a4b32d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00a4b331  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00a4b335  2b8e8c010000         sub ecx, dword ptr [esi + 0x18c]
// 00a4b33b  039e84010000         add ebx, dword ptr [esi + 0x184]
// 00a4b341  8b442418             mov eax, dword ptr [esp + 0x18]
// 00a4b345  8b542410             mov edx, dword ptr [esp + 0x10]
// 00a4b349  039680010000         add edx, dword ptr [esi + 0x180]
// 00a4b34f  2b8688010000         sub eax, dword ptr [esi + 0x188]
// 00a4b355  6a01                 push 1
// 00a4b357  894c2420             mov dword ptr [esp + 0x20], ecx
// 00a4b35b  2bcb                 sub ecx, ebx
// 00a4b35d  51                   push ecx
// 00a4b35e  89442420             mov dword ptr [esp + 0x20], eax
// 00a4b362  2bc2                 sub eax, edx
// 00a4b364  50                   push eax
// 00a4b365  53                   push ebx
// 00a4b366  52                   push edx
// 00a4b367  8bcf                 mov ecx, edi
// 00a4b369  89542424             mov dword ptr [esp + 0x24], edx
// 00a4b36d  895c2428             mov dword ptr [esp + 0x28], ebx
// 00a4b371  e86471f3ff           call 0x9824da
// 00a4b376  8bce                 mov ecx, esi
// 00a4b378  e8c3fbffff           call 0xa4af40
// 00a4b37d  5f                   pop edi
// 00a4b37e  5e                   pop esi
// 00a4b37f  5b                   pop ebx
// 00a4b380  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPControlCustom.cpp (function ?SetRect@CXTPControlCustom@@MAEXVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlCustom.cpp
