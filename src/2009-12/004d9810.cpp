// roc 2009-12 004d9810  unit: G3D::Win32Window  size: 491 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d9810
//
// 004d9810  6aff                 push -1
// 004d9812  68f13d9300           push 0x933df1
// 004d9817  64a100000000         mov eax, dword ptr fs:[0]
// 004d981d  50                   push eax
// 004d981e  64892500000000       mov dword ptr fs:[0], esp
// 004d9825  83ec0c               sub esp, 0xc
// 004d9828  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004d982c  53                   push ebx
// 004d982d  55                   push ebp
// 004d982e  56                   push esi
// 004d982f  57                   push edi
// 004d9830  8bf9                 mov edi, ecx
// 004d9832  8b7704               mov esi, dword ptr [edi + 4]
// 004d9835  3bc6                 cmp eax, esi
// 004d9837  897c2414             mov dword ptr [esp + 0x14], edi
// 004d983b  89742410             mov dword ptr [esp + 0x10], esi
// 004d983f  894704               mov dword ptr [edi + 4], eax
// 004d9842  7d5b                 jge 0x4d989f
// 004d9844  8d2cc500000000       lea ebp, [eax*8]
// 004d984b  2be8                 sub ebp, eax
// 004d984d  03ed                 add ebp, ebp
// 004d984f  03ed                 add ebp, ebp
// 004d9851  8bde                 mov ebx, esi
// 004d9853  03ed                 add ebp, ebp
// 004d9855  2bd8                 sub ebx, eax
// 004d9857  8b37                 mov esi, dword ptr [edi]
// 004d9859  03f5                 add esi, ebp
// 004d985b  89742418             mov dword ptr [esp + 0x18], esi
// 004d985f  8b462c               mov eax, dword ptr [esi + 0x2c]
// 004d9862  50                   push eax
// 004d9863  c744242800000000     mov dword ptr [esp + 0x28], 0
// 004d986b  e8700b1100           call 0x5ea3e0
// 004d9870  33c0                 xor eax, eax
// 004d9872  83c404               add esp, 4
// 004d9875  8d4e04               lea ecx, [esi + 4]
// 004d9878  89462c               mov dword ptr [esi + 0x2c], eax
// 004d987b  894630               mov dword ptr [esi + 0x30], eax
// 004d987e  894634               mov dword ptr [esi + 0x34], eax
// 004d9881  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 004d9889  ff15e4b69800         call dword ptr [0x98b6e4]
// 004d988f  83c538               add ebp, 0x38
// 004d9892  83eb01               sub ebx, 1
// 004d9895  75c0                 jne 0x4d9857
// 004d9897  8b742410             mov esi, dword ptr [esp + 0x10]
// 004d989b  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 004d989f  f605ecd8b70001       test byte ptr [0xb7d8ec], 1
// 004d98a6  7514                 jne 0x4d98bc
// 004d98a8  830decd8b70001       or dword ptr [0xb7d8ec], 1
// 004d98af  bd0a000000           mov ebp, 0xa
// 004d98b4  892de8d8b700         mov dword ptr [0xb7d8e8], ebp
// 004d98ba  eb06                 jmp 0x4d98c2
// 004d98bc  8b2de8d8b700         mov ebp, dword ptr [0xb7d8e8]
// 004d98c2  8b4f04               mov ecx, dword ptr [edi + 4]
// 004d98c5  8b5708               mov edx, dword ptr [edi + 8]
// 004d98c8  3bca                 cmp ecx, edx
// 004d98ca  0f8e9a000000         jle 0x4d996a
// 004d98d0  33db                 xor ebx, ebx
// 004d98d2  3bd3                 cmp edx, ebx
// 004d98d4  7514                 jne 0x4d98ea
// 004d98d6  56                   push esi
// 004d98d7  8bcf                 mov ecx, edi
// 004d98d9  894708               mov dword ptr [edi + 8], eax
// 004d98dc  e8dff4ffff           call 0x4d8dc0
// 004d98e1  8b742410             mov esi, dword ptr [esp + 0x10]
// 004d98e5  e9b1000000           jmp 0x4d999b
// 004d98ea  3bcd                 cmp ecx, ebp
// 004d98ec  7d14                 jge 0x4d9902
// 004d98ee  56                   push esi
// 004d98ef  8bcf                 mov ecx, edi
// 004d98f1  896f08               mov dword ptr [edi + 8], ebp
// 004d98f4  e8c7f4ffff           call 0x4d8dc0
// 004d98f9  8b742410             mov esi, dword ptr [esp + 0x10]
// 004d98fd  e999000000           jmp 0x4d999b
// 004d9902  f30f100590269b00     movss xmm0, dword ptr [0x9b2690]
// 004d990a  8d04d500000000       lea eax, [edx*8]
// 004d9911  2bc2                 sub eax, edx
// 004d9913  03c0                 add eax, eax
// 004d9915  03c0                 add eax, eax
// 004d9917  03c0                 add eax, eax
// 004d9919  3d801a0600           cmp eax, 0x61a80
// 004d991e  760a                 jbe 0x4d992a
// 004d9920  f30f1005b0279b00     movss xmm0, dword ptr [0x9b27b0]
// 004d9928  eb0f                 jmp 0x4d9939
// 004d992a  3d00fa0000           cmp eax, 0xfa00
// 004d992f  7608                 jbe 0x4d9939
// 004d9931  f30f100524169b00     movss xmm0, dword ptr [0x9b1624]
// 004d9939  8bc2                 mov eax, edx
// 004d993b  f30f2ac8             cvtsi2ss xmm1, eax
// 004d993f  f30f59c8             mulss xmm1, xmm0
// 004d9943  f30f2cd1             cvttss2si edx, xmm1
// 004d9947  2bd0                 sub edx, eax
// 004d9949  8d040a               lea eax, [edx + ecx]
// 004d994c  894708               mov dword ptr [edi + 8], eax
// 004d994f  8b0de8d8b700         mov ecx, dword ptr [0xb7d8e8]
// 004d9955  3bc1                 cmp eax, ecx
// 004d9957  7d03                 jge 0x4d995c
// 004d9959  894f08               mov dword ptr [edi + 8], ecx
// 004d995c  56                   push esi
// 004d995d  8bcf                 mov ecx, edi
// 004d995f  e85cf4ffff           call 0x4d8dc0
// 004d9964  8b742410             mov esi, dword ptr [esp + 0x10]
// 004d9968  eb31                 jmp 0x4d999b
// 004d996a  b856555555           mov eax, 0x55555556
// 004d996f  f7ea                 imul edx
// 004d9971  8bc2                 mov eax, edx
// 004d9973  c1e81f               shr eax, 0x1f
// 004d9976  03c2                 add eax, edx
// 004d9978  3bc8                 cmp ecx, eax
// 004d997a  7f1d                 jg 0x4d9999
// 004d997c  807c243000           cmp byte ptr [esp + 0x30], 0
// 004d9981  7416                 je 0x4d9999
// 004d9983  3bcd                 cmp ecx, ebp
// 004d9985  7e12                 jle 0x4d9999
// 004d9987  3bce                 cmp ecx, esi
// 004d9989  7c02                 jl 0x4d998d
// 004d998b  8bce                 mov ecx, esi
// 004d998d  51                   push ecx
// 004d998e  8bcf                 mov ecx, edi
// 004d9990  e82bf4ffff           call 0x4d8dc0
// 004d9995  8b742410             mov esi, dword ptr [esp + 0x10]
// 004d9999  33db                 xor ebx, ebx
// 004d999b  3b7704               cmp esi, dword ptr [edi + 4]
// 004d999e  89742430             mov dword ptr [esp + 0x30], esi
// 004d99a2  7d42                 jge 0x4d99e6
// 004d99a4  8b17                 mov edx, dword ptr [edi]
// 004d99a6  8d0cf500000000       lea ecx, [esi*8]
// 004d99ad  2bce                 sub ecx, esi
// 004d99af  8d2cca               lea ebp, [edx + ecx*8]
// 004d99b2  896c242c             mov dword ptr [esp + 0x2c], ebp
// 004d99b6  c744242401000000     mov dword ptr [esp + 0x24], 1
// 004d99be  3beb                 cmp ebp, ebx
// 004d99c0  7412                 je 0x4d99d4
// 004d99c2  8d4d04               lea ecx, [ebp + 4]
// 004d99c5  ff15e8b69800         call dword ptr [0x98b6e8]
// 004d99cb  895d30               mov dword ptr [ebp + 0x30], ebx
// 004d99ce  895d34               mov dword ptr [ebp + 0x34], ebx
// 004d99d1  895d2c               mov dword ptr [ebp + 0x2c], ebx
// 004d99d4  46                   inc esi
// 004d99d5  3b7704               cmp esi, dword ptr [edi + 4]
// 004d99d8  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 004d99e0  89742430             mov dword ptr [esp + 0x30], esi
// 004d99e4  7cbe                 jl 0x4d99a4
// 004d99e6  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004d99ea  5f                   pop edi
// 004d99eb  5e                   pop esi
// 004d99ec  5d                   pop ebp
// 004d99ed  5b                   pop ebx
// 004d99ee  64890d00000000       mov dword ptr fs:[0], ecx
// 004d99f5  83c418               add esp, 0x18
// 004d99f8  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?resize@?$Array@UJoystickInfo@_DirectInput@_internal@G3D@@@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
