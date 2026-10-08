// from server: 100% by auto
// roc 2010-06 004933b0  unit: seg_00490000  size: 241 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004933b0
//
// 004933b0  8b442404             mov eax, dword ptr [esp + 4]
// 004933b4  55                   push ebp
// 004933b5  8b6904               mov ebp, dword ptr [ecx + 4]
// 004933b8  ba01000000           mov edx, 1
// 004933bd  56                   push esi
// 004933be  894104               mov dword ptr [ecx + 4], eax
// 004933c1  57                   push edi
// 004933c2  8415dc3cc000         test byte ptr [0xc03cdc], dl
// 004933c8  7513                 jne 0x4933dd
// 004933ca  0915dc3cc000         or dword ptr [0xc03cdc], edx
// 004933d0  bf10000000           mov edi, 0x10
// 004933d5  893dd83cc000         mov dword ptr [0xc03cd8], edi
// 004933db  eb06                 jmp 0x4933e3
// 004933dd  8b3dd83cc000         mov edi, dword ptr [0xc03cd8]
// 004933e3  8b5108               mov edx, dword ptr [ecx + 8]
// 004933e6  8b7104               mov esi, dword ptr [ecx + 4]
// 004933e9  3bf2                 cmp esi, edx
// 004933eb  0f8e81000000         jle 0x493472
// 004933f1  85d2                 test edx, edx
// 004933f3  750f                 jne 0x493404
// 004933f5  55                   push ebp
// 004933f6  894108               mov dword ptr [ecx + 8], eax
// 004933f9  e8a2f3ffff           call 0x4927a0
// 004933fe  5f                   pop edi
// 004933ff  5e                   pop esi
// 00493400  5d                   pop ebp
// 00493401  c20800               ret 8
// 00493404  3bf7                 cmp esi, edi
// 00493406  7d0f                 jge 0x493417
// 00493408  55                   push ebp
// 00493409  897908               mov dword ptr [ecx + 8], edi
// 0049340c  e88ff3ffff           call 0x4927a0
// 00493411  5f                   pop edi
// 00493412  5e                   pop esi
// 00493413  5d                   pop ebp
// 00493414  c20800               ret 8
// 00493417  f30f10050834a100     movss xmm0, dword ptr [0xa13408]
// 0049341f  8bc2                 mov eax, edx
// 00493421  03c0                 add eax, eax
// 00493423  3d801a0600           cmp eax, 0x61a80
// 00493428  760a                 jbe 0x493434
// 0049342a  f30f10050434a100     movss xmm0, dword ptr [0xa13404]
// 00493432  eb0f                 jmp 0x493443
// 00493434  3d00fa0000           cmp eax, 0xfa00
// 00493439  7608                 jbe 0x493443
// 0049343b  f30f1005d427a100     movss xmm0, dword ptr [0xa127d4]
// 00493443  8bc2                 mov eax, edx
// 00493445  f30f2ac8             cvtsi2ss xmm1, eax
// 00493449  f30f59c8             mulss xmm1, xmm0
// 0049344d  f30f2cd1             cvttss2si edx, xmm1
// 00493451  2bd0                 sub edx, eax
// 00493453  8d0432               lea eax, [edx + esi]
// 00493456  894108               mov dword ptr [ecx + 8], eax
// 00493459  8b15d83cc000         mov edx, dword ptr [0xc03cd8]
// 0049345f  3bc2                 cmp eax, edx
// 00493461  7d03                 jge 0x493466
// 00493463  895108               mov dword ptr [ecx + 8], edx
// 00493466  55                   push ebp
// 00493467  e834f3ffff           call 0x4927a0
// 0049346c  5f                   pop edi
// 0049346d  5e                   pop esi
// 0049346e  5d                   pop ebp
// 0049346f  c20800               ret 8
// 00493472  b856555555           mov eax, 0x55555556
// 00493477  f7ea                 imul edx
// 00493479  8bc2                 mov eax, edx
// 0049347b  c1e81f               shr eax, 0x1f
// 0049347e  03c2                 add eax, edx
// 00493480  3bf0                 cmp esi, eax
// 00493482  7f17                 jg 0x49349b
// 00493484  807c241400           cmp byte ptr [esp + 0x14], 0
// 00493489  7410                 je 0x49349b
// 0049348b  3bf7                 cmp esi, edi
// 0049348d  7e0c                 jle 0x49349b
// 0049348f  3bf5                 cmp esi, ebp
// 00493491  7c02                 jl 0x493495
// 00493493  8bf5                 mov esi, ebp
// 00493495  56                   push esi
// 00493496  e805f3ffff           call 0x4927a0
// 0049349b  5f                   pop edi
// 0049349c  5e                   pop esi
// 0049349d  5d                   pop ebp
// 0049349e  c20800               ret 8
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?resize@?$Array@G@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
