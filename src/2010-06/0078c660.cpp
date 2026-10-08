// from server: 100% by auto
// roc 2010-06 0078c660  unit: RBX::SpatialFilter  size: 243 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0078c660
//
// 0078c660  8b442404             mov eax, dword ptr [esp + 4]
// 0078c664  55                   push ebp
// 0078c665  8b6904               mov ebp, dword ptr [ecx + 4]
// 0078c668  ba01000000           mov edx, 1
// 0078c66d  56                   push esi
// 0078c66e  894104               mov dword ptr [ecx + 4], eax
// 0078c671  57                   push edi
// 0078c672  84157836c200         test byte ptr [0xc23678], dl
// 0078c678  7513                 jne 0x78c68d
// 0078c67a  09157836c200         or dword ptr [0xc23678], edx
// 0078c680  bf0a000000           mov edi, 0xa
// 0078c685  893d7436c200         mov dword ptr [0xc23674], edi
// 0078c68b  eb06                 jmp 0x78c693
// 0078c68d  8b3d7436c200         mov edi, dword ptr [0xc23674]
// 0078c693  8b5108               mov edx, dword ptr [ecx + 8]
// 0078c696  8b7104               mov esi, dword ptr [ecx + 4]
// 0078c699  3bf2                 cmp esi, edx
// 0078c69b  0f8e83000000         jle 0x78c724
// 0078c6a1  85d2                 test edx, edx
// 0078c6a3  750f                 jne 0x78c6b4
// 0078c6a5  55                   push ebp
// 0078c6a6  894108               mov dword ptr [ecx + 8], eax
// 0078c6a9  e872bdcfff           call 0x488420
// 0078c6ae  5f                   pop edi
// 0078c6af  5e                   pop esi
// 0078c6b0  5d                   pop ebp
// 0078c6b1  c20800               ret 8
// 0078c6b4  3bf7                 cmp esi, edi
// 0078c6b6  7d0f                 jge 0x78c6c7
// 0078c6b8  55                   push ebp
// 0078c6b9  897908               mov dword ptr [ecx + 8], edi
// 0078c6bc  e85fbdcfff           call 0x488420
// 0078c6c1  5f                   pop edi
// 0078c6c2  5e                   pop esi
// 0078c6c3  5d                   pop ebp
// 0078c6c4  c20800               ret 8
// 0078c6c7  f30f10050834a100     movss xmm0, dword ptr [0xa13408]
// 0078c6cf  8bc2                 mov eax, edx
// 0078c6d1  03c0                 add eax, eax
// 0078c6d3  03c0                 add eax, eax
// 0078c6d5  3d801a0600           cmp eax, 0x61a80
// 0078c6da  760a                 jbe 0x78c6e6
// 0078c6dc  f30f10050434a100     movss xmm0, dword ptr [0xa13404]
// 0078c6e4  eb0f                 jmp 0x78c6f5
// 0078c6e6  3d00fa0000           cmp eax, 0xfa00
// 0078c6eb  7608                 jbe 0x78c6f5
// 0078c6ed  f30f1005d427a100     movss xmm0, dword ptr [0xa127d4]
// 0078c6f5  8bc2                 mov eax, edx
// 0078c6f7  f30f2ac8             cvtsi2ss xmm1, eax
// 0078c6fb  f30f59c8             mulss xmm1, xmm0
// 0078c6ff  f30f2cd1             cvttss2si edx, xmm1
// 0078c703  2bd0                 sub edx, eax
// 0078c705  8d0432               lea eax, [edx + esi]
// 0078c708  894108               mov dword ptr [ecx + 8], eax
// 0078c70b  8b157436c200         mov edx, dword ptr [0xc23674]
// 0078c711  3bc2                 cmp eax, edx
// 0078c713  7d03                 jge 0x78c718
// 0078c715  895108               mov dword ptr [ecx + 8], edx
// 0078c718  55                   push ebp
// 0078c719  e802bdcfff           call 0x488420
// 0078c71e  5f                   pop edi
// 0078c71f  5e                   pop esi
// 0078c720  5d                   pop ebp
// 0078c721  c20800               ret 8
// 0078c724  b856555555           mov eax, 0x55555556
// 0078c729  f7ea                 imul edx
// 0078c72b  8bc2                 mov eax, edx
// 0078c72d  c1e81f               shr eax, 0x1f
// 0078c730  03c2                 add eax, edx
// 0078c732  3bf0                 cmp esi, eax
// 0078c734  7f17                 jg 0x78c74d
// 0078c736  807c241400           cmp byte ptr [esp + 0x14], 0
// 0078c73b  7410                 je 0x78c74d
// 0078c73d  3bf7                 cmp esi, edi
// 0078c73f  7e0c                 jle 0x78c74d
// 0078c741  3bf5                 cmp esi, ebp
// 0078c743  7c02                 jl 0x78c747
// 0078c745  8bf5                 mov esi, ebp
// 0078c747  56                   push esi
// 0078c748  e8d3bccfff           call 0x488420
// 0078c74d  5f                   pop edi
// 0078c74e  5e                   pop esi
// 0078c74f  5d                   pop ebp
// 0078c750  c20800               ret 8
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?resize@?$Array@I@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
