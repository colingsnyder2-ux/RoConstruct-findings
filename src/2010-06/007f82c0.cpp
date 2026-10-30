// roc 2010-06 007f82c0  unit: CXTPPopupBar  size: 224 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007f82c0
//
// 007f82c0  8b442404             mov eax, dword ptr [esp + 4]
// 007f82c4  56                   push esi
// 007f82c5  57                   push edi
// 007f82c6  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 007f82ca  57                   push edi
// 007f82cb  50                   push eax
// 007f82cc  8bf1                 mov esi, ecx
// 007f82ce  e80d23fcff           call 0x7ba5e0
// 007f82d3  85c0                 test eax, eax
// 007f82d5  7505                 jne 0x7f82dc
// 007f82d7  5f                   pop edi
// 007f82d8  5e                   pop esi
// 007f82d9  c20800               ret 8
// 007f82dc  8b86cc000000         mov eax, dword ptr [esi + 0xcc]
// 007f82e2  83f8ff               cmp eax, -1
// 007f82e5  7440                 je 0x7f8327
// 007f82e7  85ff                 test edi, edi
// 007f82e9  753c                 jne 0x7f8327
// 007f82eb  50                   push eax
// 007f82ec  8bce                 mov ecx, esi
// 007f82ee  e8dd10fcff           call 0x7b93d0
// 007f82f3  81b884000000be230000 cmp dword ptr [eax + 0x84], 0x23be
// 007f82fd  7528                 jne 0x7f8327
// 007f82ff  8bce                 mov ecx, esi
// 007f8301  e8ca02fcff           call 0x7b85d0
// 007f8306  8b4874               mov ecx, dword ptr [eax + 0x74]
// 007f8309  397924               cmp dword ptr [ecx + 0x24], edi
// 007f830c  7428                 je 0x7f8336
// 007f830e  8b15d862be00         mov edx, dword ptr [0xbe62d8]
// 007f8314  8b4620               mov eax, dword ptr [esi + 0x20]
// 007f8317  57                   push edi
// 007f8318  52                   push edx
// 007f8319  688c130000           push 0x138c
// 007f831e  50                   push eax
// 007f831f  ff1554bc9e00         call dword ptr [0x9ebc54]
// 007f8325  eb0f                 jmp 0x7f8336
// 007f8327  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 007f832a  688c130000           push 0x138c
// 007f832f  51                   push ecx
// 007f8330  ff1560ba9e00         call dword ptr [0x9eba60]
// 007f8336  83be1802000000       cmp dword ptr [esi + 0x218], 0
// 007f833d  7457                 je 0x7f8396
// 007f833f  8b86cc000000         mov eax, dword ptr [esi + 0xcc]
// 007f8345  83f8ff               cmp eax, -1
// 007f8348  744c                 je 0x7f8396
// 007f834a  50                   push eax
// 007f834b  8bce                 mov ecx, esi
// 007f834d  e87e10fcff           call 0x7b93d0
// 007f8352  f680d000000008       test byte ptr [eax + 0xd0], 8
// 007f8359  743b                 je 0x7f8396
// 007f835b  8b86cc000000         mov eax, dword ptr [esi + 0xcc]
// 007f8361  3b8620020000         cmp eax, dword ptr [esi + 0x220]
// 007f8367  6a01                 push 1
// 007f8369  8bce                 mov ecx, esi
// 007f836b  7c1a                 jl 0x7f8387
// 007f836d  6a01                 push 1
// 007f836f  40                   inc eax
// 007f8370  6a00                 push 0
// 007f8372  898620020000         mov dword ptr [esi + 0x220], eax
// 007f8378  e863e8ffff           call 0x7f6be0
// 007f837d  5f                   pop edi
// 007f837e  b801000000           mov eax, 1
// 007f8383  5e                   pop esi
// 007f8384  c20800               ret 8
// 007f8387  6a00                 push 0
// 007f8389  6a00                 push 0
// 007f838b  89861c020000         mov dword ptr [esi + 0x21c], eax
// 007f8391  e84ae8ffff           call 0x7f6be0
// 007f8396  5f                   pop edi
// 007f8397  b801000000           mov eax, 1
// 007f839c  5e                   pop esi
// 007f839d  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPPopupBar.cpp (function ?SetSelected@CXTPPopupBar@@MAEHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPopupBar.cpp
