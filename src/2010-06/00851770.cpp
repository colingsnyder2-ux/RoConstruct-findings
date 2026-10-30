// roc 2010-06 00851770  unit: CXTPReportPaintManager  size: 644 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00851770
//
// 00851770  6aff                 push -1
// 00851772  68e17c9b00           push 0x9b7ce1
// 00851777  64a100000000         mov eax, dword ptr fs:[0]
// 0085177d  50                   push eax
// 0085177e  83ec44               sub esp, 0x44
// 00851781  53                   push ebx
// 00851782  55                   push ebp
// 00851783  56                   push esi
// 00851784  57                   push edi
// 00851785  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 0085178a  33c4                 xor eax, esp
// 0085178c  50                   push eax
// 0085178d  8d442458             lea eax, [esp + 0x58]
// 00851791  64a300000000         mov dword ptr fs:[0], eax
// 00851797  8bf9                 mov edi, ecx
// 00851799  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 0085179d  8b465c               mov eax, dword ptr [esi + 0x5c]
// 008517a0  8d4c246c             lea ecx, [esp + 0x6c]
// 008517a4  51                   push ecx
// 008517a5  8bce                 mov ecx, esi
// 008517a7  89442418             mov dword ptr [esp + 0x18], eax
// 008517ab  e880c9f7ff           call 0x7ce130
// 008517b0  8b6c2468             mov ebp, dword ptr [esp + 0x68]
// 008517b4  837d0c00             cmp dword ptr [ebp + 0xc], 0
// 008517b8  c744246000000000     mov dword ptr [esp + 0x60], 0
// 008517c0  8bce                 mov ecx, esi
// 008517c2  740c                 je 0x8517d0
// 008517c4  8b542470             mov edx, dword ptr [esp + 0x70]
// 008517c8  52                   push edx
// 008517c9  e862aaf8ff           call 0x7dc230
// 008517ce  eb05                 jmp 0x8517d5
// 008517d0  e82baaf8ff           call 0x7dc200
// 008517d5  8bd8                 mov ebx, eax
// 008517d7  8d442438             lea eax, [esp + 0x38]
// 008517db  50                   push eax
// 008517dc  8bce                 mov ecx, esi
// 008517de  e85da3f8ff           call 0x7dbb40
// 008517e3  83bea800000000       cmp dword ptr [esi + 0xa8], 0
// 008517ea  8b442438             mov eax, dword ptr [esp + 0x38]
// 008517ee  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 008517f2  8d0c18               lea ecx, [eax + ebx]
// 008517f5  89442428             mov dword ptr [esp + 0x28], eax
// 008517f9  8b442444             mov eax, dword ptr [esp + 0x44]
// 008517fd  894c2440             mov dword ptr [esp + 0x40], ecx
// 00851801  8954242c             mov dword ptr [esp + 0x2c], edx
// 00851805  894c2430             mov dword ptr [esp + 0x30], ecx
// 00851809  89442434             mov dword ptr [esp + 0x34], eax
// 0085180d  750b                 jne 0x85181a
// 0085180f  8bce                 mov ecx, esi
// 00851811  e88aa7f8ff           call 0x7dbfa0
// 00851816  01442428             add dword ptr [esp + 0x28], eax
// 0085181a  8bce                 mov ecx, esi
// 0085181c  e83fa4f8ff           call 0x7dbc60
// 00851821  bb01000000           mov ebx, 1
// 00851826  85c0                 test eax, eax
// 00851828  740a                 je 0x851834
// 0085182a  837d0c00             cmp dword ptr [ebp + 0xc], 0
// 0085182e  895c2468             mov dword ptr [esp + 0x68], ebx
// 00851832  7408                 je 0x85183c
// 00851834  c744246800000000     mov dword ptr [esp + 0x68], 0
// 0085183c  8d4f30               lea ecx, [edi + 0x30]
// 0085183f  51                   push ecx
// 00851840  55                   push ebp
// 00851841  8d4c2450             lea ecx, [esp + 0x50]
// 00851845  e856defaff           call 0x7ff6a0
// 0085184a  8d542420             lea edx, [esp + 0x20]
// 0085184e  52                   push edx
// 0085184f  8d4c2470             lea ecx, [esp + 0x70]
// 00851853  885c2464             mov byte ptr [esp + 0x64], bl
// 00851857  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 0085185d  50                   push eax
// 0085185e  8d4c2474             lea ecx, [esp + 0x74]
// 00851862  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 00851868  50                   push eax
// 00851869  8b4508               mov eax, dword ptr [ebp + 8]
// 0085186c  50                   push eax
// 0085186d  ff1594a19e00         call dword ptr [0x9ea194]
// 00851873  8b442414             mov eax, dword ptr [esp + 0x14]
// 00851877  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0085187b  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0085187f  895c2418             mov dword ptr [esp + 0x18], ebx
// 00851883  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00851887  83f8ff               cmp eax, -1
// 0085188a  7447                 je 0x8518d3
// 0085188c  8b542428             mov edx, dword ptr [esp + 0x28]
// 00851890  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00851894  8b1f                 mov ebx, dword ptr [edi]
// 00851896  50                   push eax
// 00851897  83ec10               sub esp, 0x10
// 0085189a  8bc4                 mov eax, esp
// 0085189c  8910                 mov dword ptr [eax], edx
// 0085189e  8b542444             mov edx, dword ptr [esp + 0x44]
// 008518a2  894804               mov dword ptr [eax + 4], ecx
// 008518a5  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 008518a9  895008               mov dword ptr [eax + 8], edx
// 008518ac  89480c               mov dword ptr [eax + 0xc], ecx
// 008518af  8bce                 mov ecx, esi
// 008518b1  e85aa4f8ff           call 0x7dbd10
// 008518b6  8b93a8000000         mov edx, dword ptr [ebx + 0xa8]
// 008518bc  50                   push eax
// 008518bd  6a00                 push 0
// 008518bf  8bcf                 mov ecx, edi
// 008518c1  ffd2                 call edx
// 008518c3  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008518c7  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 008518cb  8d540102             lea edx, [ecx + eax + 2]
// 008518cf  89542428             mov dword ptr [esp + 0x28], edx
// 008518d3  b803000000           mov eax, 3
// 008518d8  01442428             add dword ptr [esp + 0x28], eax
// 008518dc  29442430             sub dword ptr [esp + 0x30], eax
// 008518e0  8d4c246c             lea ecx, [esp + 0x6c]
// 008518e4  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 008518ea  85c0                 test eax, eax
// 008518ec  0f8ecf000000         jle 0x8519c1
// 008518f2  8b542430             mov edx, dword ptr [esp + 0x30]
// 008518f6  8b442428             mov eax, dword ptr [esp + 0x28]
// 008518fa  3bd0                 cmp edx, eax
// 008518fc  0f8ebf000000         jle 0x8519c1
// 00851902  83bf2802000000       cmp dword ptr [edi + 0x228], 0
// 00851909  7441                 je 0x85194c
// 0085190b  837c246800           cmp dword ptr [esp + 0x68], 0
// 00851910  743a                 je 0x85194c
// 00851912  8bca                 mov ecx, edx
// 00851914  2bc8                 sub ecx, eax
// 00851916  8d41e5               lea eax, [ecx - 0x1b]
// 00851919  3bd8                 cmp ebx, eax
// 0085191b  8bcb                 mov ecx, ebx
// 0085191d  7c02                 jl 0x851921
// 0085191f  8bc8                 mov ecx, eax
// 00851921  83f9fb               cmp ecx, -5
// 00851924  7d0a                 jge 0x851930
// 00851926  c7442418fbffffff     mov dword ptr [esp + 0x18], 0xfffffffb
// 0085192e  eb08                 jmp 0x851938
// 00851930  3bd8                 cmp ebx, eax
// 00851932  7c04                 jl 0x851938
// 00851934  89442418             mov dword ptr [esp + 0x18], eax
// 00851938  8b442428             mov eax, dword ptr [esp + 0x28]
// 0085193c  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00851940  8d440108             lea eax, [ecx + eax + 8]
// 00851944  3bd0                 cmp edx, eax
// 00851946  7c04                 jl 0x85194c
// 00851948  89442430             mov dword ptr [esp + 0x30], eax
// 0085194c  8bce                 mov ecx, esi
// 0085194e  e86da1f8ff           call 0x7dbac0
// 00851953  8b7500               mov esi, dword ptr [ebp]
// 00851956  2410                 and al, 0x10
// 00851958  0fbec0               movsx eax, al
// 0085195b  f7d8                 neg eax
// 0085195d  1bc0                 sbb eax, eax
// 0085195f  83e0f0               and eax, 0xfffffff0
// 00851962  83c020               add eax, 0x20
// 00851965  0d048c0000           or eax, 0x8c04
// 0085196a  50                   push eax
// 0085196b  8d54242c             lea edx, [esp + 0x2c]
// 0085196f  52                   push edx
// 00851970  8d4c2474             lea ecx, [esp + 0x74]
// 00851974  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 0085197a  50                   push eax
// 0085197b  8d4c2478             lea ecx, [esp + 0x78]
// 0085197f  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 00851985  50                   push eax
// 00851986  8b4670               mov eax, dword ptr [esi + 0x70]
// 00851989  8bcd                 mov ecx, ebp
// 0085198b  ffd0                 call eax
// 0085198d  8b442434             mov eax, dword ptr [esp + 0x34]
// 00851991  2b44242c             sub eax, dword ptr [esp + 0x2c]
// 00851995  8b8fe4020000         mov ecx, dword ptr [edi + 0x2e4]
// 0085199b  8b11                 mov edx, dword ptr [ecx]
// 0085199d  50                   push eax
// 0085199e  8b4258               mov eax, dword ptr [edx + 0x58]
// 008519a1  ffd0                 call eax
// 008519a3  8d4c2448             lea ecx, [esp + 0x48]
// 008519a7  8bf0                 mov esi, eax
// 008519a9  c644246000           mov byte ptr [esp + 0x60], 0
// 008519ae  e86dddfaff           call 0x7ff720
// 008519b3  8d4c246c             lea ecx, [esp + 0x6c]
// 008519b7  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 008519bd  8bc6                 mov eax, esi
// 008519bf  eb1d                 jmp 0x8519de
// 008519c1  8d4c2448             lea ecx, [esp + 0x48]
// 008519c5  c644246000           mov byte ptr [esp + 0x60], 0
// 008519ca  e851ddfaff           call 0x7ff720
// 008519cf  8d4c246c             lea ecx, [esp + 0x6c]
// 008519d3  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 008519d9  b808000000           mov eax, 8
// 008519de  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 008519e2  64890d00000000       mov dword ptr fs:[0], ecx
// 008519e9  59                   pop ecx
// 008519ea  5f                   pop edi
// 008519eb  5e                   pop esi
// 008519ec  5d                   pop ebp
// 008519ed  5b                   pop ebx
// 008519ee  83c450               add esp, 0x50
// 008519f1  c20c00               ret 0xc
// copied from an identical function in another client (function ?CalcColumnHeight@CXTPReportPaintManager@@MAEHPAVCDC@@PAVCXTPReportColumn@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\ReportControl\XTPReportPaintManager.cpp