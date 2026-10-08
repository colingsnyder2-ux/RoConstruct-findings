// roc 2009-12 007013d0  unit: RBX::Assembly  size: 243 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007013d0
//
// 007013d0  8b442404             mov eax, dword ptr [esp + 4]
// 007013d4  55                   push ebp
// 007013d5  8b6904               mov ebp, dword ptr [ecx + 4]
// 007013d8  ba01000000           mov edx, 1
// 007013dd  56                   push esi
// 007013de  894104               mov dword ptr [ecx + 4], eax
// 007013e1  57                   push edi
// 007013e2  8415b04eb900         test byte ptr [0xb94eb0], dl
// 007013e8  7513                 jne 0x7013fd
// 007013ea  0915b04eb900         or dword ptr [0xb94eb0], edx
// 007013f0  bf0a000000           mov edi, 0xa
// 007013f5  893dac4eb900         mov dword ptr [0xb94eac], edi
// 007013fb  eb06                 jmp 0x701403
// 007013fd  8b3dac4eb900         mov edi, dword ptr [0xb94eac]
// 00701403  8b5108               mov edx, dword ptr [ecx + 8]
// 00701406  8b7104               mov esi, dword ptr [ecx + 4]
// 00701409  3bf2                 cmp esi, edx
// 0070140b  0f8e83000000         jle 0x701494
// 00701411  85d2                 test edx, edx
// 00701413  750f                 jne 0x701424
// 00701415  55                   push ebp
// 00701416  894108               mov dword ptr [ecx + 8], eax
// 00701419  e8324cf9ff           call 0x696050
// 0070141e  5f                   pop edi
// 0070141f  5e                   pop esi
// 00701420  5d                   pop ebp
// 00701421  c20800               ret 8
// 00701424  3bf7                 cmp esi, edi
// 00701426  7d0f                 jge 0x701437
// 00701428  55                   push ebp
// 00701429  897908               mov dword ptr [ecx + 8], edi
// 0070142c  e81f4cf9ff           call 0x696050
// 00701431  5f                   pop edi
// 00701432  5e                   pop esi
// 00701433  5d                   pop ebp
// 00701434  c20800               ret 8
// 00701437  f30f100590269b00     movss xmm0, dword ptr [0x9b2690]
// 0070143f  8bc2                 mov eax, edx
// 00701441  03c0                 add eax, eax
// 00701443  03c0                 add eax, eax
// 00701445  3d801a0600           cmp eax, 0x61a80
// 0070144a  760a                 jbe 0x701456
// 0070144c  f30f1005b0279b00     movss xmm0, dword ptr [0x9b27b0]
// 00701454  eb0f                 jmp 0x701465
// 00701456  3d00fa0000           cmp eax, 0xfa00
// 0070145b  7608                 jbe 0x701465
// 0070145d  f30f100524169b00     movss xmm0, dword ptr [0x9b1624]
// 00701465  8bc2                 mov eax, edx
// 00701467  f30f2ac8             cvtsi2ss xmm1, eax
// 0070146b  f30f59c8             mulss xmm1, xmm0
// 0070146f  f30f2cd1             cvttss2si edx, xmm1
// 00701473  2bd0                 sub edx, eax
// 00701475  8d0432               lea eax, [edx + esi]
// 00701478  894108               mov dword ptr [ecx + 8], eax
// 0070147b  8b15ac4eb900         mov edx, dword ptr [0xb94eac]
// 00701481  3bc2                 cmp eax, edx
// 00701483  7d03                 jge 0x701488
// 00701485  895108               mov dword ptr [ecx + 8], edx
// 00701488  55                   push ebp
// 00701489  e8c24bf9ff           call 0x696050
// 0070148e  5f                   pop edi
// 0070148f  5e                   pop esi
// 00701490  5d                   pop ebp
// 00701491  c20800               ret 8
// 00701494  b856555555           mov eax, 0x55555556
// 00701499  f7ea                 imul edx
// 0070149b  8bc2                 mov eax, edx
// 0070149d  c1e81f               shr eax, 0x1f
// 007014a0  03c2                 add eax, edx
// 007014a2  3bf0                 cmp esi, eax
// 007014a4  7f17                 jg 0x7014bd
// 007014a6  807c241400           cmp byte ptr [esp + 0x14], 0
// 007014ab  7410                 je 0x7014bd
// 007014ad  3bf7                 cmp esi, edi
// 007014af  7e0c                 jle 0x7014bd
// 007014b1  3bf5                 cmp esi, ebp
// 007014b3  7c02                 jl 0x7014b7
// 007014b5  8bf5                 mov esi, ebp
// 007014b7  56                   push esi
// 007014b8  e8934bf9ff           call 0x696050
// 007014bd  5f                   pop edi
// 007014be  5e                   pop esi
// 007014bf  5d                   pop ebp
// 007014c0  c20800               ret 8
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?resize@?$Array@I@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
