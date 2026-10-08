// from server: 100% by auto
// roc 2010-06 0070abf0  unit: RBX::RbxG3D::Material::Level  size: 243 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0070abf0
//
// 0070abf0  8b442404             mov eax, dword ptr [esp + 4]
// 0070abf4  55                   push ebp
// 0070abf5  8b6904               mov ebp, dword ptr [ecx + 4]
// 0070abf8  ba01000000           mov edx, 1
// 0070abfd  56                   push esi
// 0070abfe  894104               mov dword ptr [ecx + 4], eax
// 0070ac01  57                   push edi
// 0070ac02  84154828c200         test byte ptr [0xc22848], dl
// 0070ac08  7513                 jne 0x70ac1d
// 0070ac0a  09154828c200         or dword ptr [0xc22848], edx
// 0070ac10  bf0a000000           mov edi, 0xa
// 0070ac15  893d4428c200         mov dword ptr [0xc22844], edi
// 0070ac1b  eb06                 jmp 0x70ac23
// 0070ac1d  8b3d4428c200         mov edi, dword ptr [0xc22844]
// 0070ac23  8b5108               mov edx, dword ptr [ecx + 8]
// 0070ac26  8b7104               mov esi, dword ptr [ecx + 4]
// 0070ac29  3bf2                 cmp esi, edx
// 0070ac2b  0f8e83000000         jle 0x70acb4
// 0070ac31  85d2                 test edx, edx
// 0070ac33  750f                 jne 0x70ac44
// 0070ac35  55                   push ebp
// 0070ac36  894108               mov dword ptr [ecx + 8], eax
// 0070ac39  e8e2d7d7ff           call 0x488420
// 0070ac3e  5f                   pop edi
// 0070ac3f  5e                   pop esi
// 0070ac40  5d                   pop ebp
// 0070ac41  c20800               ret 8
// 0070ac44  3bf7                 cmp esi, edi
// 0070ac46  7d0f                 jge 0x70ac57
// 0070ac48  55                   push ebp
// 0070ac49  897908               mov dword ptr [ecx + 8], edi
// 0070ac4c  e8cfd7d7ff           call 0x488420
// 0070ac51  5f                   pop edi
// 0070ac52  5e                   pop esi
// 0070ac53  5d                   pop ebp
// 0070ac54  c20800               ret 8
// 0070ac57  f30f10050834a100     movss xmm0, dword ptr [0xa13408]
// 0070ac5f  8bc2                 mov eax, edx
// 0070ac61  03c0                 add eax, eax
// 0070ac63  03c0                 add eax, eax
// 0070ac65  3d801a0600           cmp eax, 0x61a80
// 0070ac6a  760a                 jbe 0x70ac76
// 0070ac6c  f30f10050434a100     movss xmm0, dword ptr [0xa13404]
// 0070ac74  eb0f                 jmp 0x70ac85
// 0070ac76  3d00fa0000           cmp eax, 0xfa00
// 0070ac7b  7608                 jbe 0x70ac85
// 0070ac7d  f30f1005d427a100     movss xmm0, dword ptr [0xa127d4]
// 0070ac85  8bc2                 mov eax, edx
// 0070ac87  f30f2ac8             cvtsi2ss xmm1, eax
// 0070ac8b  f30f59c8             mulss xmm1, xmm0
// 0070ac8f  f30f2cd1             cvttss2si edx, xmm1
// 0070ac93  2bd0                 sub edx, eax
// 0070ac95  8d0432               lea eax, [edx + esi]
// 0070ac98  894108               mov dword ptr [ecx + 8], eax
// 0070ac9b  8b154428c200         mov edx, dword ptr [0xc22844]
// 0070aca1  3bc2                 cmp eax, edx
// 0070aca3  7d03                 jge 0x70aca8
// 0070aca5  895108               mov dword ptr [ecx + 8], edx
// 0070aca8  55                   push ebp
// 0070aca9  e872d7d7ff           call 0x488420
// 0070acae  5f                   pop edi
// 0070acaf  5e                   pop esi
// 0070acb0  5d                   pop ebp
// 0070acb1  c20800               ret 8
// 0070acb4  b856555555           mov eax, 0x55555556
// 0070acb9  f7ea                 imul edx
// 0070acbb  8bc2                 mov eax, edx
// 0070acbd  c1e81f               shr eax, 0x1f
// 0070acc0  03c2                 add eax, edx
// 0070acc2  3bf0                 cmp esi, eax
// 0070acc4  7f17                 jg 0x70acdd
// 0070acc6  807c241400           cmp byte ptr [esp + 0x14], 0
// 0070accb  7410                 je 0x70acdd
// 0070accd  3bf7                 cmp esi, edi
// 0070accf  7e0c                 jle 0x70acdd
// 0070acd1  3bf5                 cmp esi, ebp
// 0070acd3  7c02                 jl 0x70acd7
// 0070acd5  8bf5                 mov esi, ebp
// 0070acd7  56                   push esi
// 0070acd8  e843d7d7ff           call 0x488420
// 0070acdd  5f                   pop edi
// 0070acde  5e                   pop esi
// 0070acdf  5d                   pop ebp
// 0070ace0  c20800               ret 8
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?resize@?$Array@I@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
