// from server: 100% by auto
// roc 2010-06 0075ef20  unit: RBX::CleanStage  size: 243 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0075ef20
//
// 0075ef20  8b442404             mov eax, dword ptr [esp + 4]
// 0075ef24  55                   push ebp
// 0075ef25  8b6904               mov ebp, dword ptr [ecx + 4]
// 0075ef28  ba01000000           mov edx, 1
// 0075ef2d  56                   push esi
// 0075ef2e  894104               mov dword ptr [ecx + 4], eax
// 0075ef31  57                   push edi
// 0075ef32  84157c31c200         test byte ptr [0xc2317c], dl
// 0075ef38  7513                 jne 0x75ef4d
// 0075ef3a  09157c31c200         or dword ptr [0xc2317c], edx
// 0075ef40  bf0a000000           mov edi, 0xa
// 0075ef45  893d7831c200         mov dword ptr [0xc23178], edi
// 0075ef4b  eb06                 jmp 0x75ef53
// 0075ef4d  8b3d7831c200         mov edi, dword ptr [0xc23178]
// 0075ef53  8b5108               mov edx, dword ptr [ecx + 8]
// 0075ef56  8b7104               mov esi, dword ptr [ecx + 4]
// 0075ef59  3bf2                 cmp esi, edx
// 0075ef5b  0f8e83000000         jle 0x75efe4
// 0075ef61  85d2                 test edx, edx
// 0075ef63  750f                 jne 0x75ef74
// 0075ef65  55                   push ebp
// 0075ef66  894108               mov dword ptr [ecx + 8], eax
// 0075ef69  e8b294d2ff           call 0x488420
// 0075ef6e  5f                   pop edi
// 0075ef6f  5e                   pop esi
// 0075ef70  5d                   pop ebp
// 0075ef71  c20800               ret 8
// 0075ef74  3bf7                 cmp esi, edi
// 0075ef76  7d0f                 jge 0x75ef87
// 0075ef78  55                   push ebp
// 0075ef79  897908               mov dword ptr [ecx + 8], edi
// 0075ef7c  e89f94d2ff           call 0x488420
// 0075ef81  5f                   pop edi
// 0075ef82  5e                   pop esi
// 0075ef83  5d                   pop ebp
// 0075ef84  c20800               ret 8
// 0075ef87  f30f10050834a100     movss xmm0, dword ptr [0xa13408]
// 0075ef8f  8bc2                 mov eax, edx
// 0075ef91  03c0                 add eax, eax
// 0075ef93  03c0                 add eax, eax
// 0075ef95  3d801a0600           cmp eax, 0x61a80
// 0075ef9a  760a                 jbe 0x75efa6
// 0075ef9c  f30f10050434a100     movss xmm0, dword ptr [0xa13404]
// 0075efa4  eb0f                 jmp 0x75efb5
// 0075efa6  3d00fa0000           cmp eax, 0xfa00
// 0075efab  7608                 jbe 0x75efb5
// 0075efad  f30f1005d427a100     movss xmm0, dword ptr [0xa127d4]
// 0075efb5  8bc2                 mov eax, edx
// 0075efb7  f30f2ac8             cvtsi2ss xmm1, eax
// 0075efbb  f30f59c8             mulss xmm1, xmm0
// 0075efbf  f30f2cd1             cvttss2si edx, xmm1
// 0075efc3  2bd0                 sub edx, eax
// 0075efc5  8d0432               lea eax, [edx + esi]
// 0075efc8  894108               mov dword ptr [ecx + 8], eax
// 0075efcb  8b157831c200         mov edx, dword ptr [0xc23178]
// 0075efd1  3bc2                 cmp eax, edx
// 0075efd3  7d03                 jge 0x75efd8
// 0075efd5  895108               mov dword ptr [ecx + 8], edx
// 0075efd8  55                   push ebp
// 0075efd9  e84294d2ff           call 0x488420
// 0075efde  5f                   pop edi
// 0075efdf  5e                   pop esi
// 0075efe0  5d                   pop ebp
// 0075efe1  c20800               ret 8
// 0075efe4  b856555555           mov eax, 0x55555556
// 0075efe9  f7ea                 imul edx
// 0075efeb  8bc2                 mov eax, edx
// 0075efed  c1e81f               shr eax, 0x1f
// 0075eff0  03c2                 add eax, edx
// 0075eff2  3bf0                 cmp esi, eax
// 0075eff4  7f17                 jg 0x75f00d
// 0075eff6  807c241400           cmp byte ptr [esp + 0x14], 0
// 0075effb  7410                 je 0x75f00d
// 0075effd  3bf7                 cmp esi, edi
// 0075efff  7e0c                 jle 0x75f00d
// 0075f001  3bf5                 cmp esi, ebp
// 0075f003  7c02                 jl 0x75f007
// 0075f005  8bf5                 mov esi, ebp
// 0075f007  56                   push esi
// 0075f008  e81394d2ff           call 0x488420
// 0075f00d  5f                   pop edi
// 0075f00e  5e                   pop esi
// 0075f00f  5d                   pop ebp
// 0075f010  c20800               ret 8
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?resize@?$Array@I@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
