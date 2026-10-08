// roc 2009-12 007012d0  unit: RBX::Assembly  size: 243 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007012d0
//
// 007012d0  8b442404             mov eax, dword ptr [esp + 4]
// 007012d4  55                   push ebp
// 007012d5  8b6904               mov ebp, dword ptr [ecx + 4]
// 007012d8  ba01000000           mov edx, 1
// 007012dd  56                   push esi
// 007012de  894104               mov dword ptr [ecx + 4], eax
// 007012e1  57                   push edi
// 007012e2  8415a84eb900         test byte ptr [0xb94ea8], dl
// 007012e8  7513                 jne 0x7012fd
// 007012ea  0915a84eb900         or dword ptr [0xb94ea8], edx
// 007012f0  bf0a000000           mov edi, 0xa
// 007012f5  893da44eb900         mov dword ptr [0xb94ea4], edi
// 007012fb  eb06                 jmp 0x701303
// 007012fd  8b3da44eb900         mov edi, dword ptr [0xb94ea4]
// 00701303  8b5108               mov edx, dword ptr [ecx + 8]
// 00701306  8b7104               mov esi, dword ptr [ecx + 4]
// 00701309  3bf2                 cmp esi, edx
// 0070130b  0f8e83000000         jle 0x701394
// 00701311  85d2                 test edx, edx
// 00701313  750f                 jne 0x701324
// 00701315  55                   push ebp
// 00701316  894108               mov dword ptr [ecx + 8], eax
// 00701319  e8324df9ff           call 0x696050
// 0070131e  5f                   pop edi
// 0070131f  5e                   pop esi
// 00701320  5d                   pop ebp
// 00701321  c20800               ret 8
// 00701324  3bf7                 cmp esi, edi
// 00701326  7d0f                 jge 0x701337
// 00701328  55                   push ebp
// 00701329  897908               mov dword ptr [ecx + 8], edi
// 0070132c  e81f4df9ff           call 0x696050
// 00701331  5f                   pop edi
// 00701332  5e                   pop esi
// 00701333  5d                   pop ebp
// 00701334  c20800               ret 8
// 00701337  f30f100590269b00     movss xmm0, dword ptr [0x9b2690]
// 0070133f  8bc2                 mov eax, edx
// 00701341  03c0                 add eax, eax
// 00701343  03c0                 add eax, eax
// 00701345  3d801a0600           cmp eax, 0x61a80
// 0070134a  760a                 jbe 0x701356
// 0070134c  f30f1005b0279b00     movss xmm0, dword ptr [0x9b27b0]
// 00701354  eb0f                 jmp 0x701365
// 00701356  3d00fa0000           cmp eax, 0xfa00
// 0070135b  7608                 jbe 0x701365
// 0070135d  f30f100524169b00     movss xmm0, dword ptr [0x9b1624]
// 00701365  8bc2                 mov eax, edx
// 00701367  f30f2ac8             cvtsi2ss xmm1, eax
// 0070136b  f30f59c8             mulss xmm1, xmm0
// 0070136f  f30f2cd1             cvttss2si edx, xmm1
// 00701373  2bd0                 sub edx, eax
// 00701375  8d0432               lea eax, [edx + esi]
// 00701378  894108               mov dword ptr [ecx + 8], eax
// 0070137b  8b15a44eb900         mov edx, dword ptr [0xb94ea4]
// 00701381  3bc2                 cmp eax, edx
// 00701383  7d03                 jge 0x701388
// 00701385  895108               mov dword ptr [ecx + 8], edx
// 00701388  55                   push ebp
// 00701389  e8c24cf9ff           call 0x696050
// 0070138e  5f                   pop edi
// 0070138f  5e                   pop esi
// 00701390  5d                   pop ebp
// 00701391  c20800               ret 8
// 00701394  b856555555           mov eax, 0x55555556
// 00701399  f7ea                 imul edx
// 0070139b  8bc2                 mov eax, edx
// 0070139d  c1e81f               shr eax, 0x1f
// 007013a0  03c2                 add eax, edx
// 007013a2  3bf0                 cmp esi, eax
// 007013a4  7f17                 jg 0x7013bd
// 007013a6  807c241400           cmp byte ptr [esp + 0x14], 0
// 007013ab  7410                 je 0x7013bd
// 007013ad  3bf7                 cmp esi, edi
// 007013af  7e0c                 jle 0x7013bd
// 007013b1  3bf5                 cmp esi, ebp
// 007013b3  7c02                 jl 0x7013b7
// 007013b5  8bf5                 mov esi, ebp
// 007013b7  56                   push esi
// 007013b8  e8934cf9ff           call 0x696050
// 007013bd  5f                   pop edi
// 007013be  5e                   pop esi
// 007013bf  5d                   pop ebp
// 007013c0  c20800               ret 8
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?resize@?$Array@I@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
