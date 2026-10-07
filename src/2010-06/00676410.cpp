// roc 2010-06 00676410  unit: RBX::Assembly  size: 243 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00676410
//
// 00676410  8b442404             mov eax, dword ptr [esp + 4]
// 00676414  55                   push ebp
// 00676415  8b6904               mov ebp, dword ptr [ecx + 4]
// 00676418  ba01000000           mov edx, 1
// 0067641d  56                   push esi
// 0067641e  894104               mov dword ptr [ecx + 4], eax
// 00676421  57                   push edi
// 00676422  841550dac100         test byte ptr [0xc1da50], dl
// 00676428  7513                 jne 0x67643d
// 0067642a  091550dac100         or dword ptr [0xc1da50], edx
// 00676430  bf0a000000           mov edi, 0xa
// 00676435  893d4cdac100         mov dword ptr [0xc1da4c], edi
// 0067643b  eb06                 jmp 0x676443
// 0067643d  8b3d4cdac100         mov edi, dword ptr [0xc1da4c]
// 00676443  8b5108               mov edx, dword ptr [ecx + 8]
// 00676446  8b7104               mov esi, dword ptr [ecx + 4]
// 00676449  3bf2                 cmp esi, edx
// 0067644b  0f8e83000000         jle 0x6764d4
// 00676451  85d2                 test edx, edx
// 00676453  750f                 jne 0x676464
// 00676455  55                   push ebp
// 00676456  894108               mov dword ptr [ecx + 8], eax
// 00676459  e8c21fe1ff           call 0x488420
// 0067645e  5f                   pop edi
// 0067645f  5e                   pop esi
// 00676460  5d                   pop ebp
// 00676461  c20800               ret 8
// 00676464  3bf7                 cmp esi, edi
// 00676466  7d0f                 jge 0x676477
// 00676468  55                   push ebp
// 00676469  897908               mov dword ptr [ecx + 8], edi
// 0067646c  e8af1fe1ff           call 0x488420
// 00676471  5f                   pop edi
// 00676472  5e                   pop esi
// 00676473  5d                   pop ebp
// 00676474  c20800               ret 8
// 00676477  f30f10050834a100     movss xmm0, dword ptr [0xa13408]
// 0067647f  8bc2                 mov eax, edx
// 00676481  03c0                 add eax, eax
// 00676483  03c0                 add eax, eax
// 00676485  3d801a0600           cmp eax, 0x61a80
// 0067648a  760a                 jbe 0x676496
// 0067648c  f30f10050434a100     movss xmm0, dword ptr [0xa13404]
// 00676494  eb0f                 jmp 0x6764a5
// 00676496  3d00fa0000           cmp eax, 0xfa00
// 0067649b  7608                 jbe 0x6764a5
// 0067649d  f30f1005d427a100     movss xmm0, dword ptr [0xa127d4]
// 006764a5  8bc2                 mov eax, edx
// 006764a7  f30f2ac8             cvtsi2ss xmm1, eax
// 006764ab  f30f59c8             mulss xmm1, xmm0
// 006764af  f30f2cd1             cvttss2si edx, xmm1
// 006764b3  2bd0                 sub edx, eax
// 006764b5  8d0432               lea eax, [edx + esi]
// 006764b8  894108               mov dword ptr [ecx + 8], eax
// 006764bb  8b154cdac100         mov edx, dword ptr [0xc1da4c]
// 006764c1  3bc2                 cmp eax, edx
// 006764c3  7d03                 jge 0x6764c8
// 006764c5  895108               mov dword ptr [ecx + 8], edx
// 006764c8  55                   push ebp
// 006764c9  e8521fe1ff           call 0x488420
// 006764ce  5f                   pop edi
// 006764cf  5e                   pop esi
// 006764d0  5d                   pop ebp
// 006764d1  c20800               ret 8
// 006764d4  b856555555           mov eax, 0x55555556
// 006764d9  f7ea                 imul edx
// 006764db  8bc2                 mov eax, edx
// 006764dd  c1e81f               shr eax, 0x1f
// 006764e0  03c2                 add eax, edx
// 006764e2  3bf0                 cmp esi, eax
// 006764e4  7f17                 jg 0x6764fd
// 006764e6  807c241400           cmp byte ptr [esp + 0x14], 0
// 006764eb  7410                 je 0x6764fd
// 006764ed  3bf7                 cmp esi, edi
// 006764ef  7e0c                 jle 0x6764fd
// 006764f1  3bf5                 cmp esi, ebp
// 006764f3  7c02                 jl 0x6764f7
// 006764f5  8bf5                 mov esi, ebp
// 006764f7  56                   push esi
// 006764f8  e8231fe1ff           call 0x488420
// 006764fd  5f                   pop edi
// 006764fe  5e                   pop esi
// 006764ff  5d                   pop ebp
// 00676500  c20800               ret 8
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?resize@?$Array@I@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
