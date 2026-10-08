// roc 2011-06 008d2df0  unit: CXTPControlCustom  size: 182 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d2df0
//
// 008d2df0  53                   push ebx
// 008d2df1  55                   push ebp
// 008d2df2  56                   push esi
// 008d2df3  57                   push edi
// 008d2df4  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 008d2df8  57                   push edi
// 008d2df9  8bf1                 mov esi, ecx
// 008d2dfb  e8c094f7ff           call 0x84c2c0
// 008d2e00  83ec10               sub esp, 0x10
// 008d2e03  8bc4                 mov eax, esp
// 008d2e05  33c9                 xor ecx, ecx
// 008d2e07  8908                 mov dword ptr [eax], ecx
// 008d2e09  33d2                 xor edx, edx
// 008d2e0b  895004               mov dword ptr [eax + 4], edx
// 008d2e0e  33db                 xor ebx, ebx
// 008d2e10  895808               mov dword ptr [eax + 8], ebx
// 008d2e13  33ed                 xor ebp, ebp
// 008d2e15  89680c               mov dword ptr [eax + 0xc], ebp
// 008d2e18  8d8680010000         lea eax, [esi + 0x180]
// 008d2e1e  50                   push eax
// 008d2e1f  68b47aac00           push 0xac7ab4
// 008d2e24  57                   push edi
// 008d2e25  e8a6d2f8ff           call 0x8600d0
// 008d2e2a  33c9                 xor ecx, ecx
// 008d2e2c  51                   push ecx
// 008d2e2d  33c0                 xor eax, eax
// 008d2e2f  50                   push eax
// 008d2e30  8d8e94010000         lea ecx, [esi + 0x194]
// 008d2e36  51                   push ecx
// 008d2e37  68a878ad00           push 0xad78a8
// 008d2e3c  57                   push edi
// 008d2e3d  e85ed2f8ff           call 0x8600a0
// 008d2e42  55                   push ebp
// 008d2e43  8d969c010000         lea edx, [esi + 0x19c]
// 008d2e49  52                   push edx
// 008d2e4a  689878ad00           push 0xad7898
// 008d2e4f  57                   push edi
// 008d2e50  e8fbd0f8ff           call 0x85ff50
// 008d2e55  83c440               add esp, 0x40
// 008d2e58  837f2c05             cmp dword ptr [edi + 0x2c], 5
// 008d2e5c  7616                 jbe 0x8d2e74
// 008d2e5e  55                   push ebp
// 008d2e5f  8d86a0010000         lea eax, [esi + 0x1a0]
// 008d2e65  50                   push eax
// 008d2e66  688c78ad00           push 0xad788c
// 008d2e6b  57                   push edi
// 008d2e6c  e8dfd0f8ff           call 0x85ff50
// 008d2e71  83c410               add esp, 0x10
// 008d2e74  395f28               cmp dword ptr [edi + 0x28], ebx
// 008d2e77  7426                 je 0x8d2e9f
// 008d2e79  8b8ea0010000         mov ecx, dword ptr [esi + 0x1a0]
// 008d2e7f  85c9                 test ecx, ecx
// 008d2e81  741c                 je 0x8d2e9f
// 008d2e83  8b5720               mov edx, dword ptr [edi + 0x20]
// 008d2e86  8b4224               mov eax, dword ptr [edx + 0x24]
// 008d2e89  51                   push ecx
// 008d2e8a  50                   push eax
// 008d2e8b  8bce                 mov ecx, esi
// 008d2e8d  e8eefeffff           call 0x8d2d80
// 008d2e92  85c0                 test eax, eax
// 008d2e94  7409                 je 0x8d2e9f
// 008d2e96  8b4020               mov eax, dword ptr [eax + 0x20]
// 008d2e99  89867c010000         mov dword ptr [esi + 0x17c], eax
// 008d2e9f  5f                   pop edi
// 008d2ea0  5e                   pop esi
// 008d2ea1  5d                   pop ebp
// 008d2ea2  5b                   pop ebx
// 008d2ea3  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlCustom.cpp (function ?DoPropExchange@CXTPControlCustom@@MAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlCustom.cpp
