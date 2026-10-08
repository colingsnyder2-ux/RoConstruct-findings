// from server: 100% by auto
// roc 2008-06 00772d00  unit: CXTPControlCustom  size: 182 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00772d00
//
// 00772d00  53                   push ebx
// 00772d01  55                   push ebp
// 00772d02  56                   push esi
// 00772d03  57                   push edi
// 00772d04  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00772d08  57                   push edi
// 00772d09  8bf1                 mov esi, ecx
// 00772d0b  e8c004f7ff           call 0x6e31d0
// 00772d10  83ec10               sub esp, 0x10
// 00772d13  8bc4                 mov eax, esp
// 00772d15  33c9                 xor ecx, ecx
// 00772d17  8908                 mov dword ptr [eax], ecx
// 00772d19  33d2                 xor edx, edx
// 00772d1b  895004               mov dword ptr [eax + 4], edx
// 00772d1e  33db                 xor ebx, ebx
// 00772d20  895808               mov dword ptr [eax + 8], ebx
// 00772d23  33ed                 xor ebp, ebp
// 00772d25  89680c               mov dword ptr [eax + 0xc], ebp
// 00772d28  8d8680010000         lea eax, [esi + 0x180]
// 00772d2e  50                   push eax
// 00772d2f  689c668500           push 0x85669c
// 00772d34  57                   push edi
// 00772d35  e886a7f8ff           call 0x6fd4c0
// 00772d3a  33c9                 xor ecx, ecx
// 00772d3c  51                   push ecx
// 00772d3d  33c0                 xor eax, eax
// 00772d3f  50                   push eax
// 00772d40  8d8e94010000         lea ecx, [esi + 0x194]
// 00772d46  51                   push ecx
// 00772d47  68f0858600           push 0x8685f0
// 00772d4c  57                   push edi
// 00772d4d  e83ea7f8ff           call 0x6fd490
// 00772d52  55                   push ebp
// 00772d53  8d969c010000         lea edx, [esi + 0x19c]
// 00772d59  52                   push edx
// 00772d5a  68e0858600           push 0x8685e0
// 00772d5f  57                   push edi
// 00772d60  e8aba5f8ff           call 0x6fd310
// 00772d65  83c440               add esp, 0x40
// 00772d68  837f2c05             cmp dword ptr [edi + 0x2c], 5
// 00772d6c  7616                 jbe 0x772d84
// 00772d6e  55                   push ebp
// 00772d6f  8d86a0010000         lea eax, [esi + 0x1a0]
// 00772d75  50                   push eax
// 00772d76  68d4858600           push 0x8685d4
// 00772d7b  57                   push edi
// 00772d7c  e88fa5f8ff           call 0x6fd310
// 00772d81  83c410               add esp, 0x10
// 00772d84  395f28               cmp dword ptr [edi + 0x28], ebx
// 00772d87  7426                 je 0x772daf
// 00772d89  8b8ea0010000         mov ecx, dword ptr [esi + 0x1a0]
// 00772d8f  85c9                 test ecx, ecx
// 00772d91  741c                 je 0x772daf
// 00772d93  8b5720               mov edx, dword ptr [edi + 0x20]
// 00772d96  8b4224               mov eax, dword ptr [edx + 0x24]
// 00772d99  51                   push ecx
// 00772d9a  50                   push eax
// 00772d9b  8bce                 mov ecx, esi
// 00772d9d  e8eefeffff           call 0x772c90
// 00772da2  85c0                 test eax, eax
// 00772da4  7409                 je 0x772daf
// 00772da6  8b4020               mov eax, dword ptr [eax + 0x20]
// 00772da9  89867c010000         mov dword ptr [esi + 0x17c], eax
// 00772daf  5f                   pop edi
// 00772db0  5e                   pop esi
// 00772db1  5d                   pop ebp
// 00772db2  5b                   pop ebx
// 00772db3  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlCustom.cpp (function ?DoPropExchange@CXTPControlCustom@@MAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlCustom.cpp
