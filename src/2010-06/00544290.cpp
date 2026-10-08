// roc 2010-06 00544290  unit: RBX::RbxG3D::RenderScene  size: 317 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00544290
//
// 00544290  6aff                 push -1
// 00544292  6829fd9800           push 0x98fd29
// 00544297  64a100000000         mov eax, dword ptr fs:[0]
// 0054429d  50                   push eax
// 0054429e  64892500000000       mov dword ptr fs:[0], esp
// 005442a5  51                   push ecx
// 005442a6  8b442414             mov eax, dword ptr [esp + 0x14]
// 005442aa  55                   push ebp
// 005442ab  56                   push esi
// 005442ac  8bf1                 mov esi, ecx
// 005442ae  57                   push edi
// 005442af  8b7e04               mov edi, dword ptr [esi + 4]
// 005442b2  894604               mov dword ptr [esi + 4], eax
// 005442b5  f6053091c00001       test byte ptr [0xc09130], 1
// 005442bc  8974240c             mov dword ptr [esp + 0xc], esi
// 005442c0  7514                 jne 0x5442d6
// 005442c2  830d3091c00001       or dword ptr [0xc09130], 1
// 005442c9  bd0a000000           mov ebp, 0xa
// 005442ce  892d2c91c000         mov dword ptr [0xc0912c], ebp
// 005442d4  eb06                 jmp 0x5442dc
// 005442d6  8b2d2c91c000         mov ebp, dword ptr [0xc0912c]
// 005442dc  8b4e04               mov ecx, dword ptr [esi + 4]
// 005442df  8b5608               mov edx, dword ptr [esi + 8]
// 005442e2  3bca                 cmp ecx, edx
// 005442e4  7e6d                 jle 0x544353
// 005442e6  85d2                 test edx, edx
// 005442e8  7509                 jne 0x5442f3
// 005442ea  894608               mov dword ptr [esi + 8], eax
// 005442ed  57                   push edi
// 005442ee  e984000000           jmp 0x544377
// 005442f3  3bcd                 cmp ecx, ebp
// 005442f5  7d06                 jge 0x5442fd
// 005442f7  896e08               mov dword ptr [esi + 8], ebp
// 005442fa  57                   push edi
// 005442fb  eb7a                 jmp 0x544377
// 005442fd  f30f10050834a100     movss xmm0, dword ptr [0xa13408]
// 00544305  8bc2                 mov eax, edx
// 00544307  8d0480               lea eax, [eax + eax*4]
// 0054430a  c1e004               shl eax, 4
// 0054430d  3d801a0600           cmp eax, 0x61a80
// 00544312  760a                 jbe 0x54431e
// 00544314  f30f10050434a100     movss xmm0, dword ptr [0xa13404]
// 0054431c  eb0f                 jmp 0x54432d
// 0054431e  3d00fa0000           cmp eax, 0xfa00
// 00544323  7608                 jbe 0x54432d
// 00544325  f30f1005d427a100     movss xmm0, dword ptr [0xa127d4]
// 0054432d  8bc2                 mov eax, edx
// 0054432f  f30f2ac8             cvtsi2ss xmm1, eax
// 00544333  f30f59c8             mulss xmm1, xmm0
// 00544337  f30f2cd1             cvttss2si edx, xmm1
// 0054433b  2bd0                 sub edx, eax
// 0054433d  8d040a               lea eax, [edx + ecx]
// 00544340  894608               mov dword ptr [esi + 8], eax
// 00544343  8b0d2c91c000         mov ecx, dword ptr [0xc0912c]
// 00544349  3bc1                 cmp eax, ecx
// 0054434b  7d03                 jge 0x544350
// 0054434d  894e08               mov dword ptr [esi + 8], ecx
// 00544350  57                   push edi
// 00544351  eb24                 jmp 0x544377
// 00544353  b856555555           mov eax, 0x55555556
// 00544358  f7ea                 imul edx
// 0054435a  8bc2                 mov eax, edx
// 0054435c  c1e81f               shr eax, 0x1f
// 0054435f  03c2                 add eax, edx
// 00544361  3bc8                 cmp ecx, eax
// 00544363  7f19                 jg 0x54437e
// 00544365  807c242400           cmp byte ptr [esp + 0x24], 0
// 0054436a  7412                 je 0x54437e
// 0054436c  3bcd                 cmp ecx, ebp
// 0054436e  7e0e                 jle 0x54437e
// 00544370  3bcf                 cmp ecx, edi
// 00544372  7c02                 jl 0x544376
// 00544374  8bcf                 mov ecx, edi
// 00544376  51                   push ecx
// 00544377  8bce                 mov ecx, esi
// 00544379  e832f9ffff           call 0x543cb0
// 0054437e  3b7e04               cmp edi, dword ptr [esi + 4]
// 00544381  897c2424             mov dword ptr [esp + 0x24], edi
// 00544385  7d32                 jge 0x5443b9
// 00544387  83cdff               or ebp, 0xffffffff
// 0054438a  8d9b00000000         lea ebx, [ebx]
// 00544390  8d0cbf               lea ecx, [edi + edi*4]
// 00544393  c1e104               shl ecx, 4
// 00544396  030e                 add ecx, dword ptr [esi]
// 00544398  894c2420             mov dword ptr [esp + 0x20], ecx
// 0054439c  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005443a4  7405                 je 0x5443ab
// 005443a6  e895550100           call 0x559940
// 005443ab  47                   inc edi
// 005443ac  3b7e04               cmp edi, dword ptr [esi + 4]
// 005443af  896c2418             mov dword ptr [esp + 0x18], ebp
// 005443b3  897c2424             mov dword ptr [esp + 0x24], edi
// 005443b7  7cd7                 jl 0x544390
// 005443b9  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005443bd  5f                   pop edi
// 005443be  5e                   pop esi
// 005443bf  5d                   pop ebp
// 005443c0  64890d00000000       mov dword ptr fs:[0], ecx
// 005443c7  83c410               add esp, 0x10
// 005443ca  c20800               ret 8
// library rbxgs-g3d/GLG3Dcpp\ToneMap.cpp (function ?resize@?$Array@VGLight@G3D@@@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/ToneMap.cpp
