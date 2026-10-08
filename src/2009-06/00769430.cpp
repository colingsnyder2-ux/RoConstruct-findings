// roc 2009-06 00769430  unit: CXTPPopupBar  size: 224 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00769430
//
// 00769430  8b442404             mov eax, dword ptr [esp + 4]
// 00769434  56                   push esi
// 00769435  57                   push edi
// 00769436  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0076943a  57                   push edi
// 0076943b  50                   push eax
// 0076943c  8bf1                 mov esi, ecx
// 0076943e  e8cd5efcff           call 0x72f310
// 00769443  85c0                 test eax, eax
// 00769445  7505                 jne 0x76944c
// 00769447  5f                   pop edi
// 00769448  5e                   pop esi
// 00769449  c20800               ret 8
// 0076944c  8b86cc000000         mov eax, dword ptr [esi + 0xcc]
// 00769452  83f8ff               cmp eax, -1
// 00769455  7440                 je 0x769497
// 00769457  85ff                 test edi, edi
// 00769459  753c                 jne 0x769497
// 0076945b  50                   push eax
// 0076945c  8bce                 mov ecx, esi
// 0076945e  e8bd4cfcff           call 0x72e120
// 00769463  81b884000000be230000 cmp dword ptr [eax + 0x84], 0x23be
// 0076946d  7528                 jne 0x769497
// 0076946f  8bce                 mov ecx, esi
// 00769471  e81a3ffcff           call 0x72d390
// 00769476  8b4874               mov ecx, dword ptr [eax + 0x74]
// 00769479  397924               cmp dword ptr [ecx + 0x24], edi
// 0076947c  7428                 je 0x7694a6
// 0076947e  8b15d453a200         mov edx, dword ptr [0xa253d4]
// 00769484  8b4620               mov eax, dword ptr [esi + 0x20]
// 00769487  57                   push edi
// 00769488  52                   push edx
// 00769489  688c130000           push 0x138c
// 0076948e  50                   push eax
// 0076948f  ff150cee8900         call dword ptr [0x89ee0c]
// 00769495  eb0f                 jmp 0x7694a6
// 00769497  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0076949a  688c130000           push 0x138c
// 0076949f  51                   push ecx
// 007694a0  ff1584ee8900         call dword ptr [0x89ee84]
// 007694a6  83be1802000000       cmp dword ptr [esi + 0x218], 0
// 007694ad  7457                 je 0x769506
// 007694af  8b86cc000000         mov eax, dword ptr [esi + 0xcc]
// 007694b5  83f8ff               cmp eax, -1
// 007694b8  744c                 je 0x769506
// 007694ba  50                   push eax
// 007694bb  8bce                 mov ecx, esi
// 007694bd  e85e4cfcff           call 0x72e120
// 007694c2  f680d000000008       test byte ptr [eax + 0xd0], 8
// 007694c9  743b                 je 0x769506
// 007694cb  8b86cc000000         mov eax, dword ptr [esi + 0xcc]
// 007694d1  3b8620020000         cmp eax, dword ptr [esi + 0x220]
// 007694d7  6a01                 push 1
// 007694d9  8bce                 mov ecx, esi
// 007694db  7c1a                 jl 0x7694f7
// 007694dd  6a01                 push 1
// 007694df  40                   inc eax
// 007694e0  6a00                 push 0
// 007694e2  898620020000         mov dword ptr [esi + 0x220], eax
// 007694e8  e863e8ffff           call 0x767d50
// 007694ed  5f                   pop edi
// 007694ee  b801000000           mov eax, 1
// 007694f3  5e                   pop esi
// 007694f4  c20800               ret 8
// 007694f7  6a00                 push 0
// 007694f9  6a00                 push 0
// 007694fb  89861c020000         mov dword ptr [esi + 0x21c], eax
// 00769501  e84ae8ffff           call 0x767d50
// 00769506  5f                   pop edi
// 00769507  b801000000           mov eax, 1
// 0076950c  5e                   pop esi
// 0076950d  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPPopupBar.cpp (function ?SetSelected@CXTPPopupBar@@MAEHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPopupBar.cpp
