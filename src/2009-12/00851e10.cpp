// roc 2009-12 00851e10  unit: CXTPPropExchange  size: 304 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00851e10
//
// 00851e10  6aff                 push -1
// 00851e12  684bda9500           push 0x95da4b
// 00851e17  64a100000000         mov eax, dword ptr fs:[0]
// 00851e1d  50                   push eax
// 00851e1e  51                   push ecx
// 00851e1f  56                   push esi
// 00851e20  a10052b600           mov eax, dword ptr [0xb65200]
// 00851e25  33c4                 xor eax, esp
// 00851e27  50                   push eax
// 00851e28  8d44240c             lea eax, [esp + 0xc]
// 00851e2c  64a300000000         mov dword ptr fs:[0], eax
// 00851e32  8bf1                 mov esi, ecx
// 00851e34  8d4c2408             lea ecx, [esp + 8]
// 00851e38  ff1574de9800         call dword ptr [0x98de74]
// 00851e3e  8b4628               mov eax, dword ptr [esi + 0x28]
// 00851e41  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00851e49  85c0                 test eax, eax
// 00851e4b  0f8590000000         jne 0x851ee1
// 00851e51  8b442420             mov eax, dword ptr [esp + 0x20]
// 00851e55  8b08                 mov ecx, dword ptr [eax]
// 00851e57  8b11                 mov edx, dword ptr [ecx]
// 00851e59  52                   push edx
// 00851e5a  8d4c2424             lea ecx, [esp + 0x24]
// 00851e5e  ff15b8de9800         call dword ptr [0x98deb8]
// 00851e64  50                   push eax
// 00851e65  8d4c240c             lea ecx, [esp + 0xc]
// 00851e69  c644241801           mov byte ptr [esp + 0x18], 1
// 00851e6e  ff1538d59800         call dword ptr [0x98d538]
// 00851e74  8d4c2420             lea ecx, [esp + 0x20]
// 00851e78  c644241400           mov byte ptr [esp + 0x14], 0
// 00851e7d  ff15c0de9800         call dword ptr [0x98dec0]
// 00851e83  8b442424             mov eax, dword ptr [esp + 0x24]
// 00851e87  8b08                 mov ecx, dword ptr [eax]
// 00851e89  51                   push ecx
// 00851e8a  8d4c2424             lea ecx, [esp + 0x24]
// 00851e8e  ff15b8de9800         call dword ptr [0x98deb8]
// 00851e94  8bc8                 mov ecx, eax
// 00851e96  c644241402           mov byte ptr [esp + 0x14], 2
// 00851e9b  ff1580de9800         call dword ptr [0x98de80]
// 00851ea1  50                   push eax
// 00851ea2  8b442420             mov eax, dword ptr [esp + 0x20]
// 00851ea6  8d54240c             lea edx, [esp + 0xc]
// 00851eaa  52                   push edx
// 00851eab  50                   push eax
// 00851eac  56                   push esi
// 00851ead  e80eecffff           call 0x850ac0
// 00851eb2  83c410               add esp, 0x10
// 00851eb5  8d4c2420             lea ecx, [esp + 0x20]
// 00851eb9  ff15c0de9800         call dword ptr [0x98dec0]
// 00851ebf  8d4c2408             lea ecx, [esp + 8]
// 00851ec3  ff15c0de9800         call dword ptr [0x98dec0]
// 00851ec9  b801000000           mov eax, 1
// 00851ece  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00851ed2  64890d00000000       mov dword ptr fs:[0], ecx
// 00851ed9  59                   pop ecx
// 00851eda  5e                   pop esi
// 00851edb  83c410               add esp, 0x10
// 00851ede  c20c00               ret 0xc
// 00851ee1  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00851ee5  8d4c2408             lea ecx, [esp + 8]
// 00851ee9  51                   push ecx
// 00851eea  52                   push edx
// 00851eeb  56                   push esi
// 00851eec  e89febffff           call 0x850a90
// 00851ef1  83c40c               add esp, 0xc
// 00851ef4  85c0                 test eax, eax
// 00851ef6  750c                 jne 0x851f04
// 00851ef8  8b442424             mov eax, dword ptr [esp + 0x24]
// 00851efc  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00851f00  8901                 mov dword ptr [ecx], eax
// 00851f02  ebbb                 jmp 0x851ebf
// 00851f04  8d4c2408             lea ecx, [esp + 8]
// 00851f08  ff1580de9800         call dword ptr [0x98de80]
// 00851f0e  50                   push eax
// 00851f0f  e88cfeffff           call 0x851da0
// 00851f14  8b542424             mov edx, dword ptr [esp + 0x24]
// 00851f18  83c404               add esp, 4
// 00851f1b  8902                 mov dword ptr [edx], eax
// 00851f1d  85c0                 test eax, eax
// 00851f1f  759e                 jne 0x851ebf
// 00851f21  8d4c2408             lea ecx, [esp + 8]
// 00851f25  ff15c0de9800         call dword ptr [0x98dec0]
// 00851f2b  33c0                 xor eax, eax
// 00851f2d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00851f31  64890d00000000       mov dword ptr fs:[0], ecx
// 00851f38  59                   pop ecx
// 00851f39  5e                   pop esi
// 00851f3a  83c410               add esp, 0x10
// 00851f3d  c20c00               ret 0xc
// copied from an identical function in another client (function ?ExchangeRuntimeClass@CXTPPropExchange@@UAEHPBDAAPAUCRuntimeClass@@PAU2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPPropExchange.cpp