// roc 2010-06 008a7a60  unit: CXTWindowMap  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a7a60
//
// 008a7a60  53                   push ebx
// 008a7a61  8b5c2408             mov ebx, dword ptr [esp + 8]
// 008a7a65  55                   push ebp
// 008a7a66  56                   push esi
// 008a7a67  57                   push edi
// 008a7a68  8b7b04               mov edi, dword ptr [ebx + 4]
// 008a7a6b  57                   push edi
// 008a7a6c  8be9                 mov ebp, ecx
// 008a7a6e  e85dffffff           call 0x8a79d0
// 008a7a73  8bf0                 mov esi, eax
// 008a7a75  85f6                 test esi, esi
// 008a7a77  7448                 je 0x8a7ac1
// 008a7a79  3bf3                 cmp esi, ebx
// 008a7a7b  7531                 jne 0x8a7aae
// 008a7a7d  8b5e0c               mov ebx, dword ptr [esi + 0xc]
// 008a7a80  57                   push edi
// 008a7a81  8bcd                 mov ecx, ebp
// 008a7a83  85db                 test ebx, ebx
// 008a7a85  740e                 je 0x8a7a95
// 008a7a87  e810590d00           call 0x97d39c
// 008a7a8c  5f                   pop edi
// 008a7a8d  5e                   pop esi
// 008a7a8e  5d                   pop ebp
// 008a7a8f  8918                 mov dword ptr [eax], ebx
// 008a7a91  5b                   pop ebx
// 008a7a92  c20400               ret 4
// 008a7a95  e8b65c0d00           call 0x97d750
// 008a7a9a  8b4608               mov eax, dword ptr [esi + 8]
// 008a7a9d  50                   push eax
// 008a7a9e  6afc                 push -4
// 008a7aa0  57                   push edi
// 008a7aa1  ff1500bc9e00         call dword ptr [0x9ebc00]
// 008a7aa7  5f                   pop edi
// 008a7aa8  5e                   pop esi
// 008a7aa9  5d                   pop ebp
// 008a7aaa  5b                   pop ebx
// 008a7aab  c20400               ret 4
// 008a7aae  395e0c               cmp dword ptr [esi + 0xc], ebx
// 008a7ab1  7408                 je 0x8a7abb
// 008a7ab3  8b760c               mov esi, dword ptr [esi + 0xc]
// 008a7ab6  395e0c               cmp dword ptr [esi + 0xc], ebx
// 008a7ab9  75f8                 jne 0x8a7ab3
// 008a7abb  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 008a7abe  894e0c               mov dword ptr [esi + 0xc], ecx
// 008a7ac1  5f                   pop edi
// 008a7ac2  5e                   pop esi
// 008a7ac3  5d                   pop ebp
// 008a7ac4  5b                   pop ebx
// 008a7ac5  c20400               ret 4
// copied from an identical function in another client (function ?Remove@CXTWindowMap@@QAEXPAVCXTWndHook@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTWndHook.cpp