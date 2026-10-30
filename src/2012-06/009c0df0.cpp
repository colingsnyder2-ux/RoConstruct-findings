// from server: 100% by auto
// roc 2012-06 009c0df0  unit: CXTTreeBase  size: 179 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c0df0
//
// 009c0df0  83ec10               sub esp, 0x10
// 009c0df3  56                   push esi
// 009c0df4  8bf1                 mov esi, ecx
// 009c0df6  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 009c0df9  e8d4870d00           call 0xa995d2
// 009c0dfe  a900020000           test eax, 0x200
// 009c0e03  0f848b000000         je 0x9c0e94
// 009c0e09  837c241855           cmp dword ptr [esp + 0x18], 0x55
// 009c0e0e  0f8580000000         jne 0x9c0e94
// 009c0e14  837e1400             cmp dword ptr [esi + 0x14], 0
// 009c0e18  7464                 je 0x9c0e7e
// 009c0e1a  53                   push ebx
// 009c0e1b  57                   push edi
// 009c0e1c  ff15b03cb200         call dword ptr [0xb23cb0]
// 009c0e22  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 009c0e25  8b5120               mov edx, dword ptr [ecx + 0x20]
// 009c0e28  0fbff8               movsx edi, ax
// 009c0e2b  c1e810               shr eax, 0x10
// 009c0e2e  0fbfd8               movsx ebx, ax
// 009c0e31  8d44240c             lea eax, [esp + 0xc]
// 009c0e35  50                   push eax
// 009c0e36  52                   push edx
// 009c0e37  ff15f83ab200         call dword ptr [0xb23af8]
// 009c0e3d  53                   push ebx
// 009c0e3e  57                   push edi
// 009c0e3f  8d442414             lea eax, [esp + 0x14]
// 009c0e43  50                   push eax
// 009c0e44  ff15483bb200         call dword ptr [0xb23b48]
// 009c0e4a  5f                   pop edi
// 009c0e4b  5b                   pop ebx
// 009c0e4c  85c0                 test eax, eax
// 009c0e4e  754c                 jne 0x9c0e9c
// 009c0e50  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 009c0e53  8b5120               mov edx, dword ptr [ecx + 0x20]
// 009c0e56  6a55                 push 0x55
// 009c0e58  52                   push edx
// 009c0e59  ff15083cb200         call dword ptr [0xb23c08]
// 009c0e5f  8b4634               mov eax, dword ptr [esi + 0x34]
// 009c0e62  6a00                 push 0
// 009c0e64  c7461400000000       mov dword ptr [esi + 0x14], 0
// 009c0e6b  8b4820               mov ecx, dword ptr [eax + 0x20]
// 009c0e6e  6a00                 push 0
// 009c0e70  51                   push ecx
// 009c0e71  ff15ec3bb200         call dword ptr [0xb23bec]
// 009c0e77  5e                   pop esi
// 009c0e78  83c410               add esp, 0x10
// 009c0e7b  c20400               ret 4
// 009c0e7e  8b5634               mov edx, dword ptr [esi + 0x34]
// 009c0e81  8b4220               mov eax, dword ptr [edx + 0x20]
// 009c0e84  6a55                 push 0x55
// 009c0e86  50                   push eax
// 009c0e87  ff15083cb200         call dword ptr [0xb23c08]
// 009c0e8d  5e                   pop esi
// 009c0e8e  83c410               add esp, 0x10
// 009c0e91  c20400               ret 4
// 009c0e94  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 009c0e97  e84218fcff           call 0x9826de
// 009c0e9c  5e                   pop esi
// 009c0e9d  83c410               add esp, 0x10
// 009c0ea0  c20400               ret 4
// library xtp-15.2.1/Source\Controls\Tree\XTPTreeBase.cpp (function ?OnTimer@CXTPTreeBase@@IAEXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Tree/XTPTreeBase.cpp
