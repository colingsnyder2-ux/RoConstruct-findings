// roc 2011-06 004635c0  unit: VCRoblox3D::?$CComObject  size: 734 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004635c0
//
// 004635c0  83ec14               sub esp, 0x14
// 004635c3  53                   push ebx
// 004635c4  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 004635c8  56                   push esi
// 004635c9  57                   push edi
// 004635ca  85db                 test ebx, ebx
// 004635cc  0f8490020000         je 0x463862
// 004635d2  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 004635d6  85f6                 test esi, esi
// 004635d8  0f8484020000         je 0x463862
// 004635de  837c243000           cmp dword ptr [esp + 0x30], 0
// 004635e3  0f8479020000         je 0x463862
// 004635e9  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 004635ed  85ff                 test edi, edi
// 004635ef  0f846d020000         je 0x463862
// 004635f5  55                   push ebp
// 004635f6  33ed                 xor ebp, ebp
// 004635f8  c744242800000000     mov dword ptr [esp + 0x28], 0
// 00463600  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00463608  396e08               cmp dword ptr [esi + 8], ebp
// 0046360b  0f841b020000         je 0x46382c
// 00463611  eb04                 jmp 0x463617
// 00463613  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 00463617  833e00               cmp dword ptr [esi], 0
// 0046361a  0f84e0010000         je 0x463800
// 00463620  8d442414             lea eax, [esp + 0x14]
// 00463624  50                   push eax
// 00463625  ff15ac0aa400         call dword ptr [0xa40aac]
// 0046362b  837e1400             cmp dword ptr [esi + 0x14], 0
// 0046362f  0f8402010000         je 0x463737
// 00463635  8d4c2414             lea ecx, [esp + 0x14]
// 00463639  51                   push ecx
// 0046363a  ff15d80aa400         call dword ptr [0xa40ad8]
// 00463640  85c0                 test eax, eax
// 00463642  7c12                 jl 0x463656
// 00463644  33c0                 xor eax, eax
// 00463646  89442414             mov dword ptr [esp + 0x14], eax
// 0046364a  89442418             mov dword ptr [esp + 0x18], eax
// 0046364e  8944241c             mov dword ptr [esp + 0x1c], eax
// 00463652  89442420             mov dword ptr [esp + 0x20], eax
// 00463656  668b5618             mov dx, word ptr [esi + 0x18]
// 0046365a  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0046365e  8b03                 mov eax, dword ptr [ebx]
// 00463660  8b7e10               mov edi, dword ptr [esi + 0x10]
// 00463663  037c2434             add edi, dword ptr [esp + 0x34]
// 00463667  51                   push ecx
// 00463668  8b0e                 mov ecx, dword ptr [esi]
// 0046366a  6689542418           mov word ptr [esp + 0x18], dx
// 0046366f  8d542418             lea edx, [esp + 0x18]
// 00463673  52                   push edx
// 00463674  8b500c               mov edx, dword ptr [eax + 0xc]
// 00463677  51                   push ecx
// 00463678  53                   push ebx
// 00463679  ffd2                 call edx
// 0046367b  85c0                 test eax, eax
// 0046367d  0f8ca3000000         jl 0x463726
// 00463683  0fb74618             movzx eax, word ptr [esi + 0x18]
// 00463687  83c0fe               add eax, -2
// 0046368a  83f815               cmp eax, 0x15
// 0046368d  0f879a000000         ja 0x46372d
// 00463693  0fb68088384600       movzx eax, byte ptr [eax + 0x463888]
// 0046369a  ff248570384600       jmp dword ptr [eax*4 + 0x463870]
// 004636a1  8a4c241c             mov cl, byte ptr [esp + 0x1c]
// 004636a5  880f                 mov byte ptr [edi], cl
// 004636a7  8d4c2414             lea ecx, [esp + 0x14]
// 004636ab  51                   push ecx
// 004636ac  e949010000           jmp 0x4637fa
// 004636b1  668b54241c           mov dx, word ptr [esp + 0x1c]
// 004636b6  8d4c2414             lea ecx, [esp + 0x14]
// 004636ba  668917               mov word ptr [edi], dx
// 004636bd  51                   push ecx
// 004636be  e937010000           jmp 0x4637fa
// 004636c3  668b44241c           mov ax, word ptr [esp + 0x1c]
// 004636c8  8d4c2414             lea ecx, [esp + 0x14]
// 004636cc  668907               mov word ptr [edi], ax
// 004636cf  51                   push ecx
// 004636d0  e925010000           jmp 0x4637fa
// 004636d5  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004636d9  890f                 mov dword ptr [edi], ecx
// 004636db  8d4c2414             lea ecx, [esp + 0x14]
// 004636df  51                   push ecx
// 004636e0  e915010000           jmp 0x4637fa
// 004636e5  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 004636e9  52                   push edx
// 004636ea  ff15bc0aa400         call dword ptr [0xa40abc]
// 004636f0  8907                 mov dword ptr [edi], eax
// 004636f2  85c0                 test eax, eax
// 004636f4  7537                 jne 0x46372d
// 004636f6  3944241c             cmp dword ptr [esp + 0x1c], eax
// 004636fa  7431                 je 0x46372d
// 004636fc  8d542414             lea edx, [esp + 0x14]
// 00463700  52                   push edx
// 00463701  ff15d80aa400         call dword ptr [0xa40ad8]
// 00463707  8b442428             mov eax, dword ptr [esp + 0x28]
// 0046370b  85c0                 test eax, eax
// 0046370d  7408                 je 0x463717
// 0046370f  8b08                 mov ecx, dword ptr [eax]
// 00463711  8b5108               mov edx, dword ptr [ecx + 8]
// 00463714  50                   push eax
// 00463715  ffd2                 call edx
// 00463717  5d                   pop ebp
// 00463718  5f                   pop edi
// 00463719  5e                   pop esi
// 0046371a  b80e000780           mov eax, 0x8007000e
// 0046371f  5b                   pop ebx
// 00463720  83c414               add esp, 0x14
// 00463723  c21400               ret 0x14
// 00463726  33c0                 xor eax, eax
// 00463728  6689442414           mov word ptr [esp + 0x14], ax
// 0046372d  8d4c2414             lea ecx, [esp + 0x14]
// 00463731  51                   push ecx
// 00463732  e9c3000000           jmp 0x4637fa
// 00463737  8b542410             mov edx, dword ptr [esp + 0x10]
// 0046373b  39560c               cmp dword ptr [esi + 0xc], edx
// 0046373e  743f                 je 0x46377f
// 00463740  8b442428             mov eax, dword ptr [esp + 0x28]
// 00463744  85c0                 test eax, eax
// 00463746  7410                 je 0x463758
// 00463748  c744242800000000     mov dword ptr [esp + 0x28], 0
// 00463750  8b08                 mov ecx, dword ptr [eax]
// 00463752  8b5108               mov edx, dword ptr [ecx + 8]
// 00463755  50                   push eax
// 00463756  ffd2                 call edx
// 00463758  8b460c               mov eax, dword ptr [esi + 0xc]
// 0046375b  85c0                 test eax, eax
// 0046375d  0f84d5000000         je 0x463838
// 00463763  8b0f                 mov ecx, dword ptr [edi]
// 00463765  8d542428             lea edx, [esp + 0x28]
// 00463769  52                   push edx
// 0046376a  50                   push eax
// 0046376b  8b01                 mov eax, dword ptr [ecx]
// 0046376d  57                   push edi
// 0046376e  ffd0                 call eax
// 00463770  85c0                 test eax, eax
// 00463772  0f8cc0000000         jl 0x463838
// 00463778  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0046377b  894c2410             mov dword ptr [esp + 0x10], ecx
// 0046377f  0fb77e18             movzx edi, word ptr [esi + 0x18]
// 00463783  6685ff               test di, di
// 00463786  7523                 jne 0x4637ab
// 00463788  8b4604               mov eax, dword ptr [esi + 4]
// 0046378b  8d542414             lea edx, [esp + 0x14]
// 0046378f  52                   push edx
// 00463790  50                   push eax
// 00463791  8b442430             mov eax, dword ptr [esp + 0x30]
// 00463795  50                   push eax
// 00463796  e8755dffff           call 0x459510
// 0046379b  83c40c               add esp, 0xc
// 0046379e  85c0                 test eax, eax
// 004637a0  0f8c92000000         jl 0x463838
// 004637a6  0fb77c2414           movzx edi, word ptr [esp + 0x14]
// 004637ab  8d4c2414             lea ecx, [esp + 0x14]
// 004637af  e82cedffff           call 0x4624e0
// 004637b4  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 004637b8  8b0b                 mov ecx, dword ptr [ebx]
// 004637ba  52                   push edx
// 004637bb  8b16                 mov edx, dword ptr [esi]
// 004637bd  8d442418             lea eax, [esp + 0x18]
// 004637c1  50                   push eax
// 004637c2  8b410c               mov eax, dword ptr [ecx + 0xc]
// 004637c5  52                   push edx
// 004637c6  53                   push ebx
// 004637c7  66897c2424           mov word ptr [esp + 0x24], di
// 004637cc  ffd0                 call eax
// 004637ce  85c0                 test eax, eax
// 004637d0  7d09                 jge 0x4637db
// 004637d2  33c9                 xor ecx, ecx
// 004637d4  66894c2414           mov word ptr [esp + 0x14], cx
// 004637d9  eb1a                 jmp 0x4637f5
// 004637db  8b7604               mov esi, dword ptr [esi + 4]
// 004637de  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004637e2  8d442414             lea eax, [esp + 0x14]
// 004637e6  50                   push eax
// 004637e7  56                   push esi
// 004637e8  51                   push ecx
// 004637e9  e842ecffff           call 0x462430
// 004637ee  83c40c               add esp, 0xc
// 004637f1  85c0                 test eax, eax
// 004637f3  7c43                 jl 0x463838
// 004637f5  8d542414             lea edx, [esp + 0x14]
// 004637f9  52                   push edx
// 004637fa  ff15d80aa400         call dword ptr [0xa40ad8]
// 00463800  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00463804  45                   inc ebp
// 00463805  8d04ed00000000       lea eax, [ebp*8]
// 0046380c  2bc5                 sub eax, ebp
// 0046380e  837c810800           cmp dword ptr [ecx + eax*4 + 8], 0
// 00463813  8d3481               lea esi, [ecx + eax*4]
// 00463816  0f85f7fdffff         jne 0x463613
// 0046381c  8b442428             mov eax, dword ptr [esp + 0x28]
// 00463820  85c0                 test eax, eax
// 00463822  7408                 je 0x46382c
// 00463824  8b08                 mov ecx, dword ptr [eax]
// 00463826  8b5108               mov edx, dword ptr [ecx + 8]
// 00463829  50                   push eax
// 0046382a  ffd2                 call edx
// 0046382c  5d                   pop ebp
// 0046382d  5f                   pop edi
// 0046382e  5e                   pop esi
// 0046382f  33c0                 xor eax, eax
// 00463831  5b                   pop ebx
// 00463832  83c414               add esp, 0x14
// 00463835  c21400               ret 0x14
// 00463838  8d442414             lea eax, [esp + 0x14]
// 0046383c  50                   push eax
// 0046383d  ff15d80aa400         call dword ptr [0xa40ad8]
// 00463843  8b442428             mov eax, dword ptr [esp + 0x28]
// 00463847  85c0                 test eax, eax
// 00463849  7408                 je 0x463853
// 0046384b  8b08                 mov ecx, dword ptr [eax]
// 0046384d  8b5108               mov edx, dword ptr [ecx + 8]
// 00463850  50                   push eax
// 00463851  ffd2                 call edx
// 00463853  5d                   pop ebp
// 00463854  5f                   pop edi
// 00463855  5e                   pop esi
// 00463856  b805400080           mov eax, 0x80004005
// 0046385b  5b                   pop ebx
// 0046385c  83c414               add esp, 0x14
// 0046385f  c21400               ret 0x14
// 00463862  5f                   pop edi
// 00463863  5e                   pop esi
// 00463864  b857000780           mov eax, 0x80070057
// 00463869  5b                   pop ebx
// 0046386a  83c414               add esp, 0x14
// 0046386d  c21400               ret 0x14
// 00463870  c3                   ret 
// 00463871  3646                 inc esi
// 00463873  00d5                 add ch, dl
// 00463875  3646                 inc esi
// 00463877  00e5                 add ch, ah
// 00463879  3646                 inc esi
// 0046387b  00b1364600a1         add byte ptr [ecx - 0x5effb9ca], dh
// 00463881  3646                 inc esi
// 00463883  002d37460000         add byte ptr [0x4637], ch
// 00463889  010505050502         add dword ptr [0x2050505], eax
// 0046388f  0505030505           add eax, 0x5050305
// 00463894  0505040400           add eax, 0x40405
// copied from an identical function in another client (function _AtlIPersistPropertyBag_Load@20)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: atl-9.0-dll atl.cpp