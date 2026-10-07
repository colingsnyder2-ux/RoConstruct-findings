// roc 2010-06 0048b9a0  unit: G3D::Win32Window  size: 491 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0048b9a0
//
// 0048b9a0  6aff                 push -1
// 0048b9a2  6871629800           push 0x986271
// 0048b9a7  64a100000000         mov eax, dword ptr fs:[0]
// 0048b9ad  50                   push eax
// 0048b9ae  64892500000000       mov dword ptr fs:[0], esp
// 0048b9b5  83ec0c               sub esp, 0xc
// 0048b9b8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0048b9bc  53                   push ebx
// 0048b9bd  55                   push ebp
// 0048b9be  56                   push esi
// 0048b9bf  57                   push edi
// 0048b9c0  8bf9                 mov edi, ecx
// 0048b9c2  8b7704               mov esi, dword ptr [edi + 4]
// 0048b9c5  3bc6                 cmp eax, esi
// 0048b9c7  897c2414             mov dword ptr [esp + 0x14], edi
// 0048b9cb  89742410             mov dword ptr [esp + 0x10], esi
// 0048b9cf  894704               mov dword ptr [edi + 4], eax
// 0048b9d2  7d5b                 jge 0x48ba2f
// 0048b9d4  8d2cc500000000       lea ebp, [eax*8]
// 0048b9db  2be8                 sub ebp, eax
// 0048b9dd  03ed                 add ebp, ebp
// 0048b9df  03ed                 add ebp, ebp
// 0048b9e1  8bde                 mov ebx, esi
// 0048b9e3  03ed                 add ebp, ebp
// 0048b9e5  2bd8                 sub ebx, eax
// 0048b9e7  8b37                 mov esi, dword ptr [edi]
// 0048b9e9  03f5                 add esi, ebp
// 0048b9eb  89742418             mov dword ptr [esp + 0x18], esi
// 0048b9ef  8b462c               mov eax, dword ptr [esi + 0x2c]
// 0048b9f2  50                   push eax
// 0048b9f3  c744242800000000     mov dword ptr [esp + 0x28], 0
// 0048b9fb  e8c01f0c00           call 0x54d9c0
// 0048ba00  33c0                 xor eax, eax
// 0048ba02  83c404               add esp, 4
// 0048ba05  8d4e04               lea ecx, [esi + 4]
// 0048ba08  89462c               mov dword ptr [esi + 0x2c], eax
// 0048ba0b  894630               mov dword ptr [esi + 0x30], eax
// 0048ba0e  894634               mov dword ptr [esi + 0x34], eax
// 0048ba11  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 0048ba19  ff1500a49e00         call dword ptr [0x9ea400]
// 0048ba1f  83c538               add ebp, 0x38
// 0048ba22  83eb01               sub ebx, 1
// 0048ba25  75c0                 jne 0x48b9e7
// 0048ba27  8b742410             mov esi, dword ptr [esp + 0x10]
// 0048ba2b  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0048ba2f  f6059c38c00001       test byte ptr [0xc0389c], 1
// 0048ba36  7514                 jne 0x48ba4c
// 0048ba38  830d9c38c00001       or dword ptr [0xc0389c], 1
// 0048ba3f  bd0a000000           mov ebp, 0xa
// 0048ba44  892d9838c000         mov dword ptr [0xc03898], ebp
// 0048ba4a  eb06                 jmp 0x48ba52
// 0048ba4c  8b2d9838c000         mov ebp, dword ptr [0xc03898]
// 0048ba52  8b4f04               mov ecx, dword ptr [edi + 4]
// 0048ba55  8b5708               mov edx, dword ptr [edi + 8]
// 0048ba58  3bca                 cmp ecx, edx
// 0048ba5a  0f8e9a000000         jle 0x48bafa
// 0048ba60  33db                 xor ebx, ebx
// 0048ba62  3bd3                 cmp edx, ebx
// 0048ba64  7514                 jne 0x48ba7a
// 0048ba66  56                   push esi
// 0048ba67  8bcf                 mov ecx, edi
// 0048ba69  894708               mov dword ptr [edi + 8], eax
// 0048ba6c  e8dff4ffff           call 0x48af50
// 0048ba71  8b742410             mov esi, dword ptr [esp + 0x10]
// 0048ba75  e9b1000000           jmp 0x48bb2b
// 0048ba7a  3bcd                 cmp ecx, ebp
// 0048ba7c  7d14                 jge 0x48ba92
// 0048ba7e  56                   push esi
// 0048ba7f  8bcf                 mov ecx, edi
// 0048ba81  896f08               mov dword ptr [edi + 8], ebp
// 0048ba84  e8c7f4ffff           call 0x48af50
// 0048ba89  8b742410             mov esi, dword ptr [esp + 0x10]
// 0048ba8d  e999000000           jmp 0x48bb2b
// 0048ba92  f30f10050834a100     movss xmm0, dword ptr [0xa13408]
// 0048ba9a  8d04d500000000       lea eax, [edx*8]
// 0048baa1  2bc2                 sub eax, edx
// 0048baa3  03c0                 add eax, eax
// 0048baa5  03c0                 add eax, eax
// 0048baa7  03c0                 add eax, eax
// 0048baa9  3d801a0600           cmp eax, 0x61a80
// 0048baae  760a                 jbe 0x48baba
// 0048bab0  f30f10050434a100     movss xmm0, dword ptr [0xa13404]
// 0048bab8  eb0f                 jmp 0x48bac9
// 0048baba  3d00fa0000           cmp eax, 0xfa00
// 0048babf  7608                 jbe 0x48bac9
// 0048bac1  f30f1005d427a100     movss xmm0, dword ptr [0xa127d4]
// 0048bac9  8bc2                 mov eax, edx
// 0048bacb  f30f2ac8             cvtsi2ss xmm1, eax
// 0048bacf  f30f59c8             mulss xmm1, xmm0
// 0048bad3  f30f2cd1             cvttss2si edx, xmm1
// 0048bad7  2bd0                 sub edx, eax
// 0048bad9  8d040a               lea eax, [edx + ecx]
// 0048badc  894708               mov dword ptr [edi + 8], eax
// 0048badf  8b0d9838c000         mov ecx, dword ptr [0xc03898]
// 0048bae5  3bc1                 cmp eax, ecx
// 0048bae7  7d03                 jge 0x48baec
// 0048bae9  894f08               mov dword ptr [edi + 8], ecx
// 0048baec  56                   push esi
// 0048baed  8bcf                 mov ecx, edi
// 0048baef  e85cf4ffff           call 0x48af50
// 0048baf4  8b742410             mov esi, dword ptr [esp + 0x10]
// 0048baf8  eb31                 jmp 0x48bb2b
// 0048bafa  b856555555           mov eax, 0x55555556
// 0048baff  f7ea                 imul edx
// 0048bb01  8bc2                 mov eax, edx
// 0048bb03  c1e81f               shr eax, 0x1f
// 0048bb06  03c2                 add eax, edx
// 0048bb08  3bc8                 cmp ecx, eax
// 0048bb0a  7f1d                 jg 0x48bb29
// 0048bb0c  807c243000           cmp byte ptr [esp + 0x30], 0
// 0048bb11  7416                 je 0x48bb29
// 0048bb13  3bcd                 cmp ecx, ebp
// 0048bb15  7e12                 jle 0x48bb29
// 0048bb17  3bce                 cmp ecx, esi
// 0048bb19  7c02                 jl 0x48bb1d
// 0048bb1b  8bce                 mov ecx, esi
// 0048bb1d  51                   push ecx
// 0048bb1e  8bcf                 mov ecx, edi
// 0048bb20  e82bf4ffff           call 0x48af50
// 0048bb25  8b742410             mov esi, dword ptr [esp + 0x10]
// 0048bb29  33db                 xor ebx, ebx
// 0048bb2b  3b7704               cmp esi, dword ptr [edi + 4]
// 0048bb2e  89742430             mov dword ptr [esp + 0x30], esi
// 0048bb32  7d42                 jge 0x48bb76
// 0048bb34  8b17                 mov edx, dword ptr [edi]
// 0048bb36  8d0cf500000000       lea ecx, [esi*8]
// 0048bb3d  2bce                 sub ecx, esi
// 0048bb3f  8d2cca               lea ebp, [edx + ecx*8]
// 0048bb42  896c242c             mov dword ptr [esp + 0x2c], ebp
// 0048bb46  c744242401000000     mov dword ptr [esp + 0x24], 1
// 0048bb4e  3beb                 cmp ebp, ebx
// 0048bb50  7412                 je 0x48bb64
// 0048bb52  8d4d04               lea ecx, [ebp + 4]
// 0048bb55  ff1504a49e00         call dword ptr [0x9ea404]
// 0048bb5b  895d30               mov dword ptr [ebp + 0x30], ebx
// 0048bb5e  895d34               mov dword ptr [ebp + 0x34], ebx
// 0048bb61  895d2c               mov dword ptr [ebp + 0x2c], ebx
// 0048bb64  46                   inc esi
// 0048bb65  3b7704               cmp esi, dword ptr [edi + 4]
// 0048bb68  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 0048bb70  89742430             mov dword ptr [esp + 0x30], esi
// 0048bb74  7cbe                 jl 0x48bb34
// 0048bb76  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0048bb7a  5f                   pop edi
// 0048bb7b  5e                   pop esi
// 0048bb7c  5d                   pop ebp
// 0048bb7d  5b                   pop ebx
// 0048bb7e  64890d00000000       mov dword ptr fs:[0], ecx
// 0048bb85  83c418               add esp, 0x18
// 0048bb88  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?resize@?$Array@UJoystickInfo@_DirectInput@_internal@G3D@@@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
