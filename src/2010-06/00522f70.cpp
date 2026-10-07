// roc 2010-06 00522f70  unit: RBX::MeshGen  size: 254 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00522f70
//
// 00522f70  8b442404             mov eax, dword ptr [esp + 4]
// 00522f74  53                   push ebx
// 00522f75  56                   push esi
// 00522f76  8bf1                 mov esi, ecx
// 00522f78  8b5e04               mov ebx, dword ptr [esi + 4]
// 00522f7b  894604               mov dword ptr [esi + 4], eax
// 00522f7e  f605cc88c00001       test byte ptr [0xc088cc], 1
// 00522f85  57                   push edi
// 00522f86  7514                 jne 0x522f9c
// 00522f88  830dcc88c00001       or dword ptr [0xc088cc], 1
// 00522f8f  bf0a000000           mov edi, 0xa
// 00522f94  893dc888c000         mov dword ptr [0xc088c8], edi
// 00522f9a  eb06                 jmp 0x522fa2
// 00522f9c  8b3dc888c000         mov edi, dword ptr [0xc088c8]
// 00522fa2  8b4e04               mov ecx, dword ptr [esi + 4]
// 00522fa5  8b5608               mov edx, dword ptr [esi + 8]
// 00522fa8  3bca                 cmp ecx, edx
// 00522faa  7e6d                 jle 0x523019
// 00522fac  85d2                 test edx, edx
// 00522fae  7509                 jne 0x522fb9
// 00522fb0  894608               mov dword ptr [esi + 8], eax
// 00522fb3  53                   push ebx
// 00522fb4  e984000000           jmp 0x52303d
// 00522fb9  3bcf                 cmp ecx, edi
// 00522fbb  7d06                 jge 0x522fc3
// 00522fbd  897e08               mov dword ptr [esi + 8], edi
// 00522fc0  53                   push ebx
// 00522fc1  eb7a                 jmp 0x52303d
// 00522fc3  f30f10050834a100     movss xmm0, dword ptr [0xa13408]
// 00522fcb  8bc2                 mov eax, edx
// 00522fcd  03c0                 add eax, eax
// 00522fcf  03c0                 add eax, eax
// 00522fd1  03c0                 add eax, eax
// 00522fd3  3d801a0600           cmp eax, 0x61a80
// 00522fd8  760a                 jbe 0x522fe4
// 00522fda  f30f10050434a100     movss xmm0, dword ptr [0xa13404]
// 00522fe2  eb0f                 jmp 0x522ff3
// 00522fe4  3d00fa0000           cmp eax, 0xfa00
// 00522fe9  7608                 jbe 0x522ff3
// 00522feb  f30f1005d427a100     movss xmm0, dword ptr [0xa127d4]
// 00522ff3  8bc2                 mov eax, edx
// 00522ff5  f30f2ac8             cvtsi2ss xmm1, eax
// 00522ff9  f30f59c8             mulss xmm1, xmm0
// 00522ffd  f30f2cd1             cvttss2si edx, xmm1
// 00523001  2bd0                 sub edx, eax
// 00523003  8d040a               lea eax, [edx + ecx]
// 00523006  894608               mov dword ptr [esi + 8], eax
// 00523009  8b0dc888c000         mov ecx, dword ptr [0xc088c8]
// 0052300f  3bc1                 cmp eax, ecx
// 00523011  7d03                 jge 0x523016
// 00523013  894e08               mov dword ptr [esi + 8], ecx
// 00523016  53                   push ebx
// 00523017  eb24                 jmp 0x52303d
// 00523019  b856555555           mov eax, 0x55555556
// 0052301e  f7ea                 imul edx
// 00523020  8bc2                 mov eax, edx
// 00523022  c1e81f               shr eax, 0x1f
// 00523025  03c2                 add eax, edx
// 00523027  3bc8                 cmp ecx, eax
// 00523029  7f19                 jg 0x523044
// 0052302b  807c241400           cmp byte ptr [esp + 0x14], 0
// 00523030  7412                 je 0x523044
// 00523032  3bcf                 cmp ecx, edi
// 00523034  7e0e                 jle 0x523044
// 00523036  3bcb                 cmp ecx, ebx
// 00523038  7c02                 jl 0x52303c
// 0052303a  8bcb                 mov ecx, ebx
// 0052303c  51                   push ecx
// 0052303d  8bce                 mov ecx, esi
// 0052303f  e85cfbffff           call 0x522ba0
// 00523044  3b5e04               cmp ebx, dword ptr [esi + 4]
// 00523047  8bc3                 mov eax, ebx
// 00523049  7d1d                 jge 0x523068
// 0052304b  0f57c0               xorps xmm0, xmm0
// 0052304e  8bff                 mov edi, edi
// 00523050  8b0e                 mov ecx, dword ptr [esi]
// 00523052  8d0cc1               lea ecx, [ecx + eax*8]
// 00523055  85c9                 test ecx, ecx
// 00523057  7409                 je 0x523062
// 00523059  f30f1101             movss dword ptr [ecx], xmm0
// 0052305d  f30f114104           movss dword ptr [ecx + 4], xmm0
// 00523062  40                   inc eax
// 00523063  3b4604               cmp eax, dword ptr [esi + 4]
// 00523066  7ce8                 jl 0x523050
// 00523068  5f                   pop edi
// 00523069  5e                   pop esi
// 0052306a  5b                   pop ebx
// 0052306b  c20800               ret 8
// library g3d-6.09/G3Dcpp\ConvexPolyhedron.cpp (function ?resize@?$Array@VVector2@G3D@@@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/ConvexPolyhedron.cpp
