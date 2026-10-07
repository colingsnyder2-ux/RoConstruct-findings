// roc 2011-06 007daae0  unit: seg_007d0000  size: 326 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007daae0
//
// 007daae0  51                   push ecx
// 007daae1  53                   push ebx
// 007daae2  55                   push ebp
// 007daae3  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 007daae7  56                   push esi
// 007daae8  8bf0                 mov esi, eax
// 007daaea  837e0c00             cmp dword ptr [esi + 0xc], 0
// 007daaee  57                   push edi
// 007daaef  7404                 je 0x7daaf5
// 007daaf1  33ff                 xor edi, edi
// 007daaf3  eb03                 jmp 0x7daaf8
// 007daaf5  8b7d30               mov edi, dword ptr [ebp + 0x30]
// 007daaf8  837e1000             cmp dword ptr [esi + 0x10], 0
// 007daafc  8b5d14               mov ebx, dword ptr [ebp + 0x14]
// 007daaff  897c2418             mov dword ptr [esp + 0x18], edi
// 007dab03  7538                 jne 0x7dab3d
// 007dab05  8b4608               mov eax, dword ptr [esi + 8]
// 007dab08  8b16                 mov edx, dword ptr [esi]
// 007dab0a  50                   push eax
// 007dab0b  8b4604               mov eax, dword ptr [esi + 4]
// 007dab0e  6a04                 push 4
// 007dab10  8d4c2420             lea ecx, [esp + 0x20]
// 007dab14  51                   push ecx
// 007dab15  52                   push edx
// 007dab16  ffd0                 call eax
// 007dab18  83c410               add esp, 0x10
// 007dab1b  894610               mov dword ptr [esi + 0x10], eax
// 007dab1e  85c0                 test eax, eax
// 007dab20  751b                 jne 0x7dab3d
// 007dab22  8b4e08               mov ecx, dword ptr [esi + 8]
// 007dab25  8b06                 mov eax, dword ptr [esi]
// 007dab27  51                   push ecx
// 007dab28  8b4e04               mov ecx, dword ptr [esi + 4]
// 007dab2b  8d14bd00000000       lea edx, [edi*4]
// 007dab32  52                   push edx
// 007dab33  53                   push ebx
// 007dab34  50                   push eax
// 007dab35  ffd1                 call ecx
// 007dab37  83c410               add esp, 0x10
// 007dab3a  894610               mov dword ptr [esi + 0x10], eax
// 007dab3d  837e0c00             cmp dword ptr [esi + 0xc], 0
// 007dab41  7404                 je 0x7dab47
// 007dab43  33db                 xor ebx, ebx
// 007dab45  eb03                 jmp 0x7dab4a
// 007dab47  8b5d38               mov ebx, dword ptr [ebp + 0x38]
// 007dab4a  837e1000             cmp dword ptr [esi + 0x10], 0
// 007dab4e  895c2418             mov dword ptr [esp + 0x18], ebx
// 007dab52  7519                 jne 0x7dab6d
// 007dab54  8b5608               mov edx, dword ptr [esi + 8]
// 007dab57  8b0e                 mov ecx, dword ptr [esi]
// 007dab59  52                   push edx
// 007dab5a  8b5604               mov edx, dword ptr [esi + 4]
// 007dab5d  6a04                 push 4
// 007dab5f  8d442420             lea eax, [esp + 0x20]
// 007dab63  50                   push eax
// 007dab64  51                   push ecx
// 007dab65  ffd2                 call edx
// 007dab67  83c410               add esp, 0x10
// 007dab6a  894610               mov dword ptr [esi + 0x10], eax
// 007dab6d  85db                 test ebx, ebx
// 007dab6f  7e69                 jle 0x7dabda
// 007dab71  33ff                 xor edi, edi
// 007dab73  8b4518               mov eax, dword ptr [ebp + 0x18]
// 007dab76  8b0407               mov eax, dword ptr [edi + eax]
// 007dab79  e8a2fdffff           call 0x7da920
// 007dab7e  837e1000             cmp dword ptr [esi + 0x10], 0
// 007dab82  8b4d18               mov ecx, dword ptr [ebp + 0x18]
// 007dab85  8b540f04             mov edx, dword ptr [edi + ecx + 4]
// 007dab89  89542418             mov dword ptr [esp + 0x18], edx
// 007dab8d  7519                 jne 0x7daba8
// 007dab8f  8b4608               mov eax, dword ptr [esi + 8]
// 007dab92  8b16                 mov edx, dword ptr [esi]
// 007dab94  50                   push eax
// 007dab95  8b4604               mov eax, dword ptr [esi + 4]
// 007dab98  6a04                 push 4
// 007dab9a  8d4c2420             lea ecx, [esp + 0x20]
// 007dab9e  51                   push ecx
// 007dab9f  52                   push edx
// 007daba0  ffd0                 call eax
// 007daba2  83c410               add esp, 0x10
// 007daba5  894610               mov dword ptr [esi + 0x10], eax
// 007daba8  837e1000             cmp dword ptr [esi + 0x10], 0
// 007dabac  8b4d18               mov ecx, dword ptr [ebp + 0x18]
// 007dabaf  8b540f08             mov edx, dword ptr [edi + ecx + 8]
// 007dabb3  89542410             mov dword ptr [esp + 0x10], edx
// 007dabb7  7519                 jne 0x7dabd2
// 007dabb9  8b4608               mov eax, dword ptr [esi + 8]
// 007dabbc  8b16                 mov edx, dword ptr [esi]
// 007dabbe  50                   push eax
// 007dabbf  8b4604               mov eax, dword ptr [esi + 4]
// 007dabc2  6a04                 push 4
// 007dabc4  8d4c2418             lea ecx, [esp + 0x18]
// 007dabc8  51                   push ecx
// 007dabc9  52                   push edx
// 007dabca  ffd0                 call eax
// 007dabcc  83c410               add esp, 0x10
// 007dabcf  894610               mov dword ptr [esi + 0x10], eax
// 007dabd2  83c70c               add edi, 0xc
// 007dabd5  83eb01               sub ebx, 1
// 007dabd8  7599                 jne 0x7dab73
// 007dabda  837e0c00             cmp dword ptr [esi + 0xc], 0
// 007dabde  7404                 je 0x7dabe4
// 007dabe0  33db                 xor ebx, ebx
// 007dabe2  eb03                 jmp 0x7dabe7
// 007dabe4  8b5d24               mov ebx, dword ptr [ebp + 0x24]
// 007dabe7  837e1000             cmp dword ptr [esi + 0x10], 0
// 007dabeb  895c2418             mov dword ptr [esp + 0x18], ebx
// 007dabef  7519                 jne 0x7dac0a
// 007dabf1  8b4e08               mov ecx, dword ptr [esi + 8]
// 007dabf4  8b06                 mov eax, dword ptr [esi]
// 007dabf6  51                   push ecx
// 007dabf7  8b4e04               mov ecx, dword ptr [esi + 4]
// 007dabfa  6a04                 push 4
// 007dabfc  8d542420             lea edx, [esp + 0x20]
// 007dac00  52                   push edx
// 007dac01  50                   push eax
// 007dac02  ffd1                 call ecx
// 007dac04  83c410               add esp, 0x10
// 007dac07  894610               mov dword ptr [esi + 0x10], eax
// 007dac0a  33ff                 xor edi, edi
// 007dac0c  85db                 test ebx, ebx
// 007dac0e  7e10                 jle 0x7dac20
// 007dac10  8b551c               mov edx, dword ptr [ebp + 0x1c]
// 007dac13  8b04ba               mov eax, dword ptr [edx + edi*4]
// 007dac16  e805fdffff           call 0x7da920
// 007dac1b  47                   inc edi
// 007dac1c  3bfb                 cmp edi, ebx
// 007dac1e  7cf0                 jl 0x7dac10
// 007dac20  5f                   pop edi
// 007dac21  5e                   pop esi
// 007dac22  5d                   pop ebp
// 007dac23  5b                   pop ebx
// 007dac24  59                   pop ecx
// 007dac25  c3                   ret 
// library lua-5.1.4/ldump.c (function _DumpDebug)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldump.c
