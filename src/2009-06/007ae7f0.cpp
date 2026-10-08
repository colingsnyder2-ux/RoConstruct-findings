// roc 2009-06 007ae7f0  unit: XTPPaintThemes::CXTPOfficeTheme  size: 496 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007ae7f0
//
// 007ae7f0  83ec10               sub esp, 0x10
// 007ae7f3  53                   push ebx
// 007ae7f4  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 007ae7f8  56                   push esi
// 007ae7f9  57                   push edi
// 007ae7fa  8d44240c             lea eax, [esp + 0xc]
// 007ae7fe  8bf9                 mov edi, ecx
// 007ae800  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 007ae803  50                   push eax
// 007ae804  51                   push ecx
// 007ae805  ff1514ee8900         call dword ptr [0x89ee14]
// 007ae80b  8b8300010000         mov eax, dword ptr [ebx + 0x100]
// 007ae811  83f804               cmp eax, 4
// 007ae814  0f85c6000000         jne 0x7ae8e0
// 007ae81a  6a3d                 push 0x3d
// 007ae81c  8bcf                 mov ecx, edi
// 007ae81e  e85d3ff7ff           call 0x722780
// 007ae823  83bbf800000002       cmp dword ptr [ebx + 0xf8], 2
// 007ae82a  8bf0                 mov esi, eax
// 007ae82c  7507                 jne 0x7ae835
// 007ae82e  b829000000           mov eax, 0x29
// 007ae833  eb12                 jmp 0x7ae847
// 007ae835  53                   push ebx
// 007ae836  8bcf                 mov ecx, edi
// 007ae838  e83349f7ff           call 0x723170
// 007ae83d  f7d8                 neg eax
// 007ae83f  1bc0                 sbb eax, eax
// 007ae841  83e0f1               and eax, 0xfffffff1
// 007ae844  83c01e               add eax, 0x1e
// 007ae847  50                   push eax
// 007ae848  8bcf                 mov ecx, edi
// 007ae84a  e8313ff7ff           call 0x722780
// 007ae84f  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 007ae853  56                   push esi
// 007ae854  56                   push esi
// 007ae855  8d542414             lea edx, [esp + 0x14]
// 007ae859  52                   push edx
// 007ae85a  8bcf                 mov ecx, edi
// 007ae85c  8bd8                 mov ebx, eax
// 007ae85e  e867aff6ff           call 0x7197ca
// 007ae863  6aff                 push -1
// 007ae865  6aff                 push -1
// 007ae867  8d442414             lea eax, [esp + 0x14]
// 007ae86b  50                   push eax
// 007ae86c  ff15bced8900         call dword ptr [0x89edbc]
// 007ae872  53                   push ebx
// 007ae873  8d4c2410             lea ecx, [esp + 0x10]
// 007ae877  51                   push ecx
// 007ae878  8bcf                 mov ecx, edi
// 007ae87a  e851aff6ff           call 0x7197d0
// 007ae87f  56                   push esi
// 007ae880  56                   push esi
// 007ae881  8d542414             lea edx, [esp + 0x14]
// 007ae885  52                   push edx
// 007ae886  8bcf                 mov ecx, edi
// 007ae888  e83daff6ff           call 0x7197ca
// 007ae88d  8b4704               mov eax, dword ptr [edi + 4]
// 007ae890  8b1dd4e08900         mov ebx, dword ptr [0x89e0d4]
// 007ae896  56                   push esi
// 007ae897  6a02                 push 2
// 007ae899  6a02                 push 2
// 007ae89b  50                   push eax
// 007ae89c  ffd3                 call ebx
// 007ae89e  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007ae8a2  8b5704               mov edx, dword ptr [edi + 4]
// 007ae8a5  56                   push esi
// 007ae8a6  6a02                 push 2
// 007ae8a8  83c1fe               add ecx, -2
// 007ae8ab  51                   push ecx
// 007ae8ac  52                   push edx
// 007ae8ad  ffd3                 call ebx
// 007ae8af  8b442418             mov eax, dword ptr [esp + 0x18]
// 007ae8b3  8b4f04               mov ecx, dword ptr [edi + 4]
// 007ae8b6  56                   push esi
// 007ae8b7  83c0fe               add eax, -2
// 007ae8ba  50                   push eax
// 007ae8bb  6a02                 push 2
// 007ae8bd  51                   push ecx
// 007ae8be  ffd3                 call ebx
// 007ae8c0  8b542418             mov edx, dword ptr [esp + 0x18]
// 007ae8c4  8b442414             mov eax, dword ptr [esp + 0x14]
// 007ae8c8  8b4f04               mov ecx, dword ptr [edi + 4]
// 007ae8cb  56                   push esi
// 007ae8cc  83c2fe               add edx, -2
// 007ae8cf  52                   push edx
// 007ae8d0  83c0fe               add eax, -2
// 007ae8d3  50                   push eax
// 007ae8d4  51                   push ecx
// 007ae8d5  ffd3                 call ebx
// 007ae8d7  5f                   pop edi
// 007ae8d8  5e                   pop esi
// 007ae8d9  5b                   pop ebx
// 007ae8da  83c410               add esp, 0x10
// 007ae8dd  c20800               ret 8
// 007ae8e0  83f805               cmp eax, 5
// 007ae8e3  754c                 jne 0x7ae931
// 007ae8e5  8b54240c             mov edx, dword ptr [esp + 0xc]
// 007ae8e9  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007ae8ed  8b742420             mov esi, dword ptr [esp + 0x20]
// 007ae8f1  6a29                 push 0x29
// 007ae8f3  6a2b                 push 0x2b
// 007ae8f5  83ec10               sub esp, 0x10
// 007ae8f8  8bc4                 mov eax, esp
// 007ae8fa  8910                 mov dword ptr [eax], edx
// 007ae8fc  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 007ae900  894804               mov dword ptr [eax + 4], ecx
// 007ae903  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 007ae907  895008               mov dword ptr [eax + 8], edx
// 007ae90a  89480c               mov dword ptr [eax + 0xc], ecx
// 007ae90d  56                   push esi
// 007ae90e  8bcf                 mov ecx, edi
// 007ae910  e8db4ef7ff           call 0x7237f0
// 007ae915  6a1e                 push 0x1e
// 007ae917  8bcf                 mov ecx, edi
// 007ae919  e8623ef7ff           call 0x722780
// 007ae91e  50                   push eax
// 007ae91f  53                   push ebx
// 007ae920  56                   push esi
// 007ae921  8bcf                 mov ecx, edi
// 007ae923  e8d8fdffff           call 0x7ae700
// 007ae928  5f                   pop edi
// 007ae929  5e                   pop esi
// 007ae92a  5b                   pop ebx
// 007ae92b  83c410               add esp, 0x10
// 007ae92e  c20800               ret 8
// 007ae931  53                   push ebx
// 007ae932  8bcf                 mov ecx, edi
// 007ae934  e83748f7ff           call 0x723170
// 007ae939  6a0f                 push 0xf
// 007ae93b  8bcf                 mov ecx, edi
// 007ae93d  85c0                 test eax, eax
// 007ae93f  741d                 je 0x7ae95e
// 007ae941  e83a3ef7ff           call 0x722780
// 007ae946  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007ae94a  50                   push eax
// 007ae94b  8d542410             lea edx, [esp + 0x10]
// 007ae94f  52                   push edx
// 007ae950  e87baef6ff           call 0x7197d0
// 007ae955  5f                   pop edi
// 007ae956  5e                   pop esi
// 007ae957  5b                   pop ebx
// 007ae958  83c410               add esp, 0x10
// 007ae95b  c20800               ret 8
// 007ae95e  e81d3ef7ff           call 0x722780
// 007ae963  6a1e                 push 0x1e
// 007ae965  8bcf                 mov ecx, edi
// 007ae967  8bf0                 mov esi, eax
// 007ae969  e8123ef7ff           call 0x722780
// 007ae96e  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 007ae972  50                   push eax
// 007ae973  8d442410             lea eax, [esp + 0x10]
// 007ae977  50                   push eax
// 007ae978  8bcf                 mov ecx, edi
// 007ae97a  e851aef6ff           call 0x7197d0
// 007ae97f  56                   push esi
// 007ae980  56                   push esi
// 007ae981  8d4c2414             lea ecx, [esp + 0x14]
// 007ae985  51                   push ecx
// 007ae986  8bcf                 mov ecx, edi
// 007ae988  e83daef6ff           call 0x7197ca
// 007ae98d  8b5704               mov edx, dword ptr [edi + 4]
// 007ae990  8b1dd4e08900         mov ebx, dword ptr [0x89e0d4]
// 007ae996  56                   push esi
// 007ae997  6a01                 push 1
// 007ae999  6a01                 push 1
// 007ae99b  52                   push edx
// 007ae99c  ffd3                 call ebx
// 007ae99e  8b442414             mov eax, dword ptr [esp + 0x14]
// 007ae9a2  8b4f04               mov ecx, dword ptr [edi + 4]
// 007ae9a5  56                   push esi
// 007ae9a6  6a01                 push 1
// 007ae9a8  83c0fe               add eax, -2
// 007ae9ab  50                   push eax
// 007ae9ac  51                   push ecx
// 007ae9ad  ffd3                 call ebx
// 007ae9af  8b542418             mov edx, dword ptr [esp + 0x18]
// 007ae9b3  8b4704               mov eax, dword ptr [edi + 4]
// 007ae9b6  56                   push esi
// 007ae9b7  83c2fe               add edx, -2
// 007ae9ba  52                   push edx
// 007ae9bb  6a01                 push 1
// 007ae9bd  50                   push eax
// 007ae9be  ffd3                 call ebx
// 007ae9c0  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007ae9c4  8b542414             mov edx, dword ptr [esp + 0x14]
// 007ae9c8  8b4704               mov eax, dword ptr [edi + 4]
// 007ae9cb  56                   push esi
// 007ae9cc  83c1fe               add ecx, -2
// 007ae9cf  51                   push ecx
// 007ae9d0  83c2fe               add edx, -2
// 007ae9d3  52                   push edx
// 007ae9d4  50                   push eax
// 007ae9d5  ffd3                 call ebx
// 007ae9d7  5f                   pop edi
// 007ae9d8  5e                   pop esi
// 007ae9d9  5b                   pop ebx
// 007ae9da  83c410               add esp, 0x10
// 007ae9dd  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPOfficeTheme.cpp (function ?FillCommandBarEntry@CXTPOfficeTheme@XTPPaintThemes@@UAEXPAVCDC@@PAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOfficeTheme.cpp
