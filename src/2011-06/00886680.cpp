// roc 2011-06 00886680  unit: XTPPaintThemes::CXTPDefaultTheme  size: 797 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00886680
//
// 00886680  837c242400           cmp dword ptr [esp + 0x24], 0
// 00886685  53                   push ebx
// 00886686  55                   push ebp
// 00886687  56                   push esi
// 00886688  57                   push edi
// 00886689  8bf1                 mov esi, ecx
// 0088668b  0f85e9000000         jne 0x88677a
// 00886691  83be4c01000000       cmp dword ptr [esi + 0x14c], 0
// 00886698  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0088669c  7574                 jne 0x886712
// 0088669e  8bcf                 mov ecx, edi
// 008866a0  e86b90f9ff           call 0x81f710
// 008866a5  85c0                 test eax, eax
// 008866a7  7569                 jne 0x886712
// 008866a9  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 008866ad  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 008866b1  6a14                 push 0x14
// 008866b3  8bce                 mov ecx, esi
// 008866b5  43                   inc ebx
// 008866b6  45                   inc ebp
// 008866b7  e8f48ef8ff           call 0x80f5b0
// 008866bc  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008866c0  50                   push eax
// 008866c1  8b442428             mov eax, dword ptr [esp + 0x28]
// 008866c5  50                   push eax
// 008866c6  51                   push ecx
// 008866c7  8bcf                 mov ecx, edi
// 008866c9  e85290f9ff           call 0x81f720
// 008866ce  50                   push eax
// 008866cf  55                   push ebp
// 008866d0  53                   push ebx
// 008866d1  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 008866d5  53                   push ebx
// 008866d6  8bcf                 mov ecx, edi
// 008866d8  e80304faff           call 0x826ae0
// 008866dd  6a10                 push 0x10
// 008866df  8bce                 mov ecx, esi
// 008866e1  e8ca8ef8ff           call 0x80f5b0
// 008866e6  8b542424             mov edx, dword ptr [esp + 0x24]
// 008866ea  50                   push eax
// 008866eb  8b442424             mov eax, dword ptr [esp + 0x24]
// 008866ef  52                   push edx
// 008866f0  50                   push eax
// 008866f1  8bcf                 mov ecx, edi
// 008866f3  e82890f9ff           call 0x81f720
// 008866f8  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008866fc  8b542424             mov edx, dword ptr [esp + 0x24]
// 00886700  50                   push eax
// 00886701  51                   push ecx
// 00886702  52                   push edx
// 00886703  53                   push ebx
// 00886704  8bcf                 mov ecx, edi
// 00886706  e8d503faff           call 0x826ae0
// 0088670b  5f                   pop edi
// 0088670c  5e                   pop esi
// 0088670d  5d                   pop ebp
// 0088670e  5b                   pop ebx
// 0088670f  c23000               ret 0x30
// 00886712  83be5401000000       cmp dword ptr [esi + 0x154], 0
// 00886719  742e                 je 0x886749
// 0088671b  8bcf                 mov ecx, edi
// 0088671d  e8bea6f9ff           call 0x820de0
// 00886722  85c0                 test eax, eax
// 00886724  7523                 jne 0x886749
// 00886726  8b4640               mov eax, dword ptr [esi + 0x40]
// 00886729  83f8ff               cmp eax, -1
// 0088672c  7505                 jne 0x886733
// 0088672e  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 00886731  eb02                 jmp 0x886735
// 00886733  8bc8                 mov ecx, eax
// 00886735  8b4634               mov eax, dword ptr [esi + 0x34]
// 00886738  83f8ff               cmp eax, -1
// 0088673b  7503                 jne 0x886740
// 0088673d  8b4630               mov eax, dword ptr [esi + 0x30]
// 00886740  51                   push ecx
// 00886741  50                   push eax
// 00886742  8bcf                 mov ecx, edi
// 00886744  e807def9ff           call 0x824550
// 00886749  8b442424             mov eax, dword ptr [esp + 0x24]
// 0088674d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00886751  50                   push eax
// 00886752  51                   push ecx
// 00886753  6a01                 push 1
// 00886755  8bcf                 mov ecx, edi
// 00886757  e8d4f8f9ff           call 0x826030
// 0088675c  8b542424             mov edx, dword ptr [esp + 0x24]
// 00886760  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00886764  50                   push eax
// 00886765  8b442424             mov eax, dword ptr [esp + 0x24]
// 00886769  52                   push edx
// 0088676a  50                   push eax
// 0088676b  51                   push ecx
// 0088676c  8bcf                 mov ecx, edi
// 0088676e  e8fd02faff           call 0x826a70
// 00886773  5f                   pop edi
// 00886774  5e                   pop esi
// 00886775  5d                   pop ebp
// 00886776  5b                   pop ebx
// 00886777  c23000               ret 0x30
// 0088677a  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0088677e  8b442430             mov eax, dword ptr [esp + 0x30]
// 00886782  83f902               cmp ecx, 2
// 00886785  0f85b8000000         jne 0x886843
// 0088678b  85c0                 test eax, eax
// 0088678d  0f85b0000000         jne 0x886843
// 00886793  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00886797  8bcf                 mov ecx, edi
// 00886799  e8728ff9ff           call 0x81f710
// 0088679e  85c0                 test eax, eax
// 008867a0  7539                 jne 0x8867db
// 008867a2  6a10                 push 0x10
// 008867a4  8bce                 mov ecx, esi
// 008867a6  e8058ef8ff           call 0x80f5b0
// 008867ab  8b542424             mov edx, dword ptr [esp + 0x24]
// 008867af  50                   push eax
// 008867b0  8b442424             mov eax, dword ptr [esp + 0x24]
// 008867b4  52                   push edx
// 008867b5  50                   push eax
// 008867b6  8bcf                 mov ecx, edi
// 008867b8  e8e3a5f9ff           call 0x820da0
// 008867bd  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008867c1  8b542424             mov edx, dword ptr [esp + 0x24]
// 008867c5  50                   push eax
// 008867c6  8b442424             mov eax, dword ptr [esp + 0x24]
// 008867ca  51                   push ecx
// 008867cb  52                   push edx
// 008867cc  50                   push eax
// 008867cd  8bcf                 mov ecx, edi
// 008867cf  e80c03faff           call 0x826ae0
// 008867d4  5f                   pop edi
// 008867d5  5e                   pop esi
// 008867d6  5d                   pop ebp
// 008867d7  5b                   pop ebx
// 008867d8  c23000               ret 0x30
// 008867db  83be5401000000       cmp dword ptr [esi + 0x154], 0
// 008867e2  742e                 je 0x886812
// 008867e4  8bcf                 mov ecx, edi
// 008867e6  e8f5a5f9ff           call 0x820de0
// 008867eb  85c0                 test eax, eax
// 008867ed  7523                 jne 0x886812
// 008867ef  8b4640               mov eax, dword ptr [esi + 0x40]
// 008867f2  83f8ff               cmp eax, -1
// 008867f5  7505                 jne 0x8867fc
// 008867f7  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 008867fa  eb02                 jmp 0x8867fe
// 008867fc  8bc8                 mov ecx, eax
// 008867fe  8b4634               mov eax, dword ptr [esi + 0x34]
// 00886801  83f8ff               cmp eax, -1
// 00886804  7503                 jne 0x886809
// 00886806  8b4630               mov eax, dword ptr [esi + 0x30]
// 00886809  51                   push ecx
// 0088680a  50                   push eax
// 0088680b  8bcf                 mov ecx, edi
// 0088680d  e83eddf9ff           call 0x824550
// 00886812  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00886816  8b542420             mov edx, dword ptr [esp + 0x20]
// 0088681a  51                   push ecx
// 0088681b  52                   push edx
// 0088681c  6a01                 push 1
// 0088681e  8bcf                 mov ecx, edi
// 00886820  e80bf8f9ff           call 0x826030
// 00886825  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00886829  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0088682d  50                   push eax
// 0088682e  8b442428             mov eax, dword ptr [esp + 0x28]
// 00886832  50                   push eax
// 00886833  51                   push ecx
// 00886834  8bcf                 mov ecx, edi
// 00886836  52                   push edx
// 00886837  e83402faff           call 0x826a70
// 0088683c  5f                   pop edi
// 0088683d  5e                   pop esi
// 0088683e  5d                   pop ebp
// 0088683f  5b                   pop ebx
// 00886840  c23000               ret 0x30
// 00886843  837c243c00           cmp dword ptr [esp + 0x3c], 0
// 00886848  0f850b010000         jne 0x886959
// 0088684e  85c9                 test ecx, ecx
// 00886850  0f8507010000         jne 0x88695d
// 00886856  394c242c             cmp dword ptr [esp + 0x2c], ecx
// 0088685a  7520                 jne 0x88687c
// 0088685c  85c0                 test eax, eax
// 0088685e  7525                 jne 0x886885
// 00886860  398648010000         cmp dword ptr [esi + 0x148], eax
// 00886866  8b742428             mov esi, dword ptr [esp + 0x28]
// 0088686a  8bce                 mov ecx, esi
// 0088686c  0f84fe000000         je 0x886970
// 00886872  e869f7f9ff           call 0x825fe0
// 00886877  e9f9000000           jmp 0x886975
// 0088687c  85c0                 test eax, eax
// 0088687e  740e                 je 0x88688e
// 00886880  e99f000000           jmp 0x886924
// 00886885  83f801               cmp eax, 1
// 00886888  0f8589000000         jne 0x886917
// 0088688e  83be5001000000       cmp dword ptr [esi + 0x150], 0
// 00886895  8b742428             mov esi, dword ptr [esp + 0x28]
// 00886899  7469                 je 0x886904
// 0088689b  8bce                 mov ecx, esi
// 0088689d  e86ef7f9ff           call 0x826010
// 008868a2  8bc8                 mov ecx, eax
// 008868a4  e827a2f9ff           call 0x820ad0
// 008868a9  85c0                 test eax, eax
// 008868ab  7557                 jne 0x886904
// 008868ad  8b442424             mov eax, dword ptr [esp + 0x24]
// 008868b1  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008868b5  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 008868b9  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 008868bd  50                   push eax
// 008868be  51                   push ecx
// 008868bf  8bce                 mov ecx, esi
// 008868c1  47                   inc edi
// 008868c2  43                   inc ebx
// 008868c3  e848f7f9ff           call 0x826010
// 008868c8  50                   push eax
// 008868c9  53                   push ebx
// 008868ca  57                   push edi
// 008868cb  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 008868cf  57                   push edi
// 008868d0  8bce                 mov ecx, esi
// 008868d2  e89901faff           call 0x826a70
// 008868d7  8b542424             mov edx, dword ptr [esp + 0x24]
// 008868db  8b442420             mov eax, dword ptr [esp + 0x20]
// 008868df  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 008868e3  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 008868e7  52                   push edx
// 008868e8  50                   push eax
// 008868e9  8bce                 mov ecx, esi
// 008868eb  4b                   dec ebx
// 008868ec  4d                   dec ebp
// 008868ed  e88ea4f9ff           call 0x820d80
// 008868f2  50                   push eax
// 008868f3  55                   push ebp
// 008868f4  53                   push ebx
// 008868f5  57                   push edi
// 008868f6  8bce                 mov ecx, esi
// 008868f8  e87301faff           call 0x826a70
// 008868fd  5f                   pop edi
// 008868fe  5e                   pop esi
// 008868ff  5d                   pop ebp
// 00886900  5b                   pop ebx
// 00886901  c23000               ret 0x30
// 00886904  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00886908  8b542420             mov edx, dword ptr [esp + 0x20]
// 0088690c  51                   push ecx
// 0088690d  52                   push edx
// 0088690e  8bce                 mov ecx, esi
// 00886910  e86ba4f9ff           call 0x820d80
// 00886915  eb68                 jmp 0x88697f
// 00886917  50                   push eax
// 00886918  e84359f8ff           call 0x80c260
// 0088691d  83c404               add esp, 4
// 00886920  85c0                 test eax, eax
// 00886922  7472                 je 0x886996
// 00886924  8b442424             mov eax, dword ptr [esp + 0x24]
// 00886928  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0088692c  8b742418             mov esi, dword ptr [esp + 0x18]
// 00886930  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00886934  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 00886938  50                   push eax
// 00886939  51                   push ecx
// 0088693a  8bcb                 mov ecx, ebx
// 0088693c  46                   inc esi
// 0088693d  47                   inc edi
// 0088693e  e87da4f9ff           call 0x820dc0
// 00886943  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00886947  50                   push eax
// 00886948  57                   push edi
// 00886949  56                   push esi
// 0088694a  8bcb                 mov ecx, ebx
// 0088694c  52                   push edx
// 0088694d  e81e01faff           call 0x826a70
// 00886952  5f                   pop edi
// 00886953  5e                   pop esi
// 00886954  5d                   pop ebp
// 00886955  5b                   pop ebx
// 00886956  c23000               ret 0x30
// 00886959  85c9                 test ecx, ecx
// 0088695b  740d                 je 0x88696a
// 0088695d  8b742428             mov esi, dword ptr [esp + 0x28]
// 00886961  8bce                 mov ecx, esi
// 00886963  e838a4f9ff           call 0x820da0
// 00886968  eb0b                 jmp 0x886975
// 0088696a  8b742428             mov esi, dword ptr [esp + 0x28]
// 0088696e  8bce                 mov ecx, esi
// 00886970  e8ab8df9ff           call 0x81f720
// 00886975  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00886979  8b542420             mov edx, dword ptr [esp + 0x20]
// 0088697d  51                   push ecx
// 0088697e  52                   push edx
// 0088697f  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00886983  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00886987  50                   push eax
// 00886988  8b442428             mov eax, dword ptr [esp + 0x28]
// 0088698c  50                   push eax
// 0088698d  51                   push ecx
// 0088698e  8bce                 mov ecx, esi
// 00886990  52                   push edx
// 00886991  e8da00faff           call 0x826a70
// 00886996  5f                   pop edi
// 00886997  5e                   pop esi
// 00886998  5d                   pop ebp
// 00886999  5b                   pop ebx
// 0088699a  c23000               ret 0x30
// library xtp-11.2.2/Source\CommandBars\XTPDefaultTheme.cpp (function ?DrawImage@CXTPDefaultTheme@XTPPaintThemes@@MAEXPAVCDC@@VCPoint@@VCSize@@PAVCXTPImageManagerIcon@@HHHHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDefaultTheme.cpp
