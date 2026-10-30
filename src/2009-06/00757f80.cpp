// roc 2009-06 00757f80  unit: CXTTreeBase  size: 192 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00757f80
//
// 00757f80  83ec20               sub esp, 0x20
// 00757f83  57                   push edi
// 00757f84  8bf9                 mov edi, ecx
// 00757f86  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 00757f89  e87a10fcff           call 0x719008
// 00757f8e  8bcf                 mov ecx, edi
// 00757f90  e8dbe9ffff           call 0x756970
// 00757f95  84c0                 test al, al
// 00757f97  0f849c000000         je 0x758039
// 00757f9d  837f1000             cmp dword ptr [edi + 0x10], 0
// 00757fa1  0f8492000000         je 0x758039
// 00757fa7  8b4734               mov eax, dword ptr [edi + 0x34]
// 00757faa  8b4020               mov eax, dword ptr [eax + 0x20]
// 00757fad  56                   push esi
// 00757fae  6a00                 push 0
// 00757fb0  6a00                 push 0
// 00757fb2  680f110000           push 0x110f
// 00757fb7  50                   push eax
// 00757fb8  ff1590ee8900         call dword ptr [0x89ee90]
// 00757fbe  50                   push eax
// 00757fbf  e83e0dfcff           call 0x718d02
// 00757fc4  8bf0                 mov esi, eax
// 00757fc6  85f6                 test esi, esi
// 00757fc8  746e                 je 0x758038
// 00757fca  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00757fcd  51                   push ecx
// 00757fce  ff15e0ed8900         call dword ptr [0x89ede0]
// 00757fd4  85c0                 test eax, eax
// 00757fd6  7460                 je 0x758038
// 00757fd8  8b4620               mov eax, dword ptr [esi + 0x20]
// 00757fdb  8d542418             lea edx, [esp + 0x18]
// 00757fdf  52                   push edx
// 00757fe0  50                   push eax
// 00757fe1  ff15f4ed8900         call dword ptr [0x89edf4]
// 00757fe7  8b5710               mov edx, dword ptr [edi + 0x10]
// 00757fea  6a01                 push 1
// 00757fec  8d4c240c             lea ecx, [esp + 0xc]
// 00757ff0  51                   push ecx
// 00757ff1  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 00757ff4  52                   push edx
// 00757ff5  e8d413fcff           call 0x7193ce
// 00757ffa  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00757ffe  8b542420             mov edx, dword ptr [esp + 0x20]
// 00758002  2b542418             sub edx, dword ptr [esp + 0x18]
// 00758006  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0075800a  83e903               sub ecx, 3
// 0075800d  03d1                 add edx, ecx
// 0075800f  894c2408             mov dword ptr [esp + 8], ecx
// 00758013  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00758017  2b4c241c             sub ecx, dword ptr [esp + 0x1c]
// 0075801b  48                   dec eax
// 0075801c  03c8                 add ecx, eax
// 0075801e  89542410             mov dword ptr [esp + 0x10], edx
// 00758022  6a01                 push 1
// 00758024  8d54240c             lea edx, [esp + 0xc]
// 00758028  894c2418             mov dword ptr [esp + 0x18], ecx
// 0075802c  52                   push edx
// 0075802d  8bce                 mov ecx, esi
// 0075802f  89442414             mov dword ptr [esp + 0x14], eax
// 00758033  e818a8d0ff           call 0x462850
// 00758038  5e                   pop esi
// 00758039  5f                   pop edi
// 0075803a  83c420               add esp, 0x20
// 0075803d  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnSize@CXTTreeBase@@IAEXIHH@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTTreeBase.cpp