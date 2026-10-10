// roc 2008-06 00741710  unit: XTPPaintThemes::CXTPOfficeTheme  size: 877 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00741710
//
// 00741710  83ec1c               sub esp, 0x1c
// 00741713  53                   push ebx
// 00741714  55                   push ebp
// 00741715  56                   push esi
// 00741716  57                   push edi
// 00741717  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 0074171b  8b07                 mov eax, dword ptr [edi]
// 0074171d  8b5078               mov edx, dword ptr [eax + 0x78]
// 00741720  8bf1                 mov esi, ecx
// 00741722  8bcf                 mov ecx, edi
// 00741724  ffd2                 call edx
// 00741726  89442410             mov dword ptr [esp + 0x10], eax
// 0074172a  8b07                 mov eax, dword ptr [edi]
// 0074172c  8b506c               mov edx, dword ptr [eax + 0x6c]
// 0074172f  8bcf                 mov ecx, edi
// 00741731  ffd2                 call edx
// 00741733  8bd8                 mov ebx, eax
// 00741735  8b879c000000         mov eax, dword ptr [edi + 0x9c]
// 0074173b  83f8ff               cmp eax, -1
// 0074173e  750f                 jne 0x74174f
// 00741740  8b8f5c010000         mov ecx, dword ptr [edi + 0x15c]
// 00741746  85c9                 test ecx, ecx
// 00741748  7405                 je 0x74174f
// 0074174a  e871a0f6ff           call 0x6ab7c0
// 0074174f  8b8fa0000000         mov ecx, dword ptr [edi + 0xa0]
// 00741755  89442434             mov dword ptr [esp + 0x34], eax
// 00741759  83f9ff               cmp ecx, -1
// 0074175c  7513                 jne 0x741771
// 0074175e  8b875c010000         mov eax, dword ptr [edi + 0x15c]
// 00741764  85c0                 test eax, eax
// 00741766  7409                 je 0x741771
// 00741768  8b4038               mov eax, dword ptr [eax + 0x38]
// 0074176b  89442418             mov dword ptr [esp + 0x18], eax
// 0074176f  eb04                 jmp 0x741775
// 00741771  894c2418             mov dword ptr [esp + 0x18], ecx
// 00741775  8b17                 mov edx, dword ptr [edi]
// 00741777  8b82b4000000         mov eax, dword ptr [edx + 0xb4]
// 0074177d  8bcf                 mov ecx, edi
// 0074177f  ffd0                 call eax
// 00741781  8be8                 mov ebp, eax
// 00741783  8bcf                 mov ecx, edi
// 00741785  896c2414             mov dword ptr [esp + 0x14], ebp
// 00741789  e80298f6ff           call 0x6aaf90
// 0074178e  83f804               cmp eax, 4
// 00741791  0f85d2010000         jne 0x741969
// 00741797  8bce                 mov ecx, esi
// 00741799  e8d2d1f6ff           call 0x6ae970
// 0074179e  33c9                 xor ecx, ecx
// 007417a0  8944241c             mov dword ptr [esp + 0x1c], eax
// 007417a4  3bd9                 cmp ebx, ecx
// 007417a6  741b                 je 0x7417c3
// 007417a8  394c2410             cmp dword ptr [esp + 0x10], ecx
// 007417ac  7415                 je 0x7417c3
// 007417ae  3be9                 cmp ebp, ecx
// 007417b0  7511                 jne 0x7417c3
// 007417b2  394c2434             cmp dword ptr [esp + 0x34], ecx
// 007417b6  740b                 je 0x7417c3
// 007417b8  ba01000000           mov edx, 1
// 007417bd  89542420             mov dword ptr [esp + 0x20], edx
// 007417c1  eb09                 jmp 0x7417cc
// 007417c3  894c2420             mov dword ptr [esp + 0x20], ecx
// 007417c7  ba01000000           mov edx, 1
// 007417cc  8b8700010000         mov eax, dword ptr [edi + 0x100]
// 007417d2  8b8000010000         mov eax, dword ptr [eax + 0x100]
// 007417d8  83f802               cmp eax, 2
// 007417db  7409                 je 0x7417e6
// 007417dd  894c2424             mov dword ptr [esp + 0x24], ecx
// 007417e1  83f803               cmp eax, 3
// 007417e4  7504                 jne 0x7417ea
// 007417e6  89542424             mov dword ptr [esp + 0x24], edx
// 007417ea  394c2410             cmp dword ptr [esp + 0x10], ecx
// 007417ee  740a                 je 0x7417fa
// 007417f0  89542428             mov dword ptr [esp + 0x28], edx
// 007417f4  394c2420             cmp dword ptr [esp + 0x20], ecx
// 007417f8  7404                 je 0x7417fe
// 007417fa  894c2428             mov dword ptr [esp + 0x28], ecx
// 007417fe  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00741802  50                   push eax
// 00741803  8b442418             mov eax, dword ptr [esp + 0x18]
// 00741807  8b542440             mov edx, dword ptr [esp + 0x40]
// 0074180b  6a01                 push 1
// 0074180d  50                   push eax
// 0074180e  8b442424             mov eax, dword ptr [esp + 0x24]
// 00741812  8b6c243c             mov ebp, dword ptr [esp + 0x3c]
// 00741816  50                   push eax
// 00741817  8b442444             mov eax, dword ptr [esp + 0x44]
// 0074181b  50                   push eax
// 0074181c  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00741820  50                   push eax
// 00741821  53                   push ebx
// 00741822  83ec10               sub esp, 0x10
// 00741825  8bc4                 mov eax, esp
// 00741827  8908                 mov dword ptr [eax], ecx
// 00741829  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 0074182d  895004               mov dword ptr [eax + 4], edx
// 00741830  894808               mov dword ptr [eax + 8], ecx
// 00741833  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 00741837  89480c               mov dword ptr [eax + 0xc], ecx
// 0074183a  8b06                 mov eax, dword ptr [esi]
// 0074183c  8b9084000000         mov edx, dword ptr [eax + 0x84]
// 00741842  55                   push ebp
// 00741843  8bce                 mov ecx, esi
// 00741845  ffd2                 call edx
// 00741847  85db                 test ebx, ebx
// 00741849  7506                 jne 0x741851
// 0074184b  395c2410             cmp dword ptr [esp + 0x10], ebx
// 0074184f  7473                 je 0x7418c4
// 00741851  837c241400           cmp dword ptr [esp + 0x14], 0
// 00741856  756c                 jne 0x7418c4
// 00741858  837c243400           cmp dword ptr [esp + 0x34], 0
// 0074185d  7465                 je 0x7418c4
// 0074185f  837c242400           cmp dword ptr [esp + 0x24], 0
// 00741864  6a20                 push 0x20
// 00741866  8bce                 mov ecx, esi
// 00741868  742b                 je 0x741895
// 0074186a  8b442448             mov eax, dword ptr [esp + 0x48]
// 0074186e  2b442440             sub eax, dword ptr [esp + 0x40]
// 00741872  89442434             mov dword ptr [esp + 0x34], eax
// 00741876  e8f5c7f6ff           call 0x6ae070
// 0074187b  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0074187f  8b542438             mov edx, dword ptr [esp + 0x38]
// 00741883  50                   push eax
// 00741884  8b442434             mov eax, dword ptr [esp + 0x34]
// 00741888  50                   push eax
// 00741889  8b442424             mov eax, dword ptr [esp + 0x24]
// 0074188d  6a01                 push 1
// 0074188f  51                   push ecx
// 00741890  03d0                 add edx, eax
// 00741892  52                   push edx
// 00741893  eb28                 jmp 0x7418bd
// 00741895  8b442444             mov eax, dword ptr [esp + 0x44]
// 00741899  2b44243c             sub eax, dword ptr [esp + 0x3c]
// 0074189d  89442434             mov dword ptr [esp + 0x34], eax
// 007418a1  e8cac7f6ff           call 0x6ae070
// 007418a6  8b542444             mov edx, dword ptr [esp + 0x44]
// 007418aa  2b54241c             sub edx, dword ptr [esp + 0x1c]
// 007418ae  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 007418b2  50                   push eax
// 007418b3  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 007418b7  6a01                 push 1
// 007418b9  51                   push ecx
// 007418ba  4a                   dec edx
// 007418bb  52                   push edx
// 007418bc  50                   push eax
// 007418bd  8bcd                 mov ecx, ebp
// 007418bf  e87ca70700           call 0x7bc040
// 007418c4  837c242000           cmp dword ptr [esp + 0x20], 0
// 007418c9  0f84a4010000         je 0x741a73
// 007418cf  8bbf00010000         mov edi, dword ptr [edi + 0x100]
// 007418d5  8bbf00010000         mov edi, dword ptr [edi + 0x100]
// 007418db  57                   push edi
// 007418dc  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 007418e0  6a01                 push 1
// 007418e2  ff74241c             push dword ptr [esp + 0x1c]
// 007418e6  57                   push edi
// 007418e7  ff742444             push dword ptr [esp + 0x44]
// 007418eb  ff742424             push dword ptr [esp + 0x24]
// 007418ef  53                   push ebx
// 007418f0  83ec10               sub esp, 0x10
// 007418f3  837c245000           cmp dword ptr [esp + 0x50], 0
// 007418f8  8bc4                 mov eax, esp
// 007418fa  55                   push ebp
// 007418fb  7437                 je 0x741934
// 007418fd  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 00741901  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 00741905  03ca                 add ecx, edx
// 00741907  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 0074190b  8908                 mov dword ptr [eax], ecx
// 0074190d  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 00741911  895004               mov dword ptr [eax + 4], edx
// 00741914  894808               mov dword ptr [eax + 8], ecx
// 00741917  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 0074191b  89480c               mov dword ptr [eax + 0xc], ecx
// 0074191e  8b06                 mov eax, dword ptr [esi]
// 00741920  8b8084000000         mov eax, dword ptr [eax + 0x84]
// 00741926  8bce                 mov ecx, esi
// 00741928  ffd0                 call eax
// 0074192a  5f                   pop edi
// 0074192b  5e                   pop esi
// 0074192c  5d                   pop ebp
// 0074192d  5b                   pop ebx
// 0074192e  83c41c               add esp, 0x1c
// 00741931  c21800               ret 0x18
// 00741934  8b542468             mov edx, dword ptr [esp + 0x68]
// 00741938  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 0074193c  2b4c244c             sub ecx, dword ptr [esp + 0x4c]
// 00741940  8910                 mov dword ptr [eax], edx
// 00741942  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 00741946  895004               mov dword ptr [eax + 4], edx
// 00741949  8b542470             mov edx, dword ptr [esp + 0x70]
// 0074194d  895008               mov dword ptr [eax + 8], edx
// 00741950  89480c               mov dword ptr [eax + 0xc], ecx
// 00741953  8b06                 mov eax, dword ptr [esi]
// 00741955  8b9084000000         mov edx, dword ptr [eax + 0x84]
// 0074195b  8bce                 mov ecx, esi
// 0074195d  ffd2                 call edx
// 0074195f  5f                   pop edi
// 00741960  5e                   pop esi
// 00741961  5d                   pop ebp
// 00741962  5b                   pop ebx
// 00741963  83c41c               add esp, 0x1c
// 00741966  c21800               ret 0x18
// 00741969  85ed                 test ebp, ebp
// 0074196b  7404                 je 0x741971
// 0074196d  33c0                 xor eax, eax
// 0074196f  eb06                 jmp 0x741977
// 00741971  8b86c8000000         mov eax, dword ptr [esi + 0xc8]
// 00741977  8baf00010000         mov ebp, dword ptr [edi + 0x100]
// 0074197d  8bad00010000         mov ebp, dword ptr [ebp + 0x100]
// 00741983  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00741987  8b542438             mov edx, dword ptr [esp + 0x38]
// 0074198b  55                   push ebp
// 0074198c  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00741990  6a01                 push 1
// 00741992  55                   push ebp
// 00741993  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 00741997  55                   push ebp
// 00741998  8b6c2444             mov ebp, dword ptr [esp + 0x44]
// 0074199c  55                   push ebp
// 0074199d  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 007419a1  55                   push ebp
// 007419a2  8b6c2448             mov ebp, dword ptr [esp + 0x48]
// 007419a6  2bc8                 sub ecx, eax
// 007419a8  53                   push ebx
// 007419a9  83ec10               sub esp, 0x10
// 007419ac  8bc4                 mov eax, esp
// 007419ae  8910                 mov dword ptr [eax], edx
// 007419b0  8b542468             mov edx, dword ptr [esp + 0x68]
// 007419b4  895004               mov dword ptr [eax + 4], edx
// 007419b7  894808               mov dword ptr [eax + 8], ecx
// 007419ba  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 007419be  89480c               mov dword ptr [eax + 0xc], ecx
// 007419c1  8b06                 mov eax, dword ptr [esi]
// 007419c3  8b8084000000         mov eax, dword ptr [eax + 0x84]
// 007419c9  55                   push ebp
// 007419ca  8bce                 mov ecx, esi
// 007419cc  ffd0                 call eax
// 007419ce  85db                 test ebx, ebx
// 007419d0  7506                 jne 0x7419d8
// 007419d2  395c2410             cmp dword ptr [esp + 0x10], ebx
// 007419d6  745b                 je 0x741a33
// 007419d8  837c241400           cmp dword ptr [esp + 0x14], 0
// 007419dd  7554                 jne 0x741a33
// 007419df  837c243400           cmp dword ptr [esp + 0x34], 0
// 007419e4  744d                 je 0x741a33
// 007419e6  8b8f00010000         mov ecx, dword ptr [edi + 0x100]
// 007419ec  8b8900010000         mov ecx, dword ptr [ecx + 0x100]
// 007419f2  8b442440             mov eax, dword ptr [esp + 0x40]
// 007419f6  2b86c8000000         sub eax, dword ptr [esi + 0xc8]
// 007419fc  51                   push ecx
// 007419fd  8b16                 mov edx, dword ptr [esi]
// 007419ff  6a01                 push 1
// 00741a01  8b9284000000         mov edx, dword ptr [edx + 0x84]
// 00741a07  6a00                 push 0
// 00741a09  6a00                 push 0
// 00741a0b  6a01                 push 1
// 00741a0d  6a00                 push 0
// 00741a0f  6a01                 push 1
// 00741a11  48                   dec eax
// 00741a12  83ec10               sub esp, 0x10
// 00741a15  8bcc                 mov ecx, esp
// 00741a17  8901                 mov dword ptr [ecx], eax
// 00741a19  8b442468             mov eax, dword ptr [esp + 0x68]
// 00741a1d  894104               mov dword ptr [ecx + 4], eax
// 00741a20  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 00741a24  894108               mov dword ptr [ecx + 8], eax
// 00741a27  8b442470             mov eax, dword ptr [esp + 0x70]
// 00741a2b  89410c               mov dword ptr [ecx + 0xc], eax
// 00741a2e  55                   push ebp
// 00741a2f  8bce                 mov ecx, esi
// 00741a31  ffd2                 call edx
// 00741a33  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00741a37  8b442444             mov eax, dword ptr [esp + 0x44]
// 00741a3b  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00741a3f  03c2                 add eax, edx
// 00741a41  99                   cdq 
// 00741a42  2bc2                 sub eax, edx
// 00741a44  83c1f9               add ecx, -7
// 00741a47  d1f8                 sar eax, 1
// 00741a49  837c243403           cmp dword ptr [esp + 0x34], 3
// 00741a4e  7508                 jne 0x741a58
// 00741a50  c744243400000000     mov dword ptr [esp + 0x34], 0
// 00741a58  8b16                 mov edx, dword ptr [esi]
// 00741a5a  6a00                 push 0
// 00741a5c  ff742438             push dword ptr [esp + 0x38]
// 00741a60  ff74241c             push dword ptr [esp + 0x1c]
// 00741a64  53                   push ebx
// 00741a65  50                   push eax
// 00741a66  8b82f4000000         mov eax, dword ptr [edx + 0xf4]
// 00741a6c  51                   push ecx
// 00741a6d  57                   push edi
// 00741a6e  55                   push ebp
// 00741a6f  8bce                 mov ecx, esi
// 00741a71  ffd0                 call eax
// 00741a73  5f                   pop edi
// 00741a74  5e                   pop esi
// 00741a75  5d                   pop ebp
// 00741a76  5b                   pop ebx
// 00741a77  83c41c               add esp, 0x1c
// 00741a7a  c21800               ret 0x18
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPOfficeTheme.cpp (function ?DrawSplitButtonFrame@CXTPOfficeTheme@XTPPaintThemes@@MAEXPAVCDC@@PAVCXTPControl@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPOfficeTheme.cpp
