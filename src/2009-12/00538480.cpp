// roc 2009-12 00538480  unit: RBX::Network::Replicator  size: 243 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00538480
//
// 00538480  8b442404             mov eax, dword ptr [esp + 4]
// 00538484  55                   push ebp
// 00538485  8b6904               mov ebp, dword ptr [ecx + 4]
// 00538488  ba01000000           mov edx, 1
// 0053848d  56                   push esi
// 0053848e  894104               mov dword ptr [ecx + 4], eax
// 00538491  57                   push edi
// 00538492  8415c405b800         test byte ptr [0xb805c4], dl
// 00538498  7513                 jne 0x5384ad
// 0053849a  0915c405b800         or dword ptr [0xb805c4], edx
// 005384a0  bf0a000000           mov edi, 0xa
// 005384a5  893dc005b800         mov dword ptr [0xb805c0], edi
// 005384ab  eb06                 jmp 0x5384b3
// 005384ad  8b3dc005b800         mov edi, dword ptr [0xb805c0]
// 005384b3  8b5108               mov edx, dword ptr [ecx + 8]
// 005384b6  8b7104               mov esi, dword ptr [ecx + 4]
// 005384b9  3bf2                 cmp esi, edx
// 005384bb  0f8e83000000         jle 0x538544
// 005384c1  85d2                 test edx, edx
// 005384c3  750f                 jne 0x5384d4
// 005384c5  55                   push ebp
// 005384c6  894108               mov dword ptr [ecx + 8], eax
// 005384c9  e882db1500           call 0x696050
// 005384ce  5f                   pop edi
// 005384cf  5e                   pop esi
// 005384d0  5d                   pop ebp
// 005384d1  c20800               ret 8
// 005384d4  3bf7                 cmp esi, edi
// 005384d6  7d0f                 jge 0x5384e7
// 005384d8  55                   push ebp
// 005384d9  897908               mov dword ptr [ecx + 8], edi
// 005384dc  e86fdb1500           call 0x696050
// 005384e1  5f                   pop edi
// 005384e2  5e                   pop esi
// 005384e3  5d                   pop ebp
// 005384e4  c20800               ret 8
// 005384e7  f30f100590269b00     movss xmm0, dword ptr [0x9b2690]
// 005384ef  8bc2                 mov eax, edx
// 005384f1  03c0                 add eax, eax
// 005384f3  03c0                 add eax, eax
// 005384f5  3d801a0600           cmp eax, 0x61a80
// 005384fa  760a                 jbe 0x538506
// 005384fc  f30f1005b0279b00     movss xmm0, dword ptr [0x9b27b0]
// 00538504  eb0f                 jmp 0x538515
// 00538506  3d00fa0000           cmp eax, 0xfa00
// 0053850b  7608                 jbe 0x538515
// 0053850d  f30f100524169b00     movss xmm0, dword ptr [0x9b1624]
// 00538515  8bc2                 mov eax, edx
// 00538517  f30f2ac8             cvtsi2ss xmm1, eax
// 0053851b  f30f59c8             mulss xmm1, xmm0
// 0053851f  f30f2cd1             cvttss2si edx, xmm1
// 00538523  2bd0                 sub edx, eax
// 00538525  8d0432               lea eax, [edx + esi]
// 00538528  894108               mov dword ptr [ecx + 8], eax
// 0053852b  8b15c005b800         mov edx, dword ptr [0xb805c0]
// 00538531  3bc2                 cmp eax, edx
// 00538533  7d03                 jge 0x538538
// 00538535  895108               mov dword ptr [ecx + 8], edx
// 00538538  55                   push ebp
// 00538539  e812db1500           call 0x696050
// 0053853e  5f                   pop edi
// 0053853f  5e                   pop esi
// 00538540  5d                   pop ebp
// 00538541  c20800               ret 8
// 00538544  b856555555           mov eax, 0x55555556
// 00538549  f7ea                 imul edx
// 0053854b  8bc2                 mov eax, edx
// 0053854d  c1e81f               shr eax, 0x1f
// 00538550  03c2                 add eax, edx
// 00538552  3bf0                 cmp esi, eax
// 00538554  7f17                 jg 0x53856d
// 00538556  807c241400           cmp byte ptr [esp + 0x14], 0
// 0053855b  7410                 je 0x53856d
// 0053855d  3bf7                 cmp esi, edi
// 0053855f  7e0c                 jle 0x53856d
// 00538561  3bf5                 cmp esi, ebp
// 00538563  7c02                 jl 0x538567
// 00538565  8bf5                 mov esi, ebp
// 00538567  56                   push esi
// 00538568  e8e3da1500           call 0x696050
// 0053856d  5f                   pop edi
// 0053856e  5e                   pop esi
// 0053856f  5d                   pop ebp
// 00538570  c20800               ret 8
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?resize@?$Array@I@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
