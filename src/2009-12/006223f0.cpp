// roc 2009-12 006223f0  unit: seg_00620000  size: 278 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006223f0
//
// 006223f0  56                   push esi
// 006223f1  8b742408             mov esi, dword ptr [esp + 8]
// 006223f5  837e4c00             cmp dword ptr [esi + 0x4c], 0
// 006223f9  57                   push edi
// 006223fa  8bbea8010000         mov edi, dword ptr [esi + 0x1a8]
// 00622400  8b4718               mov eax, dword ptr [edi + 0x18]
// 00622403  8944240c             mov dword ptr [esp + 0xc], eax
// 00622407  7407                 je 0x622410
// 00622409  c7464c02000000       mov dword ptr [esi + 0x4c], 2
// 00622410  807c241000           cmp byte ptr [esp + 0x10], 0
// 00622415  7417                 je 0x62242e
// 00622417  c7470440136200       mov dword ptr [edi + 4], 0x621340
// 0062241e  c74708c0236200       mov dword ptr [edi + 8], 0x6223c0
// 00622425  c6471c01             mov byte ptr [edi + 0x1c], 1
// 00622429  e9ae000000           jmp 0x6224dc
// 0062242e  837e4c02             cmp dword ptr [esi + 0x4c], 2
// 00622432  7509                 jne 0x62243d
// 00622434  c7470460206200       mov dword ptr [edi + 4], 0x622060
// 0062243b  eb07                 jmp 0x622444
// 0062243d  c74704a01f6200       mov dword ptr [edi + 4], 0x621fa0
// 00622444  55                   push ebp
// 00622445  c74708904a8500       mov dword ptr [edi + 8], 0x854a90
// 0062244c  8b6e70               mov ebp, dword ptr [esi + 0x70]
// 0062244f  83fd01               cmp ebp, 1
// 00622452  7d1c                 jge 0x622470
// 00622454  8b0e                 mov ecx, dword ptr [esi]
// 00622456  c7411438000000       mov dword ptr [ecx + 0x14], 0x38
// 0062245d  8b16                 mov edx, dword ptr [esi]
// 0062245f  c7421801000000       mov dword ptr [edx + 0x18], 1
// 00622466  8b06                 mov eax, dword ptr [esi]
// 00622468  8b08                 mov ecx, dword ptr [eax]
// 0062246a  56                   push esi
// 0062246b  ffd1                 call ecx
// 0062246d  83c404               add esp, 4
// 00622470  81fd00010000         cmp ebp, 0x100
// 00622476  7e1c                 jle 0x622494
// 00622478  8b16                 mov edx, dword ptr [esi]
// 0062247a  c7421439000000       mov dword ptr [edx + 0x14], 0x39
// 00622481  8b06                 mov eax, dword ptr [esi]
// 00622483  c7401800010000       mov dword ptr [eax + 0x18], 0x100
// 0062248a  8b0e                 mov ecx, dword ptr [esi]
// 0062248c  8b11                 mov edx, dword ptr [ecx]
// 0062248e  56                   push esi
// 0062248f  ffd2                 call edx
// 00622491  83c404               add esp, 4
// 00622494  837e4c02             cmp dword ptr [esi + 0x4c], 2
// 00622498  7541                 jne 0x6224db
// 0062249a  8b465c               mov eax, dword ptr [esi + 0x5c]
// 0062249d  83c002               add eax, 2
// 006224a0  8d2c40               lea ebp, [eax + eax*2]
// 006224a3  03ed                 add ebp, ebp
// 006224a5  837f2000             cmp dword ptr [edi + 0x20], 0
// 006224a9  7512                 jne 0x6224bd
// 006224ab  8b4604               mov eax, dword ptr [esi + 4]
// 006224ae  8b4804               mov ecx, dword ptr [eax + 4]
// 006224b1  55                   push ebp
// 006224b2  6a01                 push 1
// 006224b4  56                   push esi
// 006224b5  ffd1                 call ecx
// 006224b7  83c40c               add esp, 0xc
// 006224ba  894720               mov dword ptr [edi + 0x20], eax
// 006224bd  8b5720               mov edx, dword ptr [edi + 0x20]
// 006224c0  55                   push ebp
// 006224c1  52                   push edx
// 006224c2  e83998feff           call 0x60bd00
// 006224c7  83c408               add esp, 8
// 006224ca  837f2800             cmp dword ptr [edi + 0x28], 0
// 006224ce  7507                 jne 0x6224d7
// 006224d0  8bc6                 mov eax, esi
// 006224d2  e849feffff           call 0x622320
// 006224d7  c6472400             mov byte ptr [edi + 0x24], 0
// 006224db  5d                   pop ebp
// 006224dc  807f1c00             cmp byte ptr [edi + 0x1c], 0
// 006224e0  7421                 je 0x622503
// 006224e2  33f6                 xor esi, esi
// 006224e4  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006224e8  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 006224eb  6800100000           push 0x1000
// 006224f0  51                   push ecx
// 006224f1  e80a98feff           call 0x60bd00
// 006224f6  46                   inc esi
// 006224f7  83c408               add esp, 8
// 006224fa  83fe20               cmp esi, 0x20
// 006224fd  7ce5                 jl 0x6224e4
// 006224ff  c6471c00             mov byte ptr [edi + 0x1c], 0
// 00622503  5f                   pop edi
// 00622504  5e                   pop esi
// 00622505  c3                   ret 
// library jpeg-6b/jquant2.c (function _start_pass_2_quant)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
