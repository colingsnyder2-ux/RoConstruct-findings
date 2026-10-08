// roc 2009-06 007f5280  unit: CXTPTabManagerNavigateButton  size: 372 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007f5280
//
// 007f5280  83ec20               sub esp, 0x20
// 007f5283  56                   push esi
// 007f5284  8bf1                 mov esi, ecx
// 007f5286  ff153cee8900         call dword ptr [0x89ee3c]
// 007f528c  85c0                 test eax, eax
// 007f528e  0f8559010000         jne 0x7f53ed
// 007f5294  394620               cmp dword ptr [esi + 0x20], eax
// 007f5297  0f8450010000         je 0x7f53ed
// 007f529d  8b442428             mov eax, dword ptr [esp + 0x28]
// 007f52a1  53                   push ebx
// 007f52a2  55                   push ebp
// 007f52a3  57                   push edi
// 007f52a4  50                   push eax
// 007f52a5  ff1538ee8900         call dword ptr [0x89ee38]
// 007f52ab  8b2d18e28900         mov ebp, dword ptr [0x89e218]
// 007f52b1  c744241000000000     mov dword ptr [esp + 0x10], 0
// 007f52b9  ffd5                 call ebp
// 007f52bb  8bd8                 mov ebx, eax
// 007f52bd  8d7e10               lea edi, [esi + 0x10]
// 007f52c0  837e2000             cmp dword ptr [esi + 0x20], 0
// 007f52c4  7418                 je 0x7f52de
// 007f52c6  ffd5                 call ebp
// 007f52c8  2bc3                 sub eax, ebx
// 007f52ca  83f814               cmp eax, 0x14
// 007f52cd  760f                 jbe 0x7f52de
// 007f52cf  ffd5                 call ebp
// 007f52d1  8b16                 mov edx, dword ptr [esi]
// 007f52d3  8bd8                 mov ebx, eax
// 007f52d5  8b4218               mov eax, dword ptr [edx + 0x18]
// 007f52d8  6a01                 push 1
// 007f52da  8bce                 mov ecx, esi
// 007f52dc  ffd0                 call eax
// 007f52de  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 007f52e2  8b542438             mov edx, dword ptr [esp + 0x38]
// 007f52e6  51                   push ecx
// 007f52e7  52                   push edx
// 007f52e8  57                   push edi
// 007f52e9  ff15c0ed8900         call dword ptr [0x89edc0]
// 007f52ef  3b4624               cmp eax, dword ptr [esi + 0x24]
// 007f52f2  7410                 je 0x7f5304
// 007f52f4  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 007f52f7  894624               mov dword ptr [esi + 0x24], eax
// 007f52fa  8b01                 mov eax, dword ptr [ecx]
// 007f52fc  8b5034               mov edx, dword ptr [eax + 0x34]
// 007f52ff  6a01                 push 1
// 007f5301  57                   push edi
// 007f5302  ffd2                 call edx
// 007f5304  6a00                 push 0
// 007f5306  6a00                 push 0
// 007f5308  6a00                 push 0
// 007f530a  6a00                 push 0
// 007f530c  8d442424             lea eax, [esp + 0x24]
// 007f5310  50                   push eax
// 007f5311  ff1540ee8900         call dword ptr [0x89ee40]
// 007f5317  85c0                 test eax, eax
// 007f5319  74a5                 je 0x7f52c0
// 007f531b  6a00                 push 0
// 007f531d  6a00                 push 0
// 007f531f  6a00                 push 0
// 007f5321  8d4c2420             lea ecx, [esp + 0x20]
// 007f5325  51                   push ecx
// 007f5326  ff15d8ee8900         call dword ptr [0x89eed8]
// 007f532c  ff153cee8900         call dword ptr [0x89ee3c]
// 007f5332  3b442434             cmp eax, dword ptr [esp + 0x34]
// 007f5336  755a                 jne 0x7f5392
// 007f5338  8b442418             mov eax, dword ptr [esp + 0x18]
// 007f533c  3d00020000           cmp eax, 0x200
// 007f5341  7733                 ja 0x7f5376
// 007f5343  7419                 je 0x7f535e
// 007f5345  83f81f               cmp eax, 0x1f
// 007f5348  745c                 je 0x7f53a6
// 007f534a  3d00010000           cmp eax, 0x100
// 007f534f  7531                 jne 0x7f5382
// 007f5351  837c241c1b           cmp dword ptr [esp + 0x1c], 0x1b
// 007f5356  0f8564ffffff         jne 0x7f52c0
// 007f535c  eb48                 jmp 0x7f53a6
// 007f535e  8b442420             mov eax, dword ptr [esp + 0x20]
// 007f5362  0fbfc8               movsx ecx, ax
// 007f5365  c1e810               shr eax, 0x10
// 007f5368  98                   cwde 
// 007f5369  894c2438             mov dword ptr [esp + 0x38], ecx
// 007f536d  8944243c             mov dword ptr [esp + 0x3c], eax
// 007f5371  e94affffff           jmp 0x7f52c0
// 007f5376  2d02020000           sub eax, 0x202
// 007f537b  7422                 je 0x7f539f
// 007f537d  83e802               sub eax, 2
// 007f5380  7424                 je 0x7f53a6
// 007f5382  8d542414             lea edx, [esp + 0x14]
// 007f5386  52                   push edx
// 007f5387  ff154ced8900         call dword ptr [0x89ed4c]
// 007f538d  e92effffff           jmp 0x7f52c0
// 007f5392  8d442414             lea eax, [esp + 0x14]
// 007f5396  50                   push eax
// 007f5397  ff154ced8900         call dword ptr [0x89ed4c]
// 007f539d  eb07                 jmp 0x7f53a6
// 007f539f  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 007f53a2  894c2410             mov dword ptr [esp + 0x10], ecx
// 007f53a6  ff1544ee8900         call dword ptr [0x89ee44]
// 007f53ac  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 007f53b0  8b442438             mov eax, dword ptr [esp + 0x38]
// 007f53b4  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 007f53b8  52                   push edx
// 007f53b9  50                   push eax
// 007f53ba  51                   push ecx
// 007f53bb  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 007f53be  c7462400000000       mov dword ptr [esi + 0x24], 0
// 007f53c5  e8c6faffff           call 0x7f4e90
// 007f53ca  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 007f53cd  8b11                 mov edx, dword ptr [ecx]
// 007f53cf  8b4234               mov eax, dword ptr [edx + 0x34]
// 007f53d2  6a00                 push 0
// 007f53d4  6a00                 push 0
// 007f53d6  ffd0                 call eax
// 007f53d8  837c241000           cmp dword ptr [esp + 0x10], 0
// 007f53dd  5f                   pop edi
// 007f53de  5d                   pop ebp
// 007f53df  5b                   pop ebx
// 007f53e0  740b                 je 0x7f53ed
// 007f53e2  8b16                 mov edx, dword ptr [esi]
// 007f53e4  8b4218               mov eax, dword ptr [edx + 0x18]
// 007f53e7  6a00                 push 0
// 007f53e9  8bce                 mov ecx, esi
// 007f53eb  ffd0                 call eax
// 007f53ed  5e                   pop esi
// 007f53ee  83c420               add esp, 0x20
// 007f53f1  c20c00               ret 0xc
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?PerformClick@CXTPTabManagerNavigateButton@@UAEXPAUHWND__@@VCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
