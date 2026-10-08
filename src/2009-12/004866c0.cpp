// roc 2009-12 004866c0  unit: Ogre::GfxClustererPart  size: 388 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004866c0
//
// 004866c0  8b542404             mov edx, dword ptr [esp + 4]
// 004866c4  53                   push ebx
// 004866c5  55                   push ebp
// 004866c6  56                   push esi
// 004866c7  8bf1                 mov esi, ecx
// 004866c9  57                   push edi
// 004866ca  8b7e04               mov edi, dword ptr [esi + 4]
// 004866cd  3bd7                 cmp edx, edi
// 004866cf  895604               mov dword ptr [esi + 4], edx
// 004866d2  7d1e                 jge 0x4866f2
// 004866d4  8d04d2               lea eax, [edx + edx*8]
// 004866d7  03c0                 add eax, eax
// 004866d9  8bcf                 mov ecx, edi
// 004866db  03c0                 add eax, eax
// 004866dd  2bca                 sub ecx, edx
// 004866df  90                   nop 
// 004866e0  8b1e                 mov ebx, dword ptr [esi]
// 004866e2  c7441810e4269b00     mov dword ptr [eax + ebx + 0x10], 0x9b26e4
// 004866ea  83c024               add eax, 0x24
// 004866ed  83e901               sub ecx, 1
// 004866f0  75ee                 jne 0x4866e0
// 004866f2  f60568ccb70001       test byte ptr [0xb7cc68], 1
// 004866f9  7514                 jne 0x48670f
// 004866fb  830d68ccb70001       or dword ptr [0xb7cc68], 1
// 00486702  bd0a000000           mov ebp, 0xa
// 00486707  892d64ccb700         mov dword ptr [0xb7cc64], ebp
// 0048670d  eb06                 jmp 0x486715
// 0048670f  8b2d64ccb700         mov ebp, dword ptr [0xb7cc64]
// 00486715  8b4e04               mov ecx, dword ptr [esi + 4]
// 00486718  8b5e08               mov ebx, dword ptr [esi + 8]
// 0048671b  3bcb                 cmp ecx, ebx
// 0048671d  7e6e                 jle 0x48678d
// 0048671f  85db                 test ebx, ebx
// 00486721  7509                 jne 0x48672c
// 00486723  895608               mov dword ptr [esi + 8], edx
// 00486726  57                   push edi
// 00486727  e985000000           jmp 0x4867b1
// 0048672c  3bcd                 cmp ecx, ebp
// 0048672e  7d06                 jge 0x486736
// 00486730  896e08               mov dword ptr [esi + 8], ebp
// 00486733  57                   push edi
// 00486734  eb7b                 jmp 0x4867b1
// 00486736  f30f100590269b00     movss xmm0, dword ptr [0x9b2690]
// 0048673e  8bc3                 mov eax, ebx
// 00486740  8d04c0               lea eax, [eax + eax*8]
// 00486743  03c0                 add eax, eax
// 00486745  03c0                 add eax, eax
// 00486747  3d801a0600           cmp eax, 0x61a80
// 0048674c  760a                 jbe 0x486758
// 0048674e  f30f1005b0279b00     movss xmm0, dword ptr [0x9b27b0]
// 00486756  eb0f                 jmp 0x486767
// 00486758  3d00fa0000           cmp eax, 0xfa00
// 0048675d  7608                 jbe 0x486767
// 0048675f  f30f100524169b00     movss xmm0, dword ptr [0x9b1624]
// 00486767  8bc3                 mov eax, ebx
// 00486769  f30f2ac8             cvtsi2ss xmm1, eax
// 0048676d  f30f59c8             mulss xmm1, xmm0
// 00486771  f30f2cd1             cvttss2si edx, xmm1
// 00486775  2bd0                 sub edx, eax
// 00486777  8d040a               lea eax, [edx + ecx]
// 0048677a  894608               mov dword ptr [esi + 8], eax
// 0048677d  8b0d64ccb700         mov ecx, dword ptr [0xb7cc64]
// 00486783  3bc1                 cmp eax, ecx
// 00486785  7d03                 jge 0x48678a
// 00486787  894e08               mov dword ptr [esi + 8], ecx
// 0048678a  57                   push edi
// 0048678b  eb24                 jmp 0x4867b1
// 0048678d  b856555555           mov eax, 0x55555556
// 00486792  f7eb                 imul ebx
// 00486794  8bc2                 mov eax, edx
// 00486796  c1e81f               shr eax, 0x1f
// 00486799  03c2                 add eax, edx
// 0048679b  3bc8                 cmp ecx, eax
// 0048679d  7f19                 jg 0x4867b8
// 0048679f  807c241800           cmp byte ptr [esp + 0x18], 0
// 004867a4  7412                 je 0x4867b8
// 004867a6  3bcd                 cmp ecx, ebp
// 004867a8  7e0e                 jle 0x4867b8
// 004867aa  3bcf                 cmp ecx, edi
// 004867ac  7c02                 jl 0x4867b0
// 004867ae  8bcf                 mov ecx, edi
// 004867b0  51                   push ecx
// 004867b1  8bce                 mov ecx, esi
// 004867b3  e8a8f6ffff           call 0x485e60
// 004867b8  3b7e04               cmp edi, dword ptr [esi + 4]
// 004867bb  0f8d7c000000         jge 0x48683d
// 004867c1  0f57c0               xorps xmm0, xmm0
// 004867c4  f30f100d18ea9a00     movss xmm1, dword ptr [0x9aea18]
// 004867cc  8d0cff               lea ecx, [edi + edi*8]
// 004867cf  03c9                 add ecx, ecx
// 004867d1  03c9                 add ecx, ecx
// 004867d3  8b06                 mov eax, dword ptr [esi]
// 004867d5  03c1                 add eax, ecx
// 004867d7  745b                 je 0x486834
// 004867d9  c74010e4269b00       mov dword ptr [eax + 0x10], 0x9b26e4
// 004867e0  f60544ccb70001       test byte ptr [0xb7cc44], 1
// 004867e7  751f                 jne 0x486808
// 004867e9  830d44ccb70001       or dword ptr [0xb7cc44], 1
// 004867f0  f30f110538ccb700     movss dword ptr [0xb7cc38], xmm0
// 004867f8  f30f110d3cccb700     movss dword ptr [0xb7cc3c], xmm1
// 00486800  f30f110540ccb700     movss dword ptr [0xb7cc40], xmm0
// 00486808  f30f101538ccb700     movss xmm2, dword ptr [0xb7cc38]
// 00486810  f30f115014           movss dword ptr [eax + 0x14], xmm2
// 00486815  f30f10153cccb700     movss xmm2, dword ptr [0xb7cc3c]
// 0048681d  f30f115018           movss dword ptr [eax + 0x18], xmm2
// 00486822  f30f101540ccb700     movss xmm2, dword ptr [0xb7cc40]
// 0048682a  f30f11501c           movss dword ptr [eax + 0x1c], xmm2
// 0048682f  f30f114020           movss dword ptr [eax + 0x20], xmm0
// 00486834  47                   inc edi
// 00486835  83c124               add ecx, 0x24
// 00486838  3b7e04               cmp edi, dword ptr [esi + 4]
// 0048683b  7c96                 jl 0x4867d3
// 0048683d  5f                   pop edi
// 0048683e  5e                   pop esi
// 0048683f  5d                   pop ebp
// 00486840  5b                   pop ebx
// 00486841  c20800               ret 8
// library g3d-6.09/G3Dcpp\GCamera.cpp (function ?resize@?$Array@VFace@Frustum@GCamera@G3D@@@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/GCamera.cpp
