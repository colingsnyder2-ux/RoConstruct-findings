// from server: 100% by auto
// roc 2008-06 0051db50  unit: seg_00510000  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0051db50
//
// 0051db50  8b442408             mov eax, dword ptr [esp + 8]
// 0051db54  56                   push esi
// 0051db55  8b742408             mov esi, dword ptr [esp + 8]
// 0051db59  894654               mov dword ptr [esi + 0x54], eax
// 0051db5c  8b442410             mov eax, dword ptr [esp + 0x10]
// 0051db60  85c0                 test eax, eax
// 0051db62  7405                 je 0x51db69
// 0051db64  89464c               mov dword ptr [esi + 0x4c], eax
// 0051db67  eb07                 jmp 0x51db70
// 0051db69  c7464cd0da5100       mov dword ptr [esi + 0x4c], 0x51dad0
// 0051db70  8b442414             mov eax, dword ptr [esp + 0x14]
// 0051db74  85c0                 test eax, eax
// 0051db76  7408                 je 0x51db80
// 0051db78  89864c010000         mov dword ptr [esi + 0x14c], eax
// 0051db7e  eb0a                 jmp 0x51db8a
// 0051db80  c7864c01000030db5100 mov dword ptr [esi + 0x14c], 0x51db30
// 0051db8a  837e5000             cmp dword ptr [esi + 0x50], 0
// 0051db8e  7420                 je 0x51dbb0
// 0051db90  68f0938200           push 0x8293f0
// 0051db95  56                   push esi
// 0051db96  c7465000000000       mov dword ptr [esi + 0x50], 0
// 0051db9d  e8aebe0000           call 0x529a50
// 0051dba2  68b8938200           push 0x8293b8
// 0051dba7  56                   push esi
// 0051dba8  e8a3be0000           call 0x529a50
// 0051dbad  83c410               add esp, 0x10
// 0051dbb0  5e                   pop esi
// 0051dbb1  c3                   ret 
// library libpng-1.2.5/pngwio.c (function _png_set_write_fn)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngwio.c
