// from server: 100% by auto
// roc 2010-06 00484f70  unit: G3D::GImage::Error  size: 233 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00484f70
//
// 00484f70  8b442404             mov eax, dword ptr [esp + 4]
// 00484f74  55                   push ebp
// 00484f75  8b6904               mov ebp, dword ptr [ecx + 4]
// 00484f78  ba01000000           mov edx, 1
// 00484f7d  56                   push esi
// 00484f7e  894104               mov dword ptr [ecx + 4], eax
// 00484f81  57                   push edi
// 00484f82  84150831c000         test byte ptr [0xc03108], dl
// 00484f88  7513                 jne 0x484f9d
// 00484f8a  09150831c000         or dword ptr [0xc03108], edx
// 00484f90  bf20000000           mov edi, 0x20
// 00484f95  893d0431c000         mov dword ptr [0xc03104], edi
// 00484f9b  eb06                 jmp 0x484fa3
// 00484f9d  8b3d0431c000         mov edi, dword ptr [0xc03104]
// 00484fa3  8b5108               mov edx, dword ptr [ecx + 8]
// 00484fa6  8b7104               mov esi, dword ptr [ecx + 4]
// 00484fa9  3bf2                 cmp esi, edx
// 00484fab  7e7d                 jle 0x48502a
// 00484fad  85d2                 test edx, edx
// 00484faf  750f                 jne 0x484fc0
// 00484fb1  55                   push ebp
// 00484fb2  894108               mov dword ptr [ecx + 8], eax
// 00484fb5  e826330000           call 0x4882e0
// 00484fba  5f                   pop edi
// 00484fbb  5e                   pop esi
// 00484fbc  5d                   pop ebp
// 00484fbd  c20800               ret 8
// 00484fc0  3bf7                 cmp esi, edi
// 00484fc2  7d0f                 jge 0x484fd3
// 00484fc4  55                   push ebp
// 00484fc5  897908               mov dword ptr [ecx + 8], edi
// 00484fc8  e813330000           call 0x4882e0
// 00484fcd  5f                   pop edi
// 00484fce  5e                   pop esi
// 00484fcf  5d                   pop ebp
// 00484fd0  c20800               ret 8
// 00484fd3  f30f10050834a100     movss xmm0, dword ptr [0xa13408]
// 00484fdb  8bc2                 mov eax, edx
// 00484fdd  3d801a0600           cmp eax, 0x61a80
// 00484fe2  760a                 jbe 0x484fee
// 00484fe4  f30f10050434a100     movss xmm0, dword ptr [0xa13404]
// 00484fec  eb0f                 jmp 0x484ffd
// 00484fee  3d00fa0000           cmp eax, 0xfa00
// 00484ff3  7608                 jbe 0x484ffd
// 00484ff5  f30f1005d427a100     movss xmm0, dword ptr [0xa127d4]
// 00484ffd  f30f2ac8             cvtsi2ss xmm1, eax
// 00485001  f30f59c8             mulss xmm1, xmm0
// 00485005  f30f2cd1             cvttss2si edx, xmm1
// 00485009  2bd0                 sub edx, eax
// 0048500b  8d0432               lea eax, [edx + esi]
// 0048500e  894108               mov dword ptr [ecx + 8], eax
// 00485011  8b150431c000         mov edx, dword ptr [0xc03104]
// 00485017  3bc2                 cmp eax, edx
// 00485019  7d03                 jge 0x48501e
// 0048501b  895108               mov dword ptr [ecx + 8], edx
// 0048501e  55                   push ebp
// 0048501f  e8bc320000           call 0x4882e0
// 00485024  5f                   pop edi
// 00485025  5e                   pop esi
// 00485026  5d                   pop ebp
// 00485027  c20800               ret 8
// 0048502a  b856555555           mov eax, 0x55555556
// 0048502f  f7ea                 imul edx
// 00485031  8bc2                 mov eax, edx
// 00485033  c1e81f               shr eax, 0x1f
// 00485036  03c2                 add eax, edx
// 00485038  3bf0                 cmp esi, eax
// 0048503a  7f17                 jg 0x485053
// 0048503c  807c241400           cmp byte ptr [esp + 0x14], 0
// 00485041  7410                 je 0x485053
// 00485043  3bf7                 cmp esi, edi
// 00485045  7e0c                 jle 0x485053
// 00485047  3bf5                 cmp esi, ebp
// 00485049  7c02                 jl 0x48504d
// 0048504b  8bf5                 mov esi, ebp
// 0048504d  56                   push esi
// 0048504e  e88d320000           call 0x4882e0
// 00485053  5f                   pop edi
// 00485054  5e                   pop esi
// 00485055  5d                   pop ebp
// 00485056  c20800               ret 8
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?resize@?$Array@_N@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
