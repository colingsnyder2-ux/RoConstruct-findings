// from server: 100% by auto
// roc 2010-06 00484e70  unit: G3D::GImage::Error  size: 243 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00484e70
//
// 00484e70  8b442404             mov eax, dword ptr [esp + 4]
// 00484e74  55                   push ebp
// 00484e75  8b6904               mov ebp, dword ptr [ecx + 4]
// 00484e78  ba01000000           mov edx, 1
// 00484e7d  56                   push esi
// 00484e7e  894104               mov dword ptr [ecx + 4], eax
// 00484e81  57                   push edi
// 00484e82  84150031c000         test byte ptr [0xc03100], dl
// 00484e88  7513                 jne 0x484e9d
// 00484e8a  09150031c000         or dword ptr [0xc03100], edx
// 00484e90  bf0a000000           mov edi, 0xa
// 00484e95  893dfc30c000         mov dword ptr [0xc030fc], edi
// 00484e9b  eb06                 jmp 0x484ea3
// 00484e9d  8b3dfc30c000         mov edi, dword ptr [0xc030fc]
// 00484ea3  8b5108               mov edx, dword ptr [ecx + 8]
// 00484ea6  8b7104               mov esi, dword ptr [ecx + 4]
// 00484ea9  3bf2                 cmp esi, edx
// 00484eab  0f8e83000000         jle 0x484f34
// 00484eb1  85d2                 test edx, edx
// 00484eb3  750f                 jne 0x484ec4
// 00484eb5  55                   push ebp
// 00484eb6  894108               mov dword ptr [ecx + 8], eax
// 00484eb9  e862350000           call 0x488420
// 00484ebe  5f                   pop edi
// 00484ebf  5e                   pop esi
// 00484ec0  5d                   pop ebp
// 00484ec1  c20800               ret 8
// 00484ec4  3bf7                 cmp esi, edi
// 00484ec6  7d0f                 jge 0x484ed7
// 00484ec8  55                   push ebp
// 00484ec9  897908               mov dword ptr [ecx + 8], edi
// 00484ecc  e84f350000           call 0x488420
// 00484ed1  5f                   pop edi
// 00484ed2  5e                   pop esi
// 00484ed3  5d                   pop ebp
// 00484ed4  c20800               ret 8
// 00484ed7  f30f10050834a100     movss xmm0, dword ptr [0xa13408]
// 00484edf  8bc2                 mov eax, edx
// 00484ee1  03c0                 add eax, eax
// 00484ee3  03c0                 add eax, eax
// 00484ee5  3d801a0600           cmp eax, 0x61a80
// 00484eea  760a                 jbe 0x484ef6
// 00484eec  f30f10050434a100     movss xmm0, dword ptr [0xa13404]
// 00484ef4  eb0f                 jmp 0x484f05
// 00484ef6  3d00fa0000           cmp eax, 0xfa00
// 00484efb  7608                 jbe 0x484f05
// 00484efd  f30f1005d427a100     movss xmm0, dword ptr [0xa127d4]
// 00484f05  8bc2                 mov eax, edx
// 00484f07  f30f2ac8             cvtsi2ss xmm1, eax
// 00484f0b  f30f59c8             mulss xmm1, xmm0
// 00484f0f  f30f2cd1             cvttss2si edx, xmm1
// 00484f13  2bd0                 sub edx, eax
// 00484f15  8d0432               lea eax, [edx + esi]
// 00484f18  894108               mov dword ptr [ecx + 8], eax
// 00484f1b  8b15fc30c000         mov edx, dword ptr [0xc030fc]
// 00484f21  3bc2                 cmp eax, edx
// 00484f23  7d03                 jge 0x484f28
// 00484f25  895108               mov dword ptr [ecx + 8], edx
// 00484f28  55                   push ebp
// 00484f29  e8f2340000           call 0x488420
// 00484f2e  5f                   pop edi
// 00484f2f  5e                   pop esi
// 00484f30  5d                   pop ebp
// 00484f31  c20800               ret 8
// 00484f34  b856555555           mov eax, 0x55555556
// 00484f39  f7ea                 imul edx
// 00484f3b  8bc2                 mov eax, edx
// 00484f3d  c1e81f               shr eax, 0x1f
// 00484f40  03c2                 add eax, edx
// 00484f42  3bf0                 cmp esi, eax
// 00484f44  7f17                 jg 0x484f5d
// 00484f46  807c241400           cmp byte ptr [esp + 0x14], 0
// 00484f4b  7410                 je 0x484f5d
// 00484f4d  3bf7                 cmp esi, edi
// 00484f4f  7e0c                 jle 0x484f5d
// 00484f51  3bf5                 cmp esi, ebp
// 00484f53  7c02                 jl 0x484f57
// 00484f55  8bf5                 mov esi, ebp
// 00484f57  56                   push esi
// 00484f58  e8c3340000           call 0x488420
// 00484f5d  5f                   pop edi
// 00484f5e  5e                   pop esi
// 00484f5f  5d                   pop ebp
// 00484f60  c20800               ret 8
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?resize@?$Array@I@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
