// roc 2010-06 0048c820  unit: G3D::Win32Window  size: 344 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0048c820
//
// 0048c820  6aff                 push -1
// 0048c822  68095b9800           push 0x985b09
// 0048c827  64a100000000         mov eax, dword ptr fs:[0]
// 0048c82d  50                   push eax
// 0048c82e  64892500000000       mov dword ptr fs:[0], esp
// 0048c835  83ec20               sub esp, 0x20
// 0048c838  68031f0000           push 0x1f03
// 0048c83d  ff15acaa9e00         call dword ptr [0x9eaaac]
// 0048c843  50                   push eax
// 0048c844  8d4c2408             lea ecx, [esp + 8]
// 0048c848  ff1510a49e00         call dword ptr [0x9ea410]
// 0048c84e  6a17                 push 0x17
// 0048c850  6a00                 push 0
// 0048c852  685432a100           push 0xa13254
// 0048c857  8d4c2410             lea ecx, [esp + 0x10]
// 0048c85b  c744243400000000     mov dword ptr [esp + 0x34], 0
// 0048c863  ff1560a59e00         call dword ptr [0x9ea560]
// 0048c869  8b0d60a49e00         mov ecx, dword ptr [0x9ea460]
// 0048c86f  3b01                 cmp eax, dword ptr [ecx]
// 0048c871  8d4c2404             lea ecx, [esp + 4]
// 0048c875  0f95c2               setne dl
// 0048c878  8815cd38c000         mov byte ptr [0xc038cd], dl
// 0048c87e  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 0048c886  ff1500a49e00         call dword ptr [0x9ea400]
// 0048c88c  68ffff0f00           push 0xfffff
// 0048c891  ff15b4aa9e00         call dword ptr [0x9eaab4]
// 0048c897  8d0424               lea eax, [esp]
// 0048c89a  50                   push eax
// 0048c89b  6a01                 push 1
// 0048c89d  ff15d8aa9e00         call dword ptr [0x9eaad8]
// 0048c8a3  8b0c24               mov ecx, dword ptr [esp]
// 0048c8a6  51                   push ecx
// 0048c8a7  68e10d0000           push 0xde1
// 0048c8ac  ff15d4aa9e00         call dword ptr [0x9eaad4]
// 0048c8b2  803dcd38c00000       cmp byte ptr [0xc038cd], 0
// 0048c8b9  7412                 je 0x48c8cd
// 0048c8bb  6a01                 push 1
// 0048c8bd  6891810000           push 0x8191
// 0048c8c2  68e10d0000           push 0xde1
// 0048c8c7  ff15c8aa9e00         call dword ptr [0x9eaac8]
// 0048c8cd  56                   push esi
// 0048c8ce  6a30                 push 0x30
// 0048c8d0  e8adb33100           call 0x7a7c82
// 0048c8d5  6a30                 push 0x30
// 0048c8d7  8bf0                 mov esi, eax
// 0048c8d9  6a00                 push 0
// 0048c8db  56                   push esi
// 0048c8dc  e803c33100           call 0x7a8be4
// 0048c8e1  83c410               add esp, 0x10
// 0048c8e4  33c0                 xor eax, eax
// 0048c8e6  c60430ff             mov byte ptr [eax + esi], 0xff
// 0048c8ea  83c003               add eax, 3
// 0048c8ed  83f830               cmp eax, 0x30
// 0048c8f0  7cf4                 jl 0x48c8e6
// 0048c8f2  56                   push esi
// 0048c8f3  6801140000           push 0x1401
// 0048c8f8  6807190000           push 0x1907
// 0048c8fd  6a00                 push 0
// 0048c8ff  6a04                 push 4
// 0048c901  6a04                 push 4
// 0048c903  6851800000           push 0x8051
// 0048c908  6a00                 push 0
// 0048c90a  68e10d0000           push 0xde1
// 0048c90f  ff15c0aa9e00         call dword ptr [0x9eaac0]
// 0048c915  56                   push esi
// 0048c916  6801140000           push 0x1401
// 0048c91b  6807190000           push 0x1907
// 0048c920  6a00                 push 0
// 0048c922  68e10d0000           push 0xde1
// 0048c927  ff15d0aa9e00         call dword ptr [0x9eaad0]
// 0048c92d  803eff               cmp byte ptr [esi], 0xff
// 0048c930  7513                 jne 0x48c945
// 0048c932  807e0100             cmp byte ptr [esi + 1], 0
// 0048c936  750d                 jne 0x48c945
// 0048c938  807e0200             cmp byte ptr [esi + 2], 0
// 0048c93c  c605b138c00000       mov byte ptr [0xc038b1], 0
// 0048c943  7407                 je 0x48c94c
// 0048c945  c605b138c00001       mov byte ptr [0xc038b1], 1
// 0048c94c  56                   push esi
// 0048c94d  e8f4b23100           call 0x7a7c46
// 0048c952  83c404               add esp, 4
// 0048c955  8d542404             lea edx, [esp + 4]
// 0048c959  52                   push edx
// 0048c95a  6a01                 push 1
// 0048c95c  ff15f8aa9e00         call dword ptr [0x9eaaf8]
// 0048c962  ff15b8aa9e00         call dword ptr [0x9eaab8]
// 0048c968  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0048c96c  5e                   pop esi
// 0048c96d  64890d00000000       mov dword ptr fs:[0], ecx
// 0048c974  83c42c               add esp, 0x2c
// 0048c977  c3                   ret 
// library g3d-6.09/GLG3Dcpp\GLCaps.cpp (function ?checkBug_redBlueMipmapSwap@GLCaps@G3D@@CAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GLCaps.cpp
