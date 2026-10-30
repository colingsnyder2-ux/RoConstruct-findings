// roc 2012-06 00a45b40  unit: CXTPDockingPaneContextAlphaWnd  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a45b40
//
// 00a45b40  6aff                 push -1
// 00a45b42  68a867ae00           push 0xae67a8
// 00a45b47  64a100000000         mov eax, dword ptr fs:[0]
// 00a45b4d  50                   push eax
// 00a45b4e  83ec68               sub esp, 0x68
// 00a45b51  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a45b56  33c4                 xor eax, esp
// 00a45b58  89442464             mov dword ptr [esp + 0x64], eax
// 00a45b5c  56                   push esi
// 00a45b5d  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a45b62  33c4                 xor eax, esp
// 00a45b64  50                   push eax
// 00a45b65  8d442470             lea eax, [esp + 0x70]
// 00a45b69  64a300000000         mov dword ptr fs:[0], eax
// 00a45b6f  8bf1                 mov esi, ecx
// 00a45b71  56                   push esi
// 00a45b72  8d4c241c             lea ecx, [esp + 0x1c]
// 00a45b76  e8f3cef3ff           call 0x982a6e
// 00a45b7b  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00a45b7e  8d442408             lea eax, [esp + 8]
// 00a45b82  50                   push eax
// 00a45b83  51                   push ecx
// 00a45b84  c784248000000000000000 mov dword ptr [esp + 0x80], 0
// 00a45b8f  ff15d83ab200         call dword ptr [0xb23ad8]
// 00a45b95  6a0d                 push 0xd
// 00a45b97  ff15d83cb200         call dword ptr [0xb23cd8]
// 00a45b9d  50                   push eax
// 00a45b9e  8d54240c             lea edx, [esp + 0xc]
// 00a45ba2  52                   push edx
// 00a45ba3  8d4c2420             lea ecx, [esp + 0x20]
// 00a45ba7  e800d3f3ff           call 0x982eac
// 00a45bac  8d4c2418             lea ecx, [esp + 0x18]
// 00a45bb0  c7442478ffffffff     mov dword ptr [esp + 0x78], 0xffffffff
// 00a45bb8  e8abcef3ff           call 0x982a68
// 00a45bbd  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 00a45bc1  64890d00000000       mov dword ptr fs:[0], ecx
// 00a45bc8  59                   pop ecx
// 00a45bc9  5e                   pop esi
// 00a45bca  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 00a45bce  33cc                 xor ecx, esp
// 00a45bd0  e862def3ff           call 0x983a37
// 00a45bd5  83c474               add esp, 0x74
// 00a45bd8  c3                   ret 
// copied from an identical function in another client (function ?OnPaint@CXTPDockingPaneContextAlphaWnd@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-vc8-shared-mfc Source/DockingPane/XTPDockingPaneContext.cpp