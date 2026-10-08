// from server: 100% by auto
// roc 2010-06 00553d90  unit: seg_00550000  size: 257 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00553d90
//
// 00553d90  8b442404             mov eax, dword ptr [esp + 4]
// 00553d94  53                   push ebx
// 00553d95  55                   push ebp
// 00553d96  56                   push esi
// 00553d97  8bf1                 mov esi, ecx
// 00553d99  8b6e04               mov ebp, dword ptr [esi + 4]
// 00553d9c  894604               mov dword ptr [esi + 4], eax
// 00553d9f  f605489fc00001       test byte ptr [0xc09f48], 1
// 00553da6  57                   push edi
// 00553da7  7514                 jne 0x553dbd
// 00553da9  830d489fc00001       or dword ptr [0xc09f48], 1
// 00553db0  bf0a000000           mov edi, 0xa
// 00553db5  893d449fc000         mov dword ptr [0xc09f44], edi
// 00553dbb  eb06                 jmp 0x553dc3
// 00553dbd  8b3d449fc000         mov edi, dword ptr [0xc09f44]
// 00553dc3  8b4e04               mov ecx, dword ptr [esi + 4]
// 00553dc6  8b5608               mov edx, dword ptr [esi + 8]
// 00553dc9  33db                 xor ebx, ebx
// 00553dcb  3bca                 cmp ecx, edx
// 00553dcd  7e6b                 jle 0x553e3a
// 00553dcf  3bd3                 cmp edx, ebx
// 00553dd1  7509                 jne 0x553ddc
// 00553dd3  894608               mov dword ptr [esi + 8], eax
// 00553dd6  55                   push ebp
// 00553dd7  e981000000           jmp 0x553e5d
// 00553ddc  3bcf                 cmp ecx, edi
// 00553dde  7d06                 jge 0x553de6
// 00553de0  897e08               mov dword ptr [esi + 8], edi
// 00553de3  55                   push ebp
// 00553de4  eb77                 jmp 0x553e5d
// 00553de6  f30f10050834a100     movss xmm0, dword ptr [0xa13408]
// 00553dee  8bc2                 mov eax, edx
// 00553df0  03c0                 add eax, eax
// 00553df2  03c0                 add eax, eax
// 00553df4  3d801a0600           cmp eax, 0x61a80
// 00553df9  760a                 jbe 0x553e05
// 00553dfb  f30f10050434a100     movss xmm0, dword ptr [0xa13404]
// 00553e03  eb0f                 jmp 0x553e14
// 00553e05  3d00fa0000           cmp eax, 0xfa00
// 00553e0a  7608                 jbe 0x553e14
// 00553e0c  f30f1005d427a100     movss xmm0, dword ptr [0xa127d4]
// 00553e14  8bc2                 mov eax, edx
// 00553e16  f30f2ac8             cvtsi2ss xmm1, eax
// 00553e1a  f30f59c8             mulss xmm1, xmm0
// 00553e1e  f30f2cd1             cvttss2si edx, xmm1
// 00553e22  2bd0                 sub edx, eax
// 00553e24  8d040a               lea eax, [edx + ecx]
// 00553e27  894608               mov dword ptr [esi + 8], eax
// 00553e2a  8b0d449fc000         mov ecx, dword ptr [0xc09f44]
// 00553e30  3bc1                 cmp eax, ecx
// 00553e32  7d03                 jge 0x553e37
// 00553e34  894e08               mov dword ptr [esi + 8], ecx
// 00553e37  55                   push ebp
// 00553e38  eb23                 jmp 0x553e5d
// 00553e3a  b856555555           mov eax, 0x55555556
// 00553e3f  f7ea                 imul edx
// 00553e41  8bc2                 mov eax, edx
// 00553e43  c1e81f               shr eax, 0x1f
// 00553e46  03c2                 add eax, edx
// 00553e48  3bc8                 cmp ecx, eax
// 00553e4a  7f18                 jg 0x553e64
// 00553e4c  385c2418             cmp byte ptr [esp + 0x18], bl
// 00553e50  7412                 je 0x553e64
// 00553e52  3bcf                 cmp ecx, edi
// 00553e54  7e0e                 jle 0x553e64
// 00553e56  3bcd                 cmp ecx, ebp
// 00553e58  7c02                 jl 0x553e5c
// 00553e5a  8bcd                 mov ecx, ebp
// 00553e5c  51                   push ecx
// 00553e5d  8bce                 mov ecx, esi
// 00553e5f  e8bc45f3ff           call 0x488420
// 00553e64  3b6e04               cmp ebp, dword ptr [esi + 4]
// 00553e67  8bcd                 mov ecx, ebp
// 00553e69  7d1f                 jge 0x553e8a
// 00553e6b  eb03                 jmp 0x553e70
// 00553e6d  8d4900               lea ecx, [ecx]
// 00553e70  8b16                 mov edx, dword ptr [esi]
// 00553e72  8d048a               lea eax, [edx + ecx*4]
// 00553e75  3bc3                 cmp eax, ebx
// 00553e77  740b                 je 0x553e84
// 00553e79  8818                 mov byte ptr [eax], bl
// 00553e7b  885801               mov byte ptr [eax + 1], bl
// 00553e7e  885802               mov byte ptr [eax + 2], bl
// 00553e81  885803               mov byte ptr [eax + 3], bl
// 00553e84  41                   inc ecx
// 00553e85  3b4e04               cmp ecx, dword ptr [esi + 4]
// 00553e88  7ce6                 jl 0x553e70
// 00553e8a  5f                   pop edi
// 00553e8b  5e                   pop esi
// 00553e8c  5d                   pop ebp
// 00553e8d  5b                   pop ebx
// 00553e8e  c20800               ret 8
// library g3d-6.09/G3Dcpp\GImage_bmp.cpp (function ?resize@?$Array@VColor4uint8@G3D@@@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/GImage_bmp.cpp
