// from server: 100% by colin
// roc 2008-06 005655b0  unit: RBX::VDebugSettings::?$FactoryProduct  size: 255 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005655b0
//
// 005655b0  6aff                 push -1
// 005655b2  68eaf37c00           push 0x7cf3ea
// 005655b7  64a100000000         mov eax, dword ptr fs:[0]
// 005655bd  50                   push eax
// 005655be  64892500000000       mov dword ptr fs:[0], esp
// 005655c5  83ec48               sub esp, 0x48
// 005655c8  56                   push esi
// 005655c9  8bf1                 mov esi, ecx
// 005655cb  89742404             mov dword ptr [esp + 4], esi
// 005655cf  e8dcfeffff           call 0x5654b0
// 005655d4  68b8df8200           push 0x82dfb8
// 005655d9  8d4c240c             lea ecx, [esp + 0xc]
// 005655dd  c744245800000000     mov dword ptr [esp + 0x58], 0
// 005655e5  c706ace28200         mov dword ptr [esi], 0x82e2ac
// 005655eb  c746109ce28200       mov dword ptr [esi + 0x10], 0x82e29c
// 005655f2  c7461494e28200       mov dword ptr [esi + 0x14], 0x82e294
// 005655f9  c746208ce28200       mov dword ptr [esi + 0x20], 0x82e28c
// 00565600  c746247ce28200       mov dword ptr [esi + 0x24], 0x82e27c
// 00565607  c746446ce28200       mov dword ptr [esi + 0x44], 0x82e26c
// 0056560e  c746645ce28200       mov dword ptr [esi + 0x64], 0x82e25c
// 00565615  c786840000004ce28200 mov dword ptr [esi + 0x84], 0x82e24c
// 0056561f  c786a40000003ce28200 mov dword ptr [esi + 0xa4], 0x82e23c
// 00565629  c786c40000002ce28200 mov dword ptr [esi + 0xc4], 0x82e22c
// 00565633  ff1558248000         call dword ptr [0x802458]
// 00565639  8d442408             lea eax, [esp + 8]
// 0056563d  50                   push eax
// 0056563e  8bce                 mov ecx, esi
// 00565640  c644245801           mov byte ptr [esp + 0x58], 1
// 00565645  e84659ffff           call 0x55af90
// 0056564a  8d4c2408             lea ecx, [esp + 8]
// 0056564e  c644245400       