// roc 2009-12 008771e0  unit: CXTPRibbonTheme  size: 242 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008771e0
//
// 008771e0  6aff                 push -1
// 008771e2  6806029600           push 0x960206
// 008771e7  64a100000000         mov eax, dword ptr fs:[0]
// 008771ed  50                   push eax
// 008771ee  51                   push ecx
// 008771ef  53                   push ebx
// 008771f0  56                   push esi
// 008771f1  57                   push edi
// 008771f2  a10052b600           mov eax, dword ptr [0xb65200]
// 008771f7  33c4                 xor eax, esp
// 008771f9  50                   push eax
// 008771fa  8d442414             lea eax, [esp + 0x14]
// 008771fe  64a300000000         mov dword ptr fs:[0], eax
// 00877204  8bf1                 mov esi, ecx
// 00877206  89742410             mov dword ptr [esp + 0x10], esi
// 0087720a  e8e17c0000           call 0x87eef0
// 0087720f  33ff                 xor edi, edi
// 00877211  c7065410a000         mov dword ptr [esi], 0xa01054
// 00877217  bb01000000           mov ebx, 1
// 0087721c  897c241c             mov dword ptr [esp + 0x1c], edi
// 00877220  89be58060000         mov dword ptr [esi + 0x658], edi
// 00877226  c7865406000044299f00 mov dword ptr [esi + 0x654], 0x9f2944
// 00877230  899e5c060000         mov dword ptr [esi + 0x65c], ebx
// 00877236  8d8e84060000         lea ecx, [esi + 0x684]
// 0087723c  885c241c             mov byte ptr [esp + 0x1c], bl
// 00877240  e8eb7bfbff           call 0x82ee30
// 00877245  8bce                 mov ecx, esi
// 00877247  899e4c060000         mov dword ptr [esi + 0x64c], ebx
// 0087724d  899eb0050000         mov dword ptr [esi + 0x5b0], ebx
// 00877253  895e70               mov dword ptr [esi + 0x70], ebx
// 00877256  c786c80000000c000000 mov dword ptr [esi + 0xc8], 0xc
// 00877260  c786cc0000001a000000 mov dword ptr [esi + 0xcc], 0x1a
// 0087726a  c786d400000016000000 mov dword ptr [esi + 0xd4], 0x16
// 00877274  e807feffff           call 0x877080
// 00877279  898668060000         mov dword ptr [esi + 0x668], eax
// 0087727f  8b10                 mov edx, dword ptr [eax]
// 00877281  8bc8                 mov ecx, eax
// 00877283  8b426c               mov eax, dword ptr [edx + 0x6c]
// 00877286  ffd0                 call eax
// 00877288  688418a000           push 0xa01884
// 0087728d  8d8e1c010000         lea ecx, [esi + 0x11c]
// 00877293  ff155cde9800         call dword ptr [0x98de5c]
// 00877299  53                   push ebx
// 0087729a  6a02                 push 2
// 0087729c  57                   push edi
// 0087729d  57                   push edi
// 0087729e  8d8ee0000000         lea ecx, [esi + 0xe0]
// 008772a4  51                   push ecx
// 008772a5  899e18010000         mov dword ptr [esi + 0x118], ebx
// 008772ab  89be90000000         mov dword ptr [esi + 0x90], edi
// 008772b1  89be64060000         mov dword ptr [esi + 0x664], edi
// 008772b7  ff1538ca9800         call dword ptr [0x98ca38]
// 008772bd  8bc6                 mov eax, esi
// 008772bf  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008772c3  64890d00000000       mov dword ptr fs:[0], ecx
// 008772ca  59                   pop ecx
// 008772cb  5f                   pop edi
// 008772cc  5e                   pop esi
// 008772cd  5b                   pop ebx
// 008772ce  83c410               add esp, 0x10
// 008772d1  c3                   ret 
// copied from an identical function in another client (function ??0CXTPRibbonTheme@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/Ribbon/XTPRibbonTheme.cpp