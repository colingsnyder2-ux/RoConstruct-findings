// roc 2009-12 00822fb0  unit: CXTPReportControl  size: 510 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00822fb0
//
// 00822fb0  83ec24               sub esp, 0x24
// 00822fb3  53                   push ebx
// 00822fb4  55                   push ebp
// 00822fb5  56                   push esi
// 00822fb6  57                   push edi
// 00822fb7  8bf9                 mov edi, ecx
// 00822fb9  8b8744020000         mov eax, dword ptr [edi + 0x244]
// 00822fbf  8b5058               mov edx, dword ptr [eax + 0x58]
// 00822fc2  8db744020000         lea esi, [edi + 0x244]
// 00822fc8  6a00                 push 0
// 00822fca  8bce                 mov ecx, esi
// 00822fcc  ffd2                 call edx
// 00822fce  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00822fd2  6a01                 push 1
// 00822fd4  e8b7341000           call 0x926490
// 00822fd9  8b5c243c             mov ebx, dword ptr [esp + 0x3c]
// 00822fdd  8b8fe0000000         mov ecx, dword ptr [edi + 0xe0]
// 00822fe3  8b6b04               mov ebp, dword ptr [ebx + 4]
// 00822fe6  e8359c0000           call 0x82cc20
// 00822feb  8944241c             mov dword ptr [esp + 0x1c], eax
// 00822fef  85c0                 test eax, eax
// 00822ff1  7512                 jne 0x823005
// 00822ff3  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00822ff7  8b07                 mov eax, dword ptr [edi]
// 00822ff9  8b90b0010000         mov edx, dword ptr [eax + 0x1b0]
// 00822fff  53                   push ebx
// 00823000  51                   push ecx
// 00823001  8bcf                 mov ecx, edi
// 00823003  ffd2                 call edx
// 00823005  8b8f88020000         mov ecx, dword ptr [edi + 0x288]
// 0082300b  8b01                 mov eax, dword ptr [ecx]
// 0082300d  8b507c               mov edx, dword ptr [eax + 0x7c]
// 00823010  6a01                 push 1
// 00823012  6aff                 push -1
// 00823014  ffd2                 call edx
// 00823016  85c0                 test eax, eax
// 00823018  0f8486010000         je 0x8231a4
// 0082301e  8b8788020000         mov eax, dword ptr [edi + 0x288]
// 00823024  8b889c000000         mov ecx, dword ptr [eax + 0x9c]
// 0082302a  8b16                 mov edx, dword ptr [esi]
// 0082302c  8b8298000000         mov eax, dword ptr [edx + 0x98]
// 00823032  68c8000000           push 0xc8
// 00823037  894c2418             mov dword ptr [esp + 0x18], ecx
// 0082303b  6a00                 push 0
// 0082303d  8bce                 mov ecx, esi
// 0082303f  c744242800000000     mov dword ptr [esp + 0x28], 0
// 00823047  ffd0                 call eax
// 00823049  8b8708010000         mov eax, dword ptr [edi + 0x108]
// 0082304f  3b44241c             cmp eax, dword ptr [esp + 0x1c]
// 00823053  89442410             mov dword ptr [esp + 0x10], eax
// 00823057  0f8dfc000000         jge 0x823159
// 0082305d  eb05                 jmp 0x823064
// 0082305f  90                   nop 
// 00823060  8b442410             mov eax, dword ptr [esp + 0x10]
// 00823064  8b8fe0000000         mov ecx, dword ptr [edi + 0xe0]
// 0082306a  8b11                 mov edx, dword ptr [ecx]
// 0082306c  50                   push eax
// 0082306d  8b425c               mov eax, dword ptr [edx + 0x5c]
// 00823070  ffd0                 call eax
// 00823072  8bf0                 mov esi, eax
// 00823074  85f6                 test esi, esi
// 00823076  0f84ca000000         je 0x823146
// 0082307c  3b6b0c               cmp ebp, dword ptr [ebx + 0xc]
// 0082307f  0f8fd4000000         jg 0x823159
// 00823085  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00823089  8b16                 mov edx, dword ptr [esi]
// 0082308b  8b442438             mov eax, dword ptr [esp + 0x38]
// 0082308f  8b5268               mov edx, dword ptr [edx + 0x68]
// 00823092  53                   push ebx
// 00823093  50                   push eax
// 00823094  8bce                 mov ecx, esi
// 00823096  ffd2                 call edx
// 00823098  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0082309c  89442420             mov dword ptr [esp + 0x20], eax
// 008230a0  8b06                 mov eax, dword ptr [esi]
// 008230a2  8b5068               mov edx, dword ptr [eax + 0x68]
// 008230a5  53                   push ebx
// 008230a6  51                   push ecx
// 008230a7  8bce                 mov ecx, esi
// 008230a9  ffd2                 call edx
// 008230ab  8b542414             mov edx, dword ptr [esp + 0x14]
// 008230af  8bd8                 mov ebx, eax
// 008230b1  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 008230b5  8b08                 mov ecx, dword ptr [eax]
// 008230b7  8d0411               lea eax, [ecx + edx]
// 008230ba  8b16                 mov edx, dword ptr [esi]
// 008230bc  8b5264               mov edx, dword ptr [edx + 0x64]
// 008230bf  8944242c             mov dword ptr [esp + 0x2c], eax
// 008230c3  8b870c010000         mov eax, dword ptr [edi + 0x10c]
// 008230c9  50                   push eax
// 008230ca  83ec10               sub esp, 0x10
// 008230cd  8bc4                 mov eax, esp
// 008230cf  8908                 mov dword ptr [eax], ecx
// 008230d1  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008230d5  896804               mov dword ptr [eax + 4], ebp
// 008230d8  894808               mov dword ptr [eax + 8], ecx
// 008230db  03dd                 add ebx, ebp
// 008230dd  89580c               mov dword ptr [eax + 0xc], ebx
// 008230e0  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 008230e4  50                   push eax
// 008230e5  8bce                 mov ecx, esi
// 008230e7  ffd2                 call edx
// 008230e9  8bcf                 mov ecx, edi
// 008230eb  8beb                 mov ebp, ebx
// 008230ed  e84eb4ffff           call 0x81e540
// 008230f2  85c0                 test eax, eax
// 008230f4  741c                 je 0x823112
// 008230f6  8b07                 mov eax, dword ptr [edi]
// 008230f8  8b90e8010000         mov edx, dword ptr [eax + 0x1e8]
// 008230fe  8bcf                 mov ecx, edi
// 00823100  ffd2                 call edx
// 00823102  8b10                 mov edx, dword ptr [eax]
// 00823104  89442418             mov dword ptr [esp + 0x18], eax
// 00823108  8bc8                 mov ecx, eax
// 0082310a  8b425c               mov eax, dword ptr [edx + 0x5c]
// 0082310d  56                   push esi
// 0082310e  ffd0                 call eax
// 00823110  eb0e                 jmp 0x823120
// 00823112  89742418             mov dword ptr [esp + 0x18], esi
// 00823116  83c604               add esi, 4
// 00823119  56                   push esi
// 0082311a  ff150cb29800         call dword ptr [0x98b20c]
// 00823120  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00823124  8b9f44020000         mov ebx, dword ptr [edi + 0x244]
// 0082312a  8db744020000         lea esi, [edi + 0x244]
// 00823130  51                   push ecx
// 00823131  8bce                 mov ecx, esi
// 00823133  83c36c               add ebx, 0x6c
// 00823136  e8e59a0000           call 0x82cc20
// 0082313b  8b13                 mov edx, dword ptr [ebx]
// 0082313d  50                   push eax
// 0082313e  8bce                 mov ecx, esi
// 00823140  ffd2                 call edx
// 00823142  8b5c243c             mov ebx, dword ptr [esp + 0x3c]
// 00823146  8b442410             mov eax, dword ptr [esp + 0x10]
// 0082314a  40                   inc eax
// 0082314b  3b44241c             cmp eax, dword ptr [esp + 0x1c]
// 0082314f  89442410             mov dword ptr [esp + 0x10], eax
// 00823153  0f8c07ffffff         jl 0x823060
// 00823159  8b8700010000         mov eax, dword ptr [edi + 0x100]
// 0082315f  83b8ac02000000       cmp dword ptr [eax + 0x2ac], 0
// 00823166  743c                 je 0x8231a4
// 00823168  3b6b0c               cmp ebp, dword ptr [ebx + 0xc]
// 0082316b  7d37                 jge 0x8231a4
// 0082316d  8b870c010000         mov eax, dword ptr [edi + 0x10c]
// 00823173  8b0b                 mov ecx, dword ptr [ebx]
// 00823175  8b5304               mov edx, dword ptr [ebx + 4]
// 00823178  50                   push eax
// 00823179  8b442424             mov eax, dword ptr [esp + 0x24]
// 0082317d  50                   push eax
// 0082317e  83ec10               sub esp, 0x10
// 00823181  8bc4                 mov eax, esp
// 00823183  8908                 mov dword ptr [eax], ecx
// 00823185  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00823189  89542440             mov dword ptr [esp + 0x40], edx
// 0082318d  8b5308               mov edx, dword ptr [ebx + 8]
// 00823190  8b5b0c               mov ebx, dword ptr [ebx + 0xc]
// 00823193  896804               mov dword ptr [eax + 4], ebp
// 00823196  51                   push ecx
// 00823197  895008               mov dword ptr [eax + 8], edx
// 0082319a  8bcf                 mov ecx, edi
// 0082319c  89580c               mov dword ptr [eax + 0xc], ebx
// 0082319f  e82cf0ffff           call 0x8221d0
// 008231a4  5f                   pop edi
// 008231a5  5e                   pop esi
// 008231a6  5d                   pop ebp
// 008231a7  5b                   pop ebx
// 008231a8  83c424               add esp, 0x24
// 008231ab  c20800               ret 8
// copied from an identical function in another client (function ?DrawRows@CXTPReportControl@@MAEXPAVCDC@@AAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportControl.cpp