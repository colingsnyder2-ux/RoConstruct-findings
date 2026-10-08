// from server: 100% by auto
// roc 2010-06 0070aaf0  unit: RBX::RbxG3D::Material::Level  size: 243 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0070aaf0
//
// 0070aaf0  8b442404             mov eax, dword ptr [esp + 4]
// 0070aaf4  55                   push ebp
// 0070aaf5  8b6904               mov ebp, dword ptr [ecx + 4]
// 0070aaf8  ba01000000           mov edx, 1
// 0070aafd  56                   push esi
// 0070aafe  894104               mov dword ptr [ecx + 4], eax
// 0070ab01  57                   push edi
// 0070ab02  84154028c200         test byte ptr [0xc22840], dl
// 0070ab08  7513                 jne 0x70ab1d
// 0070ab0a  09154028c200         or dword ptr [0xc22840], edx
// 0070ab10  bf0a000000           mov edi, 0xa
// 0070ab15  893d3c28c200         mov dword ptr [0xc2283c], edi
// 0070ab1b  eb06                 jmp 0x70ab23
// 0070ab1d  8b3d3c28c200         mov edi, dword ptr [0xc2283c]
// 0070ab23  8b5108               mov edx, dword ptr [ecx + 8]
// 0070ab26  8b7104               mov esi, dword ptr [ecx + 4]
// 0070ab29  3bf2                 cmp esi, edx
// 0070ab2b  0f8e83000000         jle 0x70abb4
// 0070ab31  85d2                 test edx, edx
// 0070ab33  750f                 jne 0x70ab44
// 0070ab35  55                   push ebp
// 0070ab36  894108               mov dword ptr [ecx + 8], eax
// 0070ab39  e8e2d8d7ff           call 0x488420
// 0070ab3e  5f                   pop edi
// 0070ab3f  5e                   pop esi
// 0070ab40  5d                   pop ebp
// 0070ab41  c20800               ret 8
// 0070ab44  3bf7                 cmp esi, edi
// 0070ab46  7d0f                 jge 0x70ab57
// 0070ab48  55                   push ebp
// 0070ab49  897908               mov dword ptr [ecx + 8], edi
// 0070ab4c  e8cfd8d7ff           call 0x488420
// 0070ab51  5f                   pop edi
// 0070ab52  5e                   pop esi
// 0070ab53  5d                   pop ebp
// 0070ab54  c20800               ret 8
// 0070ab57  f30f10050834a100     movss xmm0, dword ptr [0xa13408]
// 0070ab5f  8bc2                 mov eax, edx
// 0070ab61  03c0                 add eax, eax
// 0070ab63  03c0                 add eax, eax
// 0070ab65  3d801a0600           cmp eax, 0x61a80
// 0070ab6a  760a                 jbe 0x70ab76
// 0070ab6c  f30f10050434a100     movss xmm0, dword ptr [0xa13404]
// 0070ab74  eb0f                 jmp 0x70ab85
// 0070ab76  3d00fa0000           cmp eax, 0xfa00
// 0070ab7b  7608                 jbe 0x70ab85
// 0070ab7d  f30f1005d427a100     movss xmm0, dword ptr [0xa127d4]
// 0070ab85  8bc2                 mov eax, edx
// 0070ab87  f30f2ac8             cvtsi2ss xmm1, eax
// 0070ab8b  f30f59c8             mulss xmm1, xmm0
// 0070ab8f  f30f2cd1             cvttss2si edx, xmm1
// 0070ab93  2bd0                 sub edx, eax
// 0070ab95  8d0432               lea eax, [edx + esi]
// 0070ab98  894108               mov dword ptr [ecx + 8], eax
// 0070ab9b  8b153c28c200         mov edx, dword ptr [0xc2283c]
// 0070aba1  3bc2                 cmp eax, edx
// 0070aba3  7d03                 jge 0x70aba8
// 0070aba5  895108               mov dword ptr [ecx + 8], edx
// 0070aba8  55                   push ebp
// 0070aba9  e872d8d7ff           call 0x488420
// 0070abae  5f                   pop edi
// 0070abaf  5e                   pop esi
// 0070abb0  5d                   pop ebp
// 0070abb1  c20800               ret 8
// 0070abb4  b856555555           mov eax, 0x55555556
// 0070abb9  f7ea                 imul edx
// 0070abbb  8bc2                 mov eax, edx
// 0070abbd  c1e81f               shr eax, 0x1f
// 0070abc0  03c2                 add eax, edx
// 0070abc2  3bf0                 cmp esi, eax
// 0070abc4  7f17                 jg 0x70abdd
// 0070abc6  807c241400           cmp byte ptr [esp + 0x14], 0
// 0070abcb  7410                 je 0x70abdd
// 0070abcd  3bf7                 cmp esi, edi
// 0070abcf  7e0c                 jle 0x70abdd
// 0070abd1  3bf5                 cmp esi, ebp
// 0070abd3  7c02                 jl 0x70abd7
// 0070abd5  8bf5                 mov esi, ebp
// 0070abd7  56                   push esi
// 0070abd8  e843d8d7ff           call 0x488420
// 0070abdd  5f                   pop edi
// 0070abde  5e                   pop esi
// 0070abdf  5d                   pop ebp
// 0070abe0  c20800               ret 8
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?resize@?$Array@I@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
