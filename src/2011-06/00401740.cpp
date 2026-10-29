// roc 2011-06 00401740  unit: CAboutRobloxDialog  size: 706 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00401740
//
// 00401740  64a100000000         mov eax, dword ptr fs:[0]
// 00401746  6aff                 push -1
// 00401748  68221b9d00           push 0x9d1b22
// 0040174d  50                   push eax
// 0040174e  64892500000000       mov dword ptr fs:[0], esp
// 00401755  8b442414             mov eax, dword ptr [esp + 0x14]
// 00401759  83ec48               sub esp, 0x48
// 0040175c  80781500             cmp byte ptr [eax + 0x15], 0
// 00401760  55                   push ebp
// 00401761  8be9                 mov ebp, ecx
// 00401763  7459                 je 0x4017be
// 00401765  6820b6a500           push 0xa5b620
// 0040176a  8d4c240c             lea ecx, [esp + 0xc]
// 0040176e  ff15c404a400         call dword ptr [0xa404c4]
// 00401774  8d4c2424             lea ecx, [esp + 0x24]
// 00401778  c744245400000000     mov dword ptr [esp + 0x54], 0
// 00401780  ff15600aa400         call dword ptr [0xa40a60]
// 00401786  8d442408             lea eax, [esp + 8]
// 0040178a  50                   push eax
// 0040178b  8d4c2434             lea ecx, [esp + 0x34]
// 0040178f  c644245801           mov byte ptr [esp + 0x58], 1
// 00401794  c7442428c0b5a500     mov dword ptr [esp + 0x28], 0xa5b5c0
// 0040179c  ff15c804a400         call dword ptr [0xa404c8]
// 004017a2  681873b800           push 0xb87318
// 004017a7  8d4c2428             lea ecx, [esp + 0x28]
// 004017ab  51                   push ecx
// 004017ac  c644245c00           mov byte ptr [esp + 0x5c], 0
// 004017b1  c744242cd8b5a500     mov dword ptr [esp + 0x2c], 0xa5b5d8
// 004017b9  e8ee984000           call 0x80b0ac
// 004017be  53                   push ebx
// 004017bf  56                   push esi
// 004017c0  8bd8                 mov ebx, eax
// 004017c2  57                   push edi
// 004017c3  8d4c246c             lea ecx, [esp + 0x6c]
// 004017c7  895c2410             mov dword ptr [esp + 0x10], ebx
// 004017cb  e8a0de1b00           call 0x5bf670
// 004017d0  8b0b                 mov ecx, dword ptr [ebx]
// 004017d2  80791500             cmp byte ptr [ecx + 0x15], 0
// 004017d6  7405                 je 0x4017dd
// 004017d8  8b7b08               mov edi, dword ptr [ebx + 8]
// 004017db  eb1b                 jmp 0x4017f8
// 004017dd  8b5308               mov edx, dword ptr [ebx + 8]
// 004017e0  807a1500             cmp byte ptr [edx + 0x15], 0
// 004017e4  7404                 je 0x4017ea
// 004017e6  8bf9                 mov edi, ecx
// 004017e8  eb0e                 jmp 0x4017f8
// 004017ea  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 004017ee  8b7808               mov edi, dword ptr [eax + 8]
// 004017f1  8d5008               lea edx, [eax + 8]
// 004017f4  3bc3                 cmp eax, ebx
// 004017f6  756b                 jne 0x401863
// 004017f8  807f1500             cmp byte ptr [edi + 0x15], 0
// 004017fc  8b7304               mov esi, dword ptr [ebx + 4]
// 004017ff  7503                 jne 0x401804
// 00401801  897704               mov dword ptr [edi + 4], esi
// 00401804  8b4504               mov eax, dword ptr [ebp + 4]
// 00401807  395804               cmp dword ptr [eax + 4], ebx
// 0040180a  7505                 jne 0x401811
// 0040180c  897804               mov dword ptr [eax + 4], edi
// 0040180f  eb0b                 jmp 0x40181c
// 00401811  391e                 cmp dword ptr [esi], ebx
// 00401813  7504                 jne 0x401819
// 00401815  893e                 mov dword ptr [esi], edi
// 00401817  eb03                 jmp 0x40181c
// 00401819  897e08               mov dword ptr [esi + 8], edi
// 0040181c  8b5d04               mov ebx, dword ptr [ebp + 4]
// 0040181f  8b03                 mov eax, dword ptr [ebx]
// 00401821  3b442410             cmp eax, dword ptr [esp + 0x10]
// 00401825  7515                 jne 0x40183c
// 00401827  807f1500             cmp byte ptr [edi + 0x15], 0
// 0040182b  7404                 je 0x401831
// 0040182d  8bc6                 mov eax, esi
// 0040182f  eb09                 jmp 0x40183a
// 00401831  57                   push edi
// 00401832  e819de1b00           call 0x5bf650
// 00401837  83c404               add esp, 4
// 0040183a  8903                 mov dword ptr [ebx], eax
// 0040183c  8b5d04               mov ebx, dword ptr [ebp + 4]
// 0040183f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00401843  394b08               cmp dword ptr [ebx + 8], ecx
// 00401846  7577                 jne 0x4018bf
// 00401848  807f1500             cmp byte ptr [edi + 0x15], 0
// 0040184c  7407                 je 0x401855
// 0040184e  8bc6                 mov eax, esi
// 00401850  894308               mov dword ptr [ebx + 8], eax
// 00401853  eb6a                 jmp 0x4018bf
// 00401855  57                   push edi
// 00401856  e8d5dd1b00           call 0x5bf630
// 0040185b  83c404               add esp, 4
// 0040185e  894308               mov dword ptr [ebx + 8], eax
// 00401861  eb5c                 jmp 0x4018bf
// 00401863  894104               mov dword ptr [ecx + 4], eax
// 00401866  8b0b                 mov ecx, dword ptr [ebx]
// 00401868  8908                 mov dword ptr [eax], ecx
// 0040186a  3b4308               cmp eax, dword ptr [ebx + 8]
// 0040186d  7504                 jne 0x401873
// 0040186f  8bf0                 mov esi, eax
// 00401871  eb19                 jmp 0x40188c
// 00401873  807f1500             cmp byte ptr [edi + 0x15], 0
// 00401877  8b7004               mov esi, dword ptr [eax + 4]
// 0040187a  7503                 jne 0x40187f
// 0040187c  897704               mov dword ptr [edi + 4], esi
// 0040187f  893e                 mov dword ptr [esi], edi
// 00401881  8b4b08               mov ecx, dword ptr [ebx + 8]
// 00401884  890a                 mov dword ptr [edx], ecx
// 00401886  8b5308               mov edx, dword ptr [ebx + 8]
// 00401889  894204               mov dword ptr [edx + 4], eax
// 0040188c  8b4d04               mov ecx, dword ptr [ebp + 4]
// 0040188f  395904               cmp dword ptr [ecx + 4], ebx
// 00401892  7505                 jne 0x401899
// 00401894  894104               mov dword ptr [ecx + 4], eax
// 00401897  eb0e                 jmp 0x4018a7
// 00401899  8b4b04               mov ecx, dword ptr [ebx + 4]
// 0040189c  3919                 cmp dword ptr [ecx], ebx
// 0040189e  7504                 jne 0x4018a4
// 004018a0  8901                 mov dword ptr [ecx], eax
// 004018a2  eb03                 jmp 0x4018a7
// 004018a4  894108               mov dword ptr [ecx + 8], eax
// 004018a7  8b4b04               mov ecx, dword ptr [ebx + 4]
// 004018aa  894804               mov dword ptr [eax + 4], ecx
// 004018ad  8d4b14               lea ecx, [ebx + 0x14]
// 004018b0  83c014               add eax, 0x14
// 004018b3  3bc1                 cmp eax, ecx
// 004018b5  7408                 je 0x4018bf
// 004018b7  8a19                 mov bl, byte ptr [ecx]
// 004018b9  8a10                 mov dl, byte ptr [eax]
// 004018bb  8818                 mov byte ptr [eax], bl
// 004018bd  8811                 mov byte ptr [ecx], dl
// 004018bf  8b542410             mov edx, dword ptr [esp + 0x10]
// 004018c3  b301                 mov bl, 1
// 004018c5  385a14               cmp byte ptr [edx + 0x14], bl
// 004018c8  0f85fd000000         jne 0x4019cb
// 004018ce  8b4504               mov eax, dword ptr [ebp + 4]
// 004018d1  3b7804               cmp edi, dword ptr [eax + 4]
// 004018d4  0f84ee000000         je 0x4019c8
// 004018da  8d9b00000000         lea ebx, [ebx]
// 004018e0  385f14               cmp byte ptr [edi + 0x14], bl
// 004018e3  0f85df000000         jne 0x4019c8
// 004018e9  8b06                 mov eax, dword ptr [esi]
// 004018eb  3bf8                 cmp edi, eax
// 004018ed  7565                 jne 0x401954
// 004018ef  8b4608               mov eax, dword ptr [esi + 8]
// 004018f2  80781400             cmp byte ptr [eax + 0x14], 0
// 004018f6  7512                 jne 0x40190a
// 004018f8  885814               mov byte ptr [eax + 0x14], bl
// 004018fb  56                   push esi
// 004018fc  8bcd                 mov ecx, ebp
// 004018fe  c6461400             mov byte ptr [esi + 0x14], 0
// 00401902  e8f9f81b00           call 0x5c1200
// 00401907  8b4608               mov eax, dword ptr [esi + 8]
// 0040190a  80781500             cmp byte ptr [eax + 0x15], 0
// 0040190e  7574                 jne 0x401984
// 00401910  8b08                 mov ecx, dword ptr [eax]
// 00401912  385914               cmp byte ptr [ecx + 0x14], bl
// 00401915  7508                 jne 0x40191f
// 00401917  8b5008               mov edx, dword ptr [eax + 8]
// 0040191a  385a14               cmp byte ptr [edx + 0x14], bl
// 0040191d  7461                 je 0x401980
// 0040191f  8b4808               mov ecx, dword ptr [eax + 8]
// 00401922  385914               cmp byte ptr [ecx + 0x14], bl
// 00401925  7514                 jne 0x40193b
// 00401927  8b10                 mov edx, dword ptr [eax]
// 00401929  885a14               mov byte ptr [edx + 0x14], bl
// 0040192c  50                   push eax
// 0040192d  8bcd                 mov ecx, ebp
// 0040192f  c6401400             mov byte ptr [eax + 0x14], 0
// 00401933  e8b8b40d00           call 0x4dcdf0
// 00401938  8b4608               mov eax, dword ptr [esi + 8]
// 0040193b  8a4e14               mov cl, byte ptr [esi + 0x14]
// 0040193e  884814               mov byte ptr [eax + 0x14], cl
// 00401941  885e14               mov byte ptr [esi + 0x14], bl
// 00401944  8b5008               mov edx, dword ptr [eax + 8]
// 00401947  56                   push esi
// 00401948  8bcd                 mov ecx, ebp
// 0040194a  885a14               mov byte ptr [edx + 0x14], bl
// 0040194d  e8aef81b00           call 0x5c1200
// 00401952  eb74                 jmp 0x4019c8
// 00401954  80781400             cmp byte ptr [eax + 0x14], 0
// 00401958  7511                 jne 0x40196b
// 0040195a  885814               mov byte ptr [eax + 0x14], bl
// 0040195d  56                   push esi
// 0040195e  8bcd                 mov ecx, ebp
// 00401960  c6461400             mov byte ptr [esi + 0x14], 0
// 00401964  e887b40d00           call 0x4dcdf0
// 00401969  8b06                 mov eax, dword ptr [esi]
// 0040196b  80781500             cmp byte ptr [eax + 0x15], 0
// 0040196f  7513                 jne 0x401984
// 00401971  8b4808               mov ecx, dword ptr [eax + 8]
// 00401974  385914               cmp byte ptr [ecx + 0x14], bl
// 00401977  751e                 jne 0x401997
// 00401979  8b10                 mov edx, dword ptr [eax]
// 0040197b  385a14               cmp byte ptr [edx + 0x14], bl
// 0040197e  7517                 jne 0x401997
// 00401980  c6401400             mov byte ptr [eax + 0x14], 0
// 00401984  8b4504               mov eax, dword ptr [ebp + 4]
// 00401987  8bfe                 mov edi, esi
// 00401989  8b7604               mov esi, dword ptr [esi + 4]
// 0040198c  3b7804               cmp edi, dword ptr [eax + 4]
// 0040198f  0f854bffffff         jne 0x4018e0
// 00401995  eb31                 jmp 0x4019c8
// 00401997  8b08                 mov ecx, dword ptr [eax]
// 00401999  385914               cmp byte ptr [ecx + 0x14], bl
// 0040199c  7514                 jne 0x4019b2
// 0040199e  8b5008               mov edx, dword ptr [eax + 8]
// 004019a1  885a14               mov byte ptr [edx + 0x14], bl
// 004019a4  50                   push eax
// 004019a5  8bcd                 mov ecx, ebp
// 004019a7  c6401400             mov byte ptr [eax + 0x14], 0
// 004019ab  e850f81b00           call 0x5c1200
// 004019b0  8b06                 mov eax, dword ptr [esi]
// 004019b2  8a4e14               mov cl, byte ptr [esi + 0x14]
// 004019b5  884814               mov byte ptr [eax + 0x14], cl
// 004019b8  885e14               mov byte ptr [esi + 0x14], bl
// 004019bb  8b10                 mov edx, dword ptr [eax]
// 004019bd  56                   push esi
// 004019be  8bcd                 mov ecx, ebp
// 004019c0  885a14               mov byte ptr [edx + 0x14], bl
// 004019c3  e828b40d00           call 0x4dcdf0
// 004019c8  885f14               mov byte ptr [edi + 0x14], bl
// 004019cb  8b442410             mov eax, dword ptr [esp + 0x10]
// 004019cf  50                   push eax
// 004019d0  e883864000           call 0x80a058
// 004019d5  8b4508               mov eax, dword ptr [ebp + 8]
// 004019d8  83c404               add esp, 4
// 004019db  5f                   pop edi
// 004019dc  5e                   pop esi
// 004019dd  5b                   pop ebx
// 004019de  85c0                 test eax, eax
// 004019e0  7604                 jbe 0x4019e6
// 004019e2  48                   dec eax
// 004019e3  894508               mov dword ptr [ebp + 8], eax
// 004019e6  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 004019ea  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 004019ee  8908                 mov dword ptr [eax], ecx
// 004019f0  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 004019f4  5d                   pop ebp
// 004019f5  64890d00000000       mov dword ptr fs:[0], ecx
// 004019fc  83c454               add esp, 0x54
// 004019ff  c20800               ret 8
// copied from an identical function in another client (function ?erase@?$_Tree@V?$_Tmap_traits@HHU?$less@H@std@@V?$allocator@U?$pair@$$CBHH@std@@@2@$0A@@std@@@std@@QAE?AViterator@12@Vconst_iterator@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /D_SECURE_SCL=0
#include <map>

template class std::_Tree<std::_Tmap_traits<int, int, std::less<int>, std::allocator<std::pair<const int, int> >, false> >;