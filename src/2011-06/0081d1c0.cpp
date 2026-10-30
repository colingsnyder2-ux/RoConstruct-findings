// roc 2011-06 0081d1c0  unit: CXTPCommandBar  size: 440 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0081d1c0
//
// 0081d1c0  6aff                 push -1
// 0081d1c2  68b22da000           push 0xa02db2
// 0081d1c7  64a100000000         mov eax, dword ptr fs:[0]
// 0081d1cd  50                   push eax
// 0081d1ce  83ec08               sub esp, 8
// 0081d1d1  53                   push ebx
// 0081d1d2  55                   push ebp
// 0081d1d3  56                   push esi
// 0081d1d4  57                   push edi
// 0081d1d5  a12058c900           mov eax, dword ptr [0xc95820]
// 0081d1da  33c4                 xor eax, esp
// 0081d1dc  50                   push eax
// 0081d1dd  8d44241c             lea eax, [esp + 0x1c]
// 0081d1e1  64a300000000         mov dword ptr fs:[0], eax
// 0081d1e7  894c2418             mov dword ptr [esp + 0x18], ecx
// 0081d1eb  e8a0d8ffff           call 0x81aa90
// 0081d1f0  8bf8                 mov edi, eax
// 0081d1f2  85ff                 test edi, edi
// 0081d1f4  7475                 je 0x81d26b
// 0081d1f6  33f6                 xor esi, esi
// 0081d1f8  397734               cmp dword ptr [edi + 0x34], esi
// 0081d1fb  7e58                 jle 0x81d255
// 0081d1fd  85f6                 test esi, esi
// 0081d1ff  0f8c50010000         jl 0x81d355
// 0081d205  3b7734               cmp esi, dword ptr [edi + 0x34]
// 0081d208  0f8d47010000         jge 0x81d355
// 0081d20e  8b4730               mov eax, dword ptr [edi + 0x30]
// 0081d211  8b1cb0               mov ebx, dword ptr [eax + esi*4]
// 0081d214  8b4f48               mov ecx, dword ptr [edi + 0x48]
// 0081d217  8d04b0               lea eax, [eax + esi*4]
// 0081d21a  8d6b54               lea ebp, [ebx + 0x54]
// 0081d21d  894c2414             mov dword ptr [esp + 0x14], ecx
// 0081d221  8bcd                 mov ecx, ebp
// 0081d223  ff15a826a400         call dword ptr [0xa426a8]
// 0081d229  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0081d22d  3bc1                 cmp eax, ecx
// 0081d22f  7e1e                 jle 0x81d24f
// 0081d231  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0081d235  52                   push edx
// 0081d236  51                   push ecx
// 0081d237  8bcd                 mov ecx, ebp
// 0081d239  ff153c25a400         call dword ptr [0xa4253c]
// 0081d23f  0fb6c0               movzx eax, al
// 0081d242  50                   push eax
// 0081d243  e8c82e0800           call 0x8a0110
// 0081d248  83c408               add esp, 8
// 0081d24b  85c0                 test eax, eax
// 0081d24d  7532                 jne 0x81d281
// 0081d24f  46                   inc esi
// 0081d250  3b7734               cmp esi, dword ptr [edi + 0x34]
// 0081d253  7ca8                 jl 0x81d1fd
// 0081d255  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0081d259  83f810               cmp eax, 0x10
// 0081d25c  740d                 je 0x81d26b
// 0081d25e  83f811               cmp eax, 0x11
// 0081d261  7408                 je 0x81d26b
// 0081d263  6a00                 push 0
// 0081d265  ff15cc1ba400         call dword ptr [0xa41bcc]
// 0081d26b  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0081d26f  64890d00000000       mov dword ptr fs:[0], ecx
// 0081d276  59                   pop ecx
// 0081d277  5f                   pop edi
// 0081d278  5e                   pop esi
// 0081d279  5d                   pop ebp
// 0081d27a  5b                   pop ebx
// 0081d27b  83c414               add esp, 0x14
// 0081d27e  c20400               ret 4
// 0081d281  8b6f48               mov ebp, dword ptr [edi + 0x48]
// 0081d284  8d7354               lea esi, [ebx + 0x54]
// 0081d287  8bce                 mov ecx, esi
// 0081d289  ff15a826a400         call dword ptr [0xa426a8]
// 0081d28f  48                   dec eax
// 0081d290  3bc5                 cmp eax, ebp
// 0081d292  0f8ec2000000         jle 0x81d35a
// 0081d298  8d4501               lea eax, [ebp + 1]
// 0081d29b  50                   push eax
// 0081d29c  8d4c2430             lea ecx, [esp + 0x30]
// 0081d2a0  51                   push ecx
// 0081d2a1  8bce                 mov ecx, esi
// 0081d2a3  894748               mov dword ptr [edi + 0x48], eax
// 0081d2a6  ff15601fa400         call dword ptr [0xa41f60]
// 0081d2ac  8b6f34               mov ebp, dword ptr [edi + 0x34]
// 0081d2af  83c5ff               add ebp, -1
// 0081d2b2  c744242400000000     mov dword ptr [esp + 0x24], 0
// 0081d2ba  0f8886000000         js 0x81d346
// 0081d2c0  85ed                 test ebp, ebp
// 0081d2c2  0f8c8d000000         jl 0x81d355
// 0081d2c8  3b6f34               cmp ebp, dword ptr [edi + 0x34]
// 0081d2cb  0f8d84000000         jge 0x81d355
// 0081d2d1  8b5730               mov edx, dword ptr [edi + 0x30]
// 0081d2d4  8b34aa               mov esi, dword ptr [edx + ebp*4]
// 0081d2d7  8d04aa               lea eax, [edx + ebp*4]
// 0081d2da  8b4748               mov eax, dword ptr [edi + 0x48]
// 0081d2dd  50                   push eax
// 0081d2de  8d4c2418             lea ecx, [esp + 0x18]
// 0081d2e2  51                   push ecx
// 0081d2e3  8d4e54               lea ecx, [esi + 0x54]
// 0081d2e6  ff15601fa400         call dword ptr [0xa41f60]
// 0081d2ec  8bd8                 mov ebx, eax
// 0081d2ee  8d4c242c             lea ecx, [esp + 0x2c]
// 0081d2f2  c644242401           mov byte ptr [esp + 0x24], 1
// 0081d2f7  ff15c82da400         call dword ptr [0xa42dc8]
// 0081d2fd  50                   push eax
// 0081d2fe  8bcb                 mov ecx, ebx
// 0081d300  ff15cc2da400         call dword ptr [0xa42dcc]
// 0081d306  85c0                 test eax, eax
// 0081d308  8d4c2414             lea ecx, [esp + 0x14]
// 0081d30c  0f95c3               setne bl
// 0081d30f  c644242400           mov byte ptr [esp + 0x24], 0
// 0081d314  ff15082ea400         call dword ptr [0xa42e08]
// 0081d31a  84db                 test bl, bl
// 0081d31c  741f                 je 0x81d33d
// 0081d31e  6a01                 push 1
// 0081d320  55                   push ebp
// 0081d321  8d4f2c               lea ecx, [edi + 0x2c]
// 0081d324  e857cf0000           call 0x82a280
// 0081d329  8b16                 mov edx, dword ptr [esi]
// 0081d32b  8b4268               mov eax, dword ptr [edx + 0x68]
// 0081d32e  8bce                 mov ecx, esi
// 0081d330  ffd0                 call eax
// 0081d332  8b16                 mov edx, dword ptr [esi]
// 0081d334  8b4204               mov eax, dword ptr [edx + 4]
// 0081d337  6a01                 push 1
// 0081d339  8bce                 mov ecx, esi
// 0081d33b  ffd0                 call eax
// 0081d33d  83ed01               sub ebp, 1
// 0081d340  0f897affffff         jns 0x81d2c0
// 0081d346  8d4c242c             lea ecx, [esp + 0x2c]
// 0081d34a  ff15082ea400         call dword ptr [0xa42e08]
// 0081d350  e916ffffff           jmp 0x81d26b
// 0081d355  e8b0cffeff           call 0x80a30a
// 0081d35a  837b6c00             cmp dword ptr [ebx + 0x6c], 0
// 0081d35e  0f84fffeffff         je 0x81d263
// 0081d364  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0081d368  8b11                 mov edx, dword ptr [ecx]
// 0081d36a  8b82c8010000         mov eax, dword ptr [edx + 0x1c8]
// 0081d370  53                   push ebx
// 0081d371  ffd0                 call eax
// 0081d373  e9f3feffff           jmp 0x81d26b
// copied from an identical function in another client (function ?OnKeyboardTipChar@CXTPCommandBar@@QAEXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPCommandBar.cpp