// roc 2011-06 008f2860  unit: CXTColorSelectorCtrl  size: 144 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f2860
//
// 008f2860  83ec20               sub esp, 0x20
// 008f2863  56                   push esi
// 008f2864  8bf1                 mov esi, ecx
// 008f2866  e805fbffff           call 0x8f2370
// 008f286b  3c07                 cmp al, 7
// 008f286d  747a                 je 0x8f28e9
// 008f286f  8bce                 mov ecx, esi
// 008f2871  e8b87df1ff           call 0x80a62e
// 008f2876  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008f2879  8d442414             lea eax, [esp + 0x14]
// 008f287d  50                   push eax
// 008f287e  51                   push ecx
// 008f287f  ff157c1ca400         call dword ptr [0xa41c7c]
// 008f2885  8b542430             mov edx, dword ptr [esp + 0x30]
// 008f2889  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008f288d  52                   push edx
// 008f288e  50                   push eax
// 008f288f  8d4c241c             lea ecx, [esp + 0x1c]
// 008f2893  51                   push ecx
// 008f2894  ff15101ca400         call dword ptr [0xa41c10]
// 008f289a  3b86a0000000         cmp eax, dword ptr [esi + 0xa0]
// 008f28a0  7447                 je 0x8f28e9
// 008f28a2  8b5620               mov edx, dword ptr [esi + 0x20]
// 008f28a5  6a00                 push 0
// 008f28a7  6a00                 push 0
// 008f28a9  52                   push edx
// 008f28aa  8986a0000000         mov dword ptr [esi + 0xa0], eax
// 008f28b0  ff15ec19a400         call dword ptr [0xa419ec]
// 008f28b6  83bea000000000       cmp dword ptr [esi + 0xa0], 0
// 008f28bd  742a                 je 0x8f28e9
// 008f28bf  8b4620               mov eax, dword ptr [esi + 0x20]
// 008f28c2  8d4c2404             lea ecx, [esp + 4]
// 008f28c6  51                   push ecx
// 008f28c7  c744240810000000     mov dword ptr [esp + 8], 0x10
// 008f28cf  c744240c02000000     mov dword ptr [esp + 0xc], 2
// 008f28d7  89442410             mov dword ptr [esp + 0x10], eax
// 008f28db  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 008f28e3  ff156000a400         call dword ptr [0xa40060]
// 008f28e9  5e                   pop esi
// 008f28ea  83c420               add esp, 0x20
// 008f28ed  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnMouseMove@CXTButton@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTButton.cpp