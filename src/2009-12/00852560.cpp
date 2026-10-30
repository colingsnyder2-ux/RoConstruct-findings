// roc 2009-12 00852560  unit: CXTPPropExchangeArchive  size: 1012 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00852560
//
// 00852560  6aff                 push -1
// 00852562  6888db9500           push 0x95db88
// 00852567  64a100000000         mov eax, dword ptr fs:[0]
// 0085256d  50                   push eax
// 0085256e  83ec10               sub esp, 0x10
// 00852571  53                   push ebx
// 00852572  55                   push ebp
// 00852573  56                   push esi
// 00852574  57                   push edi
// 00852575  a10052b600           mov eax, dword ptr [0xb65200]
// 0085257a  33c4                 xor eax, esp
// 0085257c  50                   push eax
// 0085257d  8d442424             lea eax, [esp + 0x24]
// 00852581  64a300000000         mov dword ptr fs:[0], eax
// 00852587  8bd1                 mov edx, ecx
// 00852589  8954241c             mov dword ptr [esp + 0x1c], edx
// 0085258d  33ed                 xor ebp, ebp
// 0085258f  33ff                 xor edi, edi
// 00852591  896c2420             mov dword ptr [esp + 0x20], ebp
// 00852595  897c2414             mov dword ptr [esp + 0x14], edi
// 00852599  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 0085259d  896c242c             mov dword ptr [esp + 0x2c], ebp
// 008525a1  3bdd                 cmp ebx, ebp
// 008525a3  0f8466030000         je 0x85290f
// 008525a9  8bc3                 mov eax, ebx
// 008525ab  8d7001               lea esi, [eax + 1]
// 008525ae  8bff                 mov edi, edi
// 008525b0  8a08                 mov cl, byte ptr [eax]
// 008525b2  40                   inc eax
// 008525b3  84c9                 test cl, cl
// 008525b5  75f9                 jne 0x8525b0
// 008525b7  2bc6                 sub eax, esi
// 008525b9  0f8450030000         je 0x85290f
// 008525bf  396a58               cmp dword ptr [edx + 0x58], ebp
// 008525c2  0f84aa010000         je 0x852772
// 008525c8  896c2418             mov dword ptr [esp + 0x18], ebp
// 008525cc  8b424c               mov eax, dword ptr [edx + 0x4c]
// 008525cf  c644242c01           mov byte ptr [esp + 0x2c], 1
// 008525d4  3bc5                 cmp eax, ebp
// 008525d6  750a                 jne 0x8525e2
// 008525d8  6803400080           push 0x80004003
// 008525dd  e81e33faff           call 0x7f5900
// 008525e2  8d542418             lea edx, [esp + 0x18]
// 008525e6  896c2418             mov dword ptr [esp + 0x18], ebp
// 008525ea  8b08                 mov ecx, dword ptr [eax]
// 008525ec  52                   push edx
// 008525ed  50                   push eax
// 008525ee  8b4144               mov eax, dword ptr [ecx + 0x44]
// 008525f1  ffd0                 call eax
// 008525f3  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 008525f7  3bfd                 cmp edi, ebp
// 008525f9  750a                 jne 0x852605
// 008525fb  6803400080           push 0x80004003
// 00852600  e8fb32faff           call 0x7f5900
// 00852605  53                   push ebx
// 00852606  8d4c2424             lea ecx, [esp + 0x24]
// 0085260a  e881c30100           call 0x86e990
// 0085260f  8be8                 mov ebp, eax
// 00852611  8b442414             mov eax, dword ptr [esp + 0x14]
// 00852615  33db                 xor ebx, ebx
// 00852617  c644242c02           mov byte ptr [esp + 0x2c], 2
// 0085261c  3bc3                 cmp eax, ebx
// 0085261e  7408                 je 0x852628
// 00852620  8b08                 mov ecx, dword ptr [eax]
// 00852622  8b5108               mov edx, dword ptr [ecx + 8]
// 00852625  50                   push eax
// 00852626  ffd2                 call edx
// 00852628  895c2414             mov dword ptr [esp + 0x14], ebx
// 0085262c  8b37                 mov esi, dword ptr [edi]
// 0085262e  8d442414             lea eax, [esp + 0x14]
// 00852632  50                   push eax
// 00852633  8bcd                 mov ecx, ebp
// 00852635  83c61c               add esi, 0x1c
// 00852638  e833d0cdff           call 0x52f670
// 0085263d  8b0e                 mov ecx, dword ptr [esi]
// 0085263f  50                   push eax
// 00852640  57                   push edi
// 00852641  ffd1                 call ecx
// 00852643  8d4c2420             lea ecx, [esp + 0x20]
// 00852647  8bf0                 mov esi, eax
// 00852649  c644242c01           mov byte ptr [esp + 0x2c], 1
// 0085264e  e81dba0100           call 0x86e070
// 00852653  3bf3                 cmp esi, ebx
// 00852655  8b442414             mov eax, dword ptr [esp + 0x14]
// 00852659  7c0d                 jl 0x852668
// 0085265b  3bc3                 cmp eax, ebx
// 0085265d  0f94c1               sete cl
// 00852660  84c9                 test cl, cl
// 00852662  0f84b6000000         je 0x85271e
// 00852668  395c243c             cmp dword ptr [esp + 0x3c], ebx
// 0085266c  0f84c5000000         je 0x852737
// 00852672  895c243c             mov dword ptr [esp + 0x3c], ebx
// 00852676  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0085267a  8b7a44               mov edi, dword ptr [edx + 0x44]
// 0085267d  b303                 mov bl, 3
// 0085267f  885c242c             mov byte ptr [esp + 0x2c], bl
// 00852683  85ff                 test edi, edi
// 00852685  750a                 jne 0x852691
// 00852687  6803400080           push 0x80004003
// 0085268c  e86f32faff           call 0x7f5900
// 00852691  8b442438             mov eax, dword ptr [esp + 0x38]
// 00852695  50                   push eax
// 00852696  8d4c243c             lea ecx, [esp + 0x3c]
// 0085269a  e8f1c20100           call 0x86e990
// 0085269f  8be8                 mov ebp, eax
// 008526a1  8b37                 mov esi, dword ptr [edi]
// 008526a3  8d4c243c             lea ecx, [esp + 0x3c]
// 008526a7  c644242c04           mov byte ptr [esp + 0x2c], 4
// 008526ac  81c6d4000000         add esi, 0xd4
// 008526b2  e849f6ffff           call 0x851d00
// 008526b7  50                   push eax
// 008526b8  8bcd                 mov ecx, ebp
// 008526ba  e8b1cfcdff           call 0x52f670
// 008526bf  8b0e                 mov ecx, dword ptr [esi]
// 008526c1  50                   push eax
// 008526c2  57                   push edi
// 008526c3  ffd1                 call ecx
// 008526c5  8d4c2438             lea ecx, [esp + 0x38]
// 008526c9  885c242c             mov byte ptr [esp + 0x2c], bl
// 008526cd  e89eb90100           call 0x86e070
// 008526d2  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 008526d6  85c0                 test eax, eax
// 008526d8  742f                 je 0x852709
// 008526da  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008526de  85c9                 test ecx, ecx
// 008526e0  750a                 jne 0x8526ec
// 008526e2  6803400080           push 0x80004003
// 008526e7  e81432faff           call 0x7f5900
// 008526ec  8b31                 mov esi, dword ptr [ecx]
// 008526ee  8bf9                 mov edi, ecx
// 008526f0  8d4c2414             lea ecx, [esp + 0x14]
// 008526f4  8be8                 mov ebp, eax
// 008526f6  83c620               add esi, 0x20
// 008526f9  e802f6ffff           call 0x851d00
// 008526fe  8b16                 mov edx, dword ptr [esi]
// 00852700  50                   push eax
// 00852701  55                   push ebp
// 00852702  57                   push edi
// 00852703  ffd2                 call edx
// 00852705  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00852709  c644242c01           mov byte ptr [esp + 0x2c], 1
// 0085270e  85c0                 test eax, eax
// 00852710  7408                 je 0x85271a
// 00852712  8b08                 mov ecx, dword ptr [eax]
// 00852714  8b5108               mov edx, dword ptr [ecx + 8]
// 00852717  50                   push eax
// 00852718  ffd2                 call edx
// 0085271a  8b442414             mov eax, dword ptr [esp + 0x14]
// 0085271e  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00852722  c644242c00           mov byte ptr [esp + 0x2c], 0
// 00852727  85c9                 test ecx, ecx
// 00852729  0f8481010000         je 0x8528b0
// 0085272f  8b01                 mov eax, dword ptr [ecx]
// 00852731  51                   push ecx
// 00852732  e970010000           jmp 0x8528a7
// 00852737  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0085273b  8b742434             mov esi, dword ptr [esp + 0x34]
// 0085273f  891e                 mov dword ptr [esi], ebx
// 00852741  885c242c             mov byte ptr [esp + 0x2c], bl
// 00852745  3bcb                 cmp ecx, ebx
// 00852747  740c                 je 0x852755
// 00852749  8b11                 mov edx, dword ptr [ecx]
// 0085274b  8b4208               mov eax, dword ptr [edx + 8]
// 0085274e  51                   push ecx
// 0085274f  ffd0                 call eax
// 00852751  8b442414             mov eax, dword ptr [esp + 0x14]
// 00852755  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 0085275d  3bc3                 cmp eax, ebx
// 0085275f  0f84d7010000         je 0x85293c
// 00852765  8b08                 mov ecx, dword ptr [eax]
// 00852767  8b5108               mov edx, dword ptr [ecx + 8]
// 0085276a  50                   push eax
// 0085276b  ffd2                 call edx
// 0085276d  e9ca010000           jmp 0x85293c
// 00852772  8b724c               mov esi, dword ptr [edx + 0x4c]
// 00852775  89742420             mov dword ptr [esp + 0x20], esi
// 00852779  3bf5                 cmp esi, ebp
// 0085277b  7408                 je 0x852785
// 0085277d  8b06                 mov eax, dword ptr [esi]
// 0085277f  8b4804               mov ecx, dword ptr [eax + 4]
// 00852782  56                   push esi
// 00852783  ffd1                 call ecx
// 00852785  c644242c05           mov byte ptr [esp + 0x2c], 5
// 0085278a  3bf5                 cmp esi, ebp
// 0085278c  750a                 jne 0x852798
// 0085278e  6803400080           push 0x80004003
// 00852793  e86831faff           call 0x7f5900
// 00852798  53                   push ebx
// 00852799  8d4c243c             lea ecx, [esp + 0x3c]
// 0085279d  e8eec10100           call 0x86e990
// 008527a2  8be8                 mov ebp, eax
// 008527a4  8b442414             mov eax, dword ptr [esp + 0x14]
// 008527a8  c644242c06           mov byte ptr [esp + 0x2c], 6
// 008527ad  85c0                 test eax, eax
// 008527af  7408                 je 0x8527b9
// 008527b1  8b10                 mov edx, dword ptr [eax]
// 008527b3  50                   push eax
// 008527b4  8b4208               mov eax, dword ptr [edx + 8]
// 008527b7  ffd0                 call eax
// 008527b9  8d4c2414             lea ecx, [esp + 0x14]
// 008527bd  c744241400000000     mov dword ptr [esp + 0x14], 0
// 008527c5  8b3e                 mov edi, dword ptr [esi]
// 008527c7  51                   push ecx
// 008527c8  8bcd                 mov ecx, ebp
// 008527ca  81c794000000         add edi, 0x94
// 008527d0  e89bcecdff           call 0x52f670
// 008527d5  8b17                 mov edx, dword ptr [edi]
// 008527d7  50                   push eax
// 008527d8  56                   push esi
// 008527d9  ffd2                 call edx
// 008527db  8d4c2438             lea ecx, [esp + 0x38]
// 008527df  8bf8                 mov edi, eax
// 008527e1  c644242c05           mov byte ptr [esp + 0x2c], 5
// 008527e6  e885b80100           call 0x86e070
// 008527eb  85ff                 test edi, edi
// 008527ed  7c10                 jl 0x8527ff
// 008527ef  837c241400           cmp dword ptr [esp + 0x14], 0
// 008527f4  0f94c0               sete al
// 008527f7  84c0                 test al, al
// 008527f9  0f84a0000000         je 0x85289f
// 008527ff  837c243c00           cmp dword ptr [esp + 0x3c], 0
// 00852804  0f84d2000000         je 0x8528dc
// 0085280a  c744243800000000     mov dword ptr [esp + 0x38], 0
// 00852812  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00852816  8b6844               mov ebp, dword ptr [eax + 0x44]
// 00852819  c644242c07           mov byte ptr [esp + 0x2c], 7
// 0085281e  85ed                 test ebp, ebp
// 00852820  750a                 jne 0x85282c
// 00852822  6803400080           push 0x80004003
// 00852827  e8d430faff           call 0x7f5900
// 0085282c  53                   push ebx
// 0085282d  8d4c2440             lea ecx, [esp + 0x40]
// 00852831  e85ac10100           call 0x86e990
// 00852836  8bd8                 mov ebx, eax
// 00852838  8b7d00               mov edi, dword ptr [ebp]
// 0085283b  8d4c2438             lea ecx, [esp + 0x38]
// 0085283f  c644242c08           mov byte ptr [esp + 0x2c], 8
// 00852844  81c7bc000000         add edi, 0xbc
// 0085284a  e8b1f4ffff           call 0x851d00
// 0085284f  50                   push eax
// 00852850  8bcb                 mov ecx, ebx
// 00852852  e819cecdff           call 0x52f670
// 00852857  8b0f                 mov ecx, dword ptr [edi]
// 00852859  50                   push eax
// 0085285a  55                   push ebp
// 0085285b  ffd1                 call ecx
// 0085285d  8d4c243c             lea ecx, [esp + 0x3c]
// 00852861  c644242c07           mov byte ptr [esp + 0x2c], 7
// 00852866  e805b80100           call 0x86e070
// 0085286b  8b442438             mov eax, dword ptr [esp + 0x38]
// 0085286f  85c0                 test eax, eax
// 00852871  741b                 je 0x85288e
// 00852873  8b3e                 mov edi, dword ptr [esi]
// 00852875  8d4c2414             lea ecx, [esp + 0x14]
// 00852879  8bd8                 mov ebx, eax
// 0085287b  83c754               add edi, 0x54
// 0085287e  e87df4ffff           call 0x851d00
// 00852883  8b17                 mov edx, dword ptr [edi]
// 00852885  50                   push eax
// 00852886  53                   push ebx
// 00852887  56                   push esi
// 00852888  ffd2                 call edx
// 0085288a  8b442438             mov eax, dword ptr [esp + 0x38]
// 0085288e  c644242c05           mov byte ptr [esp + 0x2c], 5
// 00852893  85c0                 test eax, eax
// 00852895  7408                 je 0x85289f
// 00852897  8b08                 mov ecx, dword ptr [eax]
// 00852899  8b5108               mov edx, dword ptr [ecx + 8]
// 0085289c  50                   push eax
// 0085289d  ffd2                 call edx
// 0085289f  8b06                 mov eax, dword ptr [esi]
// 008528a1  c644242c00           mov byte ptr [esp + 0x2c], 0
// 008528a6  56                   push esi
// 008528a7  8b4808               mov ecx, dword ptr [eax + 8]
// 008528aa  ffd1                 call ecx
// 008528ac  8b442414             mov eax, dword ptr [esp + 0x14]
// 008528b0  8b742434             mov esi, dword ptr [esp + 0x34]
// 008528b4  8906                 mov dword ptr [esi], eax
// 008528b6  85c0                 test eax, eax
// 008528b8  740c                 je 0x8528c6
// 008528ba  8b10                 mov edx, dword ptr [eax]
// 008528bc  50                   push eax
// 008528bd  8b4204               mov eax, dword ptr [edx + 4]
// 008528c0  ffd0                 call eax
// 008528c2  8b442414             mov eax, dword ptr [esp + 0x14]
// 008528c6  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 008528ce  85c0                 test eax, eax
// 008528d0  746a                 je 0x85293c
// 008528d2  8b08                 mov ecx, dword ptr [eax]
// 008528d4  8b5108               mov edx, dword ptr [ecx + 8]
// 008528d7  50                   push eax
// 008528d8  ffd2                 call edx
// 008528da  eb60                 jmp 0x85293c
// 008528dc  8b06                 mov eax, dword ptr [esi]
// 008528de  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 008528e2  8b4808               mov ecx, dword ptr [eax + 8]
// 008528e5  56                   push esi
// 008528e6  c70700000000         mov dword ptr [edi], 0
// 008528ec  c644243000           mov byte ptr [esp + 0x30], 0
// 008528f1  ffd1                 call ecx
// 008528f3  8b442414             mov eax, dword ptr [esp + 0x14]
// 008528f7  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 008528ff  85c0                 test eax, eax
// 00852901  7408                 je 0x85290b
// 00852903  8b10                 mov edx, dword ptr [eax]
// 00852905  50                   push eax
// 00852906  8b4208               mov eax, dword ptr [edx + 8]
// 00852909  ffd0                 call eax
// 0085290b  8bc7                 mov eax, edi
// 0085290d  eb2f                 jmp 0x85293e
// 0085290f  8b424c               mov eax, dword ptr [edx + 0x4c]
// 00852912  8b742434             mov esi, dword ptr [esp + 0x34]
// 00852916  8906                 mov dword ptr [esi], eax
// 00852918  3bc5                 cmp eax, ebp
// 0085291a  740c                 je 0x852928
// 0085291c  8b08                 mov ecx, dword ptr [eax]
// 0085291e  8b5104               mov edx, dword ptr [ecx + 4]
// 00852921  50                   push eax
// 00852922  ffd2                 call edx
// 00852924  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00852928  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 00852930  3bfd                 cmp edi, ebp
// 00852932  7408                 je 0x85293c
// 00852934  8b07                 mov eax, dword ptr [edi]
// 00852936  8b4808               mov ecx, dword ptr [eax + 8]
// 00852939  57                   push edi
// 0085293a  ffd1                 call ecx
// 0085293c  8bc6                 mov eax, esi
// 0085293e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00852942  64890d00000000       mov dword ptr fs:[0], ecx
// 00852949  59                   pop ecx
// 0085294a  5f                   pop edi
// 0085294b  5e                   pop esi
// 0085294c  5d                   pop ebp
// 0085294d  5b                   pop ebx
// 0085294e  83c41c               add esp, 0x1c
// 00852951  c20c00               ret 0xc
// copied from an identical function in another client (function ?GetEntryNode@CXTPPropExchangeXMLNode@@IAE?AV?$_com_ptr_t@V?$_com_IIID@UIXMLDOMNode@XTPXML@@$1?_GUID_2933bf80_7b36_11d2_b20e_00c04f983e60@@3U__s_GUID@@B@@@@PBDH@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPPropExchange.cpp