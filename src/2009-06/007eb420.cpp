// roc 2009-06 007eb420  unit: CXTPControlCustom  size: 182 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007eb420
//
// 007eb420  53                   push ebx
// 007eb421  55                   push ebp
// 007eb422  56                   push esi
// 007eb423  57                   push edi
// 007eb424  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 007eb428  57                   push edi
// 007eb429  8bf1                 mov esi, ecx
// 007eb42b  e83006f7ff           call 0x75ba60
// 007eb430  83ec10               sub esp, 0x10
// 007eb433  8bc4                 mov eax, esp
// 007eb435  33c9                 xor ecx, ecx
// 007eb437  8908                 mov dword ptr [eax], ecx
// 007eb439  33d2                 xor edx, edx
// 007eb43b  895004               mov dword ptr [eax + 4], edx
// 007eb43e  33db                 xor ebx, ebx
// 007eb440  895808               mov dword ptr [eax + 8], ebx
// 007eb443  33ed                 xor ebp, ebp
// 007eb445  89680c               mov dword ptr [eax + 0xc], ebp
// 007eb448  8d8680010000         lea eax, [esi + 0x180]
// 007eb44e  50                   push eax
// 007eb44f  68dc768f00           push 0x8f76dc
// 007eb454  57                   push edi
// 007eb455  e8c6a9f8ff           call 0x775e20
// 007eb45a  33c9                 xor ecx, ecx
// 007eb45c  51                   push ecx
// 007eb45d  33c0                 xor eax, eax
// 007eb45f  50                   push eax
// 007eb460  8d8e94010000         lea ecx, [esi + 0x194]
// 007eb466  51                   push ecx
// 007eb467  6818969000           push 0x909618
// 007eb46c  57                   push edi
// 007eb46d  e87ea9f8ff           call 0x775df0
// 007eb472  55                   push ebp
// 007eb473  8d969c010000         lea edx, [esi + 0x19c]
// 007eb479  52                   push edx
// 007eb47a  6808969000           push 0x909608
// 007eb47f  57                   push edi
// 007eb480  e81ba8f8ff           call 0x775ca0
// 007eb485  83c440               add esp, 0x40
// 007eb488  837f2c05             cmp dword ptr [edi + 0x2c], 5
// 007eb48c  7616                 jbe 0x7eb4a4
// 007eb48e  55                   push ebp
// 007eb48f  8d86a0010000         lea eax, [esi + 0x1a0]
// 007eb495  50                   push eax
// 007eb496  68fc959000           push 0x9095fc
// 007eb49b  57                   push edi
// 007eb49c  e8ffa7f8ff           call 0x775ca0
// 007eb4a1  83c410               add esp, 0x10
// 007eb4a4  395f28               cmp dword ptr [edi + 0x28], ebx
// 007eb4a7  7426                 je 0x7eb4cf
// 007eb4a9  8b8ea0010000         mov ecx, dword ptr [esi + 0x1a0]
// 007eb4af  85c9                 test ecx, ecx
// 007eb4b1  741c                 je 0x7eb4cf
// 007eb4b3  8b5720               mov edx, dword ptr [edi + 0x20]
// 007eb4b6  8b4224               mov eax, dword ptr [edx + 0x24]
// 007eb4b9  51                   push ecx
// 007eb4ba  50                   push eax
// 007eb4bb  8bce                 mov ecx, esi
// 007eb4bd  e8eefeffff           call 0x7eb3b0
// 007eb4c2  85c0                 test eax, eax
// 007eb4c4  7409                 je 0x7eb4cf
// 007eb4c6  8b4020               mov eax, dword ptr [eax + 0x20]
// 007eb4c9  89867c010000         mov dword ptr [esi + 0x17c], eax
// 007eb4cf  5f                   pop edi
// 007eb4d0  5e                   pop esi
// 007eb4d1  5d                   pop ebp
// 007eb4d2  5b                   pop ebx
// 007eb4d3  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlCustom.cpp (function ?DoPropExchange@CXTPControlCustom@@MAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlCustom.cpp
