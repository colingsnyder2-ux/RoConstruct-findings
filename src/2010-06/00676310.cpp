// from server: 100% by auto
// roc 2010-06 00676310  unit: RBX::Assembly  size: 243 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00676310
//
// 00676310  8b442404             mov eax, dword ptr [esp + 4]
// 00676314  55                   push ebp
// 00676315  8b6904               mov ebp, dword ptr [ecx + 4]
// 00676318  ba01000000           mov edx, 1
// 0067631d  56                   push esi
// 0067631e  894104               mov dword ptr [ecx + 4], eax
// 00676321  57                   push edi
// 00676322  841548dac100         test byte ptr [0xc1da48], dl
// 00676328  7513                 jne 0x67633d
// 0067632a  091548dac100         or dword ptr [0xc1da48], edx
// 00676330  bf0a000000           mov edi, 0xa
// 00676335  893d44dac100         mov dword ptr [0xc1da44], edi
// 0067633b  eb06                 jmp 0x676343
// 0067633d  8b3d44dac100         mov edi, dword ptr [0xc1da44]
// 00676343  8b5108               mov edx, dword ptr [ecx + 8]
// 00676346  8b7104               mov esi, dword ptr [ecx + 4]
// 00676349  3bf2                 cmp esi, edx
// 0067634b  0f8e83000000         jle 0x6763d4
// 00676351  85d2                 test edx, edx
// 00676353  750f                 jne 0x676364
// 00676355  55                   push ebp
// 00676356  894108               mov dword ptr [ecx + 8], eax
// 00676359  e8c220e1ff           call 0x488420
// 0067635e  5f                   pop edi
// 0067635f  5e                   pop esi
// 00676360  5d                   pop ebp
// 00676361  c20800               ret 8
// 00676364  3bf7                 cmp esi, edi
// 00676366  7d0f                 jge 0x676377
// 00676368  55                   push ebp
// 00676369  897908               mov dword ptr [ecx + 8], edi
// 0067636c  e8af20e1ff           call 0x488420
// 00676371  5f                   pop edi
// 00676372  5e                   pop esi
// 00676373  5d                   pop ebp
// 00676374  c20800               ret 8
// 00676377  f30f10050834a100     movss xmm0, dword ptr [0xa13408]
// 0067637f  8bc2                 mov eax, edx
// 00676381  03c0                 add eax, eax
// 00676383  03c0                 add eax, eax
// 00676385  3d801a0600           cmp eax, 0x61a80
// 0067638a  760a                 jbe 0x676396
// 0067638c  f30f10050434a100     movss xmm0, dword ptr [0xa13404]
// 00676394  eb0f                 jmp 0x6763a5
// 00676396  3d00fa0000           cmp eax, 0xfa00
// 0067639b  7608                 jbe 0x6763a5
// 0067639d  f30f1005d427a100     movss xmm0, dword ptr [0xa127d4]
// 006763a5  8bc2                 mov eax, edx
// 006763a7  f30f2ac8             cvtsi2ss xmm1, eax
// 006763ab  f30f59c8             mulss xmm1, xmm0
// 006763af  f30f2cd1             cvttss2si edx, xmm1
// 006763b3  2bd0                 sub edx, eax
// 006763b5  8d0432               lea eax, [edx + esi]
// 006763b8  894108               mov dword ptr [ecx + 8], eax
// 006763bb  8b1544dac100         mov edx, dword ptr [0xc1da44]
// 006763c1  3bc2                 cmp eax, edx
// 006763c3  7d03                 jge 0x6763c8
// 006763c5  895108               mov dword ptr [ecx + 8], edx
// 006763c8  55                   push ebp
// 006763c9  e85220e1ff           call 0x488420
// 006763ce  5f                   pop edi
// 006763cf  5e                   pop esi
// 006763d0  5d                   pop ebp
// 006763d1  c20800               ret 8
// 006763d4  b856555555           mov eax, 0x55555556
// 006763d9  f7ea                 imul edx
// 006763db  8bc2                 mov eax, edx
// 006763dd  c1e81f               shr eax, 0x1f
// 006763e0  03c2                 add eax, edx
// 006763e2  3bf0                 cmp esi, eax
// 006763e4  7f17                 jg 0x6763fd
// 006763e6  807c241400           cmp byte ptr [esp + 0x14], 0
// 006763eb  7410                 je 0x6763fd
// 006763ed  3bf7                 cmp esi, edi
// 006763ef  7e0c                 jle 0x6763fd
// 006763f1  3bf5                 cmp esi, ebp
// 006763f3  7c02                 jl 0x6763f7
// 006763f5  8bf5                 mov esi, ebp
// 006763f7  56                   push esi
// 006763f8  e82320e1ff           call 0x488420
// 006763fd  5f                   pop edi
// 006763fe  5e                   pop esi
// 006763ff  5d                   pop ebp
// 00676400  c20800               ret 8
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?resize@?$Array@I@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
