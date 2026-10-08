// roc 2009-06 0078f210  unit: CXTPPropertyGridView  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0078f210
//
// 0078f210  53                   push ebx
// 0078f211  55                   push ebp
// 0078f212  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0078f216  56                   push esi
// 0078f217  8bf1                 mov esi, ecx
// 0078f219  57                   push edi
// 0078f21a  8d86e8000000         lea eax, [esi + 0xe8]
// 0078f220  33ff                 xor edi, edi
// 0078f222  3bc7                 cmp eax, edi
// 0078f224  7436                 je 0x78f25c
// 0078f226  397820               cmp dword ptr [eax + 0x20], edi
// 0078f229  7431                 je 0x78f25c
// 0078f22b  8b8608010000         mov eax, dword ptr [esi + 0x108]
// 0078f231  50                   push eax
// 0078f232  ff15c8ed8900         call dword ptr [0x89edc8]
// 0078f238  85c0                 test eax, eax
// 0078f23a  7420                 je 0x78f25c
// 0078f23c  393d9c24a500         cmp dword ptr [0xa5249c], edi
// 0078f242  7518                 jne 0x78f25c
// 0078f244  55                   push ebp
// 0078f245  8bce                 mov ecx, esi
// 0078f247  c7059c24a50001000000 mov dword ptr [0xa5249c], 1
// 0078f251  e84af7ffff           call 0x78e9a0
// 0078f256  893d9c24a500         mov dword ptr [0xa5249c], edi
// 0078f25c  81fda3020000         cmp ebp, 0x2a3
// 0078f262  751a                 jne 0x78f27e
// 0078f264  39be58010000         cmp dword ptr [esi + 0x158], edi
// 0078f26a  7412                 je 0x78f27e
// 0078f26c  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0078f26f  57                   push edi
// 0078f270  57                   push edi
// 0078f271  51                   push ecx
// 0078f272  89be58010000         mov dword ptr [esi + 0x158], edi
// 0078f278  ff157cee8900         call dword ptr [0x89ee7c]
// 0078f27e  8b96b0000000         mov edx, dword ptr [esi + 0xb0]
// 0078f284  8b8a6c010000         mov ecx, dword ptr [edx + 0x16c]
// 0078f28a  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0078f28e  3bcf                 cmp ecx, edi
// 0078f290  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0078f294  7409                 je 0x78f29f
// 0078f296  57                   push edi
// 0078f297  53                   push ebx
// 0078f298  55                   push ebp
// 0078f299  56                   push esi
// 0078f29a  e8d191ffff           call 0x788470
// 0078f29f  8b442420             mov eax, dword ptr [esp + 0x20]
// 0078f2a3  50                   push eax
// 0078f2a4  57                   push edi
// 0078f2a5  53                   push ebx
// 0078f2a6  55                   push ebp
// 0078f2a7  8bce                 mov ecx, esi
// 0078f2a9  e80499f8ff           call 0x718bb2
// 0078f2ae  5f                   pop edi
// 0078f2af  5e                   pop esi
// 0078f2b0  5d                   pop ebp
// 0078f2b1  5b                   pop ebx
// 0078f2b2  c21000               ret 0x10
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?OnWndMsg@CXTPPropertyGridView@@MAEHIIJPAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridView.cpp
