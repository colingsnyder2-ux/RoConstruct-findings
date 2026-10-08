// roc 2009-12 004c8540  unit: G3D::Texture  size: 396 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004c8540
//
// 004c8540  6aff                 push -1
// 004c8542  68292b9300           push 0x932b29
// 004c8547  64a100000000         mov eax, dword ptr fs:[0]
// 004c854d  50                   push eax
// 004c854e  64892500000000       mov dword ptr fs:[0], esp
// 004c8555  83ec10               sub esp, 0x10
// 004c8558  8b442420             mov eax, dword ptr [esp + 0x20]
// 004c855c  53                   push ebx
// 004c855d  55                   push ebp
// 004c855e  56                   push esi
// 004c855f  57                   push edi
// 004c8560  8bf9                 mov edi, ecx
// 004c8562  8b5f04               mov ebx, dword ptr [edi + 4]
// 004c8565  3bc3                 cmp eax, ebx
// 004c8567  895c241c             mov dword ptr [esp + 0x1c], ebx
// 004c856b  894704               mov dword ptr [edi + 4], eax
// 004c856e  7d3a                 jge 0x4c85aa
// 004c8570  8d2c40               lea ebp, [eax + eax*2]
// 004c8573  03ed                 add ebp, ebp
// 004c8575  03ed                 add ebp, ebp
// 004c8577  2bd8                 sub ebx, eax
// 004c8579  8da42400000000       lea esp, [esp]
// 004c8580  8b37                 mov esi, dword ptr [edi]
// 004c8582  8b042e               mov eax, dword ptr [esi + ebp]
// 004c8585  03f5                 add esi, ebp
// 004c8587  50                   push eax
// 004c8588  e8531e1200           call 0x5ea3e0
// 004c858d  33c0                 xor eax, eax
// 004c858f  83c404               add esp, 4
// 004c8592  83c50c               add ebp, 0xc
// 004c8595  83eb01               sub ebx, 1
// 004c8598  8906                 mov dword ptr [esi], eax
// 004c859a  894604               mov dword ptr [esi + 4], eax
// 004c859d  894608               mov dword ptr [esi + 8], eax
// 004c85a0  75de                 jne 0x4c8580
// 004c85a2  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 004c85a6  8b442430             mov eax, dword ptr [esp + 0x30]
// 004c85aa  f60520d0b70001       test byte ptr [0xb7d020], 1
// 004c85b1  7514                 jne 0x4c85c7
// 004c85b3  830d20d0b70001       or dword ptr [0xb7d020], 1
// 004c85ba  be0a000000           mov esi, 0xa
// 004c85bf  89351cd0b700         mov dword ptr [0xb7d01c], esi
// 004c85c5  eb06                 jmp 0x4c85cd
// 004c85c7  8b351cd0b700         mov esi, dword ptr [0xb7d01c]
// 004c85cd  8b4f04               mov ecx, dword ptr [edi + 4]
// 004c85d0  8b5708               mov edx, dword ptr [edi + 8]
// 004c85d3  3bca                 cmp ecx, edx
// 004c85d5  0f8e88000000         jle 0x4c8663
// 004c85db  33ed                 xor ebp, ebp
// 004c85dd  3bd5                 cmp edx, ebp
// 004c85df  7510                 jne 0x4c85f1
// 004c85e1  53                   push ebx
// 004c85e2  8bcf                 mov ecx, edi
// 004c85e4  894708               mov dword ptr [edi + 8], eax
// 004c85e7  e874feffff           call 0x4c8460
// 004c85ec  e99f000000           jmp 0x4c8690
// 004c85f1  3bce                 cmp ecx, esi
// 004c85f3  7d10                 jge 0x4c8605
// 004c85f5  53                   push ebx
// 004c85f6  8bcf                 mov ecx, edi
// 004c85f8  897708               mov dword ptr [edi + 8], esi
// 004c85fb  e860feffff           call 0x4c8460
// 004c8600  e98b000000           jmp 0x4c8690
// 004c8605  f30f100590269b00     movss xmm0, dword ptr [0x9b2690]
// 004c860d  8bc2                 mov eax, edx
// 004c860f  8d0440               lea eax, [eax + eax*2]
// 004c8612  03c0                 add eax, eax
// 004c8614  03c0                 add eax, eax
// 004c8616  3d801a0600           cmp eax, 0x61a80
// 004c861b  760a                 jbe 0x4c8627
// 004c861d  f30f1005b0279b00     movss xmm0, dword ptr [0x9b27b0]
// 004c8625  eb0f                 jmp 0x4c8636
// 004c8627  3d00fa0000           cmp eax, 0xfa00
// 004c862c  7608                 jbe 0x4c8636
// 004c862e  f30f100524169b00     movss xmm0, dword ptr [0x9b1624]
// 004c8636  8bc2                 mov eax, edx
// 004c8638  f30f2ac8             cvtsi2ss xmm1, eax
// 004c863c  f30f59c8             mulss xmm1, xmm0
// 004c8640  f30f2cd1             cvttss2si edx, xmm1
// 004c8644  2bd0                 sub edx, eax
// 004c8646  8d040a               lea eax, [edx + ecx]
// 004c8649  894708               mov dword ptr [edi + 8], eax
// 004c864c  8b0d1cd0b700         mov ecx, dword ptr [0xb7d01c]
// 004c8652  3bc1                 cmp eax, ecx
// 004c8654  7d03                 jge 0x4c8659
// 004c8656  894f08               mov dword ptr [edi + 8], ecx
// 004c8659  53                   push ebx
// 004c865a  8bcf                 mov ecx, edi
// 004c865c  e8fffdffff           call 0x4c8460
// 004c8661  eb2d                 jmp 0x4c8690
// 004c8663  b856555555           mov eax, 0x55555556
// 004c8668  f7ea                 imul edx
// 004c866a  8bc2                 mov eax, edx
// 004c866c  c1e81f               shr eax, 0x1f
// 004c866f  03c2                 add eax, edx
// 004c8671  3bc8                 cmp ecx, eax
// 004c8673  7f19                 jg 0x4c868e
// 004c8675  807c243400           cmp byte ptr [esp + 0x34], 0
// 004c867a  7412                 je 0x4c868e
// 004c867c  3bce                 cmp ecx, esi
// 004c867e  7e0e                 jle 0x4c868e
// 004c8680  3bcb                 cmp ecx, ebx
// 004c8682  7c02                 jl 0x4c8686
// 004c8684  8bcb                 mov ecx, ebx
// 004c8686  51                   push ecx
// 004c8687  8bcf                 mov ecx, edi
// 004c8689  e8d2fdffff           call 0x4c8460
// 004c868e  33ed                 xor ebp, ebp
// 004c8690  3b5f04               cmp ebx, dword ptr [edi + 4]
// 004c8693  8bd3                 mov edx, ebx
// 004c8695  7d20                 jge 0x4c86b7
// 004c8697  8d0c5b               lea ecx, [ebx + ebx*2]
// 004c869a  03c9                 add ecx, ecx
// 004c869c  03c9                 add ecx, ecx
// 004c869e  8bff                 mov edi, edi
// 004c86a0  8b07                 mov eax, dword ptr [edi]
// 004c86a2  03c1                 add eax, ecx
// 004c86a4  7408                 je 0x4c86ae
// 004c86a6  896804               mov dword ptr [eax + 4], ebp
// 004c86a9  896808               mov dword ptr [eax + 8], ebp
// 004c86ac  8928                 mov dword ptr [eax], ebp
// 004c86ae  42                   inc edx
// 004c86af  83c10c               add ecx, 0xc
// 004c86b2  3b5704               cmp edx, dword ptr [edi + 4]
// 004c86b5  7ce9                 jl 0x4c86a0
// 004c86b7  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004c86bb  5f                   pop edi
// 004c86bc  5e                   pop esi
// 004c86bd  5d                   pop ebp
// 004c86be  5b                   pop ebx
// 004c86bf  64890d00000000       mov dword ptr fs:[0], ecx
// 004c86c6  83c41c               add esp, 0x1c
// 004c86c9  c20800               ret 8
// library g3d-6.09/G3Dcpp\MeshAlgAdjacency.cpp (function ?resize@?$Array@V?$Array@H@G3D@@@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgAdjacency.cpp
