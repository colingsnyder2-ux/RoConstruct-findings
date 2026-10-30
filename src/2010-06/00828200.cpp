// roc 2010-06 00828200  unit: CXTPControlGallery  size: 411 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00828200
//
// 00828200  83ec20               sub esp, 0x20
// 00828203  57                   push edi
// 00828204  8bf9                 mov edi, ecx
// 00828206  e8d5d1ffff           call 0x8253e0
// 0082820b  85c0                 test eax, eax
// 0082820d  750a                 jne 0x828219
// 0082820f  83c8ff               or eax, 0xffffffff
// 00828212  5f                   pop edi
// 00828213  83c420               add esp, 0x20
// 00828216  c20800               ret 8
// 00828219  53                   push ebx
// 0082821a  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 0082821e  56                   push esi
// 0082821f  8b742434             mov esi, dword ptr [esp + 0x34]
// 00828223  83fbff               cmp ebx, -1
// 00828226  740b                 je 0x828233
// 00828228  8bcf                 mov ecx, edi
// 0082822a  e8b1d1ffff           call 0x8253e0
// 0082822f  3bd8                 cmp ebx, eax
// 00828231  7c10                 jl 0x828243
// 00828233  56                   push esi
// 00828234  6aff                 push -1
// 00828236  8bcf                 mov ecx, edi
// 00828238  e893d5ffff           call 0x8257d0
// 0082823d  8bd8                 mov ebx, eax
// 0082823f  895c2430             mov dword ptr [esp + 0x30], ebx
// 00828243  85db                 test ebx, ebx
// 00828245  0f8c4b010000         jl 0x828396
// 0082824b  3b9f54020000         cmp ebx, dword ptr [edi + 0x254]
// 00828251  0f8d3f010000         jge 0x828396
// 00828257  8b8f50020000         mov ecx, dword ptr [edi + 0x250]
// 0082825d  8d045b               lea eax, [ebx + ebx*2]
// 00828260  8b14c1               mov edx, dword ptr [ecx + eax*8]
// 00828263  8d04c1               lea eax, [ecx + eax*8]
// 00828266  8b4804               mov ecx, dword ptr [eax + 4]
// 00828269  894c2410             mov dword ptr [esp + 0x10], ecx
// 0082826d  55                   push ebp
// 0082826e  89542410             mov dword ptr [esp + 0x10], edx
// 00828272  8b5008               mov edx, dword ptr [eax + 8]
// 00828275  8b400c               mov eax, dword ptr [eax + 0xc]
// 00828278  8d4c2420             lea ecx, [esp + 0x20]
// 0082827c  51                   push ecx
// 0082827d  8bcf                 mov ecx, edi
// 0082827f  8954241c             mov dword ptr [esp + 0x1c], edx
// 00828283  89442420             mov dword ptr [esp + 0x20], eax
// 00828287  e8c4d3ffff           call 0x825650
// 0082828c  85f6                 test esi, esi
// 0082828e  0f8d81000000         jge 0x828315
// 00828294  8d4bff               lea ecx, [ebx - 1]
// 00828297  85c9                 test ecx, ecx
// 00828299  0f8ceb000000         jl 0x82838a
// 0082829f  8b742424             mov esi, dword ptr [esp + 0x24]
// 008282a3  8d1449               lea edx, [ecx + ecx*2]
// 008282a6  03d2                 add edx, edx
// 008282a8  03d2                 add edx, edx
// 008282aa  03d2                 add edx, edx
// 008282ac  85c9                 test ecx, ecx
// 008282ae  7c60                 jl 0x828310
// 008282b0  3b8f54020000         cmp ecx, dword ptr [edi + 0x254]
// 008282b6  7d58                 jge 0x828310
// 008282b8  8b8750020000         mov eax, dword ptr [edi + 0x250]
// 008282be  8b6c1010             mov ebp, dword ptr [eax + edx + 0x10]
// 008282c2  03c2                 add eax, edx
// 008282c4  837d4800             cmp dword ptr [ebp + 0x48], 0
// 008282c8  751d                 jne 0x8282e7
// 008282ca  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 008282ce  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 008282d2  2b5804               sub ebx, dword ptr [eax + 4]
// 008282d5  2bee                 sub ebp, esi
// 008282d7  3bdd                 cmp ebx, ebp
// 008282d9  7d08                 jge 0x8282e3
// 008282db  8bd9                 mov ebx, ecx
// 008282dd  895c2434             mov dword ptr [esp + 0x34], ebx
// 008282e1  eb04                 jmp 0x8282e7
// 008282e3  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 008282e7  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 008282eb  2b6804               sub ebp, dword ptr [eax + 4]
// 008282ee  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008282f2  2bc6                 sub eax, esi
// 008282f4  3be8                 cmp ebp, eax
// 008282f6  0f8f8e000000         jg 0x82838a
// 008282fc  49                   dec ecx
// 008282fd  83ea18               sub edx, 0x18
// 00828300  85c9                 test ecx, ecx
// 00828302  7dac                 jge 0x8282b0
// 00828304  5d                   pop ebp
// 00828305  5e                   pop esi
// 00828306  8bc3                 mov eax, ebx
// 00828308  5b                   pop ebx
// 00828309  5f                   pop edi
// 0082830a  83c420               add esp, 0x20
// 0082830d  c20800               ret 8
// 00828310  e837f9f7ff           call 0x7a7c4c
// 00828315  8bcf                 mov ecx, edi
// 00828317  8d5301               lea edx, [ebx + 1]
// 0082831a  e8c1d0ffff           call 0x8253e0
// 0082831f  3bd0                 cmp edx, eax
// 00828321  89442438             mov dword ptr [esp + 0x38], eax
// 00828325  7d63                 jge 0x82838a
// 00828327  8b442424             mov eax, dword ptr [esp + 0x24]
// 0082832b  8d3452               lea esi, [edx + edx*2]
// 0082832e  03f6                 add esi, esi
// 00828330  03f6                 add esi, esi
// 00828332  03f6                 add esi, esi
// 00828334  85f6                 test esi, esi
// 00828336  7cd8                 jl 0x828310
// 00828338  3b9754020000         cmp edx, dword ptr [edi + 0x254]
// 0082833e  7dd0                 jge 0x828310
// 00828340  8b8f50020000         mov ecx, dword ptr [edi + 0x250]
// 00828346  8b6c3110             mov ebp, dword ptr [ecx + esi + 0x10]
// 0082834a  03ce                 add ecx, esi
// 0082834c  837d4800             cmp dword ptr [ebp + 0x48], 0
// 00828350  751d                 jne 0x82836f
// 00828352  8b590c               mov ebx, dword ptr [ecx + 0xc]
// 00828355  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 00828359  2b5c241c             sub ebx, dword ptr [esp + 0x1c]
// 0082835d  2be8                 sub ebp, eax
// 0082835f  3bdd                 cmp ebx, ebp
// 00828361  7d08                 jge 0x82836b
// 00828363  8bda                 mov ebx, edx
// 00828365  895c2434             mov dword ptr [esp + 0x34], ebx
// 00828369  eb04                 jmp 0x82836f
// 0082836b  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 0082836f  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 00828372  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 00828376  2b4c241c             sub ecx, dword ptr [esp + 0x1c]
// 0082837a  2be8                 sub ebp, eax
// 0082837c  3bcd                 cmp ecx, ebp
// 0082837e  7f0a                 jg 0x82838a
// 00828380  42                   inc edx
// 00828381  83c618               add esi, 0x18
// 00828384  3b542438             cmp edx, dword ptr [esp + 0x38]
// 00828388  7caa                 jl 0x828334
// 0082838a  5d                   pop ebp
// 0082838b  5e                   pop esi
// 0082838c  8bc3                 mov eax, ebx
// 0082838e  5b                   pop ebx
// 0082838f  5f                   pop edi
// 00828390  83c420               add esp, 0x20
// 00828393  c20800               ret 8
// 00828396  e8b1f8f7ff           call 0x7a7c4c
// copied from an identical function in another client (function ?GetNextInPage@CXTPControlGallery@@QBEJJH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPControlGallery.cpp