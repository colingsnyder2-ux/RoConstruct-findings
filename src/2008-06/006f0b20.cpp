// roc 2008-06 006f0b20  unit: CXTPPopupBar  size: 224 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f0b20
//
// 006f0b20  8b442404             mov eax, dword ptr [esp + 4]
// 006f0b24  56                   push esi
// 006f0b25  57                   push edi
// 006f0b26  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 006f0b2a  57                   push edi
// 006f0b2b  50                   push eax
// 006f0b2c  8bf1                 mov esi, ecx
// 006f0b2e  e86d62fcff           call 0x6b6da0
// 006f0b33  85c0                 test eax, eax
// 006f0b35  7505                 jne 0x6f0b3c
// 006f0b37  5f                   pop edi
// 006f0b38  5e                   pop esi
// 006f0b39  c20800               ret 8
// 006f0b3c  8b86cc000000         mov eax, dword ptr [esi + 0xcc]
// 006f0b42  83f8ff               cmp eax, -1
// 006f0b45  7440                 je 0x6f0b87
// 006f0b47  85ff                 test edi, edi
// 006f0b49  753c                 jne 0x6f0b87
// 006f0b4b  50                   push eax
// 006f0b4c  8bce                 mov ecx, esi
// 006f0b4e  e85d50fcff           call 0x6b5bb0
// 006f0b53  81b884000000be230000 cmp dword ptr [eax + 0x84], 0x23be
// 006f0b5d  7528                 jne 0x6f0b87
// 006f0b5f  8bce                 mov ecx, esi
// 006f0b61  e8aa42fcff           call 0x6b4e10
// 006f0b66  8b4874               mov ecx, dword ptr [eax + 0x74]
// 006f0b69  397924               cmp dword ptr [ecx + 0x24], edi
// 006f0b6c  7428                 je 0x6f0b96
// 006f0b6e  8b1580619600         mov edx, dword ptr [0x966180]
// 006f0b74  8b4620               mov eax, dword ptr [esi + 0x20]
// 006f0b77  57                   push edi
// 006f0b78  52                   push edx
// 006f0b79  688c130000           push 0x138c
// 006f0b7e  50                   push eax
// 006f0b7f  ff157c2d8000         call dword ptr [0x802d7c]
// 006f0b85  eb0f                 jmp 0x6f0b96
// 006f0b87  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 006f0b8a  688c130000           push 0x138c
// 006f0b8f  51                   push ecx
// 006f0b90  ff151c2e8000         call dword ptr [0x802e1c]
// 006f0b96  83be1802000000       cmp dword ptr [esi + 0x218], 0
// 006f0b9d  7457                 je 0x6f0bf6
// 006f0b9f  8b86cc000000         mov eax, dword ptr [esi + 0xcc]
// 006f0ba5  83f8ff               cmp eax, -1
// 006f0ba8  744c                 je 0x6f0bf6
// 006f0baa  50                   push eax
// 006f0bab  8bce                 mov ecx, esi
// 006f0bad  e8fe4ffcff           call 0x6b5bb0
// 006f0bb2  f680d000000008       test byte ptr [eax + 0xd0], 8
// 006f0bb9  743b                 je 0x6f0bf6
// 006f0bbb  8b86cc000000         mov eax, dword ptr [esi + 0xcc]
// 006f0bc1  3b8620020000         cmp eax, dword ptr [esi + 0x220]
// 006f0bc7  6a01                 push 1
// 006f0bc9  8bce                 mov ecx, esi
// 006f0bcb  7c1a                 jl 0x6f0be7
// 006f0bcd  6a01                 push 1
// 006f0bcf  40                   inc eax
// 006f0bd0  6a00                 push 0
// 006f0bd2  898620020000         mov dword ptr [esi + 0x220], eax
// 006f0bd8  e8b3e7ffff           call 0x6ef390
// 006f0bdd  5f                   pop edi
// 006f0bde  b801000000           mov eax, 1
// 006f0be3  5e                   pop esi
// 006f0be4  c20800               ret 8
// 006f0be7  6a00                 push 0
// 006f0be9  6a00                 push 0
// 006f0beb  89861c020000         mov dword ptr [esi + 0x21c], eax
// 006f0bf1  e89ae7ffff           call 0x6ef390
// 006f0bf6  5f                   pop edi
// 006f0bf7  b801000000           mov eax, 1
// 006f0bfc  5e                   pop esi
// 006f0bfd  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPPopupBar.cpp (function ?SetSelected@CXTPPopupBar@@MAEHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPopupBar.cpp
