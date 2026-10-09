// roc 2009-12 008b2c10  unit: CXTPDockingPaneTabbedContainer  size: 288 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b2c10
//
// 008b2c10  83ec18               sub esp, 0x18
// 008b2c13  53                   push ebx
// 008b2c14  57                   push edi
// 008b2c15  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 008b2c19  8bd9                 mov ebx, ecx
// 008b2c1b  85ff                 test edi, edi
// 008b2c1d  750d                 jne 0x8b2c2c
// 008b2c1f  5f                   pop edi
// 008b2c20  b857000780           mov eax, 0x80070057
// 008b2c25  5b                   pop ebx
// 008b2c26  83c418               add esp, 0x18
// 008b2c29  c20c00               ret 0xc
// 008b2c2c  56                   push esi
// 008b2c2d  33c0                 xor eax, eax
// 008b2c2f  8db3c8feffff         lea esi, [ebx - 0x138]
// 008b2c35  668907               mov word ptr [edi], ax
// 008b2c38  85f6                 test esi, esi
// 008b2c3a  7405                 je 0x8b2c41
// 008b2c3c  394620               cmp dword ptr [esi + 0x20], eax
// 008b2c3f  750e                 jne 0x8b2c4f
// 008b2c41  5e                   pop esi
// 008b2c42  5f                   pop edi
// 008b2c43  b801000000           mov eax, 1
// 008b2c48  5b                   pop ebx
// 008b2c49  83c418               add esp, 0x18
// 008b2c4c  c20c00               ret 0xc
// 008b2c4f  55                   push ebp
// 008b2c50  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 008b2c54  56                   push esi
// 008b2c55  8d4c241c             lea ecx, [esp + 0x1c]
// 008b2c59  e81286f9ff           call 0x84b270
// 008b2c5e  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008b2c62  51                   push ecx
// 008b2c63  55                   push ebp
// 008b2c64  50                   push eax
// 008b2c65  ff155cca9800         call dword ptr [0x98ca5c]
// 008b2c6b  85c0                 test eax, eax
// 008b2c6d  0f8486000000         je 0x8b2cf9
// 008b2c73  8b8be8feffff         mov ecx, dword ptr [ebx - 0x118]
// 008b2c79  8b542430             mov edx, dword ptr [esp + 0x30]
// 008b2c7d  8d442410             lea eax, [esp + 0x10]
// 008b2c81  50                   push eax
// 008b2c82  51                   push ecx
// 008b2c83  896c2418             mov dword ptr [esp + 0x18], ebp
// 008b2c87  8954241c             mov dword ptr [esp + 0x1c], edx
// 008b2c8b  ff1534cc9800         call dword ptr [0x98cc34]
// 008b2c91  8b542414             mov edx, dword ptr [esp + 0x14]
// 008b2c95  8b442410             mov eax, dword ptr [esp + 0x10]
// 008b2c99  52                   push edx
// 008b2c9a  50                   push eax
// 008b2c9b  8bce                 mov ecx, esi
// 008b2c9d  e83eecffff           call 0x8b18e0
// 008b2ca2  83f8fe               cmp eax, -2
// 008b2ca5  751b                 jne 0x8b2cc2
// 008b2ca7  5d                   pop ebp
// 008b2ca8  b903000000           mov ecx, 3
// 008b2cad  5e                   pop esi
// 008b2cae  66890f               mov word ptr [edi], cx
// 008b2cb1  c7470800000000       mov dword ptr [edi + 8], 0
// 008b2cb8  5f                   pop edi
// 008b2cb9  33c0                 xor eax, eax
// 008b2cbb  5b                   pop ebx
// 008b2cbc  83c418               add esp, 0x18
// 008b2cbf  c20c00               ret 0xc
// 008b2cc2  83f8ff               cmp eax, -1
// 008b2cc5  7541                 jne 0x8b2d08
// 008b2cc7  ba09000000           mov edx, 9
// 008b2ccc  668917               mov word ptr [edi], dx
// 008b2ccf  8b436c               mov eax, dword ptr [ebx + 0x6c]
// 008b2cd2  85c0                 test eax, eax
// 008b2cd4  7423                 je 0x8b2cf9
// 008b2cd6  8b80b4000000         mov eax, dword ptr [eax + 0xb4]
// 008b2cdc  83c708               add edi, 8
// 008b2cdf  57                   push edi
// 008b2ce0  68a04ba200           push 0xa24ba0
// 008b2ce5  6a00                 push 0
// 008b2ce7  50                   push eax
// 008b2ce8  8bcb                 mov ecx, ebx
// 008b2cea  e87197f8ff           call 0x83c460
// 008b2cef  5d                   pop ebp
// 008b2cf0  5e                   pop esi
// 008b2cf1  5f                   pop edi
// 008b2cf2  5b                   pop ebx
// 008b2cf3  83c418               add esp, 0x18
// 008b2cf6  c20c00               ret 0xc
// 008b2cf9  5d                   pop ebp
// 008b2cfa  5e                   pop esi
// 008b2cfb  5f                   pop edi
// 008b2cfc  b801000000           mov eax, 1
// 008b2d01  5b                   pop ebx
// 008b2d02  83c418               add esp, 0x18
// 008b2d05  c20c00               ret 0xc
// 008b2d08  b909000000           mov ecx, 9
// 008b2d0d  6a01                 push 1
// 008b2d0f  66890f               mov word ptr [edi], cx
// 008b2d12  50                   push eax
// 008b2d13  8bce                 mov ecx, esi
// 008b2d15  e8c6f6ffff           call 0x8b23e0
// 008b2d1a  8bc8                 mov ecx, eax
// 008b2d1c  e815370700           call 0x926436
// 008b2d21  5d                   pop ebp
// 008b2d22  5e                   pop esi
// 008b2d23  894708               mov dword ptr [edi + 8], eax
// 008b2d26  5f                   pop edi
// 008b2d27  33c0                 xor eax, eax
// 008b2d29  5b                   pop ebx
// 008b2d2a  83c418               add esp, 0x18
// 008b2d2d  c20c00               ret 0xc
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?AccessibleHitTest@CXTPDockingPaneTabbedContainer@@MAEJJJPAUtagVARIANT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
