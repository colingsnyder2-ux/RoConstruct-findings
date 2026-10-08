// roc 2007-08 005dfde0  unit: RBX::VMotorFeature::?$FactoryProduct  size: 168 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005dfde0
//
// 005dfde0  6aff                 push -1
// 005dfde2  68f3a87500           push 0x75a8f3
// 005dfde7  64a100000000         mov eax, dword ptr fs:[0]
// 005dfded  50                   push eax
// 005dfdee  64892500000000       mov dword ptr fs:[0], esp
// 005dfdf5  83ec14               sub esp, 0x14
// 005dfdf8  8b442424             mov eax, dword ptr [esp + 0x24]
// 005dfdfc  56                   push esi
// 005dfdfd  8bf1                 mov esi, ecx
// 005dfdff  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005dfe03  57                   push edi
// 005dfe04  33ff                 xor edi, edi
// 005dfe06  8906                 mov dword ptr [esi], eax
// 005dfe08  894e04               mov dword ptr [esi + 4], ecx
// 005dfe0b  89742408             mov dword ptr [esp + 8], esi
// 005dfe0f  897e0c               mov dword ptr [esi + 0xc], edi
// 005dfe12  897e10               mov dword ptr [esi + 0x10], edi
// 005dfe15  897e14               mov dword ptr [esi + 0x14], edi
// 005dfe18  8d54242c             lea edx, [esp + 0x2c]
// 005dfe1c  52                   push edx
// 005dfe1d  6800000100           push 0x10000
// 005dfe22  8d4c2414             lea ecx, [esp + 0x14]
// 005dfe26  897c242c             mov dword ptr [esp + 0x2c], edi
// 005dfe2a  897e18               mov dword ptr [esi + 0x18], edi
// 005dfe2d  897e1c               mov dword ptr [esi + 0x1c], edi
// 005dfe30  897e20               mov dword ptr [esi + 0x20], edi
// 005dfe33  897c2434             mov dword ptr [esp + 0x34], edi
// 005dfe37  e8b4fdffff           call 0x5dfbf0
// 005dfe3c  8b460c               mov eax, dword ptr [esi + 0xc]
// 005dfe3f  3bc7                 cmp eax, edi
// 005dfe41  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005dfe45  8b542414             mov edx, dword ptr [esp + 0x14]
// 005dfe49  894e0c               mov dword ptr [esi + 0xc], ecx
// 005dfe4c  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 005dfe4f  895610               mov dword ptr [esi + 0x10], edx
// 005dfe52  8b542418             mov edx, dword ptr [esp + 0x18]
// 005dfe56  894c2414             mov dword ptr [esp + 0x14], ecx
// 005dfe5a  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 005dfe5d  89442410             mov dword ptr [esp + 0x10], eax
// 005dfe61  895614               mov dword ptr [esi + 0x14], edx
// 005dfe64  894c2418             mov dword ptr [esp + 0x18], ecx
// 005dfe68  7409                 je 0x5dfe73
// 005dfe6a  50                   push eax
// 005dfe6b  e8f2fd0400           call 0x62fc62
// 005dfe70  83c404               add esp, 4
// 005dfe73  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005dfe77  5f                   pop edi
// 005dfe78  8bc6                 mov eax, esi
// 005dfe7a  5e                   pop esi
// 005dfe7b  64890d00000000       mov dword ptr fs:[0], ecx
// 005dfe82  83c420               add esp, 0x20
// 005dfe85  c20800               ret 8
// library rbxgs/v8world\SpatialHash.cpp (function ??0SpatialHash@RBX@@QAE@PAVWorld@1@PAVContactManager@1@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/SpatialHash.cpp
