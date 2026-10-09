// roc 2008-06 00647600  unit: RBX::GlueJoint  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00647600
//
// 00647600  53                   push ebx
// 00647601  56                   push esi
// 00647602  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00647606  57                   push edi
// 00647607  85f6                 test esi, esi
// 00647609  7429                 je 0x647634
// 0064760b  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0064760f  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00647613  53                   push ebx
// 00647614  57                   push edi
// 00647615  56                   push esi
// 00647616  e885ffffff           call 0x6475a0
// 0064761b  83c40c               add esp, 0xc
// 0064761e  85c0                 test eax, eax
// 00647620  7514                 jne 0x647636
// 00647622  53                   push ebx
// 00647623  56                   push esi
// 00647624  8bfe                 mov edi, esi
// 00647626  e8b5feffff           call 0x6474e0
// 0064762b  8bf0                 mov esi, eax
// 0064762d  83c408               add esp, 8
// 00647630  85f6                 test esi, esi
// 00647632  75df                 jne 0x647613
// 00647634  33c0                 xor eax, eax
// 00647636  5f                   pop edi
// 00647637  5e                   pop esi
// 00647638  5b                   pop ebx
// 00647639  c3                   ret 
// library openrbx-client/App\v8world\Clump2.cpp (function ?findNextRelative@PrimIterator@RBX@@CAPAVPrimitive@2@PAV32@0W4SearchType@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/Clump2.cpp
