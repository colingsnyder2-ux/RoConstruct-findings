// roc 2009-12 0086a230  unit: CXTPPropertyGridView  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086a230
//
// 0086a230  53                   push ebx
// 0086a231  55                   push ebp
// 0086a232  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0086a236  56                   push esi
// 0086a237  8bf1                 mov esi, ecx
// 0086a239  57                   push edi
// 0086a23a  8d86e8000000         lea eax, [esi + 0xe8]
// 0086a240  33ff                 xor edi, edi
// 0086a242  3bc7                 cmp eax, edi
// 0086a244  7436                 je 0x86a27c
// 0086a246  397820               cmp dword ptr [eax + 0x20], edi
// 0086a249  7431                 je 0x86a27c
// 0086a24b  8b8608010000         mov eax, dword ptr [esi + 0x108]
// 0086a251  50                   push eax
// 0086a252  ff1564ca9800         call dword ptr [0x98ca64]
// 0086a258  85c0                 test eax, eax
// 0086a25a  7420                 je 0x86a27c
// 0086a25c  393df4b8b900         cmp dword ptr [0xb9b8f4], edi
// 0086a262  7518                 jne 0x86a27c
// 0086a264  55                   push ebp
// 0086a265  8bce                 mov ecx, esi
// 0086a267  c705f4b8b90001000000 mov dword ptr [0xb9b8f4], 1
// 0086a271  e84af7ffff           call 0x8699c0
// 0086a276  893df4b8b900         mov dword ptr [0xb9b8f4], edi
// 0086a27c  81fda3020000         cmp ebp, 0x2a3
// 0086a282  751a                 jne 0x86a29e
// 0086a284  39be58010000         cmp dword ptr [esi + 0x158], edi
// 0086a28a  7412                 je 0x86a29e
// 0086a28c  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0086a28f  57                   push edi
// 0086a290  57                   push edi
// 0086a291  51                   push ecx
// 0086a292  89be58010000         mov dword ptr [esi + 0x158], edi
// 0086a298  ff15e8cb9800         call dword ptr [0x98cbe8]
// 0086a29e  8b96b0000000         mov edx, dword ptr [esi + 0xb0]
// 0086a2a4  8b8a6c010000         mov ecx, dword ptr [edx + 0x16c]
// 0086a2aa  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0086a2ae  3bcf                 cmp ecx, edi
// 0086a2b0  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0086a2b4  7409                 je 0x86a2bf
// 0086a2b6  57                   push edi
// 0086a2b7  53                   push ebx
// 0086a2b8  55                   push ebp
// 0086a2b9  56                   push esi
// 0086a2ba  e8e191ffff           call 0x8634a0
// 0086a2bf  8b442420             mov eax, dword ptr [esp + 0x20]
// 0086a2c3  50                   push eax
// 0086a2c4  57                   push edi
// 0086a2c5  53                   push ebx
// 0086a2c6  55                   push ebp
// 0086a2c7  8bce                 mov ecx, esi
// 0086a2c9  e80c97f8ff           call 0x7f39da
// 0086a2ce  5f                   pop edi
// 0086a2cf  5e                   pop esi
// 0086a2d0  5d                   pop ebp
// 0086a2d1  5b                   pop ebx
// 0086a2d2  c21000               ret 0x10
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?OnWndMsg@CXTPPropertyGridView@@MAEHIIJPAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridView.cpp
