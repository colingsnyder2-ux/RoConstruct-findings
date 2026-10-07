// roc 2010-06 0070acf0  unit: RBX::RbxG3D::Material::Level  size: 243 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0070acf0
//
// 0070acf0  8b442404             mov eax, dword ptr [esp + 4]
// 0070acf4  55                   push ebp
// 0070acf5  8b6904               mov ebp, dword ptr [ecx + 4]
// 0070acf8  ba01000000           mov edx, 1
// 0070acfd  56                   push esi
// 0070acfe  894104               mov dword ptr [ecx + 4], eax
// 0070ad01  57                   push edi
// 0070ad02  84155028c200         test byte ptr [0xc22850], dl
// 0070ad08  7513                 jne 0x70ad1d
// 0070ad0a  09155028c200         or dword ptr [0xc22850], edx
// 0070ad10  bf0a000000           mov edi, 0xa
// 0070ad15  893d4c28c200         mov dword ptr [0xc2284c], edi
// 0070ad1b  eb06                 jmp 0x70ad23
// 0070ad1d  8b3d4c28c200         mov edi, dword ptr [0xc2284c]
// 0070ad23  8b5108               mov edx, dword ptr [ecx + 8]
// 0070ad26  8b7104               mov esi, dword ptr [ecx + 4]
// 0070ad29  3bf2                 cmp esi, edx
// 0070ad2b  0f8e83000000         jle 0x70adb4
// 0070ad31  85d2                 test edx, edx
// 0070ad33  750f                 jne 0x70ad44
// 0070ad35  55                   push ebp
// 0070ad36  894108               mov dword ptr [ecx + 8], eax
// 0070ad39  e8e2d6d7ff           call 0x488420
// 0070ad3e  5f                   pop edi
// 0070ad3f  5e                   pop esi
// 0070ad40  5d                   pop ebp
// 0070ad41  c20800               ret 8
// 0070ad44  3bf7                 cmp esi, edi
// 0070ad46  7d0f                 jge 0x70ad57
// 0070ad48  55                   push ebp
// 0070ad49  897908               mov dword ptr [ecx + 8], edi
// 0070ad4c  e8cfd6d7ff           call 0x488420
// 0070ad51  5f                   pop edi
// 0070ad52  5e                   pop esi
// 0070ad53  5d                   pop ebp
// 0070ad54  c20800               ret 8
// 0070ad57  f30f10050834a100     movss xmm0, dword ptr [0xa13408]
// 0070ad5f  8bc2                 mov eax, edx
// 0070ad61  03c0                 add eax, eax
// 0070ad63  03c0                 add eax, eax
// 0070ad65  3d801a0600           cmp eax, 0x61a80
// 0070ad6a  760a                 jbe 0x70ad76
// 0070ad6c  f30f10050434a100     movss xmm0, dword ptr [0xa13404]
// 0070ad74  eb0f                 jmp 0x70ad85
// 0070ad76  3d00fa0000           cmp eax, 0xfa00
// 0070ad7b  7608                 jbe 0x70ad85
// 0070ad7d  f30f1005d427a100     movss xmm0, dword ptr [0xa127d4]
// 0070ad85  8bc2                 mov eax, edx
// 0070ad87  f30f2ac8             cvtsi2ss xmm1, eax
// 0070ad8b  f30f59c8             mulss xmm1, xmm0
// 0070ad8f  f30f2cd1             cvttss2si edx, xmm1
// 0070ad93  2bd0                 sub edx, eax
// 0070ad95  8d0432               lea eax, [edx + esi]
// 0070ad98  894108               mov dword ptr [ecx + 8], eax
// 0070ad9b  8b154c28c200         mov edx, dword ptr [0xc2284c]
// 0070ada1  3bc2                 cmp eax, edx
// 0070ada3  7d03                 jge 0x70ada8
// 0070ada5  895108               mov dword ptr [ecx + 8], edx
// 0070ada8  55                   push ebp
// 0070ada9  e872d6d7ff           call 0x488420
// 0070adae  5f                   pop edi
// 0070adaf  5e                   pop esi
// 0070adb0  5d                   pop ebp
// 0070adb1  c20800               ret 8
// 0070adb4  b856555555           mov eax, 0x55555556
// 0070adb9  f7ea                 imul edx
// 0070adbb  8bc2                 mov eax, edx
// 0070adbd  c1e81f               shr eax, 0x1f
// 0070adc0  03c2                 add eax, edx
// 0070adc2  3bf0                 cmp esi, eax
// 0070adc4  7f17                 jg 0x70addd
// 0070adc6  807c241400           cmp byte ptr [esp + 0x14], 0
// 0070adcb  7410                 je 0x70addd
// 0070adcd  3bf7                 cmp esi, edi
// 0070adcf  7e0c                 jle 0x70addd
// 0070add1  3bf5                 cmp esi, ebp
// 0070add3  7c02                 jl 0x70add7
// 0070add5  8bf5                 mov esi, ebp
// 0070add7  56                   push esi
// 0070add8  e843d6d7ff           call 0x488420
// 0070addd  5f                   pop edi
// 0070adde  5e                   pop esi
// 0070addf  5d                   pop ebp
// 0070ade0  c20800               ret 8
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?resize@?$Array@I@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
