// roc 2010-06 00589310  unit: seg_00580000  size: 552 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00589310
//
// 00589310  53                   push ebx
// 00589311  56                   push esi
// 00589312  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00589316  8b4604               mov eax, dword ptr [esi + 4]
// 00589319  8b08                 mov ecx, dword ptr [eax]
// 0058931b  57                   push edi
// 0058931c  6a0c                 push 0xc
// 0058931e  6a01                 push 1
// 00589320  56                   push esi
// 00589321  ffd1                 call ecx
// 00589323  8bf8                 mov edi, eax
// 00589325  89be50010000         mov dword ptr [esi + 0x150], edi
// 0058932b  c707b0454500         mov dword ptr [edi], 0x4545b0
// 00589331  8b4628               mov eax, dword ptr [esi + 0x28]
// 00589334  48                   dec eax
// 00589335  bb04000000           mov ebx, 4
// 0058933a  83c40c               add esp, 0xc
// 0058933d  3bc3                 cmp eax, ebx
// 0058933f  771e                 ja 0x58935f
// 00589341  ff248510955800       jmp dword ptr [eax*4 + 0x589510]
// 00589348  837e2401             cmp dword ptr [esi + 0x24], 1
// 0058934c  742a                 je 0x589378
// 0058934e  eb15                 jmp 0x589365
// 00589350  837e2403             cmp dword ptr [esi + 0x24], 3
// 00589354  7422                 je 0x589378
// 00589356  eb0d                 jmp 0x589365
// 00589358  395e24               cmp dword ptr [esi + 0x24], ebx
// 0058935b  741b                 je 0x589378
// 0058935d  eb06                 jmp 0x589365
// 0058935f  837e2401             cmp dword ptr [esi + 0x24], 1
// 00589363  7d13                 jge 0x589378
// 00589365  8b16                 mov edx, dword ptr [esi]
// 00589367  c7421409000000       mov dword ptr [edx + 0x14], 9
// 0058936e  8b06                 mov eax, dword ptr [esi]
// 00589370  8b08                 mov ecx, dword ptr [eax]
// 00589372  56                   push esi
// 00589373  ffd1                 call ecx
// 00589375  83c404               add esp, 4
// 00589378  8b4640               mov eax, dword ptr [esi + 0x40]
// 0058937b  8d48ff               lea ecx, [eax - 1]
// 0058937e  3bcb                 cmp ecx, ebx
// 00589380  0f875e010000         ja 0x5894e4
// 00589386  ff248d24955800       jmp dword ptr [ecx*4 + 0x589524]
// 0058938d  837e3c01             cmp dword ptr [esi + 0x3c], 1
// 00589391  7413                 je 0x5893a6
// 00589393  8b16                 mov edx, dword ptr [esi]
// 00589395  c742140a000000       mov dword ptr [edx + 0x14], 0xa
// 0058939c  8b06                 mov eax, dword ptr [esi]
// 0058939e  8b08                 mov ecx, dword ptr [eax]
// 005893a0  56                   push esi
// 005893a1  ffd1                 call ecx
// 005893a3  83c404               add esp, 4
// 005893a6  8b4628               mov eax, dword ptr [esi + 0x28]
// 005893a9  83f801               cmp eax, 1
// 005893ac  741b                 je 0x5893c9
// 005893ae  83f802               cmp eax, 2
// 005893b1  7511                 jne 0x5893c4
// 005893b3  c707408e5800         mov dword ptr [edi], 0x588e40
// 005893b9  c7470430905800       mov dword ptr [edi + 4], 0x589030
// 005893c0  5f                   pop edi
// 005893c1  5e                   pop esi
// 005893c2  5b                   pop ebx
// 005893c3  c3                   ret 
// 005893c4  83f803               cmp eax, 3
// 005893c7  752e                 jne 0x5893f7
// 005893c9  c7470430925800       mov dword ptr [edi + 4], 0x589230
// 005893d0  5f                   pop edi
// 005893d1  5e                   pop esi
// 005893d2  5b                   pop ebx
// 005893d3  c3                   ret 
// 005893d4  837e3c03             cmp dword ptr [esi + 0x3c], 3
// 005893d8  7413                 je 0x5893ed
// 005893da  8b16                 mov edx, dword ptr [esi]
// 005893dc  c742140a000000       mov dword ptr [edx + 0x14], 0xa
// 005893e3  8b06                 mov eax, dword ptr [esi]
// 005893e5  8b08                 mov ecx, dword ptr [eax]
// 005893e7  56                   push esi
// 005893e8  ffd1                 call ecx
// 005893ea  83c404               add esp, 4
// 005893ed  837e2802             cmp dword ptr [esi + 0x28], 2
// 005893f1  0f840d010000         je 0x589504
// 005893f7  8b16                 mov edx, dword ptr [esi]
// 005893f9  c742141b000000       mov dword ptr [edx + 0x14], 0x1b
// 00589400  8b06                 mov eax, dword ptr [esi]
// 00589402  8b08                 mov ecx, dword ptr [eax]
// 00589404  56                   push esi
// 00589405  ffd1                 call ecx
// 00589407  83c404               add esp, 4
// 0058940a  5f                   pop edi
// 0058940b  5e                   pop esi
// 0058940c  5b                   pop ebx
// 0058940d  c3                   ret 
// 0058940e  837e3c03             cmp dword ptr [esi + 0x3c], 3
// 00589412  7413                 je 0x589427
// 00589414  8b16                 mov edx, dword ptr [esi]
// 00589416  c742140a000000       mov dword ptr [edx + 0x14], 0xa
// 0058941d  8b06                 mov eax, dword ptr [esi]
// 0058941f  8b08                 mov ecx, dword ptr [eax]
// 00589421  56                   push esi
// 00589422  ffd1                 call ecx
// 00589424  83c404               add esp, 4
// 00589427  8b4628               mov eax, dword ptr [esi + 0x28]
// 0058942a  83f802               cmp eax, 2
// 0058942d  7511                 jne 0x589440
// 0058942f  c707408e5800         mov dword ptr [edi], 0x588e40
// 00589435  c74704208f5800       mov dword ptr [edi + 4], 0x588f20
// 0058943c  5f                   pop edi
// 0058943d  5e                   pop esi
// 0058943e  5b                   pop ebx
// 0058943f  c3                   ret 
// 00589440  83f803               cmp eax, 3
// 00589443  0f84bb000000         je 0x589504
// 00589449  8b16                 mov edx, dword ptr [esi]
// 0058944b  c742141b000000       mov dword ptr [edx + 0x14], 0x1b
// 00589452  8b06                 mov eax, dword ptr [esi]
// 00589454  8b08                 mov ecx, dword ptr [eax]
// 00589456  56                   push esi
// 00589457  ffd1                 call ecx
// 00589459  83c404               add esp, 4
// 0058945c  5f                   pop edi
// 0058945d  5e                   pop esi
// 0058945e  5b                   pop ebx
// 0058945f  c3                   ret 
// 00589460  395e3c               cmp dword ptr [esi + 0x3c], ebx
// 00589463  7413                 je 0x589478
// 00589465  8b16                 mov edx, dword ptr [esi]
// 00589467  c742140a000000       mov dword ptr [edx + 0x14], 0xa
// 0058946e  8b06                 mov eax, dword ptr [esi]
// 00589470  8b08                 mov ecx, dword ptr [eax]
// 00589472  56                   push esi
// 00589473  ffd1                 call ecx
// 00589475  83c404               add esp, 4
// 00589478  395e28               cmp dword ptr [esi + 0x28], ebx
// 0058947b  0f8483000000         je 0x589504
// 00589481  8b16                 mov edx, dword ptr [esi]
// 00589483  c742141b000000       mov dword ptr [edx + 0x14], 0x1b
// 0058948a  8b06                 mov eax, dword ptr [esi]
// 0058948c  8b08                 mov ecx, dword ptr [eax]
// 0058948e  56                   push esi
// 0058948f  ffd1                 call ecx
// 00589491  83c404               add esp, 4
// 00589494  5f                   pop edi
// 00589495  5e                   pop esi
// 00589496  5b                   pop ebx
// 00589497  c3                   ret 
// 00589498  395e3c               cmp dword ptr [esi + 0x3c], ebx
// 0058949b  7413                 je 0x5894b0
// 0058949d  8b16                 mov edx, dword ptr [esi]
// 0058949f  c742140a000000       mov dword ptr [edx + 0x14], 0xa
// 005894a6  8b06                 mov eax, dword ptr [esi]
// 005894a8  8b08                 mov ecx, dword ptr [eax]
// 005894aa  56                   push esi
// 005894ab  ffd1                 call ecx
// 005894ad  83c404               add esp, 4
// 005894b0  8b4628               mov eax, dword ptr [esi + 0x28]
// 005894b3  3bc3                 cmp eax, ebx
// 005894b5  7511                 jne 0x5894c8
// 005894b7  c707408e5800         mov dword ptr [edi], 0x588e40
// 005894bd  c74704e0905800       mov dword ptr [edi + 4], 0x5890e0
// 005894c4  5f                   pop edi
// 005894c5  5e                   pop esi
// 005894c6  5b                   pop ebx
// 005894c7  c3                   ret 
// 005894c8  83f805               cmp eax, 5
// 005894cb  7437                 je 0x589504
// 005894cd  8b16                 mov edx, dword ptr [esi]
// 005894cf  c742141b000000       mov dword ptr [edx + 0x14], 0x1b
// 005894d6  8b06                 mov eax, dword ptr [esi]
// 005894d8  8b08                 mov ecx, dword ptr [eax]
// 005894da  56                   push esi
// 005894db  ffd1                 call ecx
// 005894dd  83c404               add esp, 4
// 005894e0  5f                   pop edi
// 005894e1  5e                   pop esi
// 005894e2  5b                   pop ebx
// 005894e3  c3                   ret 
// 005894e4  3b4628               cmp eax, dword ptr [esi + 0x28]
// 005894e7  7508                 jne 0x5894f1
// 005894e9  8b563c               mov edx, dword ptr [esi + 0x3c]
// 005894ec  3b5624               cmp edx, dword ptr [esi + 0x24]
// 005894ef  7413                 je 0x589504
// 005894f1  8b06                 mov eax, dword ptr [esi]
// 005894f3  c740141b000000       mov dword ptr [eax + 0x14], 0x1b
// 005894fa  8b0e                 mov ecx, dword ptr [esi]
// 005894fc  8b11                 mov edx, dword ptr [ecx]
// 005894fe  56                   push esi
// 005894ff  ffd2                 call edx
// 00589501  83c404               add esp, 4
// 00589504  c7470490925800       mov dword ptr [edi + 4], 0x589290
// 0058950b  5f                   pop edi
// 0058950c  5e                   pop esi
// 0058950d  5b                   pop ebx
// 0058950e  c3                   ret 
// 0058950f  90                   nop 
// 00589510  48                   dec eax
// 00589511  93                   xchg ebx, eax
// 00589512  58                   pop eax
// 00589513  005093               add byte ptr [eax - 0x6d], dl
// 00589516  58                   pop eax
// 00589517  005093               add byte ptr [eax - 0x6d], dl
// 0058951a  58                   pop eax
// 0058951b  005893               add byte ptr [eax - 0x6d], bl
// 0058951e  58                   pop eax
// 0058951f  005893               add byte ptr [eax - 0x6d], bl
// 00589522  58                   pop eax
// 00589523  008d935800d4         add byte ptr [ebp - 0x2bffa76d], cl
// 00589529  93                   xchg ebx, eax
// 0058952a  58                   pop eax
// 0058952b  000e                 add byte ptr [esi], cl
// 0058952d  94                   xchg esp, eax
// 0058952e  58                   pop eax
// 0058952f  006094               add byte ptr [eax - 0x6c], ah
// 00589532  58                   pop eax
// library jpeg-6b/jccolor.c (function _jinit_color_converter)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jccolor.c
