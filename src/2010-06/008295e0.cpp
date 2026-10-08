// roc 2010-06 008295e0  unit: XTPPaintThemes::CXTPDefaultTheme  size: 797 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008295e0
//
// 008295e0  837c242400           cmp dword ptr [esp + 0x24], 0
// 008295e5  53                   push ebx
// 008295e6  55                   push ebp
// 008295e7  56                   push esi
// 008295e8  57                   push edi
// 008295e9  8bf1                 mov esi, ecx
// 008295eb  0f85e9000000         jne 0x8296da
// 008295f1  83be4c01000000       cmp dword ptr [esi + 0x14c], 0
// 008295f8  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 008295fc  7574                 jne 0x829672
// 008295fe  8bcf                 mov ecx, edi
// 00829600  e8cb3cf9ff           call 0x7bd2d0
// 00829605  85c0                 test eax, eax
// 00829607  7569                 jne 0x829672
// 00829609  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0082960d  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00829611  6a14                 push 0x14
// 00829613  8bce                 mov ecx, esi
// 00829615  43                   inc ebx
// 00829616  45                   inc ebp
// 00829617  e8f43af8ff           call 0x7ad110
// 0082961c  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00829620  50                   push eax
// 00829621  8b442428             mov eax, dword ptr [esp + 0x28]
// 00829625  50                   push eax
// 00829626  51                   push ecx
// 00829627  8bcf                 mov ecx, edi
// 00829629  e8b23cf9ff           call 0x7bd2e0
// 0082962e  50                   push eax
// 0082962f  55                   push ebp
// 00829630  53                   push ebx
// 00829631  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 00829635  53                   push ebx
// 00829636  8bcf                 mov ecx, edi
// 00829638  e883b9f9ff           call 0x7c4fc0
// 0082963d  6a10                 push 0x10
// 0082963f  8bce                 mov ecx, esi
// 00829641  e8ca3af8ff           call 0x7ad110
// 00829646  8b542424             mov edx, dword ptr [esp + 0x24]
// 0082964a  50                   push eax
// 0082964b  8b442424             mov eax, dword ptr [esp + 0x24]
// 0082964f  52                   push edx
// 00829650  50                   push eax
// 00829651  8bcf                 mov ecx, edi
// 00829653  e8883cf9ff           call 0x7bd2e0
// 00829658  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0082965c  8b542424             mov edx, dword ptr [esp + 0x24]
// 00829660  50                   push eax
// 00829661  51                   push ecx
// 00829662  52                   push edx
// 00829663  53                   push ebx
// 00829664  8bcf                 mov ecx, edi
// 00829666  e855b9f9ff           call 0x7c4fc0
// 0082966b  5f                   pop edi
// 0082966c  5e                   pop esi
// 0082966d  5d                   pop ebp
// 0082966e  5b                   pop ebx
// 0082966f  c23000               ret 0x30
// 00829672  83be5401000000       cmp dword ptr [esi + 0x154], 0
// 00829679  742e                 je 0x8296a9
// 0082967b  8bcf                 mov ecx, edi
// 0082967d  e87e56f9ff           call 0x7bed00
// 00829682  85c0                 test eax, eax
// 00829684  7523                 jne 0x8296a9
// 00829686  8b4640               mov eax, dword ptr [esi + 0x40]
// 00829689  83f8ff               cmp eax, -1
// 0082968c  7505                 jne 0x829693
// 0082968e  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 00829691  eb02                 jmp 0x829695
// 00829693  8bc8                 mov ecx, eax
// 00829695  8b4634               mov eax, dword ptr [esi + 0x34]
// 00829698  83f8ff               cmp eax, -1
// 0082969b  7503                 jne 0x8296a0
// 0082969d  8b4630               mov eax, dword ptr [esi + 0x30]
// 008296a0  51                   push ecx
// 008296a1  50                   push eax
// 008296a2  8bcf                 mov ecx, edi
// 008296a4  e8778ff9ff           call 0x7c2620
// 008296a9  8b442424             mov eax, dword ptr [esp + 0x24]
// 008296ad  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008296b1  50                   push eax
// 008296b2  51                   push ecx
// 008296b3  6a01                 push 1
// 008296b5  8bcf                 mov ecx, edi
// 008296b7  e884abf9ff           call 0x7c4240
// 008296bc  8b542424             mov edx, dword ptr [esp + 0x24]
// 008296c0  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008296c4  50                   push eax
// 008296c5  8b442424             mov eax, dword ptr [esp + 0x24]
// 008296c9  52                   push edx
// 008296ca  50                   push eax
// 008296cb  51                   push ecx
// 008296cc  8bcf                 mov ecx, edi
// 008296ce  e87db8f9ff           call 0x7c4f50
// 008296d3  5f                   pop edi
// 008296d4  5e                   pop esi
// 008296d5  5d                   pop ebp
// 008296d6  5b                   pop ebx
// 008296d7  c23000               ret 0x30
// 008296da  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 008296de  8b442430             mov eax, dword ptr [esp + 0x30]
// 008296e2  83f902               cmp ecx, 2
// 008296e5  0f85b8000000         jne 0x8297a3
// 008296eb  85c0                 test eax, eax
// 008296ed  0f85b0000000         jne 0x8297a3
// 008296f3  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 008296f7  8bcf                 mov ecx, edi
// 008296f9  e8d23bf9ff           call 0x7bd2d0
// 008296fe  85c0                 test eax, eax
// 00829700  7539                 jne 0x82973b
// 00829702  6a10                 push 0x10
// 00829704  8bce                 mov ecx, esi
// 00829706  e8053af8ff           call 0x7ad110
// 0082970b  8b542424             mov edx, dword ptr [esp + 0x24]
// 0082970f  50                   push eax
// 00829710  8b442424             mov eax, dword ptr [esp + 0x24]
// 00829714  52                   push edx
// 00829715  50                   push eax
// 00829716  8bcf                 mov ecx, edi
// 00829718  e8a355f9ff           call 0x7becc0
// 0082971d  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00829721  8b542424             mov edx, dword ptr [esp + 0x24]
// 00829725  50                   push eax
// 00829726  8b442424             mov eax, dword ptr [esp + 0x24]
// 0082972a  51                   push ecx
// 0082972b  52                   push edx
// 0082972c  50                   push eax
// 0082972d  8bcf                 mov ecx, edi
// 0082972f  e88cb8f9ff           call 0x7c4fc0
// 00829734  5f                   pop edi
// 00829735  5e                   pop esi
// 00829736  5d                   pop ebp
// 00829737  5b                   pop ebx
// 00829738  c23000               ret 0x30
// 0082973b  83be5401000000       cmp dword ptr [esi + 0x154], 0
// 00829742  742e                 je 0x829772
// 00829744  8bcf                 mov ecx, edi
// 00829746  e8b555f9ff           call 0x7bed00
// 0082974b  85c0                 test eax, eax
// 0082974d  7523                 jne 0x829772
// 0082974f  8b4640               mov eax, dword ptr [esi + 0x40]
// 00829752  83f8ff               cmp eax, -1
// 00829755  7505                 jne 0x82975c
// 00829757  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 0082975a  eb02                 jmp 0x82975e
// 0082975c  8bc8                 mov ecx, eax
// 0082975e  8b4634               mov eax, dword ptr [esi + 0x34]
// 00829761  83f8ff               cmp eax, -1
// 00829764  7503                 jne 0x829769
// 00829766  8b4630               mov eax, dword ptr [esi + 0x30]
// 00829769  51                   push ecx
// 0082976a  50                   push eax
// 0082976b  8bcf                 mov ecx, edi
// 0082976d  e8ae8ef9ff           call 0x7c2620
// 00829772  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00829776  8b542420             mov edx, dword ptr [esp + 0x20]
// 0082977a  51                   push ecx
// 0082977b  52                   push edx
// 0082977c  6a01                 push 1
// 0082977e  8bcf                 mov ecx, edi
// 00829780  e8bbaaf9ff           call 0x7c4240
// 00829785  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00829789  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0082978d  50                   push eax
// 0082978e  8b442428             mov eax, dword ptr [esp + 0x28]
// 00829792  50                   push eax
// 00829793  51                   push ecx
// 00829794  8bcf                 mov ecx, edi
// 00829796  52                   push edx
// 00829797  e8b4b7f9ff           call 0x7c4f50
// 0082979c  5f                   pop edi
// 0082979d  5e                   pop esi
// 0082979e  5d                   pop ebp
// 0082979f  5b                   pop ebx
// 008297a0  c23000               ret 0x30
// 008297a3  837c243c00           cmp dword ptr [esp + 0x3c], 0
// 008297a8  0f850b010000         jne 0x8298b9
// 008297ae  85c9                 test ecx, ecx
// 008297b0  0f8507010000         jne 0x8298bd
// 008297b6  394c242c             cmp dword ptr [esp + 0x2c], ecx
// 008297ba  7520                 jne 0x8297dc
// 008297bc  85c0                 test eax, eax
// 008297be  7525                 jne 0x8297e5
// 008297c0  398648010000         cmp dword ptr [esi + 0x148], eax
// 008297c6  8b742428             mov esi, dword ptr [esp + 0x28]
// 008297ca  8bce                 mov ecx, esi
// 008297cc  0f84fe000000         je 0x8298d0
// 008297d2  e819aaf9ff           call 0x7c41f0
// 008297d7  e9f9000000           jmp 0x8298d5
// 008297dc  85c0                 test eax, eax
// 008297de  740e                 je 0x8297ee
// 008297e0  e99f000000           jmp 0x829884
// 008297e5  83f801               cmp eax, 1
// 008297e8  0f8589000000         jne 0x829877
// 008297ee  83be5001000000       cmp dword ptr [esi + 0x150], 0
// 008297f5  8b742428             mov esi, dword ptr [esp + 0x28]
// 008297f9  7469                 je 0x829864
// 008297fb  8bce                 mov ecx, esi
// 008297fd  e81eaaf9ff           call 0x7c4220
// 00829802  8bc8                 mov ecx, eax
// 00829804  e8e751f9ff           call 0x7be9f0
// 00829809  85c0                 test eax, eax
// 0082980b  7557                 jne 0x829864
// 0082980d  8b442424             mov eax, dword ptr [esp + 0x24]
// 00829811  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00829815  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00829819  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0082981d  50                   push eax
// 0082981e  51                   push ecx
// 0082981f  8bce                 mov ecx, esi
// 00829821  47                   inc edi
// 00829822  43                   inc ebx
// 00829823  e8f8a9f9ff           call 0x7c4220
// 00829828  50                   push eax
// 00829829  53                   push ebx
// 0082982a  57                   push edi
// 0082982b  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0082982f  57                   push edi
// 00829830  8bce                 mov ecx, esi
// 00829832  e819b7f9ff           call 0x7c4f50
// 00829837  8b542424             mov edx, dword ptr [esp + 0x24]
// 0082983b  8b442420             mov eax, dword ptr [esp + 0x20]
// 0082983f  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00829843  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00829847  52                   push edx
// 00829848  50                   push eax
// 00829849  8bce                 mov ecx, esi
// 0082984b  4b                   dec ebx
// 0082984c  4d                   dec ebp
// 0082984d  e84e54f9ff           call 0x7beca0
// 00829852  50                   push eax
// 00829853  55                   push ebp
// 00829854  53                   push ebx
// 00829855  57                   push edi
// 00829856  8bce                 mov ecx, esi
// 00829858  e8f3b6f9ff           call 0x7c4f50
// 0082985d  5f                   pop edi
// 0082985e  5e                   pop esi
// 0082985f  5d                   pop ebp
// 00829860  5b                   pop ebx
// 00829861  c23000               ret 0x30
// 00829864  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00829868  8b542420             mov edx, dword ptr [esp + 0x20]
// 0082986c  51                   push ecx
// 0082986d  52                   push edx
// 0082986e  8bce                 mov ecx, esi
// 00829870  e82b54f9ff           call 0x7beca0
// 00829875  eb68                 jmp 0x8298df
// 00829877  50                   push eax
// 00829878  e8f302f8ff           call 0x7a9b70
// 0082987d  83c404               add esp, 4
// 00829880  85c0                 test eax, eax
// 00829882  7472                 je 0x8298f6
// 00829884  8b442424             mov eax, dword ptr [esp + 0x24]
// 00829888  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0082988c  8b742418             mov esi, dword ptr [esp + 0x18]
// 00829890  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00829894  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 00829898  50                   push eax
// 00829899  51                   push ecx
// 0082989a  8bcb                 mov ecx, ebx
// 0082989c  46                   inc esi
// 0082989d  47                   inc edi
// 0082989e  e83d54f9ff           call 0x7bece0
// 008298a3  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008298a7  50                   push eax
// 008298a8  57                   push edi
// 008298a9  56                   push esi
// 008298aa  8bcb                 mov ecx, ebx
// 008298ac  52                   push edx
// 008298ad  e89eb6f9ff           call 0x7c4f50
// 008298b2  5f                   pop edi
// 008298b3  5e                   pop esi
// 008298b4  5d                   pop ebp
// 008298b5  5b                   pop ebx
// 008298b6  c23000               ret 0x30
// 008298b9  85c9                 test ecx, ecx
// 008298bb  740d                 je 0x8298ca
// 008298bd  8b742428             mov esi, dword ptr [esp + 0x28]
// 008298c1  8bce                 mov ecx, esi
// 008298c3  e8f853f9ff           call 0x7becc0
// 008298c8  eb0b                 jmp 0x8298d5
// 008298ca  8b742428             mov esi, dword ptr [esp + 0x28]
// 008298ce  8bce                 mov ecx, esi
// 008298d0  e80b3af9ff           call 0x7bd2e0
// 008298d5  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008298d9  8b542420             mov edx, dword ptr [esp + 0x20]
// 008298dd  51                   push ecx
// 008298de  52                   push edx
// 008298df  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008298e3  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008298e7  50                   push eax
// 008298e8  8b442428             mov eax, dword ptr [esp + 0x28]
// 008298ec  50                   push eax
// 008298ed  51                   push ecx
// 008298ee  8bce                 mov ecx, esi
// 008298f0  52                   push edx
// 008298f1  e85ab6f9ff           call 0x7c4f50
// 008298f6  5f                   pop edi
// 008298f7  5e                   pop esi
// 008298f8  5d                   pop ebp
// 008298f9  5b                   pop ebx
// 008298fa  c23000               ret 0x30
// library xtp-11.2.2/Source\CommandBars\XTPDefaultTheme.cpp (function ?DrawImage@CXTPDefaultTheme@XTPPaintThemes@@MAEXPAVCDC@@VCPoint@@VCSize@@PAVCXTPImageManagerIcon@@HHHHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDefaultTheme.cpp
