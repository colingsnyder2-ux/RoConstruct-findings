// from server: 100% by auto
// roc 2010-06 00523b90  unit: RBX::MeshGen  size: 357 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00523b90
//
// 00523b90  51                   push ecx
// 00523b91  53                   push ebx
// 00523b92  55                   push ebp
// 00523b93  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00523b97  56                   push esi
// 00523b98  57                   push edi
// 00523b99  8bf9                 mov edi, ecx
// 00523b9b  8b7704               mov esi, dword ptr [edi + 4]
// 00523b9e  3bee                 cmp ebp, esi
// 00523ba0  89742410             mov dword ptr [esp + 0x10], esi
// 00523ba4  896f04               mov dword ptr [edi + 4], ebp
// 00523ba7  7d61                 jge 0x523c0a
// 00523ba9  8da42400000000       lea esp, [esp]
// 00523bb0  8b07                 mov eax, dword ptr [edi]
// 00523bb2  8d1ca8               lea ebx, [eax + ebp*4]
// 00523bb5  8b03                 mov eax, dword ptr [ebx]
// 00523bb7  85c0                 test eax, eax
// 00523bb9  744a                 je 0x523c05
// 00523bbb  83c004               add eax, 4
// 00523bbe  50                   push eax
// 00523bbf  ff157ca39e00         call dword ptr [0x9ea37c]
// 00523bc5  85c0                 test eax, eax
// 00523bc7  7536                 jne 0x523bff
// 00523bc9  8b0b                 mov ecx, dword ptr [ebx]
// 00523bcb  8b7108               mov esi, dword ptr [ecx + 8]
// 00523bce  85f6                 test esi, esi
// 00523bd0  741b                 je 0x523bed
// 00523bd2  8b0e                 mov ecx, dword ptr [esi]
// 00523bd4  8b11                 mov edx, dword ptr [ecx]
// 00523bd6  8b4204               mov eax, dword ptr [edx + 4]
// 00523bd9  ffd0                 call eax
// 00523bdb  8bc6                 mov eax, esi
// 00523bdd  8b7604               mov esi, dword ptr [esi + 4]
// 00523be0  50                   push eax
// 00523be1  e8b43d2800           call 0x7a799a
// 00523be6  83c404               add esp, 4
// 00523be9  85f6                 test esi, esi
// 00523beb  75e5                 jne 0x523bd2
// 00523bed  8b0b                 mov ecx, dword ptr [ebx]
// 00523bef  85c9                 test ecx, ecx
// 00523bf1  7408                 je 0x523bfb
// 00523bf3  8b11                 mov edx, dword ptr [ecx]
// 00523bf5  8b02                 mov eax, dword ptr [edx]
// 00523bf7  6a01                 push 1
// 00523bf9  ffd0                 call eax
// 00523bfb  8b742410             mov esi, dword ptr [esp + 0x10]
// 00523bff  c70300000000         mov dword ptr [ebx], 0
// 00523c05  45                   inc ebp
// 00523c06  3bee                 cmp ebp, esi
// 00523c08  7ca6                 jl 0x523bb0
// 00523c0a  f605e488c00001       test byte ptr [0xc088e4], 1
// 00523c11  7514                 jne 0x523c27
// 00523c13  830de488c00001       or dword ptr [0xc088e4], 1
// 00523c1a  bb0a000000           mov ebx, 0xa
// 00523c1f  891de088c000         mov dword ptr [0xc088e0], ebx
// 00523c25  eb06                 jmp 0x523c2d
// 00523c27  8b1de088c000         mov ebx, dword ptr [0xc088e0]
// 00523c2d  8b4f04               mov ecx, dword ptr [edi + 4]
// 00523c30  8b5708               mov edx, dword ptr [edi + 8]
// 00523c33  3bca                 cmp ecx, edx
// 00523c35  7e6f                 jle 0x523ca6
// 00523c37  85d2                 test edx, edx
// 00523c39  750d                 jne 0x523c48
// 00523c3b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00523c3f  894f08               mov dword ptr [edi + 8], ecx
// 00523c42  56                   push esi
// 00523c43  e982000000           jmp 0x523cca
// 00523c48  3bcb                 cmp ecx, ebx
// 00523c4a  7d06                 jge 0x523c52
// 00523c4c  895f08               mov dword ptr [edi + 8], ebx
// 00523c4f  56                   push esi
// 00523c50  eb78                 jmp 0x523cca
// 00523c52  f30f10050834a100     movss xmm0, dword ptr [0xa13408]
// 00523c5a  8bc2                 mov eax, edx
// 00523c5c  03c0                 add eax, eax
// 00523c5e  03c0                 add eax, eax
// 00523c60  3d801a0600           cmp eax, 0x61a80
// 00523c65  760a                 jbe 0x523c71
// 00523c67  f30f10050434a100     movss xmm0, dword ptr [0xa13404]
// 00523c6f  eb0f                 jmp 0x523c80
// 00523c71  3d00fa0000           cmp eax, 0xfa00
// 00523c76  7608                 jbe 0x523c80
// 00523c78  f30f1005d427a100     movss xmm0, dword ptr [0xa127d4]
// 00523c80  8bc2                 mov eax, edx
// 00523c82  f30f2ac8             cvtsi2ss xmm1, eax
// 00523c86  f30f59c8             mulss xmm1, xmm0
// 00523c8a  f30f2cd1             cvttss2si edx, xmm1
// 00523c8e  2bd0                 sub edx, eax
// 00523c90  8d040a               lea eax, [edx + ecx]
// 00523c93  894708               mov dword ptr [edi + 8], eax
// 00523c96  8b0de088c000         mov ecx, dword ptr [0xc088e0]
// 00523c9c  3bc1                 cmp eax, ecx
// 00523c9e  7d03                 jge 0x523ca3
// 00523ca0  894f08               mov dword ptr [edi + 8], ecx
// 00523ca3  56                   push esi
// 00523ca4  eb24                 jmp 0x523cca
// 00523ca6  b856555555           mov eax, 0x55555556
// 00523cab  f7ea                 imul edx
// 00523cad  8bc2                 mov eax, edx
// 00523caf  c1e81f               shr eax, 0x1f
// 00523cb2  03c2                 add eax, edx
// 00523cb4  3bc8                 cmp ecx, eax
// 00523cb6  7f19                 jg 0x523cd1
// 00523cb8  807c241c00           cmp byte ptr [esp + 0x1c], 0
// 00523cbd  7412                 je 0x523cd1
// 00523cbf  3bcb                 cmp ecx, ebx
// 00523cc1  7e0e                 jle 0x523cd1
// 00523cc3  3bce                 cmp ecx, esi
// 00523cc5  7c02                 jl 0x523cc9
// 00523cc7  8bce                 mov ecx, esi
// 00523cc9  51                   push ecx
// 00523cca  8bcf                 mov ecx, edi
// 00523ccc  e8bfbd0100           call 0x53fa90
// 00523cd1  3b7704               cmp esi, dword ptr [edi + 4]
// 00523cd4  8bc6                 mov eax, esi
// 00523cd6  7d15                 jge 0x523ced
// 00523cd8  8b0f                 mov ecx, dword ptr [edi]
// 00523cda  8d0c81               lea ecx, [ecx + eax*4]
// 00523cdd  85c9                 test ecx, ecx
// 00523cdf  7406                 je 0x523ce7
// 00523ce1  c70100000000         mov dword ptr [ecx], 0
// 00523ce7  40                   inc eax
// 00523ce8  3b4704               cmp eax, dword ptr [edi + 4]
// 00523ceb  7ceb                 jl 0x523cd8
// 00523ced  5f                   pop edi
// 00523cee  5e                   pop esi
// 00523cef  5d                   pop ebp
// 00523cf0  5b                   pop ebx
// 00523cf1  59                   pop ecx
// 00523cf2  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\GModule.cpp (function ?resize@?$Array@V?$ReferenceCountedPointer@VGModule@G3D@@@G3D@@@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/GModule.cpp
