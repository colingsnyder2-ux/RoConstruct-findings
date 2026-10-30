// roc 2009-06 0075f360  unit: CXTPDockingPaneManager  size: 227 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0075f360
//
// 0075f360  53                   push ebx
// 0075f361  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0075f365  55                   push ebp
// 0075f366  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0075f36a  56                   push esi
// 0075f36b  57                   push edi
// 0075f36c  8bf1                 mov esi, ecx
// 0075f36e  83fd02               cmp ebp, 2
// 0075f371  754f                 jne 0x75f3c2
// 0075f373  83be1001000000       cmp dword ptr [esi + 0x110], 0
// 0075f37a  742c                 je 0x75f3a8
// 0075f37c  6850db7500           push 0x75db50
// 0075f381  b9c826a500           mov ecx, 0xa526c8
// 0075f386  c7861001000000000000 mov dword ptr [esi + 0x110], 0
// 0075f390  e86bcb0e00           call 0x84bf00
// 0075f395  85c0                 test eax, eax
// 0075f397  7505                 jne 0x75f39e
// 0075f399  e84699fbff           call 0x718ce4
// 0075f39e  6a00                 push 0
// 0075f3a0  56                   push esi
// 0075f3a1  8bc8                 mov ecx, eax
// 0075f3a3  e8e8440700           call 0x7d3890
// 0075f3a8  8b542420             mov edx, dword ptr [esp + 0x20]
// 0075f3ac  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0075f3b0  52                   push edx
// 0075f3b1  50                   push eax
// 0075f3b2  53                   push ebx
// 0075f3b3  55                   push ebp
// 0075f3b4  8bce                 mov ecx, esi
// 0075f3b6  e8f797fbff           call 0x718bb2
// 0075f3bb  5f                   pop edi
// 0075f3bc  5e                   pop esi
// 0075f3bd  5d                   pop ebp
// 0075f3be  5b                   pop ebx
// 0075f3bf  c21000               ret 0x10
// 0075f3c2  81fd12010000         cmp ebp, 0x112
// 0075f3c8  75de                 jne 0x75f3a8
// 0075f3ca  81fb00f10000         cmp ebx, 0xf100
// 0075f3d0  7540                 jne 0x75f412
// 0075f3d2  66837c241c2d         cmp word ptr [esp + 0x1c], 0x2d
// 0075f3d8  75ce                 jne 0x75f3a8
// 0075f3da  8bbed8000000         mov edi, dword ptr [esi + 0xd8]
// 0075f3e0  85ff                 test edi, edi
// 0075f3e2  74c4                 je 0x75f3a8
// 0075f3e4  8bcf                 mov ecx, edi
// 0075f3e6  e8c5250200           call 0x7819b0
// 0075f3eb  85c0                 test eax, eax
// 0075f3ed  75b9                 jne 0x75f3a8
// 0075f3ef  8b4720               mov eax, dword ptr [edi + 0x20]
// 0075f3f2  8b501c               mov edx, dword ptr [eax + 0x1c]
// 0075f3f5  8d4f20               lea ecx, [edi + 0x20]
// 0075f3f8  ffd2                 call edx
// 0075f3fa  85c0                 test eax, eax
// 0075f3fc  75aa                 jne 0x75f3a8
// 0075f3fe  57                   push edi
// 0075f3ff  8bce                 mov ecx, esi
// 0075f401  e82af2ffff           call 0x75e630
// 0075f406  5f                   pop edi
// 0075f407  5e                   pop esi
// 0075f408  5d                   pop ebp
// 0075f409  b801000000           mov eax, 1
// 0075f40e  5b                   pop ebx
// 0075f40f  c21000               ret 0x10
// 0075f412  81fb40f00000         cmp ebx, 0xf040
// 0075f418  7408                 je 0x75f422
// 0075f41a  81fb50f00000         cmp ebx, 0xf050
// 0075f420  7586                 jne 0x75f3a8
// 0075f422  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 0075f428  33c9                 xor ecx, ecx
// 0075f42a  81fb40f00000         cmp ebx, 0xf040
// 0075f430  0f94c1               sete cl
// 0075f433  51                   push ecx
// 0075f434  50                   push eax
// 0075f435  8bce                 mov ecx, esi
// 0075f437  e864f3ffff           call 0x75e7a0
// 0075f43c  5f                   pop edi
// 0075f43d  5e                   pop esi
// 0075f43e  5d                   pop ebp
// 0075f43f  5b                   pop ebx
// 0075f440  c21000               ret 0x10
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneManager.cpp (function ?OnWndMsg@CXTPDockingPaneManager@@MAEHIIJPAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp
