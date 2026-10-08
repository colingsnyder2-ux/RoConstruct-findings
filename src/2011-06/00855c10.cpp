// roc 2011-06 00855c10  unit: CXTPPopupBar  size: 224 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00855c10
//
// 00855c10  8b442404             mov eax, dword ptr [esp + 4]
// 00855c14  56                   push esi
// 00855c15  57                   push edi
// 00855c16  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00855c1a  57                   push edi
// 00855c1b  50                   push eax
// 00855c1c  8bf1                 mov esi, ecx
// 00855c1e  e82d6efcff           call 0x81ca50
// 00855c23  85c0                 test eax, eax
// 00855c25  7505                 jne 0x855c2c
// 00855c27  5f                   pop edi
// 00855c28  5e                   pop esi
// 00855c29  c20800               ret 8
// 00855c2c  8b86cc000000         mov eax, dword ptr [esi + 0xcc]
// 00855c32  83f8ff               cmp eax, -1
// 00855c35  7440                 je 0x855c77
// 00855c37  85ff                 test edi, edi
// 00855c39  753c                 jne 0x855c77
// 00855c3b  50                   push eax
// 00855c3c  8bce                 mov ecx, esi
// 00855c3e  e8dd5bfcff           call 0x81b820
// 00855c43  81b884000000be230000 cmp dword ptr [eax + 0x84], 0x23be
// 00855c4d  7528                 jne 0x855c77
// 00855c4f  8bce                 mov ecx, esi
// 00855c51  e83a4efcff           call 0x81aa90
// 00855c56  8b4874               mov ecx, dword ptr [eax + 0x74]
// 00855c59  397924               cmp dword ptr [ecx + 0x24], edi
// 00855c5c  7428                 je 0x855c86
// 00855c5e  8b15505bc900         mov edx, dword ptr [0xc95b50]
// 00855c64  8b4620               mov eax, dword ptr [esi + 0x20]
// 00855c67  57                   push edi
// 00855c68  52                   push edx
// 00855c69  688c130000           push 0x138c
// 00855c6e  50                   push eax
// 00855c6f  ff15741ca400         call dword ptr [0xa41c74]
// 00855c75  eb0f                 jmp 0x855c86
// 00855c77  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00855c7a  688c130000           push 0x138c
// 00855c7f  51                   push ecx
// 00855c80  ff15d019a400         call dword ptr [0xa419d0]
// 00855c86  83be1802000000       cmp dword ptr [esi + 0x218], 0
// 00855c8d  7457                 je 0x855ce6
// 00855c8f  8b86cc000000         mov eax, dword ptr [esi + 0xcc]
// 00855c95  83f8ff               cmp eax, -1
// 00855c98  744c                 je 0x855ce6
// 00855c9a  50                   push eax
// 00855c9b  8bce                 mov ecx, esi
// 00855c9d  e87e5bfcff           call 0x81b820
// 00855ca2  f680d000000008       test byte ptr [eax + 0xd0], 8
// 00855ca9  743b                 je 0x855ce6
// 00855cab  8b86cc000000         mov eax, dword ptr [esi + 0xcc]
// 00855cb1  3b8620020000         cmp eax, dword ptr [esi + 0x220]
// 00855cb7  6a01                 push 1
// 00855cb9  8bce                 mov ecx, esi
// 00855cbb  7c1a                 jl 0x855cd7
// 00855cbd  6a01                 push 1
// 00855cbf  40                   inc eax
// 00855cc0  6a00                 push 0
// 00855cc2  898620020000         mov dword ptr [esi + 0x220], eax
// 00855cc8  e8b3e7ffff           call 0x854480
// 00855ccd  5f                   pop edi
// 00855cce  b801000000           mov eax, 1
// 00855cd3  5e                   pop esi
// 00855cd4  c20800               ret 8
// 00855cd7  6a00                 push 0
// 00855cd9  6a00                 push 0
// 00855cdb  89861c020000         mov dword ptr [esi + 0x21c], eax
// 00855ce1  e89ae7ffff           call 0x854480
// 00855ce6  5f                   pop edi
// 00855ce7  b801000000           mov eax, 1
// 00855cec  5e                   pop esi
// 00855ced  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPPopupBar.cpp (function ?SetSelected@CXTPPopupBar@@MAEHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPopupBar.cpp
