// roc 2009-12 00844230  unit: CXTPPopupBar  size: 224 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00844230
//
// 00844230  8b442404             mov eax, dword ptr [esp + 4]
// 00844234  56                   push esi
// 00844235  57                   push edi
// 00844236  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0084423a  57                   push edi
// 0084423b  50                   push eax
// 0084423c  8bf1                 mov esi, ecx
// 0084423e  e82d22fcff           call 0x806470
// 00844243  85c0                 test eax, eax
// 00844245  7505                 jne 0x84424c
// 00844247  5f                   pop edi
// 00844248  5e                   pop esi
// 00844249  c20800               ret 8
// 0084424c  8b86cc000000         mov eax, dword ptr [esi + 0xcc]
// 00844252  83f8ff               cmp eax, -1
// 00844255  7440                 je 0x844297
// 00844257  85ff                 test edi, edi
// 00844259  753c                 jne 0x844297
// 0084425b  50                   push eax
// 0084425c  8bce                 mov ecx, esi
// 0084425e  e8fd0ffcff           call 0x805260
// 00844263  81b884000000be230000 cmp dword ptr [eax + 0x84], 0x23be
// 0084426d  7528                 jne 0x844297
// 0084426f  8bce                 mov ecx, esi
// 00844271  e85a02fcff           call 0x8044d0
// 00844276  8b4874               mov ecx, dword ptr [eax + 0x74]
// 00844279  397924               cmp dword ptr [ecx + 0x24], edi
// 0084427c  7428                 je 0x8442a6
// 0084427e  8b152855b600         mov edx, dword ptr [0xb65528]
// 00844284  8b4620               mov eax, dword ptr [esi + 0x20]
// 00844287  57                   push edi
// 00844288  52                   push edx
// 00844289  688c130000           push 0x138c
// 0084428e  50                   push eax
// 0084428f  ff1558cc9800         call dword ptr [0x98cc58]
// 00844295  eb0f                 jmp 0x8442a6
// 00844297  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0084429a  688c130000           push 0x138c
// 0084429f  51                   push ecx
// 008442a0  ff15d0cb9800         call dword ptr [0x98cbd0]
// 008442a6  83be1802000000       cmp dword ptr [esi + 0x218], 0
// 008442ad  7457                 je 0x844306
// 008442af  8b86cc000000         mov eax, dword ptr [esi + 0xcc]
// 008442b5  83f8ff               cmp eax, -1
// 008442b8  744c                 je 0x844306
// 008442ba  50                   push eax
// 008442bb  8bce                 mov ecx, esi
// 008442bd  e89e0ffcff           call 0x805260
// 008442c2  f680d000000008       test byte ptr [eax + 0xd0], 8
// 008442c9  743b                 je 0x844306
// 008442cb  8b86cc000000         mov eax, dword ptr [esi + 0xcc]
// 008442d1  3b8620020000         cmp eax, dword ptr [esi + 0x220]
// 008442d7  6a01                 push 1
// 008442d9  8bce                 mov ecx, esi
// 008442db  7c1a                 jl 0x8442f7
// 008442dd  6a01                 push 1
// 008442df  40                   inc eax
// 008442e0  6a00                 push 0
// 008442e2  898620020000         mov dword ptr [esi + 0x220], eax
// 008442e8  e843e8ffff           call 0x842b30
// 008442ed  5f                   pop edi
// 008442ee  b801000000           mov eax, 1
// 008442f3  5e                   pop esi
// 008442f4  c20800               ret 8
// 008442f7  6a00                 push 0
// 008442f9  6a00                 push 0
// 008442fb  89861c020000         mov dword ptr [esi + 0x21c], eax
// 00844301  e82ae8ffff           call 0x842b30
// 00844306  5f                   pop edi
// 00844307  b801000000           mov eax, 1
// 0084430c  5e                   pop esi
// 0084430d  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPPopupBar.cpp (function ?SetSelected@CXTPPopupBar@@MAEHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPopupBar.cpp
