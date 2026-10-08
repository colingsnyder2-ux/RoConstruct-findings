// from server: 100% by auto
// roc 2010-06 00496710  unit: seg_00490000  size: 386 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00496710
//
// 00496710  6aff                 push -1
// 00496712  689c6a9800           push 0x986a9c
// 00496717  64a100000000         mov eax, dword ptr fs:[0]
// 0049671d  50                   push eax
// 0049671e  64892500000000       mov dword ptr fs:[0], esp
// 00496725  83ec08               sub esp, 8
// 00496728  53                   push ebx
// 00496729  55                   push ebp
// 0049672a  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0049672e  56                   push esi
// 0049672f  8bf1                 mov esi, ecx
// 00496731  8b4604               mov eax, dword ptr [esi + 4]
// 00496734  3be8                 cmp ebp, eax
// 00496736  57                   push edi
// 00496737  89742414             mov dword ptr [esp + 0x14], esi
// 0049673b  89442410             mov dword ptr [esp + 0x10], eax
// 0049673f  896e04               mov dword ptr [esi + 4], ebp
// 00496742  7d24                 jge 0x496768
// 00496744  8bfd                 mov edi, ebp
// 00496746  8bd8                 mov ebx, eax
// 00496748  69ff60070000         imul edi, edi, 0x760
// 0049674e  2bdd                 sub ebx, ebp
// 00496750  8b0e                 mov ecx, dword ptr [esi]
// 00496752  03cf                 add ecx, edi
// 00496754  e817dcffff           call 0x494370
// 00496759  81c760070000         add edi, 0x760
// 0049675f  83eb01               sub ebx, 1
// 00496762  75ec                 jne 0x496750
// 00496764  8b442410             mov eax, dword ptr [esp + 0x10]
// 00496768  f605e83cc00001       test byte ptr [0xc03ce8], 1
// 0049676f  7514                 jne 0x496785
// 00496771  830de83cc00001       or dword ptr [0xc03ce8], 1
// 00496778  bf0a000000           mov edi, 0xa
// 0049677d  893de43cc000         mov dword ptr [0xc03ce4], edi
// 00496783  eb06                 jmp 0x49678b
// 00496785  8b3de43cc000         mov edi, dword ptr [0xc03ce4]
// 0049678b  8b4e04               mov ecx, dword ptr [esi + 4]
// 0049678e  8b5608               mov edx, dword ptr [esi + 8]
// 00496791  33db                 xor ebx, ebx
// 00496793  3bca                 cmp ecx, edx
// 00496795  7e74                 jle 0x49680b
// 00496797  3bd3                 cmp edx, ebx
// 00496799  7509                 jne 0x4967a4
// 0049679b  896e08               mov dword ptr [esi + 8], ebp
// 0049679e  50                   push eax
// 0049679f  e98e000000           jmp 0x496832
// 004967a4  3bcf                 cmp ecx, edi
// 004967a6  7d09                 jge 0x4967b1
// 004967a8  897e08               mov dword ptr [esi + 8], edi
// 004967ab  50                   push eax
// 004967ac  e981000000           jmp 0x496832
// 004967b1  f30f10050834a100     movss xmm0, dword ptr [0xa13408]
// 004967b9  8bc2                 mov eax, edx
// 004967bb  69c060070000         imul eax, eax, 0x760
// 004967c1  3d801a0600           cmp eax, 0x61a80
// 004967c6  760a                 jbe 0x4967d2
// 004967c8  f30f10050434a100     movss xmm0, dword ptr [0xa13404]
// 004967d0  eb0f                 jmp 0x4967e1
// 004967d2  3d00fa0000           cmp eax, 0xfa00
// 004967d7  7608                 jbe 0x4967e1
// 004967d9  f30f1005d427a100     movss xmm0, dword ptr [0xa127d4]
// 004967e1  8bc2                 mov eax, edx
// 004967e3  f30f2ac8             cvtsi2ss xmm1, eax
// 004967e7  f30f59c8             mulss xmm1, xmm0
// 004967eb  f30f2cd1             cvttss2si edx, xmm1
// 004967ef  2bd0                 sub edx, eax
// 004967f1  8d040a               lea eax, [edx + ecx]
// 004967f4  894608               mov dword ptr [esi + 8], eax
// 004967f7  8b0de43cc000         mov ecx, dword ptr [0xc03ce4]
// 004967fd  3bc1                 cmp eax, ecx
// 004967ff  8b442410             mov eax, dword ptr [esp + 0x10]
// 00496803  7d03                 jge 0x496808
// 00496805  894e08               mov dword ptr [esi + 8], ecx
// 00496808  50                   push eax
// 00496809  eb27                 jmp 0x496832
// 0049680b  b856555555           mov eax, 0x55555556
// 00496810  f7ea                 imul edx
// 00496812  8bc2                 mov eax, edx
// 00496814  c1e81f               shr eax, 0x1f
// 00496817  03c2                 add eax, edx
// 00496819  3bc8                 cmp ecx, eax
// 0049681b  7f1c                 jg 0x496839
// 0049681d  385c242c             cmp byte ptr [esp + 0x2c], bl
// 00496821  7416                 je 0x496839
// 00496823  3bcf                 cmp ecx, edi
// 00496825  7e12                 jle 0x496839
// 00496827  8b442410             mov eax, dword ptr [esp + 0x10]
// 0049682b  3bc8                 cmp ecx, eax
// 0049682d  7c02                 jl 0x496831
// 0049682f  8bc8                 mov ecx, eax
// 00496831  51                   push ecx
// 00496832  8bce                 mov ecx, esi
// 00496834  e8c7f6ffff           call 0x495f00
// 00496839  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0049683d  3b7e04               cmp edi, dword ptr [esi + 4]
// 00496840  897c242c             mov dword ptr [esp + 0x2c], edi
// 00496844  7d37                 jge 0x49687d
// 00496846  83cdff               or ebp, 0xffffffff
// 00496849  8da42400000000       lea esp, [esp]
// 00496850  8bcf                 mov ecx, edi
// 00496852  69c960070000         imul ecx, ecx, 0x760
// 00496858  030e                 add ecx, dword ptr [esi]
// 0049685a  894c2428             mov dword ptr [esp + 0x28], ecx
// 0049685e  895c2420             mov dword ptr [esp + 0x20], ebx
// 00496862  740b                 je 0x49686f
// 00496864  6a08                 push 8
// 00496866  6a01                 push 1
// 00496868  6a01                 push 1
// 0049686a  e881ddffff           call 0x4945f0
// 0049686f  47                   inc edi
// 00496870  3b7e04               cmp edi, dword ptr [esi + 4]
// 00496873  896c2420             mov dword ptr [esp + 0x20], ebp
// 00496877  897c242c             mov dword ptr [esp + 0x2c], edi
// 0049687b  7cd3                 jl 0x496850
// 0049687d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00496881  5f                   pop edi
// 00496882  5e                   pop esi
// 00496883  5d                   pop ebp
// 00496884  5b                   pop ebx
// 00496885  64890d00000000       mov dword ptr fs:[0], ecx
// 0049688c  83c414               add esp, 0x14
// 0049688f  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ?resize@?$Array@VRenderState@RenderDevice@G3D@@@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
