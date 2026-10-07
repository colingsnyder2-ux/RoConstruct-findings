// roc 2010-06 0055b540  unit: G3D::GCamera  size: 264 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0055b540
//
// 0055b540  8b442404             mov eax, dword ptr [esp + 4]
// 0055b544  53                   push ebx
// 0055b545  56                   push esi
// 0055b546  8bf1                 mov esi, ecx
// 0055b548  57                   push edi
// 0055b549  8b7e04               mov edi, dword ptr [esi + 4]
// 0055b54c  894604               mov dword ptr [esi + 4], eax
// 0055b54f  f60528a1c00001       test byte ptr [0xc0a128], 1
// 0055b556  7514                 jne 0x55b56c
// 0055b558  830d28a1c00001       or dword ptr [0xc0a128], 1
// 0055b55f  bb0a000000           mov ebx, 0xa
// 0055b564  891d24a1c000         mov dword ptr [0xc0a124], ebx
// 0055b56a  eb06                 jmp 0x55b572
// 0055b56c  8b1d24a1c000         mov ebx, dword ptr [0xc0a124]
// 0055b572  8b4e04               mov ecx, dword ptr [esi + 4]
// 0055b575  8b5608               mov edx, dword ptr [esi + 8]
// 0055b578  3bca                 cmp ecx, edx
// 0055b57a  7e6a                 jle 0x55b5e6
// 0055b57c  85d2                 test edx, edx
// 0055b57e  7509                 jne 0x55b589
// 0055b580  894608               mov dword ptr [esi + 8], eax
// 0055b583  57                   push edi
// 0055b584  e981000000           jmp 0x55b60a
// 0055b589  3bcb                 cmp ecx, ebx
// 0055b58b  7d06                 jge 0x55b593
// 0055b58d  895e08               mov dword ptr [esi + 8], ebx
// 0055b590  57                   push edi
// 0055b591  eb77                 jmp 0x55b60a
// 0055b593  f30f10050834a100     movss xmm0, dword ptr [0xa13408]
// 0055b59b  8bc2                 mov eax, edx
// 0055b59d  c1e004               shl eax, 4
// 0055b5a0  3d801a0600           cmp eax, 0x61a80
// 0055b5a5  760a                 jbe 0x55b5b1
// 0055b5a7  f30f10050434a100     movss xmm0, dword ptr [0xa13404]
// 0055b5af  eb0f                 jmp 0x55b5c0
// 0055b5b1  3d00fa0000           cmp eax, 0xfa00
// 0055b5b6  7608                 jbe 0x55b5c0
// 0055b5b8  f30f1005d427a100     movss xmm0, dword ptr [0xa127d4]
// 0055b5c0  8bc2                 mov eax, edx
// 0055b5c2  f30f2ac8             cvtsi2ss xmm1, eax
// 0055b5c6  f30f59c8             mulss xmm1, xmm0
// 0055b5ca  f30f2cd1             cvttss2si edx, xmm1
// 0055b5ce  2bd0                 sub edx, eax
// 0055b5d0  8d040a               lea eax, [edx + ecx]
// 0055b5d3  894608               mov dword ptr [esi + 8], eax
// 0055b5d6  8b0d24a1c000         mov ecx, dword ptr [0xc0a124]
// 0055b5dc  3bc1                 cmp eax, ecx
// 0055b5de  7d03                 jge 0x55b5e3
// 0055b5e0  894e08               mov dword ptr [esi + 8], ecx
// 0055b5e3  57                   push edi
// 0055b5e4  eb24                 jmp 0x55b60a
// 0055b5e6  b856555555           mov eax, 0x55555556
// 0055b5eb  f7ea                 imul edx
// 0055b5ed  8bc2                 mov eax, edx
// 0055b5ef  c1e81f               shr eax, 0x1f
// 0055b5f2  03c2                 add eax, edx
// 0055b5f4  3bc8                 cmp ecx, eax
// 0055b5f6  7f19                 jg 0x55b611
// 0055b5f8  807c241400           cmp byte ptr [esp + 0x14], 0
// 0055b5fd  7412                 je 0x55b611
// 0055b5ff  3bcb                 cmp ecx, ebx
// 0055b601  7e0e                 jle 0x55b611
// 0055b603  3bcf                 cmp ecx, edi
// 0055b605  7c02                 jl 0x55b609
// 0055b607  8bcf                 mov ecx, edi
// 0055b609  51                   push ecx
// 0055b60a  8bce                 mov ecx, esi
// 0055b60c  e8aff8ffff           call 0x55aec0
// 0055b611  3b7e04               cmp edi, dword ptr [esi + 4]
// 0055b614  8bcf                 mov ecx, edi
// 0055b616  7d2a                 jge 0x55b642
// 0055b618  0f57c0               xorps xmm0, xmm0
// 0055b61b  c1e704               shl edi, 4
// 0055b61e  8bd7                 mov edx, edi
// 0055b620  8b06                 mov eax, dword ptr [esi]
// 0055b622  03c2                 add eax, edx
// 0055b624  7413                 je 0x55b639
// 0055b626  f30f11400c           movss dword ptr [eax + 0xc], xmm0
// 0055b62b  f30f114008           movss dword ptr [eax + 8], xmm0
// 0055b630  f30f114004           movss dword ptr [eax + 4], xmm0
// 0055b635  f30f1100             movss dword ptr [eax], xmm0
// 0055b639  41                   inc ecx
// 0055b63a  83c210               add edx, 0x10
// 0055b63d  3b4e04               cmp ecx, dword ptr [esi + 4]
// 0055b640  7cde                 jl 0x55b620
// 0055b642  5f                   pop edi
// 0055b643  5e                   pop esi
// 0055b644  5b                   pop ebx
// 0055b645  c20800               ret 8
// library g3d-6.09/G3Dcpp\GCamera.cpp (function ?resize@?$Array@VVector4@G3D@@@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/GCamera.cpp
