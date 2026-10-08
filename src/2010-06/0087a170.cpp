// roc 2010-06 0087a170  unit: CXTPControlCustom  size: 182 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0087a170
//
// 0087a170  53                   push ebx
// 0087a171  55                   push ebp
// 0087a172  56                   push esi
// 0087a173  57                   push edi
// 0087a174  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0087a178  57                   push edi
// 0087a179  8bf1                 mov esi, ecx
// 0087a17b  e82009f7ff           call 0x7eaaa0
// 0087a180  83ec10               sub esp, 0x10
// 0087a183  8bc4                 mov eax, esp
// 0087a185  33c9                 xor ecx, ecx
// 0087a187  8908                 mov dword ptr [eax], ecx
// 0087a189  33d2                 xor edx, edx
// 0087a18b  895004               mov dword ptr [eax + 4], edx
// 0087a18e  33db                 xor ebx, ebx
// 0087a190  895808               mov dword ptr [eax + 8], ebx
// 0087a193  33ed                 xor ebp, ebp
// 0087a195  89680c               mov dword ptr [eax + 0xc], ebp
// 0087a198  8d8680010000         lea eax, [esi + 0x180]
// 0087a19e  50                   push eax
// 0087a19f  686cbea500           push 0xa5be6c
// 0087a1a4  57                   push edi
// 0087a1a5  e846aaf8ff           call 0x804bf0
// 0087a1aa  33c9                 xor ecx, ecx
// 0087a1ac  51                   push ecx
// 0087a1ad  33c0                 xor eax, eax
// 0087a1af  50                   push eax
// 0087a1b0  8d8e94010000         lea ecx, [esi + 0x194]
// 0087a1b6  51                   push ecx
// 0087a1b7  6880dda600           push 0xa6dd80
// 0087a1bc  57                   push edi
// 0087a1bd  e8fea9f8ff           call 0x804bc0
// 0087a1c2  55                   push ebp
// 0087a1c3  8d969c010000         lea edx, [esi + 0x19c]
// 0087a1c9  52                   push edx
// 0087a1ca  6870dda600           push 0xa6dd70
// 0087a1cf  57                   push edi
// 0087a1d0  e86ba8f8ff           call 0x804a40
// 0087a1d5  83c440               add esp, 0x40
// 0087a1d8  837f2c05             cmp dword ptr [edi + 0x2c], 5
// 0087a1dc  7616                 jbe 0x87a1f4
// 0087a1de  55                   push ebp
// 0087a1df  8d86a0010000         lea eax, [esi + 0x1a0]
// 0087a1e5  50                   push eax
// 0087a1e6  6864dda600           push 0xa6dd64
// 0087a1eb  57                   push edi
// 0087a1ec  e84fa8f8ff           call 0x804a40
// 0087a1f1  83c410               add esp, 0x10
// 0087a1f4  395f28               cmp dword ptr [edi + 0x28], ebx
// 0087a1f7  7426                 je 0x87a21f
// 0087a1f9  8b8ea0010000         mov ecx, dword ptr [esi + 0x1a0]
// 0087a1ff  85c9                 test ecx, ecx
// 0087a201  741c                 je 0x87a21f
// 0087a203  8b5720               mov edx, dword ptr [edi + 0x20]
// 0087a206  8b4224               mov eax, dword ptr [edx + 0x24]
// 0087a209  51                   push ecx
// 0087a20a  50                   push eax
// 0087a20b  8bce                 mov ecx, esi
// 0087a20d  e8eefeffff           call 0x87a100
// 0087a212  85c0                 test eax, eax
// 0087a214  7409                 je 0x87a21f
// 0087a216  8b4020               mov eax, dword ptr [eax + 0x20]
// 0087a219  89867c010000         mov dword ptr [esi + 0x17c], eax
// 0087a21f  5f                   pop edi
// 0087a220  5e                   pop esi
// 0087a221  5d                   pop ebp
// 0087a222  5b                   pop ebx
// 0087a223  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlCustom.cpp (function ?DoPropExchange@CXTPControlCustom@@MAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlCustom.cpp
