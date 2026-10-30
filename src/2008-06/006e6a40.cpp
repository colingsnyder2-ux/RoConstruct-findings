// from server: 100% by auto
// roc 2008-06 006e6a40  unit: CXTPDockingPaneManager  size: 227 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e6a40
//
// 006e6a40  53                   push ebx
// 006e6a41  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 006e6a45  55                   push ebp
// 006e6a46  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 006e6a4a  56                   push esi
// 006e6a4b  57                   push edi
// 006e6a4c  8bf1                 mov esi, ecx
// 006e6a4e  83fd02               cmp ebp, 2
// 006e6a51  754f                 jne 0x6e6aa2
// 006e6a53  83be1001000000       cmp dword ptr [esi + 0x110], 0
// 006e6a5a  742c                 je 0x6e6a88
// 006e6a5c  6800526e00           push 0x6e5200
// 006e6a61  b9d0ed9700           mov ecx, 0x97edd0
// 006e6a66  c7861001000000000000 mov dword ptr [esi + 0x110], 0
// 006e6a70  e865550d00           call 0x7bbfda
// 006e6a75  85c0                 test eax, eax
// 006e6a77  7505                 jne 0x6e6a7e
// 006e6a79  e8c69efbff           call 0x6a0944
// 006e6a7e  6a00                 push 0
// 006e6a80  56                   push esi
// 006e6a81  8bc8                 mov ecx, eax
// 006e6a83  e8c8450700           call 0x75b050
// 006e6a88  8b542420             mov edx, dword ptr [esp + 0x20]
// 006e6a8c  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006e6a90  52                   push edx
// 006e6a91  50                   push eax
// 006e6a92  53                   push ebx
// 006e6a93  55                   push ebp
// 006e6a94  8bce                 mov ecx, esi
// 006e6a96  e8659dfbff           call 0x6a0800
// 006e6a9b  5f                   pop edi
// 006e6a9c  5e                   pop esi
// 006e6a9d  5d                   pop ebp
// 006e6a9e  5b                   pop ebx
// 006e6a9f  c21000               ret 0x10
// 006e6aa2  81fd12010000         cmp ebp, 0x112
// 006e6aa8  75de                 jne 0x6e6a88
// 006e6aaa  81fb00f10000         cmp ebx, 0xf100
// 006e6ab0  7540                 jne 0x6e6af2
// 006e6ab2  66837c241c2d         cmp word ptr [esp + 0x1c], 0x2d
// 006e6ab8  75ce                 jne 0x6e6a88
// 006e6aba  8bbed8000000         mov edi, dword ptr [esi + 0xd8]
// 006e6ac0  85ff                 test edi, edi
// 006e6ac2  74c4                 je 0x6e6a88
// 006e6ac4  8bcf                 mov ecx, edi
// 006e6ac6  e895090200           call 0x707460
// 006e6acb  85c0                 test eax, eax
// 006e6acd  75b9                 jne 0x6e6a88
// 006e6acf  8b4720               mov eax, dword ptr [edi + 0x20]
// 006e6ad2  8b501c               mov edx, dword ptr [eax + 0x1c]
// 006e6ad5  8d4f20               lea ecx, [edi + 0x20]
// 006e6ad8  ffd2                 call edx
// 006e6ada  85c0                 test eax, eax
// 006e6adc  75aa                 jne 0x6e6a88
// 006e6ade  57                   push edi
// 006e6adf  8bce                 mov ecx, esi
// 006e6ae1  e82af2ffff           call 0x6e5d10
// 006e6ae6  5f                   pop edi
// 006e6ae7  5e                   pop esi
// 006e6ae8  5d                   pop ebp
// 006e6ae9  b801000000           mov eax, 1
// 006e6aee  5b                   pop ebx
// 006e6aef  c21000               ret 0x10
// 006e6af2  81fb40f00000         cmp ebx, 0xf040
// 006e6af8  7408                 je 0x6e6b02
// 006e6afa  81fb50f00000         cmp ebx, 0xf050
// 006e6b00  7586                 jne 0x6e6a88
// 006e6b02  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 006e6b08  33c9                 xor ecx, ecx
// 006e6b0a  81fb40f00000         cmp ebx, 0xf040
// 006e6b10  0f94c1               sete cl
// 006e6b13  51                   push ecx
// 006e6b14  50                   push eax
// 006e6b15  8bce                 mov ecx, esi
// 006e6b17  e864f3ffff           call 0x6e5e80
// 006e6b1c  5f                   pop edi
// 006e6b1d  5e                   pop esi
// 006e6b1e  5d                   pop ebp
// 006e6b1f  5b                   pop ebx
// 006e6b20  c21000               ret 0x10
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneManager.cpp (function ?OnWndMsg@CXTPDockingPaneManager@@MAEHIIJPAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp
