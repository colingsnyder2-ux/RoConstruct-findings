// roc 2012-06 004087d0  unit: VCApp::?$CComAggObject  size: 585 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004087d0
//
// 004087d0  55                   push ebp
// 004087d1  8bec                 mov ebp, esp
// 004087d3  6aff                 push -1
// 004087d5  68b3a3a900           push 0xa9a3b3
// 004087da  64a100000000         mov eax, dword ptr fs:[0]
// 004087e0  50                   push eax
// 004087e1  64892500000000       mov dword ptr fs:[0], esp
// 004087e8  81ec1c040000         sub esp, 0x41c
// 004087ee  53                   push ebx
// 004087ef  56                   push esi
// 004087f0  57                   push edi
// 004087f1  33f6                 xor esi, esi
// 004087f3  8965f0               mov dword ptr [ebp - 0x10], esp
// 004087f6  33ff                 xor edi, edi
// 004087f8  8975ec               mov dword ptr [ebp - 0x14], esi
// 004087fb  897dfc               mov dword ptr [ebp - 4], edi
// 004087fe  894de8               mov dword ptr [ebp - 0x18], ecx
// 00408801  897de4               mov dword ptr [ebp - 0x1c], edi
// 00408804  89bdd8fbffff         mov dword ptr [ebp - 0x428], edi
// 0040880a  8b5d08               mov ebx, dword ptr [ebp + 8]
// 0040880d  c645fc01             mov byte ptr [ebp - 4], 1
// 00408811  3bdf                 cmp ebx, edi
// 00408813  7466                 je 0x40887b
// 00408815  53                   push ebx
// 00408816  ff15c421b200         call dword ptr [0xb221c4]
// 0040881c  57                   push edi
// 0040881d  40                   inc eax
// 0040881e  99                   cdq 
// 0040881f  6a02                 push 2
// 00408821  52                   push edx
// 00408822  50                   push eax
// 00408823  e818ab5700           call 0x983340
// 00408828  8bf8                 mov edi, eax
// 0040882a  0500000080           add eax, 0x80000000
// 0040882f  13d6                 adc edx, esi
// 00408831  85d2                 test edx, edx
// 00408833  7744                 ja 0x408879
// 00408835  7205                 jb 0x40883c
// 00408837  83f8ff               cmp eax, -1
// 0040883a  773d                 ja 0x408879
// 0040883c  81ff00040000         cmp edi, 0x400
// 00408842  7f1b                 jg 0x40885f
// 00408844  57                   push edi
// 00408845  e826c5ffff           call 0x404d70
// 0040884a  83c404               add esp, 4
// 0040884d  84c0                 test al, al
// 0040884f  740e                 je 0x40885f
// 00408851  8bc7                 mov eax, edi
// 00408853  e8b8aa5700           call 0x983310
// 00408858  8965f0               mov dword ptr [ebp - 0x10], esp
// 0040885b  8bc4                 mov eax, esp
// 0040885d  eb0c                 jmp 0x40886b
// 0040885f  57                   push edi
// 00408860  8d4dec               lea ecx, [ebp - 0x14]
// 00408863  e8b8c9ffff           call 0x405220
// 00408868  8b75ec               mov esi, dword ptr [ebp - 0x14]
// 0040886b  6a03                 push 3
// 0040886d  57                   push edi
// 0040886e  53                   push ebx
// 0040886f  50                   push eax
// 00408870  e8cbb8ffff           call 0x404140
// 00408875  85c0                 test eax, eax
// 00408877  753f                 jne 0x4088b8
// 00408879  33ff                 xor edi, edi
// 0040887b  8d85dcfbffff         lea eax, [ebp - 0x424]
// 00408881  3985d8fbffff         cmp dword ptr [ebp - 0x428], eax
// 00408887  740b                 je 0x408894
// 00408889  8d8dd8fbffff         lea ecx, [ebp - 0x428]
// 0040888f  e83cc2ffff           call 0x404ad0
// 00408894  3bf7                 cmp esi, edi
// 00408896  7416                 je 0x4088ae
// 00408898  8b3dc829b200         mov edi, dword ptr [0xb229c8]
// 0040889e  8bff                 mov edi, edi
// 004088a0  8bc6                 mov eax, esi
// 004088a2  8b36                 mov esi, dword ptr [esi]
// 004088a4  50                   push eax
// 004088a5  ffd7                 call edi
// 004088a7  83c404               add esp, 4
// 004088aa  85f6                 test esi, esi
// 004088ac  75f2                 jne 0x4088a0
// 004088ae  b80e000780           mov eax, 0x8007000e
// 004088b3  e948010000           jmp 0x408a00
// 004088b8  6a02                 push 2
// 004088ba  6a00                 push 0
// 004088bc  50                   push eax
// 004088bd  ff151023b200         call dword ptr [0xb22310]
// 004088c3  8bd8                 mov ebx, eax
// 004088c5  895d08               mov dword ptr [ebp + 8], ebx
// 004088c8  85db                 test ebx, ebx
// 004088ca  750c                 jne 0x4088d8
// 004088cc  e8bfb9ffff           call 0x404290
// 004088d1  8bf8                 mov edi, eax
// 004088d3  e9f4000000           jmp 0x4089cc
// 004088d8  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 004088db  8b550c               mov edx, dword ptr [ebp + 0xc]
// 004088de  51                   push ecx
// 004088df  52                   push edx
// 004088e0  53                   push ebx
// 004088e1  ff154022b200         call dword ptr [0xb22240]
// 004088e7  8bf8                 mov edi, eax
// 004088e9  85ff                 test edi, edi
// 004088eb  750a                 jne 0x4088f7
// 004088ed  e89eb9ffff           call 0x404290
// 004088f2  e9cc000000           jmp 0x4089c3
// 004088f7  57                   push edi
// 004088f8  53                   push ebx
// 004088f9  ff158421b200         call dword ptr [0xb22184]
// 004088ff  89450c               mov dword ptr [ebp + 0xc], eax
// 00408902  85c0                 test eax, eax
// 00408904  750a                 jne 0x408910
// 00408906  e885b9ffff           call 0x404290
// 0040890b  e9b3000000           jmp 0x4089c3
// 00408910  57                   push edi
// 00408911  53                   push ebx
// 00408912  ff158821b200         call dword ptr [0xb22188]
// 00408918  8bf8                 mov edi, eax
// 0040891a  8d4701               lea eax, [edi + 1]
// 0040891d  897d10               mov dword ptr [ebp + 0x10], edi
// 00408920  3bc7                 cmp eax, edi
// 00408922  732b                 jae 0x40894f
// 00408924  8d85dcfbffff         lea eax, [ebp - 0x424]
// 0040892a  3985d8fbffff         cmp dword ptr [ebp - 0x428], eax
// 00408930  740b                 je 0x40893d
// 00408932  8d8dd8fbffff         lea ecx, [ebp - 0x428]
// 00408938  e893c1ffff           call 0x404ad0
// 0040893d  8d4dec               lea ecx, [ebp - 0x14]
// 00408940  e81bc1ffff           call 0x404a60
// 00408945  b80e000780           mov eax, 0x8007000e
// 0040894a  e9b1000000           jmp 0x408a00
// 0040894f  50                   push eax
// 00408950  8d8dd8fbffff         lea ecx, [ebp - 0x428]
// 00408956  c645fc02             mov byte ptr [ebp - 4], 2
// 0040895a  e851d3ffff           call 0x405cb0
// 0040895f  c745fc01000000       mov dword ptr [ebp - 4], 1
// 00408966  eb1e                 jmp 0x408986
// 00408968  8b4de0               mov ecx, dword ptr [ebp - 0x20]
// 0040896b  e87a9a5700           call 0x9823ea
// 00408970  c745fc01000000       mov dword ptr [ebp - 4], 1
// 00408977  b87d894000           mov eax, 0x40897d
// 0040897c  c3                   ret 
// 0040897d  8b75ec               mov esi, dword ptr [ebp - 0x14]
// 00408980  8b5d08               mov ebx, dword ptr [ebp + 8]
// 00408983  8b7d10               mov edi, dword ptr [ebp + 0x10]
// 00408986  8b85d8fbffff         mov eax, dword ptr [ebp - 0x428]
// 0040898c  85c0                 test eax, eax
// 0040898e  7507                 jne 0x408997
// 00408990  bf0e000780           mov edi, 0x8007000e
// 00408995  eb2e                 jmp 0x4089c5
// 00408997  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 0040899a  57                   push edi
// 0040899b  51                   push ecx
// 0040899c  57                   push edi
// 0040899d  50                   push eax
// 0040899e  e82db8ffff           call 0x4041d0
// 004089a3  8b95d8fbffff         mov edx, dword ptr [ebp - 0x428]
// 004089a9  8b4514               mov eax, dword ptr [ebp + 0x14]
// 004089ac  83c410               add esp, 0x10
// 004089af  c6043a00             mov byte ptr [edx + edi], 0
// 004089b3  8b8dd8fbffff         mov ecx, dword ptr [ebp - 0x428]
// 004089b9  50                   push eax
// 004089ba  51                   push ecx
// 004089bb  8d4de4               lea ecx, [ebp - 0x1c]
// 004089be  e8fdf5ffff           call 0x407fc0
// 004089c3  8bf8                 mov edi, eax
// 004089c5  53                   push ebx
// 004089c6  ff158c21b200         call dword ptr [0xb2218c]
// 004089cc  8d95dcfbffff         lea edx, [ebp - 0x424]
// 004089d2  3995d8fbffff         cmp dword ptr [ebp - 0x428], edx
// 004089d8  740b                 je 0x4089e5
// 004089da  8d8dd8fbffff         lea ecx, [ebp - 0x428]
// 004089e0  e8ebc0ffff           call 0x404ad0
// 004089e5  85f6                 test esi, esi
// 004089e7  7415                 je 0x4089fe
// 004089e9  8b1dc829b200         mov ebx, dword ptr [0xb229c8]
// 004089ef  90                   nop 
// 004089f0  8bc6                 mov eax, esi
// 004089f2  8b36                 mov esi, dword ptr [esi]
// 004089f4  50                   push eax
// 004089f5  ffd3                 call ebx
// 004089f7  83c404               add esp, 4
// 004089fa  85f6                 test esi, esi
// 004089fc  75f2                 jne 0x4089f0
// 004089fe  8bc7                 mov eax, edi
// 00408a00  8da5ccfbffff         lea esp, [ebp - 0x434]
// 00408a06  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00408a09  64890d00000000       mov dword ptr fs:[0], ecx
// 00408a10  5f                   pop edi
// 00408a11  5e                   pop esi
// 00408a12  5b                   pop ebx
// 00408a13  8be5                 mov esp, ebp
// 00408a15  5d                   pop ebp
// 00408a16  c21000               ret 0x10
// copied from an identical function in another client (function ?RegisterFromResource@CRegObject@ATL@@IAEJPB_WPBD1H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_daa9467bfe875fbf.cpp