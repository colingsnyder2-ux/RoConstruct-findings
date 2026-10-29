// roc 2009-12 008e9f60  unit: CXTPRibbonGroup  size: 285 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e9f60
//
// 008e9f60  6aff                 push -1
// 008e9f62  68a3649600           push 0x9664a3
// 008e9f67  64a100000000         mov eax, dword ptr fs:[0]
// 008e9f6d  50                   push eax
// 008e9f6e  83ec08               sub esp, 8
// 008e9f71  55                   push ebp
// 008e9f72  56                   push esi
// 008e9f73  57                   push edi
// 008e9f74  a10052b600           mov eax, dword ptr [0xb65200]
// 008e9f79  33c4                 xor eax, esp
// 008e9f7b  50                   push eax
// 008e9f7c  8d442418             lea eax, [esp + 0x18]
// 008e9f80  64a300000000         mov dword ptr fs:[0], eax
// 008e9f86  8bf1                 mov esi, ecx
// 008e9f88  89742410             mov dword ptr [esp + 0x10], esi
// 008e9f8c  e8b1c40300           call 0x926442
// 008e9f91  33ff                 xor edi, edi
// 008e9f93  8d4e28               lea ecx, [esi + 0x28]
// 008e9f96  897c2420             mov dword ptr [esp + 0x20], edi
// 008e9f9a  c706dccfa000         mov dword ptr [esi], 0xa0cfdc
// 008e9fa0  ff1574de9800         call dword ptr [0x98de74]
// 008e9fa6  8d4e44               lea ecx, [esi + 0x44]
// 008e9fa9  e8d2d8f0ff           call 0x7f7880
// 008e9fae  8d4634               lea eax, [esi + 0x34]
// 008e9fb1  83cdff               or ebp, 0xffffffff
// 008e9fb4  50                   push eax
// 008e9fb5  c644242402           mov byte ptr [esp + 0x24], 2
// 008e9fba  896e2c               mov dword ptr [esi + 0x2c], ebp
// 008e9fbd  897e30               mov dword ptr [esi + 0x30], edi
// 008e9fc0  897e58               mov dword ptr [esi + 0x58], edi
// 008e9fc3  897e5c               mov dword ptr [esi + 0x5c], edi
// 008e9fc6  ff159cca9800         call dword ptr [0x98ca9c]
// 008e9fcc  6874010000           push 0x17