// roc 2010-06 00557a70  unit: seg_00550000  size: 233 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00557a70
//
// 00557a70  8b442404             mov eax, dword ptr [esp + 4]
// 00557a74  55                   push ebp
// 00557a75  8b6904               mov ebp, dword ptr [ecx + 4]
// 00557a78  ba01000000           mov edx, 1
// 00557a7d  56                   push esi
// 00557a7e  894104               mov dword ptr [ecx + 4], eax
// 00557a81  57                   push edi
// 00557a82  8415c49fc000         test byte ptr [0xc09fc4], dl
// 00557a88  7513                 jne 0x557a9d
// 00557a8a  0915c49fc000         or dword ptr [0xc09fc4], edx
// 00557a90  bf20000000           mov edi, 0x20
// 00557a95  893dc09fc000         mov dword ptr [0xc09fc0], edi
// 00557a9b  eb06                 jmp 0x557aa3
// 00557a9d  8b3dc09fc000         mov edi, dword ptr [0xc09fc0]
// 00557aa3  8b5108               mov edx, dword ptr [ecx + 8]
// 00557aa6  8b7104               mov esi, dword ptr [ecx + 4]
// 00557aa9  3bf2                 cmp esi, edx
// 00557aab  7e7d                 jle 0x557b2a
// 00557aad  85d2                 test edx, edx
// 00557aaf  750f                 jne 0x557ac0
// 00557ab1  55                   push ebp
// 00557ab2  894108               mov dword ptr [ecx + 8], eax
// 00557ab5  e82608f3ff           call 0x4882e0
// 00557aba  5f                   pop edi
// 00557abb  5e                   pop esi
// 00557abc  5d                   pop ebp
// 00557abd  c20800               ret 8
// 00557ac0  3bf7                 cmp esi, edi
// 00557ac2  7d0f                 jge 0x557ad3
// 00557ac4  55                   push ebp
// 00557ac5  897908               mov dword ptr [ecx + 8], edi
// 00557ac8  e81308f3ff           call 0x4882e0
// 00557acd  5f                   pop edi
// 00557ace  5e                   pop esi
// 00557acf  5d                   pop ebp
// 00557ad0  c20800               ret 8
// 00557ad3  f30f10050834a100     movss xmm0, dword ptr [0xa13408]
// 00557adb  8bc2                 mov eax, edx
// 00557add  3d801a0600           cmp eax, 0x61a80
// 00557ae2  760a                 jbe 0x557aee
// 00557ae4  f30f10050434a100     movss xmm0, dword ptr [0xa13404]
// 00557aec  eb0f                 jmp 0x557afd
// 00557aee  3d00fa0000           cmp eax, 0xfa00
// 00557af3  7608                 jbe 0x557afd
// 00557af5  f30f1005d427a100     movss xmm0, dword ptr [0xa127d4]
// 00557afd  f30f2ac8             cvtsi2ss xmm1, eax
// 00557b01  f30f59c8             mulss xmm1, xmm0
// 00557b05  f30f2cd1             cvttss2si edx, xmm1
// 00557b09  2bd0                 sub edx, eax
// 00557b0b  8d0432               lea eax, [edx + esi]
// 00557b0e  894108               mov dword ptr [ecx + 8], eax
// 00557b11  8b15c09fc000         mov edx, dword ptr [0xc09fc0]
// 00557b17  3bc2                 cmp eax, edx
// 00557b19  7d03                 jge 0x557b1e
// 00557b1b  895108               mov dword ptr [ecx + 8], edx
// 00557b1e  55                   push ebp
// 00557b1f  e8bc07f3ff           call 0x4882e0
// 00557b24  5f                   pop edi
// 00557b25  5e                   pop esi
// 00557b26  5d                   pop ebp
// 00557b27  c20800               ret 8
// 00557b2a  b856555555           mov eax, 0x55555556
// 00557b2f  f7ea                 imul edx
// 00557b31  8bc2                 mov eax, edx
// 00557b33  c1e81f               shr eax, 0x1f
// 00557b36  03c2                 add eax, edx
// 00557b38  3bf0                 cmp esi, eax
// 00557b3a  7f17                 jg 0x557b53
// 00557b3c  807c241400           cmp byte ptr [esp + 0x14], 0
// 00557b41  7410                 je 0x557b53
// 00557b43  3bf7                 cmp esi, edi
// 00557b45  7e0c                 jle 0x557b53
// 00557b47  3bf5                 cmp esi, ebp
// 00557b49  7c02                 jl 0x557b4d
// 00557b4b  8bf5                 mov esi, ebp
// 00557b4d  56                   push esi
// 00557b4e  e88d07f3ff           call 0x4882e0
// 00557b53  5f                   pop edi
// 00557b54  5e                   pop esi
// 00557b55  5d                   pop ebp
// 00557b56  c20800               ret 8
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?resize@?$Array@_N@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
