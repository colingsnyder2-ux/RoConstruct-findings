// roc 2010-06 006c6a80  unit: RBX::VGeometryService::?$FactoryProduct  size: 243 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006c6a80
//
// 006c6a80  8b442404             mov eax, dword ptr [esp + 4]
// 006c6a84  55                   push ebp
// 006c6a85  8b6904               mov ebp, dword ptr [ecx + 4]
// 006c6a88  ba01000000           mov edx, 1
// 006c6a8d  56                   push esi
// 006c6a8e  894104               mov dword ptr [ecx + 4], eax
// 006c6a91  57                   push edi
// 006c6a92  84152c03c200         test byte ptr [0xc2032c], dl
// 006c6a98  7513                 jne 0x6c6aad
// 006c6a9a  09152c03c200         or dword ptr [0xc2032c], edx
// 006c6aa0  bf0a000000           mov edi, 0xa
// 006c6aa5  893d2803c200         mov dword ptr [0xc20328], edi
// 006c6aab  eb06                 jmp 0x6c6ab3
// 006c6aad  8b3d2803c200         mov edi, dword ptr [0xc20328]
// 006c6ab3  8b5108               mov edx, dword ptr [ecx + 8]
// 006c6ab6  8b7104               mov esi, dword ptr [ecx + 4]
// 006c6ab9  3bf2                 cmp esi, edx
// 006c6abb  0f8e83000000         jle 0x6c6b44
// 006c6ac1  85d2                 test edx, edx
// 006c6ac3  750f                 jne 0x6c6ad4
// 006c6ac5  55                   push ebp
// 006c6ac6  894108               mov dword ptr [ecx + 8], eax
// 006c6ac9  e85219dcff           call 0x488420
// 006c6ace  5f                   pop edi
// 006c6acf  5e                   pop esi
// 006c6ad0  5d                   pop ebp
// 006c6ad1  c20800               ret 8
// 006c6ad4  3bf7                 cmp esi, edi
// 006c6ad6  7d0f                 jge 0x6c6ae7
// 006c6ad8  55                   push ebp
// 006c6ad9  897908               mov dword ptr [ecx + 8], edi
// 006c6adc  e83f19dcff           call 0x488420
// 006c6ae1  5f                   pop edi
// 006c6ae2  5e                   pop esi
// 006c6ae3  5d                   pop ebp
// 006c6ae4  c20800               ret 8
// 006c6ae7  f30f10050834a100     movss xmm0, dword ptr [0xa13408]
// 006c6aef  8bc2                 mov eax, edx
// 006c6af1  03c0                 add eax, eax
// 006c6af3  03c0                 add eax, eax
// 006c6af5  3d801a0600           cmp eax, 0x61a80
// 006c6afa  760a                 jbe 0x6c6b06
// 006c6afc  f30f10050434a100     movss xmm0, dword ptr [0xa13404]
// 006c6b04  eb0f                 jmp 0x6c6b15
// 006c6b06  3d00fa0000           cmp eax, 0xfa00
// 006c6b0b  7608                 jbe 0x6c6b15
// 006c6b0d  f30f1005d427a100     movss xmm0, dword ptr [0xa127d4]
// 006c6b15  8bc2                 mov eax, edx
// 006c6b17  f30f2ac8             cvtsi2ss xmm1, eax
// 006c6b1b  f30f59c8             mulss xmm1, xmm0
// 006c6b1f  f30f2cd1             cvttss2si edx, xmm1
// 006c6b23  2bd0                 sub edx, eax
// 006c6b25  8d0432               lea eax, [edx + esi]
// 006c6b28  894108               mov dword ptr [ecx + 8], eax
// 006c6b2b  8b152803c200         mov edx, dword ptr [0xc20328]
// 006c6b31  3bc2                 cmp eax, edx
// 006c6b33  7d03                 jge 0x6c6b38
// 006c6b35  895108               mov dword ptr [ecx + 8], edx
// 006c6b38  55                   push ebp
// 006c6b39  e8e218dcff           call 0x488420
// 006c6b3e  5f                   pop edi
// 006c6b3f  5e                   pop esi
// 006c6b40  5d                   pop ebp
// 006c6b41  c20800               ret 8
// 006c6b44  b856555555           mov eax, 0x55555556
// 006c6b49  f7ea                 imul edx
// 006c6b4b  8bc2                 mov eax, edx
// 006c6b4d  c1e81f               shr eax, 0x1f
// 006c6b50  03c2                 add eax, edx
// 006c6b52  3bf0                 cmp esi, eax
// 006c6b54  7f17                 jg 0x6c6b6d
// 006c6b56  807c241400           cmp byte ptr [esp + 0x14], 0
// 006c6b5b  7410                 je 0x6c6b6d
// 006c6b5d  3bf7                 cmp esi, edi
// 006c6b5f  7e0c                 jle 0x6c6b6d
// 006c6b61  3bf5                 cmp esi, ebp
// 006c6b63  7c02                 jl 0x6c6b67
// 006c6b65  8bf5                 mov esi, ebp
// 006c6b67  56                   push esi
// 006c6b68  e8b318dcff           call 0x488420
// 006c6b6d  5f                   pop edi
// 006c6b6e  5e                   pop esi
// 006c6b6f  5d                   pop ebp
// 006c6b70  c20800               ret 8
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?resize@?$Array@I@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
