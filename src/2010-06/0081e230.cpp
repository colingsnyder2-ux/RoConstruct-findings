// roc 2010-06 0081e230  unit: CXTPPropertyGridView  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0081e230
//
// 0081e230  53                   push ebx
// 0081e231  55                   push ebp
// 0081e232  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0081e236  56                   push esi
// 0081e237  8bf1                 mov esi, ecx
// 0081e239  57                   push edi
// 0081e23a  8d86e8000000         lea eax, [esi + 0xe8]
// 0081e240  33ff                 xor edi, edi
// 0081e242  3bc7                 cmp eax, edi
// 0081e244  7436                 je 0x81e27c
// 0081e246  397820               cmp dword ptr [eax + 0x20], edi
// 0081e249  7431                 je 0x81e27c
// 0081e24b  8b8608010000         mov eax, dword ptr [esi + 0x108]
// 0081e251  50                   push eax
// 0081e252  ff15e8bb9e00         call dword ptr [0x9ebbe8]
// 0081e258  85c0                 test eax, eax
// 0081e25a  7420                 je 0x81e27c
// 0081e25c  393d2460c200         cmp dword ptr [0xc26024], edi
// 0081e262  7518                 jne 0x81e27c
// 0081e264  55                   push ebp
// 0081e265  8bce                 mov ecx, esi
// 0081e267  c7052460c20001000000 mov dword ptr [0xc26024], 1
// 0081e271  e84af7ffff           call 0x81d9c0
// 0081e276  893d2460c200         mov dword ptr [0xc26024], edi
// 0081e27c  81fda3020000         cmp ebp, 0x2a3
// 0081e282  751a                 jne 0x81e29e
// 0081e284  39be58010000         cmp dword ptr [esi + 0x158], edi
// 0081e28a  7412                 je 0x81e29e
// 0081e28c  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0081e28f  57                   push edi
// 0081e290  57                   push edi
// 0081e291  51                   push ecx
// 0081e292  89be58010000         mov dword ptr [esi + 0x158], edi
// 0081e298  ff1578ba9e00         call dword ptr [0x9eba78]
// 0081e29e  8b96b0000000         mov edx, dword ptr [esi + 0xb0]
// 0081e2a4  8b8a6c010000         mov ecx, dword ptr [edx + 0x16c]
// 0081e2aa  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0081e2ae  3bcf                 cmp ecx, edi
// 0081e2b0  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0081e2b4  7409                 je 0x81e2bf
// 0081e2b6  57                   push edi
// 0081e2b7  53                   push ebx
// 0081e2b8  55                   push ebp
// 0081e2b9  56                   push esi
// 0081e2ba  e89191ffff           call 0x817450
// 0081e2bf  8b442420             mov eax, dword ptr [esp + 0x20]
// 0081e2c3  50                   push eax
// 0081e2c4  57                   push edi
// 0081e2c5  53                   push ebx
// 0081e2c6  55                   push ebp
// 0081e2c7  8bce                 mov ecx, esi
// 0081e2c9  e84c98f8ff           call 0x7a7b1a
// 0081e2ce  5f                   pop edi
// 0081e2cf  5e                   pop esi
// 0081e2d0  5d                   pop ebp
// 0081e2d1  5b                   pop ebx
// 0081e2d2  c21000               ret 0x10
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?OnWndMsg@CXTPPropertyGridView@@MAEHIIJPAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridView.cpp
