// roc 2012-06 00a67780  unit: CXTColorSelectorCtrl  size: 607 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a67780
//
// 00a67780  6aff                 push -1
// 00a67782  687984ae00           push 0xae8479
// 00a67787  64a100000000         mov eax, dword ptr fs:[0]
// 00a6778d  50                   push eax
// 00a6778e  53                   push ebx
// 00a6778f  55                   push ebp
// 00a67790  56                   push esi
// 00a67791  57                   push edi
// 00a67792  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a67797  33c4                 xor eax, esp
// 00a67799  50                   push eax
// 00a6779a  8d442414             lea eax, [esp + 0x14]
// 00a6779e  64a300000000         mov dword ptr fs:[0], eax
// 00a677a4  8bf1                 mov esi, ecx
// 00a677a6  8b442434             mov eax, dword ptr [esp + 0x34]
// 00a677aa  894678               mov dword ptr [esi + 0x78], eax
// 00a677ad  85c0                 test eax, eax
// 00a677af  0f8470010000         je 0xa67925
// 00a677b5  8b4020               mov eax, dword ptr [eax + 0x20]
// 00a677b8  50                   push eax
// 00a677b9  e822d2f8ff           call 0x9f49e0
// 00a677be  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00a677c2  8b542440             mov edx, dword ptr [esp + 0x40]
// 00a677c6  8b6c2438             mov ebp, dword ptr [esp + 0x38]
// 00a677ca  8d442424             lea eax, [esp + 0x24]
// 00a677ce  50                   push eax
// 00a677cf  8dbe84000000         lea edi, [esi + 0x84]
// 00a677d5  57                   push edi
// 00a677d6  89aea4000000         mov dword ptr [esi + 0xa4], ebp
// 00a677dc  898eb0000000         mov dword ptr [esi + 0xb0], ecx
// 00a677e2  8996b4000000         mov dword ptr [esi + 0xb4], edx
// 00a677e8  ff15ec3ab200         call dword ptr [0xb23aec]
// 00a677ee  8b5e6c               mov ebx, dword ptr [esi + 0x6c]
// 00a677f1  8b4e7c               mov ecx, dword ptr [esi + 0x7c]
// 00a677f4  8b8690000000         mov eax, dword ptr [esi + 0x90]
// 00a677fa  0fafcb               imul ecx, ebx
// 00a677fd  038e9c000000         add ecx, dword ptr [esi + 0x9c]
// 00a67803  8b96a0000000         mov edx, dword ptr [esi + 0xa0]
// 00a67809  038e94000000         add ecx, dword ptr [esi + 0x94]
// 00a6780f  039698000000         add edx, dword ptr [esi + 0x98]
// 00a67815  030f                 add ecx, dword ptr [edi]
// 00a67817  898688000000         mov dword ptr [esi + 0x88], eax
// 00a6781d  898e8c000000         mov dword ptr [esi + 0x8c], ecx
// 00a67823  8d0c02               lea ecx, [edx + eax]
// 00a67826  8b86a4000000         mov eax, dword ptr [esi + 0xa4]
// 00a6782c  898e90000000         mov dword ptr [esi + 0x90], ecx
// 00a67832  a810                 test al, 0x10
// 00a67834  7509                 jne 0xa6783f
// 00a67836  83c11b               add ecx, 0x1b
// 00a67839  898e90000000         mov dword ptr [esi + 0x90], ecx
// 00a6783f  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 00a67845  85c9                 test ecx, ecx
// 00a67847  7409                 je 0xa67852
// 00a67849  83c802               or eax, 2
// 00a6784c  8986a4000000         mov dword ptr [esi + 0xa4], eax
// 00a67852  f686a400000002       test byte ptr [esi + 0xa4], 2
// 00a67859  7425                 je 0xa67880
// 00a6785b  b828000000           mov eax, 0x28
// 00a67860  85c9                 test ecx, ecx
// 00a67862  7406                 je 0xa6786a
// 00a67864  8b8660010000         mov eax, dword ptr [esi + 0x160]
// 00a6786a  8d4403ff             lea eax, [ebx + eax - 1]
// 00a6786e  99                   cdq 
// 00a6786f  f7fb                 idiv ebx
// 00a67871  0faf8680000000       imul eax, dword ptr [esi + 0x80]
// 00a67878  018690000000         add dword ptr [esi + 0x90], eax
// 00a6787e  eb10                 jmp 0xa67890
// 00a67880  8b8680000000         mov eax, dword ptr [esi + 0x80]
// 00a67886  8d4c0016             lea ecx, [eax + eax + 0x16]
// 00a6788a  018e90000000         add dword ptr [esi + 0x90], ecx
// 00a67890  e83dabf1ff           call 0x9823d2
// 00a67895  68007f0000           push 0x7f00
// 00a6789a  6a00                 push 0
// 00a6789c  ff159c3ab200         call dword ptr [0xb23a9c]
// 00a678a2  6a00                 push 0
// 00a678a4  6a00                 push 0
// 00a678a6  50                   push eax
// 00a678a7  6a00                 push 0
// 00a678a9  e802b2f1ff           call 0x982ab0
// 00a678ae  50                   push eax
// 00a678af  8d4c2438             lea ecx, [esp + 0x38]
// 00a678b3  ff15c847b200         call dword ptr [0xb247c8]
// 00a678b9  f686a400000004       test byte ptr [esi + 0xa4], 4
// 00a678c0  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00a678c8  7426                 je 0xa678f0
// 00a678ca  8386900000001b       add dword ptr [esi + 0x90], 0x1b
// 00a678d1  833d04a4e50000       cmp dword ptr [0xe5a404], 0
// 00a678d8  8b8690000000         mov eax, dword ptr [esi + 0x90]
// 00a678de  7e10                 jle 0xa678f0
// 00a678e0  8b9680000000         mov edx, dword ptr [esi + 0x80]
// 00a678e6  8d440204             lea eax, [edx + eax + 4]
// 00a678ea  898690000000         mov dword ptr [esi + 0x90], eax
// 00a678f0  8b4e78               mov ecx, dword ptr [esi + 0x78]
// 00a678f3  6a00                 push 0
// 00a678f5  6a00                 push 0
// 00a678f7  51                   push ecx
// 00a678f8  57                   push edi
// 00a678f9  6800000040           push 0x40000000
// 00a678fe  68e83bb400           push 0xb43be8
// 00a67903  8d4c244c             lea ecx, [esp + 0x4c]
// 00a67907  ff159847b200         call dword ptr [0xb24798]
// 00a6790d  50                   push eax
// 00a6790e  6a00                 push 0
// 00a67910  8bce                 mov ecx, esi
// 00a67912  e875a8f1ff           call 0x98218c
// 00a67917  85c0                 test eax, eax
// 00a67919  7511                 jne 0xa6792c
// 00a6791b  8d4c2434             lea ecx, [esp + 0x34]
// 00a6791f  ff15d047b200         call dword ptr [0xb247d0]
// 00a67925  33c0                 xor eax, eax
// 00a67927  e99d000000           jmp 0xa679c9
// 00a6792c  8bce                 mov ecx, esi
// 00a6792e  85ed                 test ebp, ebp
// 00a67930  7963                 jns 0xa67995
// 00a67932  e86dabf1ff           call 0x9824a4
// 00a67937  8b5620               mov edx, dword ptr [esi + 0x20]
// 00a6793a  8b1d943ab200         mov ebx, dword ptr [0xb23a94]
// 00a67940  6a00                 push 0
// 00a67942  6af8                 push -8
// 00a67944  52                   push edx
// 00a67945  ffd3                 call ebx
// 00a67947  6a00                 push 0
// 00a67949  6800000080           push 0x80000000
// 00a6794e  6800000040           push 0x40000000
// 00a67953  8bce                 mov ecx, esi
// 00a67955  e8feaef1ff           call 0x982858
// 00a6795a  8b4678               mov eax, dword ptr [esi + 0x78]
// 00a6795d  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00a67960  8b5620               mov edx, dword ptr [esi + 0x20]
// 00a67963  51                   push ecx
// 00a67964  6af8                 push -8
// 00a67966  52                   push edx
// 00a67967  ffd3                 call ebx
// 00a67969  8b470c               mov eax, dword ptr [edi + 0xc]
// 00a6796c  2b4704               sub eax, dword ptr [edi + 4]
// 00a6796f  8b4f08               mov ecx, dword ptr [edi + 8]
// 00a67972  2b0f                 sub ecx, dword ptr [edi]
// 00a67974  8b9688000000         mov edx, dword ptr [esi + 0x88]
// 00a6797a  6850020000           push 0x250
// 00a6797f  50                   push eax
// 00a67980  8b07                 mov eax, dword ptr [edi]
// 00a67982  51                   push ecx
// 00a67983  8b0db841b200         mov ecx, dword ptr [0xb241b8]
// 00a67989  52                   push edx
// 00a6798a  50                   push eax
// 00a6798b  51                   push ecx
// 00a6798c  8bce                 mov ecx, esi
// 00a6798e  e841abf1ff           call 0x9824d4
// 00a67993  eb07                 jmp 0xa6799c
// 00a67995  6a08                 push 8
// 00a67997  e808b1f1ff           call 0x982aa4
// 00a6799c  e8af68f8ff           call 0x9ee250
// 00a679a1  05dc000000           add eax, 0xdc
// 00a679a6  7403                 je 0xa679ab
// 00a679a8  8b4004               mov eax, dword ptr [eax + 4]
// 00a679ab  8b5620               mov edx, dword ptr [esi + 0x20]
// 00a679ae  6a01                 push 1
// 00a679b0  50                   push eax
// 00a679b1  6a30                 push 0x30
// 00a679b3  52                   push edx
// 00a679b4  ff15043cb200         call dword ptr [0xb23c04]
// 00a679ba  8d4c2434             lea ecx, [esp + 0x34]
// 00a679be  ff15d047b200         call dword ptr [0xb247d0]
// 00a679c4  b801000000           mov eax, 1
// 00a679c9  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00a679cd  64890d00000000       mov dword ptr fs:[0], ecx
// 00a679d4  59                   pop ecx
// 00a679d5  5f                   pop edi
// 00a679d6  5e                   pop esi
// 00a679d7  5d                   pop ebp
// 00a679d8  5b                   pop ebx
// 00a679d9  83c40c               add esp, 0xc
// 00a679dc  c22000               ret 0x20
// copied from an identical function in another client (function ?Create@CXTColorSelectorCtrl@@QAEHVCRect@@PAVCWnd@@KKK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTColorSelectorCtrl.cpp