// roc 2010-06 004892a0  unit: G3D::Win32Window  size: 259 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004892a0
//
// 004892a0  8b442404             mov eax, dword ptr [esp + 4]
// 004892a4  53                   push ebx
// 004892a5  55                   push ebp
// 004892a6  56                   push esi
// 004892a7  8bf1                 mov esi, ecx
// 004892a9  57                   push edi
// 004892aa  8b7e04               mov edi, dword ptr [esi + 4]
// 004892ad  894604               mov dword ptr [esi + 4], eax
// 004892b0  f6058438c00001       test byte ptr [0xc03884], 1
// 004892b7  7514                 jne 0x4892cd
// 004892b9  830d8438c00001       or dword ptr [0xc03884], 1
// 004892c0  bd0a000000           mov ebp, 0xa
// 004892c5  892d8038c000         mov dword ptr [0xc03880], ebp
// 004892cb  eb06                 jmp 0x4892d3
// 004892cd  8b2d8038c000         mov ebp, dword ptr [0xc03880]
// 004892d3  8b4e04               mov ecx, dword ptr [esi + 4]
// 004892d6  8b5608               mov edx, dword ptr [esi + 8]
// 004892d9  33db                 xor ebx, ebx
// 004892db  3bca                 cmp ecx, edx
// 004892dd  7e6e                 jle 0x48934d
// 004892df  3bd3                 cmp edx, ebx
// 004892e1  7509                 jne 0x4892ec
// 004892e3  894608               mov dword ptr [esi + 8], eax
// 004892e6  57                   push edi
// 004892e7  e984000000           jmp 0x489370
// 004892ec  3bcd                 cmp ecx, ebp
// 004892ee  7d06                 jge 0x4892f6
// 004892f0  896e08               mov dword ptr [esi + 8], ebp
// 004892f3  57                   push edi
// 004892f4  eb7a                 jmp 0x489370
// 004892f6  f30f10050834a100     movss xmm0, dword ptr [0xa13408]
// 004892fe  8bc2                 mov eax, edx
// 00489300  8d0440               lea eax, [eax + eax*2]
// 00489303  03c0                 add eax, eax
// 00489305  03c0                 add eax, eax
// 00489307  3d801a0600           cmp eax, 0x61a80
// 0048930c  760a                 jbe 0x489318
// 0048930e  f30f10050434a100     movss xmm0, dword ptr [0xa13404]
// 00489316  eb0f                 jmp 0x489327
// 00489318  3d00fa0000           cmp eax, 0xfa00
// 0048931d  7608                 jbe 0x489327
// 0048931f  f30f1005d427a100     movss xmm0, dword ptr [0xa127d4]
// 00489327  8bc2                 mov eax, edx
// 00489329  f30f2ac8             cvtsi2ss xmm1, eax
// 0048932d  f30f59c8             mulss xmm1, xmm0
// 00489331  f30f2cd1             cvttss2si edx, xmm1
// 00489335  2bd0                 sub edx, eax
// 00489337  8d040a               lea eax, [edx + ecx]
// 0048933a  894608               mov dword ptr [esi + 8], eax
// 0048933d  8b0d8038c000         mov ecx, dword ptr [0xc03880]
// 00489343  3bc1                 cmp eax, ecx
// 00489345  7d03                 jge 0x48934a
// 00489347  894e08               mov dword ptr [esi + 8], ecx
// 0048934a  57                   push edi
// 0048934b  eb23                 jmp 0x489370
// 0048934d  b856555555           mov eax, 0x55555556
// 00489352  f7ea                 imul edx
// 00489354  8bc2                 mov eax, edx
// 00489356  c1e81f               shr eax, 0x1f
// 00489359  03c2                 add eax, edx
// 0048935b  3bc8                 cmp ecx, eax
// 0048935d  7f18                 jg 0x489377
// 0048935f  385c2418             cmp byte ptr [esp + 0x18], bl
// 00489363  7412                 je 0x489377
// 00489365  3bcd                 cmp ecx, ebp
// 00489367  7e0e                 jle 0x489377
// 00489369  3bcf                 cmp ecx, edi
// 0048936b  7c02                 jl 0x48936f
// 0048936d  8bcf                 mov ecx, edi
// 0048936f  51                   push ecx
// 00489370  8bce                 mov ecx, esi
// 00489372  e8d9932d00           call 0x762750
// 00489377  3b7e04               cmp edi, dword ptr [esi + 4]
// 0048937a  8bd7                 mov edx, edi
// 0048937c  7d1e                 jge 0x48939c
// 0048937e  8d0c7f               lea ecx, [edi + edi*2]
// 00489381  03c9                 add ecx, ecx
// 00489383  03c9                 add ecx, ecx
// 00489385  8b06                 mov eax, dword ptr [esi]
// 00489387  03c1                 add eax, ecx
// 00489389  7408                 je 0x489393
// 0048938b  8918                 mov dword ptr [eax], ebx
// 0048938d  895804               mov dword ptr [eax + 4], ebx
// 00489390  885808               mov byte ptr [eax + 8], bl
// 00489393  42                   inc edx
// 00489394  83c10c               add ecx, 0xc
// 00489397  3b5604               cmp edx, dword ptr [esi + 4]
// 0048939a  7ce9                 jl 0x489385
// 0048939c  5f                   pop edi
// 0048939d  5e                   pop esi
// 0048939e  5d                   pop ebp
// 0048939f  5b                   pop ebx
// 004893a0  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\GWindow.cpp (function ?resize@?$Array@VLoopBody@GWindow@G3D@@@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/GWindow.cpp
