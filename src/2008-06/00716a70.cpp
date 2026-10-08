// from server: 100% by auto
// roc 2008-06 00716a70  unit: CXTPPropertyGridView  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00716a70
//
// 00716a70  53                   push ebx
// 00716a71  55                   push ebp
// 00716a72  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00716a76  56                   push esi
// 00716a77  8bf1                 mov esi, ecx
// 00716a79  57                   push edi
// 00716a7a  8d86e8000000         lea eax, [esi + 0xe8]
// 00716a80  33ff                 xor edi, edi
// 00716a82  3bc7                 cmp eax, edi
// 00716a84  7436                 je 0x716abc
// 00716a86  397820               cmp dword ptr [eax + 0x20], edi
// 00716a89  7431                 je 0x716abc
// 00716a8b  8b8608010000         mov eax, dword ptr [esi + 0x108]
// 00716a91  50                   push eax
// 00716a92  ff153c2d8000         call dword ptr [0x802d3c]
// 00716a98  85c0                 test eax, eax
// 00716a9a  7420                 je 0x716abc
// 00716a9c  393da4eb9700         cmp dword ptr [0x97eba4], edi
// 00716aa2  7518                 jne 0x716abc
// 00716aa4  55                   push ebp
// 00716aa5  8bce                 mov ecx, esi
// 00716aa7  c705a4eb970001000000 mov dword ptr [0x97eba4], 1
// 00716ab1  e84af7ffff           call 0x716200
// 00716ab6  893da4eb9700         mov dword ptr [0x97eba4], edi
// 00716abc  81fda3020000         cmp ebp, 0x2a3
// 00716ac2  751a                 jne 0x716ade
// 00716ac4  39be58010000         cmp dword ptr [esi + 0x158], edi
// 00716aca  7412                 je 0x716ade
// 00716acc  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00716acf  57                   push edi
// 00716ad0  57                   push edi
// 00716ad1  51                   push ecx
// 00716ad2  89be58010000         mov dword ptr [esi + 0x158], edi
// 00716ad8  ff15182e8000         call dword ptr [0x802e18]
// 00716ade  8b96b0000000         mov edx, dword ptr [esi + 0xb0]
// 00716ae4  8b8a6c010000         mov ecx, dword ptr [edx + 0x16c]
// 00716aea  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00716aee  3bcf                 cmp ecx, edi
// 00716af0  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00716af4  7409                 je 0x716aff
// 00716af6  57                   push edi
// 00716af7  53                   push ebx
// 00716af8  55                   push ebp
// 00716af9  56                   push esi
// 00716afa  e88168ffff           call 0x70d380
// 00716aff  8b442420             mov eax, dword ptr [esp + 0x20]
// 00716b03  50                   push eax
// 00716b04  57                   push edi
// 00716b05  53                   push ebx
// 00716b06  55                   push ebp
// 00716b07  8bce                 mov ecx, esi
// 00716b09  e8f29cf8ff           call 0x6a0800
// 00716b0e  5f                   pop edi
// 00716b0f  5e                   pop esi
// 00716b10  5d                   pop ebp
// 00716b11  5b                   pop ebx
// 00716b12  c21000               ret 0x10
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?OnWndMsg@CXTPPropertyGridView@@MAEHIIJPAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridView.cpp
