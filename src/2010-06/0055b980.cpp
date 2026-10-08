// from server: 100% by auto
// roc 2010-06 0055b980  unit: G3D::GCamera  size: 388 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0055b980
//
// 0055b980  8b542404             mov edx, dword ptr [esp + 4]
// 0055b984  53                   push ebx
// 0055b985  55                   push ebp
// 0055b986  56                   push esi
// 0055b987  8bf1                 mov esi, ecx
// 0055b989  57                   push edi
// 0055b98a  8b7e04               mov edi, dword ptr [esi + 4]
// 0055b98d  3bd7                 cmp edx, edi
// 0055b98f  895604               mov dword ptr [esi + 4], edx
// 0055b992  7d1e                 jge 0x55b9b2
// 0055b994  8d04d2               lea eax, [edx + edx*8]
// 0055b997  03c0                 add eax, eax
// 0055b999  8bcf                 mov ecx, edi
// 0055b99b  03c0                 add eax, eax
// 0055b99d  2bca                 sub ecx, edx
// 0055b99f  90                   nop 
// 0055b9a0  8b1e                 mov ebx, dword ptr [esi]
// 0055b9a2  c7441810340aa200     mov dword ptr [eax + ebx + 0x10], 0xa20a34
// 0055b9aa  83c024               add eax, 0x24
// 0055b9ad  83e901               sub ecx, 1
// 0055b9b0  75ee                 jne 0x55b9a0
// 0055b9b2  f60530a1c00001       test byte ptr [0xc0a130], 1
// 0055b9b9  7514                 jne 0x55b9cf
// 0055b9bb  830d30a1c00001       or dword ptr [0xc0a130], 1
// 0055b9c2  bd0a000000           mov ebp, 0xa
// 0055b9c7  892d2ca1c000         mov dword ptr [0xc0a12c], ebp
// 0055b9cd  eb06                 jmp 0x55b9d5
// 0055b9cf  8b2d2ca1c000         mov ebp, dword ptr [0xc0a12c]
// 0055b9d5  8b4e04               mov ecx, dword ptr [esi + 4]
// 0055b9d8  8b5e08               mov ebx, dword ptr [esi + 8]
// 0055b9db  3bcb                 cmp ecx, ebx
// 0055b9dd  7e6e                 jle 0x55ba4d
// 0055b9df  85db                 test ebx, ebx
// 0055b9e1  7509                 jne 0x55b9ec
// 0055b9e3  895608               mov dword ptr [esi + 8], edx
// 0055b9e6  57                   push edi
// 0055b9e7  e985000000           jmp 0x55ba71
// 0055b9ec  3bcd                 cmp ecx, ebp
// 0055b9ee  7d06                 jge 0x55b9f6
// 0055b9f0  896e08               mov dword ptr [esi + 8], ebp
// 0055b9f3  57                   push edi
// 0055b9f4  eb7b                 jmp 0x55ba71
// 0055b9f6  f30f10050834a100     movss xmm0, dword ptr [0xa13408]
// 0055b9fe  8bc3                 mov eax, ebx
// 0055ba00  8d04c0               lea eax, [eax + eax*8]
// 0055ba03  03c0                 add eax, eax
// 0055ba05  03c0                 add eax, eax
// 0055ba07  3d801a0600           cmp eax, 0x61a80
// 0055ba0c  760a                 jbe 0x55ba18
// 0055ba0e  f30f10050434a100     movss xmm0, dword ptr [0xa13404]
// 0055ba16  eb0f                 jmp 0x55ba27
// 0055ba18  3d00fa0000           cmp eax, 0xfa00
// 0055ba1d  7608                 jbe 0x55ba27
// 0055ba1f  f30f1005d427a100     movss xmm0, dword ptr [0xa127d4]
// 0055ba27  8bc3                 mov eax, ebx
// 0055ba29  f30f2ac8             cvtsi2ss xmm1, eax
// 0055ba2d  f30f59c8             mulss xmm1, xmm0
// 0055ba31  f30f2cd1             cvttss2si edx, xmm1
// 0055ba35  2bd0                 sub edx, eax
// 0055ba37  8d040a               lea eax, [edx + ecx]
// 0055ba3a  894608               mov dword ptr [esi + 8], eax
// 0055ba3d  8b0d2ca1c000         mov ecx, dword ptr [0xc0a12c]
// 0055ba43  3bc1                 cmp eax, ecx
// 0055ba45  7d03                 jge 0x55ba4a
// 0055ba47  894e08               mov dword ptr [esi + 8], ecx
// 0055ba4a  57                   push edi
// 0055ba4b  eb24                 jmp 0x55ba71
// 0055ba4d  b856555555           mov eax, 0x55555556
// 0055ba52  f7eb                 imul ebx
// 0055ba54  8bc2                 mov eax, edx
// 0055ba56  c1e81f               shr eax, 0x1f
// 0055ba59  03c2                 add eax, edx
// 0055ba5b  3bc8                 cmp ecx, eax
// 0055ba5d  7f19                 jg 0x55ba78
// 0055ba5f  807c241800           cmp byte ptr [esp + 0x18], 0
// 0055ba64  7412                 je 0x55ba78
// 0055ba66  3bcd                 cmp ecx, ebp
// 0055ba68  7e0e                 jle 0x55ba78
// 0055ba6a  3bcf                 cmp ecx, edi
// 0055ba6c  7c02                 jl 0x55ba70
// 0055ba6e  8bcf                 mov ecx, edi
// 0055ba70  51                   push ecx
// 0055ba71  8bce                 mov ecx, esi
// 0055ba73  e8d8fbffff           call 0x55b650
// 0055ba78  3b7e04               cmp edi, dword ptr [esi + 4]
// 0055ba7b  0f8d7c000000         jge 0x55bafd
// 0055ba81  0f57c0               xorps xmm0, xmm0
// 0055ba84  f30f100d24f6a100     movss xmm1, dword ptr [0xa1f624]
// 0055ba8c  8d0cff               lea ecx, [edi + edi*8]
// 0055ba8f  03c9                 add ecx, ecx
// 0055ba91  03c9                 add ecx, ecx
// 0055ba93  8b06                 mov eax, dword ptr [esi]
// 0055ba95  03c1                 add eax, ecx
// 0055ba97  745b                 je 0x55baf4
// 0055ba99  c74010340aa200       mov dword ptr [eax + 0x10], 0xa20a34
// 0055baa0  f6052891c00001       test byte ptr [0xc09128], 1
// 0055baa7  751f                 jne 0x55bac8
// 0055baa9  830d2891c00001       or dword ptr [0xc09128], 1
// 0055bab0  f30f11051c91c000     movss dword ptr [0xc0911c], xmm0
// 0055bab8  f30f110d2091c000     movss dword ptr [0xc09120], xmm1
// 0055bac0  f30f11052491c000     movss dword ptr [0xc09124], xmm0
// 0055bac8  f30f10151c91c000     movss xmm2, dword ptr [0xc0911c]
// 0055bad0  f30f115014           movss dword ptr [eax + 0x14], xmm2
// 0055bad5  f30f10152091c000     movss xmm2, dword ptr [0xc09120]
// 0055badd  f30f115018           movss dword ptr [eax + 0x18], xmm2
// 0055bae2  f30f10152491c000     movss xmm2, dword ptr [0xc09124]
// 0055baea  f30f11501c           movss dword ptr [eax + 0x1c], xmm2
// 0055baef  f30f114020           movss dword ptr [eax + 0x20], xmm0
// 0055baf4  47                   inc edi
// 0055baf5  83c124               add ecx, 0x24
// 0055baf8  3b7e04               cmp edi, dword ptr [esi + 4]
// 0055bafb  7c96                 jl 0x55ba93
// 0055bafd  5f                   pop edi
// 0055bafe  5e                   pop esi
// 0055baff  5d                   pop ebp
// 0055bb00  5b                   pop ebx
// 0055bb01  c20800               ret 8
// library g3d-6.09/G3Dcpp\GCamera.cpp (function ?resize@?$Array@VFace@Frustum@GCamera@G3D@@@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/GCamera.cpp
