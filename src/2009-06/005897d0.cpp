// roc 2009-06 005897d0  unit: seg_00580000  size: 704 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005897d0
//
// 005897d0  53                   push ebx
// 005897d1  56                   push esi
// 005897d2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005897d6  8b4628               mov eax, dword ptr [esi + 0x28]
// 005897d9  57                   push edi
// 005897da  83f805               cmp eax, 5
// 005897dd  0f877c020000         ja 0x589a5f
// 005897e3  ff2485789a5800       jmp dword ptr [eax*4 + 0x589a78]
// 005897ea  837e1464             cmp dword ptr [esi + 0x14], 0x64
// 005897ee  741b                 je 0x58980b
// 005897f0  8b06                 mov eax, dword ptr [esi]
// 005897f2  c7401414000000       mov dword ptr [eax + 0x14], 0x14
// 005897f9  8b0e                 mov ecx, dword ptr [esi]
// 005897fb  8b5614               mov edx, dword ptr [esi + 0x14]
// 005897fe  895118               mov dword ptr [ecx + 0x18], edx
// 00589801  8b06                 mov eax, dword ptr [esi]
// 00589803  8b08                 mov ecx, dword ptr [eax]
// 00589805  56                   push esi
// 00589806  ffd1                 call ecx
// 00589808  83c404               add esp, 4
// 0058980b  b801000000           mov eax, 1
// 00589810  894640               mov dword ptr [esi + 0x40], eax
// 00589813  8886c4000000         mov byte ptr [esi + 0xc4], al
// 00589819  89463c               mov dword ptr [esi + 0x3c], eax
// 0058981c  33c9                 xor ecx, ecx
// 0058981e  888ecc000000         mov byte ptr [esi + 0xcc], cl
// 00589824  8b7644               mov esi, dword ptr [esi + 0x44]
// 00589827  5f                   pop edi
// 00589828  8906                 mov dword ptr [esi], eax
// 0058982a  894608               mov dword ptr [esi + 8], eax
// 0058982d  89460c               mov dword ptr [esi + 0xc], eax
// 00589830  894e10               mov dword ptr [esi + 0x10], ecx
// 00589833  894e14               mov dword ptr [esi + 0x14], ecx
// 00589836  894e18               mov dword ptr [esi + 0x18], ecx
// 00589839  5e                   pop esi
// 0058983a  5b                   pop ebx
// 0058983b  c3                   ret 
// 0058983c  837e1464             cmp dword ptr [esi + 0x14], 0x64
// 00589840  741b                 je 0x58985d
// 00589842  8b16                 mov edx, dword ptr [esi]
// 00589844  c7421414000000       mov dword ptr [edx + 0x14], 0x14
// 0058984b  8b06                 mov eax, dword ptr [esi]
// 0058984d  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 00589850  894818               mov dword ptr [eax + 0x18], ecx
// 00589853  8b16                 mov edx, dword ptr [esi]
// 00589855  8b02                 mov eax, dword ptr [edx]
// 00589857  56                   push esi
// 00589858  ffd0                 call eax
// 0058985a  83c404               add esp, 4
// 0058985d  8b5644               mov edx, dword ptr [esi + 0x44]
// 00589860  b801000000           mov eax, 1
// 00589865  8886c4000000         mov byte ptr [esi + 0xc4], al
// 0058986b  33c9                 xor ecx, ecx
// 0058986d  888ecc000000         mov byte ptr [esi + 0xcc], cl
// 00589873  bb03000000           mov ebx, 3
// 00589878  895e40               mov dword ptr [esi + 0x40], ebx
// 0058987b  895e3c               mov dword ptr [esi + 0x3c], ebx
// 0058987e  8902                 mov dword ptr [edx], eax
// 00589880  bf02000000           mov edi, 2
// 00589885  897a08               mov dword ptr [edx + 8], edi
// 00589888  897a0c               mov dword ptr [edx + 0xc], edi
// 0058988b  894a10               mov dword ptr [edx + 0x10], ecx
// 0058988e  894a14               mov dword ptr [edx + 0x14], ecx
// 00589891  894a18               mov dword ptr [edx + 0x18], ecx
// 00589894  8b4e44               mov ecx, dword ptr [esi + 0x44]
// 00589897  897954               mov dword ptr [ecx + 0x54], edi
// 0058989a  89415c               mov dword ptr [ecx + 0x5c], eax
// 0058989d  83c154               add ecx, 0x54
// 005898a0  89410c               mov dword ptr [ecx + 0xc], eax
// 005898a3  894110               mov dword ptr [ecx + 0x10], eax
// 005898a6  894114               mov dword ptr [ecx + 0x14], eax
// 005898a9  894118               mov dword ptr [ecx + 0x18], eax
// 005898ac  8b7644               mov esi, dword ptr [esi + 0x44]
// 005898af  81c6a8000000         add esi, 0xa8
// 005898b5  891e                 mov dword ptr [esi], ebx
// 005898b7  894608               mov dword ptr [esi + 8], eax
// 005898ba  89460c               mov dword ptr [esi + 0xc], eax
// 005898bd  894610               mov dword ptr [esi + 0x10], eax
// 005898c0  894614               mov dword ptr [esi + 0x14], eax
// 005898c3  5f                   pop edi
// 005898c4  894618               mov dword ptr [esi + 0x18], eax
// 005898c7  5e                   pop esi
// 005898c8  5b                   pop ebx
// 005898c9  c3                   ret 
// 005898ca  837e1464             cmp dword ptr [esi + 0x14], 0x64
// 005898ce  748d                 je 0x58985d
// 005898d0  8b0e                 mov ecx, dword ptr [esi]
// 005898d2  c7411414000000       mov dword ptr [ecx + 0x14], 0x14
// 005898d9  8b16                 mov edx, dword ptr [esi]
// 005898db  8b4614               mov eax, dword ptr [esi + 0x14]
// 005898de  894218               mov dword ptr [edx + 0x18], eax
// 005898e1  8b0e                 mov ecx, dword ptr [esi]
// 005898e3  8b11                 mov edx, dword ptr [ecx]
// 005898e5  56                   push esi
// 005898e6  ffd2                 call edx
// 005898e8  e96dffffff           jmp 0x58985a
// 005898ed  837e1464             cmp dword ptr [esi + 0x14], 0x64
// 005898f1  741b                 je 0x58990e
// 005898f3  8b06                 mov eax, dword ptr [esi]
// 005898f5  c7401414000000       mov dword ptr [eax + 0x14], 0x14
// 005898fc  8b0e                 mov ecx, dword ptr [esi]
// 005898fe  8b5614               mov edx, dword ptr [esi + 0x14]
// 00589901  895118               mov dword ptr [ecx + 0x18], edx
// 00589904  8b06                 mov eax, dword ptr [esi]
// 00589906  8b08                 mov ecx, dword ptr [eax]
// 00589908  56                   push esi
// 00589909  ffd1                 call ecx
// 0058990b  83c404               add esp, 4
// 0058990e  8b5644               mov edx, dword ptr [esi + 0x44]
// 00589911  33c9                 xor ecx, ecx
// 00589913  888ec4000000         mov byte ptr [esi + 0xc4], cl
// 00589919  b801000000           mov eax, 1
// 0058991e  8886cc000000         mov byte ptr [esi + 0xcc], al
// 00589924  bb04000000           mov ebx, 4
// 00589929  895e40               mov dword ptr [esi + 0x40], ebx
// 0058992c  895e3c               mov dword ptr [esi + 0x3c], ebx
// 0058992f  c70243000000         mov dword ptr [edx], 0x43
// 00589935  894208               mov dword ptr [edx + 8], eax
// 00589938  89420c               mov dword ptr [edx + 0xc], eax
// 0058993b  894a10               mov dword ptr [edx + 0x10], ecx
// 0058993e  894a14               mov dword ptr [edx + 0x14], ecx
// 00589941  894a18               mov dword ptr [edx + 0x18], ecx
// 00589944  8b5644               mov edx, dword ptr [esi + 0x44]
// 00589947  c742544d000000       mov dword ptr [edx + 0x54], 0x4d
// 0058994e  89425c               mov dword ptr [edx + 0x5c], eax
// 00589951  894260               mov dword ptr [edx + 0x60], eax
// 00589954  894a64               mov dword ptr [edx + 0x64], ecx
// 00589957  894a68               mov dword ptr [edx + 0x68], ecx
// 0058995a  894a6c               mov dword ptr [edx + 0x6c], ecx
// 0058995d  83c254               add edx, 0x54
// 00589960  8b5644               mov edx, dword ptr [esi + 0x44]
// 00589963  81c2a8000000         add edx, 0xa8
// 00589969  c70259000000         mov dword ptr [edx], 0x59
// 0058996f  894208               mov dword ptr [edx + 8], eax
// 00589972  89420c               mov dword ptr [edx + 0xc], eax
// 00589975  894a10               mov dword ptr [edx + 0x10], ecx
// 00589978  894a14               mov dword ptr [edx + 0x14], ecx
// 0058997b  894a18               mov dword ptr [edx + 0x18], ecx
// 0058997e  8b7644               mov esi, dword ptr [esi + 0x44]
// 00589981  81c6fc000000         add esi, 0xfc
// 00589987  5f                   pop edi
// 00589988  c7064b000000         mov dword ptr [esi], 0x4b
// 0058998e  894608               mov dword ptr [esi + 8], eax
// 00589991  89460c               mov dword ptr [esi + 0xc], eax
// 00589994  894e10               mov dword ptr [esi + 0x10], ecx
// 00589997  894e14               mov dword ptr [esi + 0x14], ecx
// 0058999a  894e18               mov dword ptr [esi + 0x18], ecx
// 0058999d  5e                   pop esi
// 0058999e  5b                   pop ebx
// 0058999f  c3                   ret 
// 005899a0  837e1464             cmp dword ptr [esi + 0x14], 0x64
// 005899a4  741b                 je 0x5899c1
// 005899a6  8b16                 mov edx, dword ptr [esi]
// 005899a8  c7421414000000       mov dword ptr [edx + 0x14], 0x14
// 005899af  8b06                 mov eax, dword ptr [esi]
// 005899b1  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 005899b4  894818               mov dword ptr [eax + 0x18], ecx
// 005899b7  8b16                 mov edx, dword ptr [esi]
// 005899b9  8b02                 mov eax, dword ptr [edx]
// 005899bb  56                   push esi
// 005899bc  ffd0                 call eax
// 005899be  83c404               add esp, 4
// 005899c1  8b5644               mov edx, dword ptr [esi + 0x44]
// 005899c4  c7464005000000       mov dword ptr [esi + 0x40], 5
// 005899cb  b801000000           mov eax, 1
// 005899d0  8886cc000000         mov byte ptr [esi + 0xcc], al
// 005899d6  33c9                 xor ecx, ecx
// 005899d8  888ec4000000         mov byte ptr [esi + 0xc4], cl
// 005899de  bf02000000           mov edi, 2
// 005899e3  bb04000000           mov ebx, 4
// 005899e8  895e3c               mov dword ptr [esi + 0x3c], ebx
// 005899eb  897a08               mov dword ptr [edx + 8], edi
// 005899ee  897a0c               mov dword ptr [edx + 0xc], edi
// 005899f1  8902                 mov dword ptr [edx], eax
// 005899f3  894a10               mov dword ptr [edx + 0x10], ecx
// 005899f6  894a14               mov dword ptr [edx + 0x14], ecx
// 005899f9  894a18               mov dword ptr [edx + 0x18], ecx
// 005899fc  8b5644               mov edx, dword ptr [esi + 0x44]
// 005899ff  897a54               mov dword ptr [edx + 0x54], edi
// 00589a02  89425c               mov dword ptr [edx + 0x5c], eax
// 00589a05  894260               mov dword ptr [edx + 0x60], eax
// 00589a08  894264               mov dword ptr [edx + 0x64], eax
// 00589a0b  894268               mov dword ptr [edx + 0x68], eax
// 00589a0e  89426c               mov dword ptr [edx + 0x6c], eax
// 00589a11  83c254               add edx, 0x54
// 00589a14  8b5644               mov edx, dword ptr [esi + 0x44]
// 00589a17  81c2a8000000         add edx, 0xa8
// 00589a1d  c70203000000         mov dword ptr [edx], 3
// 00589a23  894208               mov dword ptr [edx + 8], eax
// 00589a26  89420c               mov dword ptr [edx + 0xc], eax
// 00589a29  894210               mov dword ptr [edx + 0x10], eax
// 00589a2c  894214               mov dword ptr [edx + 0x14], eax
// 00589a2f  894218               mov dword ptr [edx + 0x18], eax
// 00589a32  8b7644               mov esi, dword ptr [esi + 0x44]
// 00589a35  81c6fc000000         add esi, 0xfc
// 00589a3b  897e08               mov dword ptr [esi + 8], edi
// 00589a3e  897e0c               mov dword ptr [esi + 0xc], edi
// 00589a41  5f                   pop edi
// 00589a42  891e                 mov dword ptr [esi], ebx
// 00589a44  894e10               mov dword ptr [esi + 0x10], ecx
// 00589a47  894e14               mov dword ptr [esi + 0x14], ecx
// 00589a4a  894e18               mov dword ptr [esi + 0x18], ecx
// 00589a4d  5e                   pop esi
// 00589a4e  5b                   pop ebx
// 00589a4f  c3                   ret 
// 00589a50  6a00                 push 0
// 00589a52  56                   push esi
// 00589a53  e888faffff           call 0x5894e0
// 00589a58  83c408               add esp, 8
// 00589a5b  5f                   pop edi
// 00589a5c  5e                   pop esi
// 00589a5d  5b                   pop ebx
// 00589a5e  c3                   ret 
// 00589a5f  8b0e                 mov ecx, dword ptr [esi]
// 00589a61  c7411409000000       mov dword ptr [ecx + 0x14], 9
// 00589a68  8b16                 mov edx, dword ptr [esi]
// 00589a6a  8b02                 mov eax, dword ptr [edx]
// 00589a6c  56                   push esi
// 00589a6d  ffd0                 call eax
// 00589a6f  83c404               add esp, 4
// 00589a72  5f                   pop edi
// 00589a73  5e                   pop esi
// 00589a74  5b                   pop ebx
// 00589a75  c3                   ret 
// 00589a76  8bff                 mov edi, edi
// 00589a78  50                   push eax
// 00589a79  9a5800ea975800       lcall 0x58, 0x97ea0058
// 00589a80  3c98                 cmp al, 0x98
// 00589a82  58                   pop eax
// 00589a83  00ca                 add dl, cl
// 00589a85  98                   cwde 
// 00589a86  58                   pop eax
// 00589a87  00ed                 add ch, ch
// 00589a89  98                   cwde 
// 00589a8a  58                   pop eax
// library jpeg-6b/jcparam.c (function _jpeg_default_colorspace)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcparam.c
