// roc 2012-06 009f0d80  unit: CXTPPropertyGridView  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f0d80
//
// 009f0d80  53                   push ebx
// 009f0d81  55                   push ebp
// 009f0d82  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 009f0d86  56                   push esi
// 009f0d87  8bf1                 mov esi, ecx
// 009f0d89  57                   push edi
// 009f0d8a  8d86e8000000         lea eax, [esi + 0xe8]
// 009f0d90  33ff                 xor edi, edi
// 009f0d92  3bc7                 cmp eax, edi
// 009f0d94  7436                 je 0x9f0dcc
// 009f0d96  397820               cmp dword ptr [eax + 0x20], edi
// 009f0d99  7431                 je 0x9f0dcc
// 009f0d9b  8b8608010000         mov eax, dword ptr [esi + 0x108]
// 009f0da1  50                   push eax
// 009f0da2  ff153c3bb200         call dword ptr [0xb23b3c]
// 009f0da8  85c0                 test eax, eax
// 009f0daa  7420                 je 0x9f0dcc
// 009f0dac  393d609de500         cmp dword ptr [0xe59d60], edi
// 009f0db2  7518                 jne 0x9f0dcc
// 009f0db4  55                   push ebp
// 009f0db5  8bce                 mov ecx, esi
// 009f0db7  c705609de50001000000 mov dword ptr [0xe59d60], 1
// 009f0dc1  e8aaf6ffff           call 0x9f0470
// 009f0dc6  893d609de500         mov dword ptr [0xe59d60], edi
// 009f0dcc  81fda3020000         cmp ebp, 0x2a3
// 009f0dd2  751a                 jne 0x9f0dee
// 009f0dd4  39be58010000         cmp dword ptr [esi + 0x158], edi
// 009f0dda  7412                 je 0x9f0dee
// 009f0ddc  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 009f0ddf  57                   push edi
// 009f0de0  57                   push edi
// 009f0de1  51                   push ecx
// 009f0de2  89be58010000         mov dword ptr [esi + 0x158], edi
// 009f0de8  ff15ec3bb200         call dword ptr [0xb23bec]
// 009f0dee  8b96b0000000         mov edx, dword ptr [esi + 0xb0]
// 009f0df4  8b8a6c010000         mov ecx, dword ptr [edx + 0x16c]
// 009f0dfa  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 009f0dfe  3bcf                 cmp ecx, edi
// 009f0e00  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 009f0e04  7409                 je 0x9f0e0f
// 009f0e06  57                   push edi
// 009f0e07  53                   push ebx
// 009f0e08  55                   push ebp
// 009f0e09  56                   push esi
// 009f0e0a  e8d1c3ffff           call 0x9ed1e0
// 009f0e0f  8b442420             mov eax, dword ptr [esp + 0x20]
// 009f0e13  50                   push eax
// 009f0e14  57                   push edi
// 009f0e15  53                   push ebx
// 009f0e16  55                   push ebp
// 009f0e17  8bce                 mov ecx, esi
// 009f0e19  e87614f9ff           call 0x982294
// 009f0e1e  5f                   pop edi
// 009f0e1f  5e                   pop esi
// 009f0e20  5d                   pop ebp
// 009f0e21  5b                   pop ebx
// 009f0e22  c21000               ret 0x10
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?OnWndMsg@CXTPPropertyGridView@@MAEHIIJPAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridView.cpp
