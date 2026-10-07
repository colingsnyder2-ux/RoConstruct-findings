// roc 2010-06 005443d0  unit: RBX::RbxG3D::RenderScene  size: 243 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005443d0
//
// 005443d0  8b442404             mov eax, dword ptr [esp + 4]
// 005443d4  55                   push ebp
// 005443d5  8b6904               mov ebp, dword ptr [ecx + 4]
// 005443d8  ba01000000           mov edx, 1
// 005443dd  56                   push esi
// 005443de  894104               mov dword ptr [ecx + 4], eax
// 005443e1  57                   push edi
// 005443e2  84153891c000         test byte ptr [0xc09138], dl
// 005443e8  7513                 jne 0x5443fd
// 005443ea  09153891c000         or dword ptr [0xc09138], edx
// 005443f0  bf0a000000           mov edi, 0xa
// 005443f5  893d3491c000         mov dword ptr [0xc09134], edi
// 005443fb  eb06                 jmp 0x544403
// 005443fd  8b3d3491c000         mov edi, dword ptr [0xc09134]
// 00544403  8b5108               mov edx, dword ptr [ecx + 8]
// 00544406  8b7104               mov esi, dword ptr [ecx + 4]
// 00544409  3bf2                 cmp esi, edx
// 0054440b  0f8e83000000         jle 0x544494
// 00544411  85d2                 test edx, edx
// 00544413  750f                 jne 0x544424
// 00544415  55                   push ebp
// 00544416  894108               mov dword ptr [ecx + 8], eax
// 00544419  e80240f4ff           call 0x488420
// 0054441e  5f                   pop edi
// 0054441f  5e                   pop esi
// 00544420  5d                   pop ebp
// 00544421  c20800               ret 8
// 00544424  3bf7                 cmp esi, edi
// 00544426  7d0f                 jge 0x544437
// 00544428  55                   push ebp
// 00544429  897908               mov dword ptr [ecx + 8], edi
// 0054442c  e8ef3ff4ff           call 0x488420
// 00544431  5f                   pop edi
// 00544432  5e                   pop esi
// 00544433  5d                   pop ebp
// 00544434  c20800               ret 8
// 00544437  f30f10050834a100     movss xmm0, dword ptr [0xa13408]
// 0054443f  8bc2                 mov eax, edx
// 00544441  03c0                 add eax, eax
// 00544443  03c0                 add eax, eax
// 00544445  3d801a0600           cmp eax, 0x61a80
// 0054444a  760a                 jbe 0x544456
// 0054444c  f30f10050434a100     movss xmm0, dword ptr [0xa13404]
// 00544454  eb0f                 jmp 0x544465
// 00544456  3d00fa0000           cmp eax, 0xfa00
// 0054445b  7608                 jbe 0x544465
// 0054445d  f30f1005d427a100     movss xmm0, dword ptr [0xa127d4]
// 00544465  8bc2                 mov eax, edx
// 00544467  f30f2ac8             cvtsi2ss xmm1, eax
// 0054446b  f30f59c8             mulss xmm1, xmm0
// 0054446f  f30f2cd1             cvttss2si edx, xmm1
// 00544473  2bd0                 sub edx, eax
// 00544475  8d0432               lea eax, [edx + esi]
// 00544478  894108               mov dword ptr [ecx + 8], eax
// 0054447b  8b153491c000         mov edx, dword ptr [0xc09134]
// 00544481  3bc2                 cmp eax, edx
// 00544483  7d03                 jge 0x544488
// 00544485  895108               mov dword ptr [ecx + 8], edx
// 00544488  55                   push ebp
// 00544489  e8923ff4ff           call 0x488420
// 0054448e  5f                   pop edi
// 0054448f  5e                   pop esi
// 00544490  5d                   pop ebp
// 00544491  c20800               ret 8
// 00544494  b856555555           mov eax, 0x55555556
// 00544499  f7ea                 imul edx
// 0054449b  8bc2                 mov eax, edx
// 0054449d  c1e81f               shr eax, 0x1f
// 005444a0  03c2                 add eax, edx
// 005444a2  3bf0                 cmp esi, eax
// 005444a4  7f17                 jg 0x5444bd
// 005444a6  807c241400           cmp byte ptr [esp + 0x14], 0
// 005444ab  7410                 je 0x5444bd
// 005444ad  3bf7                 cmp esi, edi
// 005444af  7e0c                 jle 0x5444bd
// 005444b1  3bf5                 cmp esi, ebp
// 005444b3  7c02                 jl 0x5444b7
// 005444b5  8bf5                 mov esi, ebp
// 005444b7  56                   push esi
// 005444b8  e8633ff4ff           call 0x488420
// 005444bd  5f                   pop edi
// 005444be  5e                   pop esi
// 005444bf  5d                   pop ebp
// 005444c0  c20800               ret 8
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?resize@?$Array@I@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
