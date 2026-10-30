// roc 2009-12 008ee6b0  unit: CXTPRibbonGroups  size: 443 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ee6b0
//
// 008ee6b0  6aff                 push -1
// 008ee6b2  6890699600           push 0x966990
// 008ee6b7  64a100000000         mov eax, dword ptr fs:[0]
// 008ee6bd  50                   push eax
// 008ee6be  83ec10               sub esp, 0x10
// 008ee6c1  53                   push ebx
// 008ee6c2  55                   push ebp
// 008ee6c3  56                   push esi
// 008ee6c4  57                   push edi
// 008ee6c5  a10052b600           mov eax, dword ptr [0xb65200]
// 008ee6ca  33c4                 xor eax, esp
// 008ee6cc  50                   push eax
// 008ee6cd  8d442424             lea eax, [esp + 0x24]
// 008ee6d1  64a300000000         mov dword ptr fs:[0], eax
// 008ee6d7  8bf9                 mov edi, ecx
// 008ee6d9  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008ee6dd  8b01                 mov eax, dword ptr [ecx]
// 008ee6df  8b9094000000         mov edx, dword ptr [eax + 0x94]
// 008ee6e5  33ed                 xor ebp, ebp
// 008ee6e7  68acce9a00           push 0x9aceac
// 008ee6ec  396928               cmp dword ptr [ecx + 0x28], ebp
// 008ee6ef  0f8598000000         jne 0x8ee78d
// 008ee6f5  8b7728               mov esi, dword ptr [edi + 0x28]
// 008ee6f8  89742420             mov dword ptr [esp + 0x20], esi
// 008ee6fc  ffd2                 call edx
// 008ee6fe  8bd8                 mov ebx, eax
// 008ee700  895c2414             mov dword ptr [esp + 0x14], ebx
// 008ee704  8b03                 mov eax, dword ptr [ebx]
// 008ee706  8b5004               mov edx, dword ptr [eax + 4]
// 008ee709  55                   push ebp
// 008ee70a  56                   push esi
// 008ee70b  8bcb                 mov ecx, ebx
// 008ee70d  896c2434             mov dword ptr [esp + 0x34], ebp
// 008ee711  ffd2                 call edx
// 008ee713  89442418             mov dword ptr [esp + 0x18], eax
// 008ee717  85f6                 test esi, esi
// 008ee719  7e69                 jle 0x8ee784
// 008ee71b  85ed                 test ebp, ebp
// 008ee71d  7c0f                 jl 0x8ee72e
// 008ee71f  3b6f28               cmp ebp, dword ptr [edi + 0x28]
// 008ee722  7d0a                 jge 0x8ee72e
// 008ee724  8b4724               mov eax, dword ptr [edi + 0x24]
// 008ee727  8d04a8               lea eax, [eax + ebp*4]
// 008ee72a  8b00                 mov eax, dword ptr [eax]
// 008ee72c  eb02                 jmp 0x8ee730
// 008ee72e  33c0                 xor eax, eax
// 008ee730  89442434             mov dword ptr [esp + 0x34], eax
// 008ee734  8b13                 mov edx, dword ptr [ebx]
// 008ee736  8b5208               mov edx, dword ptr [edx + 8]
// 008ee739  8d442418             lea eax, [esp + 0x18]
// 008ee73d  50                   push eax
// 008ee73e  8bcb                 mov ecx, ebx
// 008ee740  ffd2                 call edx
// 008ee742  8bf0                 mov esi, eax
// 008ee744  89742420             mov dword ptr [esp + 0x20], esi
// 008ee748  c644242c01           mov byte ptr [esp + 0x2c], 1
// 008ee74d  e8deaaffff           call 0x8e9230
// 008ee752  8b16                 mov edx, dword ptr [esi]
// 008ee754  8b5264               mov edx, dword ptr [edx + 0x64]
// 008ee757  50                   push eax
// 008ee758  8d442438             lea eax, [esp + 0x38]
// 008ee75c  50                   push eax
// 008ee75d  8bce                 mov ecx, esi
// 008ee75f  ffd2                 call edx
// 008ee761  85c0                 test eax, eax
// 008ee763  740c                 je 0x8ee771
// 008ee765  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008ee769  8b01                 mov eax, dword ptr [ecx]
// 008ee76b  8b5064               mov edx, dword ptr [eax + 0x64]
// 008ee76e  56                   push esi
// 008ee76f  ffd2                 call edx
// 008ee771  8bce                 mov ecx, esi
// 008ee773  c644242c00           mov byte ptr [esp + 0x2c], 0
// 008ee778  e85f56f0ff           call 0x7f3ddc
// 008ee77d  45                   inc ebp
// 008ee77e  3b6c241c             cmp ebp, dword ptr [esp + 0x1c]
// 008ee782  7c97                 jl 0x8ee71b
// 008ee784  8b03                 mov eax, dword ptr [ebx]
// 008ee786  8bcb                 mov ecx, ebx
// 008ee788  e9b1000000           jmp 0x8ee83e
// 008ee78d  ffd2                 call edx
// 008ee78f  8be8                 mov ebp, eax
// 008ee791  896c2420             mov dword ptr [esp + 0x20], ebp
// 008ee795  8b4500               mov eax, dword ptr [ebp]
// 008ee798  8b5004               mov edx, dword ptr [eax + 4]
// 008ee79b  6a00                 push 0
// 008ee79d  bb02000000           mov ebx, 2
// 008ee7a2  6a00                 push 0
// 008ee7a4  8bcd                 mov ecx, ebp
// 008ee7a6  895c2434             mov dword ptr [esp + 0x34], ebx
// 008ee7aa  ffd2                 call edx
// 008ee7ac  8bcf                 mov ecx, edi
// 008ee7ae  89442414             mov dword ptr [esp + 0x14], eax
// 008ee7b2  e8a9f4ffff           call 0x8edc60
// 008ee7b7  837c241400           cmp dword ptr [esp + 0x14], 0
// 008ee7bc  0f8477000000         je 0x8ee839
// 008ee7c2  8b4500               mov eax, dword ptr [ebp]
// 008ee7c5  8b5008               mov edx, dword ptr [eax + 8]
// 008ee7c8  8d4c2414             lea ecx, [esp + 0x14]
// 008ee7cc  51                   push ecx
// 008ee7cd  8bcd                 mov ecx, ebp
// 008ee7cf  ffd2                 call edx
// 008ee7d1  8bf0                 mov esi, eax
// 008ee7d3  8974241c             mov dword ptr [esp + 0x1c], esi
// 008ee7d7  897e24               mov dword ptr [esi + 0x24], edi
// 008ee7da  c644242c03           mov byte ptr [esp + 0x2c], 3
// 008ee7df  c744243400000000     mov dword ptr [esp + 0x34], 0
// 008ee7e7  e844aaffff           call 0x8e9230
// 008ee7ec  8b16                 mov edx, dword ptr [esi]
// 008ee7ee  8b5264               mov edx, dword ptr [edx + 0x64]
// 008ee7f1  50                   push eax
// 008ee7f2  8d442438             lea eax, [esp + 0x38]
// 008ee7f6  50                   push eax
// 008ee7f7  8bce                 mov ecx, esi
// 008ee7f9  ffd2                 call edx
// 008ee7fb  85c0                 test eax, eax
// 008ee7fd  740c                 je 0x8ee80b
// 008ee7ff  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008ee803  8b01                 mov eax, dword ptr [ecx]
// 008ee805  8b5064               mov edx, dword ptr [eax + 0x64]
// 008ee808  56                   push esi
// 008ee809  ffd2                 call edx
// 008ee80b  8b542434             mov edx, dword ptr [esp + 0x34]
// 008ee80f  85d2                 test edx, edx
// 008ee811  744f                 je 0x8ee862
// 008ee813  8b4728               mov eax, dword ptr [edi + 0x28]
// 008ee816  8d4f20               lea ecx, [edi + 0x20]
// 008ee819  52                   push edx
// 008ee81a  50                   push eax
// 008ee81b  e850c4f7ff           call 0x86ac70
// 008ee820  8bcf                 mov ecx, edi
// 008ee822  e889e5ffff           call 0x8ecdb0
// 008ee827  8bce                 mov ecx, esi
// 008ee829  885c242c             mov byte ptr [esp + 0x2c], bl
// 008ee82d  e8aa55f0ff           call 0x7f3ddc
// 008ee832  837c241400           cmp dword ptr [esp + 0x14], 0
// 008ee837  7589                 jne 0x8ee7c2
// 008ee839  8b4500               mov eax, dword ptr [ebp]
// 008ee83c  8bcd                 mov ecx, ebp
// 008ee83e  8b10                 mov edx, dword ptr [eax]
// 008ee840  6a01                 push 1
// 008ee842  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 008ee84a  ffd2                 call edx
// 008ee84c  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008ee850  64890d00000000       mov dword ptr fs:[0], ecx
// 008ee857  59                   pop ecx
// 008ee858  5f                   pop edi
// 008ee859  5e                   pop esi
// 008ee85a  5d                   pop ebp
// 008ee85b  5b                   pop ebx
// 008ee85c  83c41c               add esp, 0x1c
// 008ee85f  c20400               ret 4
// 008ee862  6a00                 push 0
// 008ee864  6a06                 push 6
// 008ee866  e8655bf0ff           call 0x7f43d0
// copied from an identical function in another client (function ?DoPropExchange@CXTPRibbonGroups@@UAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Ribbon\XTPRibbonGroups.cpp