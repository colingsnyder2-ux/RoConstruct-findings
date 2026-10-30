// roc 2009-12 008281b0  unit: CXTPReportColumn  size: 356 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008281b0
//
// 008281b0  83ec0c               sub esp, 0xc
// 008281b3  55                   push ebp
// 008281b4  8b6958               mov ebp, dword ptr [ecx + 0x58]
// 008281b7  8b4530               mov eax, dword ptr [ebp + 0x30]
// 008281ba  56                   push esi
// 008281bb  33f6                 xor esi, esi
// 008281bd  57                   push edi
// 008281be  33ff                 xor edi, edi
// 008281c0  3bc6                 cmp eax, esi
// 008281c2  894c2414             mov dword ptr [esp + 0x14], ecx
// 008281c6  897c240c             mov dword ptr [esp + 0xc], edi
// 008281ca  89742410             mov dword ptr [esp + 0x10], esi
// 008281ce  7e4b                 jle 0x82821b
// 008281d0  85f6                 test esi, esi
// 008281d2  7c11                 jl 0x8281e5
// 008281d4  3bf0                 cmp esi, eax
// 008281d6  7d0d                 jge 0x8281e5
// 008281d8  3b7530               cmp esi, dword ptr [ebp + 0x30]
// 008281db  7d6c                 jge 0x828249
// 008281dd  8b452c               mov eax, dword ptr [ebp + 0x2c]
// 008281e0  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 008281e3  eb02                 jmp 0x8281e7
// 008281e5  33c9                 xor ecx, ecx
// 008281e7  e8d4b80800           call 0x8b3ac0
// 008281ec  85c0                 test eax, eax
// 008281ee  741f                 je 0x82820f
// 008281f0  83b9a800000000       cmp dword ptr [ecx + 0xa8], 0
// 008281f7  740d                 je 0x828206
// 008281f9  894c2410             mov dword ptr [esp + 0x10], ecx
// 008281fd  e87effffff           call 0x828180
// 00828202  03f8                 add edi, eax
// 00828204  eb09                 jmp 0x82820f
// 00828206  e875ffffff           call 0x828180
// 0082820b  2944241c             sub dword ptr [esp + 0x1c], eax
// 0082820f  8b4530               mov eax, dword ptr [ebp + 0x30]
// 00828212  46                   inc esi
// 00828213  3bf0                 cmp esi, eax
// 00828215  7cb9                 jl 0x8281d0
// 00828217  897c240c             mov dword ptr [esp + 0xc], edi
// 0082821b  8b4530               mov eax, dword ptr [ebp + 0x30]
// 0082821e  53                   push ebx
// 0082821f  33db                 xor ebx, ebx
// 00828221  85c0                 test eax, eax
// 00828223  0f8ece000000         jle 0x8282f7
// 00828229  8da42400000000       lea esp, [esp]
// 00828230  85db                 test ebx, ebx
// 00828232  7c1a                 jl 0x82824e
// 00828234  3bd8                 cmp ebx, eax
// 00828236  7d16                 jge 0x82824e
// 00828238  3b5d30               cmp ebx, dword ptr [ebp + 0x30]
// 0082823b  0f8dc2000000         jge 0x828303
// 00828241  8b4d2c               mov ecx, dword ptr [ebp + 0x2c]
// 00828244  8b3499               mov esi, dword ptr [ecx + ebx*4]
// 00828247  eb07                 jmp 0x828250
// 00828249  e8beb8fcff           call 0x7f3b0c
// 0082824e  33f6                 xor esi, esi
// 00828250  8bce                 mov ecx, esi
// 00828252  e869b80800           call 0x8b3ac0
// 00828257  85c0                 test eax, eax
// 00828259  0f848c000000         je 0x8282eb
// 0082825f  e81cffffff           call 0x828180
// 00828264  83bea800000000       cmp dword ptr [esi + 0xa8], 0
// 0082826b  8bf8                 mov edi, eax
// 0082826d  7476                 je 0x8282e5
// 0082826f  3b742414             cmp esi, dword ptr [esp + 0x14]
// 00828273  751a                 jne 0x82828f
// 00828275  8bce                 mov ecx, esi
// 00828277  e8d4fcffff           call 0x827f50
// 0082827c  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00828280  3bf8                 cmp edi, eax
// 00828282  7f61                 jg 0x8282e5
// 00828284  8bce                 mov ecx, esi
// 00828286  e8c5fcffff           call 0x827f50
// 0082828b  8bf8                 mov edi, eax
// 0082828d  eb56                 jmp 0x8282e5
// 0082828f  b801000000           mov eax, 1
// 00828294  39442410             cmp dword ptr [esp + 0x10], eax
// 00828298  7d04                 jge 0x82829e
// 0082829a  89442410             mov dword ptr [esp + 0x10], eax
// 0082829e  8bce                 mov ecx, esi
// 008282a0  e8dbfeffff           call 0x828180
// 008282a5  0faf442420           imul eax, dword ptr [esp + 0x20]
// 008282aa  99                   cdq 
// 008282ab  f77c2410             idiv dword ptr [esp + 0x10]
// 008282af  8bce                 mov ecx, esi
// 008282b1  8bf8                 mov edi, eax
// 008282b3  e898fcffff           call 0x827f50
// 008282b8  3bf8                 cmp edi, eax
// 008282ba  8bce                 mov ecx, esi
// 008282bc  7e11                 jle 0x8282cf
// 008282be  e8bdfeffff           call 0x828180
// 008282c3  0faf442420           imul eax, dword ptr [esp + 0x20]
// 008282c8  99                   cdq 
// 008282c9  f77c2410             idiv dword ptr [esp + 0x10]
// 008282cd  eb05                 jmp 0x8282d4
// 008282cf  e87cfcffff           call 0x827f50
// 008282d4  8bf8                 mov edi, eax
// 008282d6  297c2420             sub dword ptr [esp + 0x20], edi
// 008282da  8bce                 mov ecx, esi
// 008282dc  e89ffeffff           call 0x828180
// 008282e1  29442410             sub dword ptr [esp + 0x10], eax
// 008282e5  3b742418             cmp esi, dword ptr [esp + 0x18]
// 008282e9  741d                 je 0x828308
// 008282eb  8b4530               mov eax, dword ptr [ebp + 0x30]
// 008282ee  43                   inc ebx
// 008282ef  3bd8                 cmp ebx, eax
// 008282f1  0f8c39ffffff         jl 0x828230
// 008282f7  5b                   pop ebx
// 008282f8  5f                   pop edi
// 008282f9  5e                   pop esi
// 008282fa  33c0                 xor eax, eax
// 008282fc  5d                   pop ebp
// 008282fd  83c40c               add esp, 0xc
// 00828300  c20400               ret 4
// 00828303  e804b8fcff           call 0x7f3b0c
// 00828308  5b                   pop ebx
// 00828309  8bc7                 mov eax, edi
// 0082830b  5f                   pop edi
// 0082830c  5e                   pop esi
// 0082830d  5d                   pop ebp
// 0082830e  83c40c               add esp, 0xc
// 00828311  c20400               ret 4
// copied from an identical function in another client (function ?GetPrintWidth@CXTPReportColumn@@QBEHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportColumn.cpp