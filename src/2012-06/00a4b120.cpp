// roc 2012-06 00a4b120  unit: CXTPControlCustom  size: 182 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a4b120
//
// 00a4b120  53                   push ebx
// 00a4b121  55                   push ebp
// 00a4b122  56                   push esi
// 00a4b123  57                   push edi
// 00a4b124  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00a4b128  57                   push edi
// 00a4b129  8bf1                 mov esi, ecx
// 00a4b12b  e8e096f7ff           call 0x9c4810
// 00a4b130  83ec10               sub esp, 0x10
// 00a4b133  8bc4                 mov eax, esp
// 00a4b135  33c9                 xor ecx, ecx
// 00a4b137  8908                 mov dword ptr [eax], ecx
// 00a4b139  33d2                 xor edx, edx
// 00a4b13b  895004               mov dword ptr [eax + 4], edx
// 00a4b13e  33db                 xor ebx, ebx
// 00a4b140  895808               mov dword ptr [eax + 8], ebx
// 00a4b143  33ed                 xor ebp, ebp
// 00a4b145  89680c               mov dword ptr [eax + 0xc], ebp
// 00a4b148  8d8680010000         lea eax, [esi + 0x180]
// 00a4b14e  50                   push eax
// 00a4b14f  68ac31c100           push 0xc131ac
// 00a4b154  57                   push edi
// 00a4b155  e876d3f8ff           call 0x9d84d0
// 00a4b15a  33c9                 xor ecx, ecx
// 00a4b15c  51                   push ecx
// 00a4b15d  33c0                 xor eax, eax
// 00a4b15f  50                   push eax
// 00a4b160  8d8e94010000         lea ecx, [esi + 0x194]
// 00a4b166  51                   push ecx
// 00a4b167  68402fc200           push 0xc22f40
// 00a4b16c  57                   push edi
// 00a4b16d  e82ed3f8ff           call 0x9d84a0
// 00a4b172  55                   push ebp
// 00a4b173  8d969c010000         lea edx, [esi + 0x19c]
// 00a4b179  52                   push edx
// 00a4b17a  68302fc200           push 0xc22f30
// 00a4b17f  57                   push edi
// 00a4b180  e89bd1f8ff           call 0x9d8320
// 00a4b185  83c440               add esp, 0x40
// 00a4b188  837f2c05             cmp dword ptr [edi + 0x2c], 5
// 00a4b18c  7616                 jbe 0xa4b1a4
// 00a4b18e  55                   push ebp
// 00a4b18f  8d86a0010000         lea eax, [esi + 0x1a0]
// 00a4b195  50                   push eax
// 00a4b196  68242fc200           push 0xc22f24
// 00a4b19b  57                   push edi
// 00a4b19c  e87fd1f8ff           call 0x9d8320
// 00a4b1a1  83c410               add esp, 0x10
// 00a4b1a4  395f28               cmp dword ptr [edi + 0x28], ebx
// 00a4b1a7  7426                 je 0xa4b1cf
// 00a4b1a9  8b8ea0010000         mov ecx, dword ptr [esi + 0x1a0]
// 00a4b1af  85c9                 test ecx, ecx
// 00a4b1b1  741c                 je 0xa4b1cf
// 00a4b1b3  8b5720               mov edx, dword ptr [edi + 0x20]
// 00a4b1b6  8b4224               mov eax, dword ptr [edx + 0x24]
// 00a4b1b9  51                   push ecx
// 00a4b1ba  50                   push eax
// 00a4b1bb  8bce                 mov ecx, esi
// 00a4b1bd  e8eefeffff           call 0xa4b0b0
// 00a4b1c2  85c0                 test eax, eax
// 00a4b1c4  7409                 je 0xa4b1cf
// 00a4b1c6  8b4020               mov eax, dword ptr [eax + 0x20]
// 00a4b1c9  89867c010000         mov dword ptr [esi + 0x17c], eax
// 00a4b1cf  5f                   pop edi
// 00a4b1d0  5e                   pop esi
// 00a4b1d1  5d                   pop ebp
// 00a4b1d2  5b                   pop ebx
// 00a4b1d3  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlCustom.cpp (function ?DoPropExchange@CXTPControlCustom@@MAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlCustom.cpp
