// roc 2007-08 00488fe0  unit: P8CRenderSettings::?$GetSetImpl  size: 185 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00488fe0
//
// 00488fe0  83ec0c               sub esp, 0xc
// 00488fe3  55                   push ebp
// 00488fe4  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00488fe8  56                   push esi
// 00488fe9  57                   push edi
// 00488fea  8bf9                 mov edi, ecx
// 00488fec  8b7704               mov esi, dword ptr [edi + 4]
// 00488fef  8b4604               mov eax, dword ptr [esi + 4]
// 00488ff2  80780e00             cmp byte ptr [eax + 0xe], 0
// 00488ff6  b101                 mov cl, 1
// 00488ff8  884c240c             mov byte ptr [esp + 0xc], cl
// 00488ffc  7520                 jne 0x48901e
// 00488ffe  8a5500               mov dl, byte ptr [ebp]
// 00489001  3a500c               cmp dl, byte ptr [eax + 0xc]
// 00489004  8bf0                 mov esi, eax
// 00489006  0f9cc1               setl cl
// 00489009  84c9                 test cl, cl
// 0048900b  884c240c             mov byte ptr [esp + 0xc], cl
// 0048900f  7404                 je 0x489015
// 00489011  8b00                 mov eax, dword ptr [eax]
// 00489013  eb03                 jmp 0x489018
// 00489015  8b4008               mov eax, dword ptr [eax + 8]
// 00489018  80780e00             cmp byte ptr [eax + 0xe], 0
// 0048901c  74e3                 je 0x489001
// 0048901e  84c9                 test cl, cl
// 00489020  8bd6                 mov edx, esi
// 00489022  89542414             mov dword ptr [esp + 0x14], edx
// 00489026  897c2410             mov dword ptr [esp + 0x10], edi
// 0048902a  743d                 je 0x489069
// 0048902c  8b4704               mov eax, dword ptr [edi + 4]
// 0048902f  3b30                 cmp esi, dword ptr [eax]
// 00489031  8d4c2410             lea ecx, [esp + 0x10]
// 00489035  7529                 jne 0x489060
// 00489037  55                   push ebp
// 00489038  56                   push esi
// 00489039  6a01                 push 1
// 0048903b  51                   push ecx
// 0048903c  8bcf                 mov ecx, edi
// 0048903e  e81df4ffff           call 0x488460
// 00489043  8bc8                 mov ecx, eax
// 00489045  8b11                 mov edx, dword ptr [ecx]
// 00489047  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0048904b  8b4904               mov ecx, dword ptr [ecx + 4]
// 0048904e  5f                   pop edi
// 0048904f  5e                   pop esi
// 00489050  8910                 mov dword ptr [eax], edx
// 00489052  894804               mov dword ptr [eax + 4], ecx
// 00489055  c6400801             mov byte ptr [eax + 8], 1
// 00489059  5d                   pop ebp
// 0048905a  83c40c               add esp, 0xc
// 0048905d  c20800               ret 8
// 00489060  e8cbe2ffff           call 0x487330
// 00489065  8b542414             mov edx, dword ptr [esp + 0x14]
// 00489069  8a420c               mov al, byte ptr [edx + 0xc]
// 0048906c  3a4500               cmp al, byte ptr [ebp]
// 0048906f  7d0e                 jge 0x48907f
// 00489071  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00489075  55                   push ebp
// 00489076  56                   push esi
// 00489077  51                   push ecx
// 00489078  8d54241c             lea edx, [esp + 0x1c]
// 0048907c  52                   push edx
// 0048907d  ebbd                 jmp 0x48903c
// 0048907f  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00489083  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00489087  5f                   pop edi
// 00489088  5e                   pop esi
// 00489089  8908                 mov dword ptr [eax], ecx
// 0048908b  895004               mov dword ptr [eax + 4], edx
// 0048908e  c6400800             mov byte ptr [eax + 8], 0
// 00489092  5d                   pop ebp
// 00489093  83c40c               add esp, 0xc
// 00489096  c20800               ret 8
// library rbxgs-net/Player.cpp (function ?insert@?$_Tree@V?$_Tset_traits@DU?$less@D@std@@V?$allocator@D@2@$0A@@std@@@std@@QAE?AU?$pair@Viterator@?$_Tree@V?$_Tset_traits@DU?$less@D@std@@V?$allocator@D@2@$0A@@std@@@std@@_N@2@ABD@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Player.cpp
