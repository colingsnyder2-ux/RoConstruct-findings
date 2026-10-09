// roc 2009-12 008c5fb0  unit: CXTPControlCustom  size: 182 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c5fb0
//
// 008c5fb0  53                   push ebx
// 008c5fb1  55                   push ebp
// 008c5fb2  56                   push esi
// 008c5fb3  57                   push edi
// 008c5fb4  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 008c5fb8  57                   push edi
// 008c5fb9  8bf1                 mov esi, ecx
// 008c5fbb  e8c008f7ff           call 0x836880
// 008c5fc0  83ec10               sub esp, 0x10
// 008c5fc3  8bc4                 mov eax, esp
// 008c5fc5  33c9                 xor ecx, ecx
// 008c5fc7  8908                 mov dword ptr [eax], ecx
// 008c5fc9  33d2                 xor edx, edx
// 008c5fcb  895004               mov dword ptr [eax + 4], edx
// 008c5fce  33db                 xor ebx, ebx
// 008c5fd0  895808               mov dword ptr [eax + 8], ebx
// 008c5fd3  33ed                 xor ebp, ebp
// 008c5fd5  89680c               mov dword ptr [eax + 0xc], ebp
// 008c5fd8  8d8680010000         lea eax, [esi + 0x180]
// 008c5fde  50                   push eax
// 008c5fdf  68847b9f00           push 0x9f7b84
// 008c5fe4  57                   push edi
// 008c5fe5  e896abf8ff           call 0x850b80
// 008c5fea  33c9                 xor ecx, ecx
// 008c5fec  51                   push ecx
// 008c5fed  33c0                 xor eax, eax
// 008c5fef  50                   push eax
// 008c5ff0  8d8e94010000         lea ecx, [esi + 0x194]
// 008c5ff6  51                   push ecx
// 008c5ff7  68889aa000           push 0xa09a88
// 008c5ffc  57                   push edi
// 008c5ffd  e84eabf8ff           call 0x850b50
// 008c6002  55                   push ebp
// 008c6003  8d969c010000         lea edx, [esi + 0x19c]
// 008c6009  52                   push edx
// 008c600a  68789aa000           push 0xa09a78
// 008c600f  57                   push edi
// 008c6010  e8eba9f8ff           call 0x850a00
// 008c6015  83c440               add esp, 0x40
// 008c6018  837f2c05             cmp dword ptr [edi + 0x2c], 5
// 008c601c  7616                 jbe 0x8c6034
// 008c601e  55                   push ebp
// 008c601f  8d86a0010000         lea eax, [esi + 0x1a0]
// 008c6025  50                   push eax
// 008c6026  686c9aa000           push 0xa09a6c
// 008c602b  57                   push edi
// 008c602c  e8cfa9f8ff           call 0x850a00
// 008c6031  83c410               add esp, 0x10
// 008c6034  395f28               cmp dword ptr [edi + 0x28], ebx
// 008c6037  7426                 je 0x8c605f
// 008c6039  8b8ea0010000         mov ecx, dword ptr [esi + 0x1a0]
// 008c603f  85c9                 test ecx, ecx
// 008c6041  741c                 je 0x8c605f
// 008c6043  8b5720               mov edx, dword ptr [edi + 0x20]
// 008c6046  8b4224               mov eax, dword ptr [edx + 0x24]
// 008c6049  51                   push ecx
// 008c604a  50                   push eax
// 008c604b  8bce                 mov ecx, esi
// 008c604d  e8eefeffff           call 0x8c5f40
// 008c6052  85c0                 test eax, eax
// 008c6054  7409                 je 0x8c605f
// 008c6056  8b4020               mov eax, dword ptr [eax + 0x20]
// 008c6059  89867c010000         mov dword ptr [esi + 0x17c], eax
// 008c605f  5f                   pop edi
// 008c6060  5e                   pop esi
// 008c6061  5d                   pop ebp
// 008c6062  5b                   pop ebx
// 008c6063  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlCustom.cpp (function ?DoPropExchange@CXTPControlCustom@@MAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlCustom.cpp
