// roc 2009-12 008332f0  unit: CXTTreeBase::PAXPAXUCLRFONT::?$CMap  size: 237 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008332f0
//
// 008332f0  51                   push ecx
// 008332f1  56                   push esi
// 008332f2  8bf1                 mov esi, ecx
// 008332f4  837e0400             cmp dword ptr [esi + 4], 0
// 008332f8  0f84d2000000         je 0x8333d0
// 008332fe  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00833302  8b542410             mov edx, dword ptr [esp + 0x10]
// 00833306  53                   push ebx
// 00833307  55                   push ebp
// 00833308  57                   push edi
// 00833309  8d442410             lea eax, [esp + 0x10]
// 0083330d  50                   push eax
// 0083330e  51                   push ecx
// 0083330f  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00833312  52                   push edx
// 00833313  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0083331b  e8f40efcff           call 0x7f4214
// 00833320  8b2dc4cb9800         mov ebp, dword ptr [0x98cbc4]
// 00833326  6a00                 push 0
// 00833328  8bd8                 mov ebx, eax
// 0083332a  8b4634               mov eax, dword ptr [esi + 0x34]
// 0083332d  8b4020               mov eax, dword ptr [eax + 0x20]
// 00833330  6a09                 push 9
// 00833332  680a110000           push 0x110a
// 00833337  50                   push eax
// 00833338  ffd5                 call ebp
// 0083333a  f644241050           test byte ptr [esp + 0x10], 0x50
// 0083333f  8bf8                 mov edi, eax
// 00833341  7537                 jne 0x83337a
// 00833343  8bce                 mov ecx, esi
// 00833345  e8d6e4ffff           call 0x831820
// 0083334a  84c0                 test al, al
// 0083334c  7460                 je 0x8333ae
// 0083334e  f64424180c           test byte ptr [esp + 0x18], 0xc
// 00833353  8a442410             mov al, byte ptr [esp + 0x10]
// 00833357  7531                 jne 0x83338a
// 00833359  a804                 test al, 4
// 0083335b  742d                 je 0x83338a
// 0083335d  807e3900             cmp byte ptr [esi + 0x39], 0
// 00833361  7427                 je 0x83338a
// 00833363  3bdf                 cmp ebx, edi
// 00833365  7523                 jne 0x83338a
// 00833367  6a00                 push 0
// 00833369  6a00                 push 0
// 0083336b  8bce                 mov ecx, esi
// 0083336d  e89ef2ffff           call 0x832610
// 00833372  53                   push ebx
// 00833373  8bce                 mov ecx, esi
// 00833375  e856f1ffff           call 0x8324d0
// 0083337a  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0083337d  e8ae0afcff           call 0x7f3e30
// 00833382  5f                   pop edi
// 00833383  5d                   pop ebp
// 00833384  5b                   pop ebx
// 00833385  5e                   pop esi
// 00833386  59                   pop ecx
// 00833387  c20c00               ret 0xc
// 0083338a  a846                 test al, 0x46
// 0083338c  7506                 jne 0x833394
// 0083338e  c6463900             mov byte ptr [esi + 0x39], 0
// 00833392  eb1a                 jmp 0x8333ae
// 00833394  8b4634               mov eax, dword ptr [esi + 0x34]
// 00833397  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0083339a  6a00                 push 0
// 0083339c  6a09                 push 9
// 0083339e  680a110000           push 0x110a
// 008333a3  51                   push ecx
// 008333a4  ffd5                 call ebp
// 008333a6  3bc7                 cmp eax, edi
// 008333a8  7504                 jne 0x8333ae
// 008333aa  c6463901             mov byte ptr [esi + 0x39], 1
// 008333ae  8b442420             mov eax, dword ptr [esp + 0x20]
// 008333b2  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008333b6  8b16                 mov edx, dword ptr [esi]
// 008333b8  8b5254               mov edx, dword ptr [edx + 0x54]
// 008333bb  50                   push eax
// 008333bc  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008333c0  51                   push ecx
// 008333c1  50                   push eax
// 008333c2  6a01                 push 1
// 008333c4  8bce                 mov ecx, esi
// 008333c6  ffd2                 call edx
// 008333c8  5f                   pop edi
// 008333c9  5d                   pop ebp
// 008333ca  5b                   pop ebx
// 008333cb  5e                   pop esi
// 008333cc  59                   pop ecx
// 008333cd  c20c00               ret 0xc
// 008333d0  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 008333d3  e8580afcff           call 0x7f3e30
// 008333d8  5e                   pop esi
// 008333d9  59                   pop ecx
// 008333da  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnLButtonDown@CXTTreeBase@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTTreeBase.cpp