// roc 2009-12 0049ab20  unit: RBX::MeshFileKey  size: 241 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0049ab20
//
// 0049ab20  8b442404             mov eax, dword ptr [esp + 4]
// 0049ab24  55                   push ebp
// 0049ab25  8b6904               mov ebp, dword ptr [ecx + 4]
// 0049ab28  ba01000000           mov edx, 1
// 0049ab2d  56                   push esi
// 0049ab2e  894104               mov dword ptr [ecx + 4], eax
// 0049ab31  57                   push edi
// 0049ab32  8415e8cdb700         test byte ptr [0xb7cde8], dl
// 0049ab38  7513                 jne 0x49ab4d
// 0049ab3a  0915e8cdb700         or dword ptr [0xb7cde8], edx
// 0049ab40  bf10000000           mov edi, 0x10
// 0049ab45  893de4cdb700         mov dword ptr [0xb7cde4], edi
// 0049ab4b  eb06                 jmp 0x49ab53
// 0049ab4d  8b3de4cdb700         mov edi, dword ptr [0xb7cde4]
// 0049ab53  8b5108               mov edx, dword ptr [ecx + 8]
// 0049ab56  8b7104               mov esi, dword ptr [ecx + 4]
// 0049ab59  3bf2                 cmp esi, edx
// 0049ab5b  0f8e81000000         jle 0x49abe2
// 0049ab61  85d2                 test edx, edx
// 0049ab63  750f                 jne 0x49ab74
// 0049ab65  55                   push ebp
// 0049ab66  894108               mov dword ptr [ecx + 8], eax
// 0049ab69  e892fbffff           call 0x49a700
// 0049ab6e  5f                   pop edi
// 0049ab6f  5e                   pop esi
// 0049ab70  5d                   pop ebp
// 0049ab71  c20800               ret 8
// 0049ab74  3bf7                 cmp esi, edi
// 0049ab76  7d0f                 jge 0x49ab87
// 0049ab78  55                   push ebp
// 0049ab79  897908               mov dword ptr [ecx + 8], edi
// 0049ab7c  e87ffbffff           call 0x49a700
// 0049ab81  5f                   pop edi
// 0049ab82  5e                   pop esi
// 0049ab83  5d                   pop ebp
// 0049ab84  c20800               ret 8
// 0049ab87  f30f100590269b00     movss xmm0, dword ptr [0x9b2690]
// 0049ab8f  8bc2                 mov eax, edx
// 0049ab91  03c0                 add eax, eax
// 0049ab93  3d801a0600           cmp eax, 0x61a80
// 0049ab98  760a                 jbe 0x49aba4
// 0049ab9a  f30f1005b0279b00     movss xmm0, dword ptr [0x9b27b0]
// 0049aba2  eb0f                 jmp 0x49abb3
// 0049aba4  3d00fa0000           cmp eax, 0xfa00
// 0049aba9  7608                 jbe 0x49abb3
// 0049abab  f30f100524169b00     movss xmm0, dword ptr [0x9b1624]
// 0049abb3  8bc2                 mov eax, edx
// 0049abb5  f30f2ac8             cvtsi2ss xmm1, eax
// 0049abb9  f30f59c8             mulss xmm1, xmm0
// 0049abbd  f30f2cd1             cvttss2si edx, xmm1
// 0049abc1  2bd0                 sub edx, eax
// 0049abc3  8d0432               lea eax, [edx + esi]
// 0049abc6  894108               mov dword ptr [ecx + 8], eax
// 0049abc9  8b15e4cdb700         mov edx, dword ptr [0xb7cde4]
// 0049abcf  3bc2                 cmp eax, edx
// 0049abd1  7d03                 jge 0x49abd6
// 0049abd3  895108               mov dword ptr [ecx + 8], edx
// 0049abd6  55                   push ebp
// 0049abd7  e824fbffff           call 0x49a700
// 0049abdc  5f                   pop edi
// 0049abdd  5e                   pop esi
// 0049abde  5d                   pop ebp
// 0049abdf  c20800               ret 8
// 0049abe2  b856555555           mov eax, 0x55555556
// 0049abe7  f7ea                 imul edx
// 0049abe9  8bc2                 mov eax, edx
// 0049abeb  c1e81f               shr eax, 0x1f
// 0049abee  03c2                 add eax, edx
// 0049abf0  3bf0                 cmp esi, eax
// 0049abf2  7f17                 jg 0x49ac0b
// 0049abf4  807c241400           cmp byte ptr [esp + 0x14], 0
// 0049abf9  7410                 je 0x49ac0b
// 0049abfb  3bf7                 cmp esi, edi
// 0049abfd  7e0c                 jle 0x49ac0b
// 0049abff  3bf5                 cmp esi, ebp
// 0049ac01  7c02                 jl 0x49ac05
// 0049ac03  8bf5                 mov esi, ebp
// 0049ac05  56                   push esi
// 0049ac06  e8f5faffff           call 0x49a700
// 0049ac0b  5f                   pop edi
// 0049ac0c  5e                   pop esi
// 0049ac0d  5d                   pop ebp
// 0049ac0e  c20800               ret 8
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?resize@?$Array@G@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
