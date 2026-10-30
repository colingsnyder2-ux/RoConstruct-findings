// from server: 100% by auto
// roc 2010-06 0077e6a0  unit: seg_00770000  size: 326 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0077e6a0
//
// 0077e6a0  51                   push ecx
// 0077e6a1  53                   push ebx
// 0077e6a2  55                   push ebp
// 0077e6a3  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0077e6a7  56                   push esi
// 0077e6a8  8bf0                 mov esi, eax
// 0077e6aa  837e0c00             cmp dword ptr [esi + 0xc], 0
// 0077e6ae  57                   push edi
// 0077e6af  7404                 je 0x77e6b5
// 0077e6b1  33ff                 xor edi, edi
// 0077e6b3  eb03                 jmp 0x77e6b8
// 0077e6b5  8b7d30               mov edi, dword ptr [ebp + 0x30]
// 0077e6b8  837e1000             cmp dword ptr [esi + 0x10], 0
// 0077e6bc  8b5d14               mov ebx, dword ptr [ebp + 0x14]
// 0077e6bf  897c2418             mov dword ptr [esp + 0x18], edi
// 0077e6c3  7538                 jne 0x77e6fd
// 0077e6c5  8b4608               mov eax, dword ptr [esi + 8]
// 0077e6c8  8b16                 mov edx, dword ptr [esi]
// 0077e6ca  50                   push eax
// 0077e6cb  8b4604               mov eax, dword ptr [esi + 4]
// 0077e6ce  6a04                 push 4
// 0077e6d0  8d4c2420             lea ecx, [esp + 0x20]
// 0077e6d4  51                   push ecx
// 0077e6d5  52                   push edx
// 0077e6d6  ffd0                 call eax
// 0077e6d8  83c410               add esp, 0x10
// 0077e6db  894610               mov dword ptr [esi + 0x10], eax
// 0077e6de  85c0                 test eax, eax
// 0077e6e0  751b                 jne 0x77e6fd
// 0077e6e2  8b4e08               mov ecx, dword ptr [esi + 8]
// 0077e6e5  8b06                 mov eax, dword ptr [esi]
// 0077e6e7  51                   push ecx
// 0077e6e8  8b4e04               mov ecx, dword ptr [esi + 4]
// 0077e6eb  8d14bd00000000       lea edx, [edi*4]
// 0077e6f2  52                   push edx
// 0077e6f3  53                   push ebx
// 0077e6f4  50                   push eax
// 0077e6f5  ffd1                 call ecx
// 0077e6f7  83c410               add esp, 0x10
// 0077e6fa  894610               mov dword ptr [esi + 0x10], eax
// 0077e6fd  837e0c00             cmp dword ptr [esi + 0xc], 0
// 0077e701  7404                 je 0x77e707
// 0077e703  33db                 xor ebx, ebx
// 0077e705  eb03                 jmp 0x77e70a
// 0077e707  8b5d38               mov ebx, dword ptr [ebp + 0x38]
// 0077e70a  837e1000             cmp dword ptr [esi + 0x10], 0
// 0077e70e  895c2418             mov dword ptr [esp + 0x18], ebx
// 0077e712  7519                 jne 0x77e72d
// 0077e714  8b5608               mov edx, dword ptr [esi + 8]
// 0077e717  8b0e                 mov ecx, dword ptr [esi]
// 0077e719  52                   push edx
// 0077e71a  8b5604               mov edx, dword ptr [esi + 4]
// 0077e71d  6a04                 push 4
// 0077e71f  8d442420             lea eax, [esp + 0x20]
// 0077e723  50                   push eax
// 0077e724  51                   push ecx
// 0077e725  ffd2                 call edx
// 0077e727  83c410               add esp, 0x10
// 0077e72a  894610               mov dword ptr [esi + 0x10], eax
// 0077e72d  85db                 test ebx, ebx
// 0077e72f  7e69                 jle 0x77e79a
// 0077e731  33ff                 xor edi, edi
// 0077e733  8b4518               mov eax, dword ptr [ebp + 0x18]
// 0077e736  8b0407               mov eax, dword ptr [edi + eax]
// 0077e739  e8a2fdffff           call 0x77e4e0
// 0077e73e  837e1000             cmp dword ptr [esi + 0x10], 0
// 0077e742  8b4d18               mov ecx, dword ptr [ebp + 0x18]
// 0077e745  8b540f04             mov edx, dword ptr [edi + ecx + 4]
// 0077e749  89542418             mov dword ptr [esp + 0x18], edx
// 0077e74d  7519                 jne 0x77e768
// 0077e74f  8b4608               mov eax, dword ptr [esi + 8]
// 0077e752  8b16                 mov edx, dword ptr [esi]
// 0077e754  50                   push eax
// 0077e755  8b4604               mov eax, dword ptr [esi + 4]
// 0077e758  6a04                 push 4
// 0077e75a  8d4c2420             lea ecx, [esp + 0x20]
// 0077e75e  51                   push ecx
// 0077e75f  52                   push edx
// 0077e760  ffd0                 call eax
// 0077e762  83c410               add esp, 0x10
// 0077e765  894610               mov dword ptr [esi + 0x10], eax
// 0077e768  837e1000             cmp dword ptr [esi + 0x10], 0
// 0077e76c  8b4d18               mov ecx, dword ptr [ebp + 0x18]
// 0077e76f  8b540f08             mov edx, dword ptr [edi + ecx + 8]
// 0077e773  89542410             mov dword ptr [esp + 0x10], edx
// 0077e777  7519                 jne 0x77e792
// 0077e779  8b4608               mov eax, dword ptr [esi + 8]
// 0077e77c  8b16                 mov edx, dword ptr [esi]
// 0077e77e  50                   push eax
// 0077e77f  8b4604               mov eax, dword ptr [esi + 4]
// 0077e782  6a04                 push 4
// 0077e784  8d4c2418             lea ecx, [esp + 0x18]
// 0077e788  51                   push ecx
// 0077e789  52                   push edx
// 0077e78a  ffd0                 call eax
// 0077e78c  83c410               add esp, 0x10
// 0077e78f  894610               mov dword ptr [esi + 0x10], eax
// 0077e792  83c70c               add edi, 0xc
// 0077e795  83eb01               sub ebx, 1
// 0077e798  7599                 jne 0x77e733
// 0077e79a  837e0c00             cmp dword ptr [esi + 0xc], 0
// 0077e79e  7404                 je 0x77e7a4
// 0077e7a0  33db                 xor ebx, ebx
// 0077e7a2  eb03                 jmp 0x77e7a7
// 0077e7a4  8b5d24               mov ebx, dword ptr [ebp + 0x24]
// 0077e7a7  837e1000             cmp dword ptr [esi + 0x10], 0
// 0077e7ab  895c2418             mov dword ptr [esp + 0x18], ebx
// 0077e7af  7519                 jne 0x77e7ca
// 0077e7b1  8b4e08               mov ecx, dword ptr [esi + 8]
// 0077e7b4  8b06                 mov eax, dword ptr [esi]
// 0077e7b6  51                   push ecx
// 0077e7b7  8b4e04               mov ecx, dword ptr [esi + 4]
// 0077e7ba  6a04                 push 4
// 0077e7bc  8d542420             lea edx, [esp + 0x20]
// 0077e7c0  52                   push edx
// 0077e7c1  50                   push eax
// 0077e7c2  ffd1                 call ecx
// 0077e7c4  83c410               add esp, 0x10
// 0077e7c7  894610               mov dword ptr [esi + 0x10], eax
// 0077e7ca  33ff                 xor edi, edi
// 0077e7cc  85db                 test ebx, ebx
// 0077e7ce  7e10                 jle 0x77e7e0
// 0077e7d0  8b551c               mov edx, dword ptr [ebp + 0x1c]
// 0077e7d3  8b04ba               mov eax, dword ptr [edx + edi*4]
// 0077e7d6  e805fdffff           call 0x77e4e0
// 0077e7db  47                   inc edi
// 0077e7dc  3bfb                 cmp edi, ebx
// 0077e7de  7cf0                 jl 0x77e7d0
// 0077e7e0  5f                   pop edi
// 0077e7e1  5e                   pop esi
// 0077e7e2  5d                   pop ebp
// 0077e7e3  5b                   pop ebx
// 0077e7e4  59                   pop ecx
// 0077e7e5  c3                   ret 
// library lua-5.1.4/ldump.c (function _DumpDebug)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldump.c
