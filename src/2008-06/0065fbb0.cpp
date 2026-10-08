// from server: 100% by auto
// roc 2008-06 0065fbb0  unit: seg_00650000  size: 326 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0065fbb0
//
// 0065fbb0  51                   push ecx
// 0065fbb1  53                   push ebx
// 0065fbb2  55                   push ebp
// 0065fbb3  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0065fbb7  56                   push esi
// 0065fbb8  8bf0                 mov esi, eax
// 0065fbba  837e0c00             cmp dword ptr [esi + 0xc], 0
// 0065fbbe  57                   push edi
// 0065fbbf  7404                 je 0x65fbc5
// 0065fbc1  33ff                 xor edi, edi
// 0065fbc3  eb03                 jmp 0x65fbc8
// 0065fbc5  8b7d30               mov edi, dword ptr [ebp + 0x30]
// 0065fbc8  837e1000             cmp dword ptr [esi + 0x10], 0
// 0065fbcc  8b5d14               mov ebx, dword ptr [ebp + 0x14]
// 0065fbcf  897c2418             mov dword ptr [esp + 0x18], edi
// 0065fbd3  7538                 jne 0x65fc0d
// 0065fbd5  8b4608               mov eax, dword ptr [esi + 8]
// 0065fbd8  8b16                 mov edx, dword ptr [esi]
// 0065fbda  50                   push eax
// 0065fbdb  8b4604               mov eax, dword ptr [esi + 4]
// 0065fbde  6a04                 push 4
// 0065fbe0  8d4c2420             lea ecx, [esp + 0x20]
// 0065fbe4  51                   push ecx
// 0065fbe5  52                   push edx
// 0065fbe6  ffd0                 call eax
// 0065fbe8  83c410               add esp, 0x10
// 0065fbeb  894610               mov dword ptr [esi + 0x10], eax
// 0065fbee  85c0                 test eax, eax
// 0065fbf0  751b                 jne 0x65fc0d
// 0065fbf2  8b4e08               mov ecx, dword ptr [esi + 8]
// 0065fbf5  8b06                 mov eax, dword ptr [esi]
// 0065fbf7  51                   push ecx
// 0065fbf8  8b4e04               mov ecx, dword ptr [esi + 4]
// 0065fbfb  8d14bd00000000       lea edx, [edi*4]
// 0065fc02  52                   push edx
// 0065fc03  53                   push ebx
// 0065fc04  50                   push eax
// 0065fc05  ffd1                 call ecx
// 0065fc07  83c410               add esp, 0x10
// 0065fc0a  894610               mov dword ptr [esi + 0x10], eax
// 0065fc0d  837e0c00             cmp dword ptr [esi + 0xc], 0
// 0065fc11  7404                 je 0x65fc17
// 0065fc13  33db                 xor ebx, ebx
// 0065fc15  eb03                 jmp 0x65fc1a
// 0065fc17  8b5d38               mov ebx, dword ptr [ebp + 0x38]
// 0065fc1a  837e1000             cmp dword ptr [esi + 0x10], 0
// 0065fc1e  895c2418             mov dword ptr [esp + 0x18], ebx
// 0065fc22  7519                 jne 0x65fc3d
// 0065fc24  8b5608               mov edx, dword ptr [esi + 8]
// 0065fc27  8b0e                 mov ecx, dword ptr [esi]
// 0065fc29  52                   push edx
// 0065fc2a  8b5604               mov edx, dword ptr [esi + 4]
// 0065fc2d  6a04                 push 4
// 0065fc2f  8d442420             lea eax, [esp + 0x20]
// 0065fc33  50                   push eax
// 0065fc34  51                   push ecx
// 0065fc35  ffd2                 call edx
// 0065fc37  83c410               add esp, 0x10
// 0065fc3a  894610               mov dword ptr [esi + 0x10], eax
// 0065fc3d  85db                 test ebx, ebx
// 0065fc3f  7e69                 jle 0x65fcaa
// 0065fc41  33ff                 xor edi, edi
// 0065fc43  8b4518               mov eax, dword ptr [ebp + 0x18]
// 0065fc46  8b0407               mov eax, dword ptr [edi + eax]
// 0065fc49  e8a2fdffff           call 0x65f9f0
// 0065fc4e  837e1000             cmp dword ptr [esi + 0x10], 0
// 0065fc52  8b4d18               mov ecx, dword ptr [ebp + 0x18]
// 0065fc55  8b540f04             mov edx, dword ptr [edi + ecx + 4]
// 0065fc59  89542418             mov dword ptr [esp + 0x18], edx
// 0065fc5d  7519                 jne 0x65fc78
// 0065fc5f  8b4608               mov eax, dword ptr [esi + 8]
// 0065fc62  8b16                 mov edx, dword ptr [esi]
// 0065fc64  50                   push eax
// 0065fc65  8b4604               mov eax, dword ptr [esi + 4]
// 0065fc68  6a04                 push 4
// 0065fc6a  8d4c2420             lea ecx, [esp + 0x20]
// 0065fc6e  51                   push ecx
// 0065fc6f  52                   push edx
// 0065fc70  ffd0                 call eax
// 0065fc72  83c410               add esp, 0x10
// 0065fc75  894610               mov dword ptr [esi + 0x10], eax
// 0065fc78  837e1000             cmp dword ptr [esi + 0x10], 0
// 0065fc7c  8b4d18               mov ecx, dword ptr [ebp + 0x18]
// 0065fc7f  8b540f08             mov edx, dword ptr [edi + ecx + 8]
// 0065fc83  89542410             mov dword ptr [esp + 0x10], edx
// 0065fc87  7519                 jne 0x65fca2
// 0065fc89  8b4608               mov eax, dword ptr [esi + 8]
// 0065fc8c  8b16                 mov edx, dword ptr [esi]
// 0065fc8e  50                   push eax
// 0065fc8f  8b4604               mov eax, dword ptr [esi + 4]
// 0065fc92  6a04                 push 4
// 0065fc94  8d4c2418             lea ecx, [esp + 0x18]
// 0065fc98  51                   push ecx
// 0065fc99  52                   push edx
// 0065fc9a  ffd0                 call eax
// 0065fc9c  83c410               add esp, 0x10
// 0065fc9f  894610               mov dword ptr [esi + 0x10], eax
// 0065fca2  83c70c               add edi, 0xc
// 0065fca5  83eb01               sub ebx, 1
// 0065fca8  7599                 jne 0x65fc43
// 0065fcaa  837e0c00             cmp dword ptr [esi + 0xc], 0
// 0065fcae  7404                 je 0x65fcb4
// 0065fcb0  33db                 xor ebx, ebx
// 0065fcb2  eb03                 jmp 0x65fcb7
// 0065fcb4  8b5d24               mov ebx, dword ptr [ebp + 0x24]
// 0065fcb7  837e1000             cmp dword ptr [esi + 0x10], 0
// 0065fcbb  895c2418             mov dword ptr [esp + 0x18], ebx
// 0065fcbf  7519                 jne 0x65fcda
// 0065fcc1  8b4e08               mov ecx, dword ptr [esi + 8]
// 0065fcc4  8b06                 mov eax, dword ptr [esi]
// 0065fcc6  51                   push ecx
// 0065fcc7  8b4e04               mov ecx, dword ptr [esi + 4]
// 0065fcca  6a04                 push 4
// 0065fccc  8d542420             lea edx, [esp + 0x20]
// 0065fcd0  52                   push edx
// 0065fcd1  50                   push eax
// 0065fcd2  ffd1                 call ecx
// 0065fcd4  83c410               add esp, 0x10
// 0065fcd7  894610               mov dword ptr [esi + 0x10], eax
// 0065fcda  33ff                 xor edi, edi
// 0065fcdc  85db                 test ebx, ebx
// 0065fcde  7e10                 jle 0x65fcf0
// 0065fce0  8b551c               mov edx, dword ptr [ebp + 0x1c]
// 0065fce3  8b04ba               mov eax, dword ptr [edx + edi*4]
// 0065fce6  e805fdffff           call 0x65f9f0
// 0065fceb  47                   inc edi
// 0065fcec  3bfb                 cmp edi, ebx
// 0065fcee  7cf0                 jl 0x65fce0
// 0065fcf0  5f                   pop edi
// 0065fcf1  5e                   pop esi
// 0065fcf2  5d                   pop ebp
// 0065fcf3  5b                   pop ebx
// 0065fcf4  59                   pop ecx
// 0065fcf5  c3                   ret 
// library lua-5.1.4/ldump.c (function _DumpDebug)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldump.c
