// roc 2012-06 009c7fa0  unit: CXTPDockingPaneManager  size: 227 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c7fa0
//
// 009c7fa0  53                   push ebx
// 009c7fa1  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 009c7fa5  55                   push ebp
// 009c7fa6  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 009c7faa  56                   push esi
// 009c7fab  57                   push edi
// 009c7fac  8bf1                 mov esi, ecx
// 009c7fae  83fd02               cmp ebp, 2
// 009c7fb1  754f                 jne 0x9c8002
// 009c7fb3  83be1001000000       cmp dword ptr [esi + 0x110], 0
// 009c7fba  742c                 je 0x9c7fe8
// 009c7fbc  6860679c00           push 0x9c6760
// 009c7fc1  b9aca0e500           mov ecx, 0xe5a0ac
// 009c7fc6  c7861001000000000000 mov dword ptr [esi + 0x110], 0
// 009c7fd0  e8a9150d00           call 0xa9957e
// 009c7fd5  85c0                 test eax, eax
// 009c7fd7  7505                 jne 0x9c7fde
// 009c7fd9  e8e2a3fbff           call 0x9823c0
// 009c7fde  6a00                 push 0
// 009c7fe0  56                   push esi
// 009c7fe1  8bc8                 mov ecx, eax
// 009c7fe3  e838fd0600           call 0xa37d20
// 009c7fe8  8b542420             mov edx, dword ptr [esp + 0x20]
// 009c7fec  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 009c7ff0  52                   push edx
// 009c7ff1  50                   push eax
// 009c7ff2  53                   push ebx
// 009c7ff3  55                   push ebp
// 009c7ff4  8bce                 mov ecx, esi
// 009c7ff6  e899a2fbff           call 0x982294
// 009c7ffb  5f                   pop edi
// 009c7ffc  5e                   pop esi
// 009c7ffd  5d                   pop ebp
// 009c7ffe  5b                   pop ebx
// 009c7fff  c21000               ret 0x10
// 009c8002  81fd12010000         cmp ebp, 0x112
// 009c8008  75de                 jne 0x9c7fe8
// 009c800a  81fb00f10000         cmp ebx, 0xf100
// 009c8010  7540                 jne 0x9c8052
// 009c8012  66837c241c2d         cmp word ptr [esp + 0x1c], 0x2d
// 009c8018  75ce                 jne 0x9c7fe8
// 009c801a  8bbed8000000         mov edi, dword ptr [esi + 0xd8]
// 009c8020  85ff                 test edi, edi
// 009c8022  74c4                 je 0x9c7fe8
// 009c8024  8bcf                 mov ecx, edi
// 009c8026  e8e5be0100           call 0x9e3f10
// 009c802b  85c0                 test eax, eax
// 009c802d  75b9                 jne 0x9c7fe8
// 009c802f  8b4720               mov eax, dword ptr [edi + 0x20]
// 009c8032  8b501c               mov edx, dword ptr [eax + 0x1c]
// 009c8035  8d4f20               lea ecx, [edi + 0x20]
// 009c8038  ffd2                 call edx
// 009c803a  85c0                 test eax, eax
// 009c803c  75aa                 jne 0x9c7fe8
// 009c803e  57                   push edi
// 009c803f  8bce                 mov ecx, esi
// 009c8041  e82af2ffff           call 0x9c7270
// 009c8046  5f                   pop edi
// 009c8047  5e                   pop esi
// 009c8048  5d                   pop ebp
// 009c8049  b801000000           mov eax, 1
// 009c804e  5b                   pop ebx
// 009c804f  c21000               ret 0x10
// 009c8052  81fb40f00000         cmp ebx, 0xf040
// 009c8058  7408                 je 0x9c8062
// 009c805a  81fb50f00000         cmp ebx, 0xf050
// 009c8060  7586                 jne 0x9c7fe8
// 009c8062  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 009c8068  33c9                 xor ecx, ecx
// 009c806a  81fb40f00000         cmp ebx, 0xf040
// 009c8070  0f94c1               sete cl
// 009c8073  51                   push ecx
// 009c8074  50                   push eax
// 009c8075  8bce                 mov ecx, esi
// 009c8077  e864f3ffff           call 0x9c73e0
// 009c807c  5f                   pop edi
// 009c807d  5e                   pop esi
// 009c807e  5d                   pop ebp
// 009c807f  5b                   pop ebx
// 009c8080  c21000               ret 0x10
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneManager.cpp (function ?OnWndMsg@CXTPDockingPaneManager@@MAEHIIJPAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp
