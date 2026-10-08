// from server: 100% by auto
// roc 2010-06 00676510  unit: RBX::Assembly  size: 243 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00676510
//
// 00676510  8b442404             mov eax, dword ptr [esp + 4]
// 00676514  55                   push ebp
// 00676515  8b6904               mov ebp, dword ptr [ecx + 4]
// 00676518  ba01000000           mov edx, 1
// 0067651d  56                   push esi
// 0067651e  894104               mov dword ptr [ecx + 4], eax
// 00676521  57                   push edi
// 00676522  841558dac100         test byte ptr [0xc1da58], dl
// 00676528  7513                 jne 0x67653d
// 0067652a  091558dac100         or dword ptr [0xc1da58], edx
// 00676530  bf0a000000           mov edi, 0xa
// 00676535  893d54dac100         mov dword ptr [0xc1da54], edi
// 0067653b  eb06                 jmp 0x676543
// 0067653d  8b3d54dac100         mov edi, dword ptr [0xc1da54]
// 00676543  8b5108               mov edx, dword ptr [ecx + 8]
// 00676546  8b7104               mov esi, dword ptr [ecx + 4]
// 00676549  3bf2                 cmp esi, edx
// 0067654b  0f8e83000000         jle 0x6765d4
// 00676551  85d2                 test edx, edx
// 00676553  750f                 jne 0x676564
// 00676555  55                   push ebp
// 00676556  894108               mov dword ptr [ecx + 8], eax
// 00676559  e8c21ee1ff           call 0x488420
// 0067655e  5f                   pop edi
// 0067655f  5e                   pop esi
// 00676560  5d                   pop ebp
// 00676561  c20800               ret 8
// 00676564  3bf7                 cmp esi, edi
// 00676566  7d0f                 jge 0x676577
// 00676568  55                   push ebp
// 00676569  897908               mov dword ptr [ecx + 8], edi
// 0067656c  e8af1ee1ff           call 0x488420
// 00676571  5f                   pop edi
// 00676572  5e                   pop esi
// 00676573  5d                   pop ebp
// 00676574  c20800               ret 8
// 00676577  f30f10050834a100     movss xmm0, dword ptr [0xa13408]
// 0067657f  8bc2                 mov eax, edx
// 00676581  03c0                 add eax, eax
// 00676583  03c0                 add eax, eax
// 00676585  3d801a0600           cmp eax, 0x61a80
// 0067658a  760a                 jbe 0x676596
// 0067658c  f30f10050434a100     movss xmm0, dword ptr [0xa13404]
// 00676594  eb0f                 jmp 0x6765a5
// 00676596  3d00fa0000           cmp eax, 0xfa00
// 0067659b  7608                 jbe 0x6765a5
// 0067659d  f30f1005d427a100     movss xmm0, dword ptr [0xa127d4]
// 006765a5  8bc2                 mov eax, edx
// 006765a7  f30f2ac8             cvtsi2ss xmm1, eax
// 006765ab  f30f59c8             mulss xmm1, xmm0
// 006765af  f30f2cd1             cvttss2si edx, xmm1
// 006765b3  2bd0                 sub edx, eax
// 006765b5  8d0432               lea eax, [edx + esi]
// 006765b8  894108               mov dword ptr [ecx + 8], eax
// 006765bb  8b1554dac100         mov edx, dword ptr [0xc1da54]
// 006765c1  3bc2                 cmp eax, edx
// 006765c3  7d03                 jge 0x6765c8
// 006765c5  895108               mov dword ptr [ecx + 8], edx
// 006765c8  55                   push ebp
// 006765c9  e8521ee1ff           call 0x488420
// 006765ce  5f                   pop edi
// 006765cf  5e                   pop esi
// 006765d0  5d                   pop ebp
// 006765d1  c20800               ret 8
// 006765d4  b856555555           mov eax, 0x55555556
// 006765d9  f7ea                 imul edx
// 006765db  8bc2                 mov eax, edx
// 006765dd  c1e81f               shr eax, 0x1f
// 006765e0  03c2                 add eax, edx
// 006765e2  3bf0                 cmp esi, eax
// 006765e4  7f17                 jg 0x6765fd
// 006765e6  807c241400           cmp byte ptr [esp + 0x14], 0
// 006765eb  7410                 je 0x6765fd
// 006765ed  3bf7                 cmp esi, edi
// 006765ef  7e0c                 jle 0x6765fd
// 006765f1  3bf5                 cmp esi, ebp
// 006765f3  7c02                 jl 0x6765f7
// 006765f5  8bf5                 mov esi, ebp
// 006765f7  56                   push esi
// 006765f8  e8231ee1ff           call 0x488420
// 006765fd  5f                   pop edi
// 006765fe  5e                   pop esi
// 006765ff  5d                   pop ebp
// 00676600  c20800               ret 8
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?resize@?$Array@I@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
