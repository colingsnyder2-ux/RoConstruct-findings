// from server: 100% by auto
// roc 2010-06 005742e0  unit: seg_00570000  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005742e0
//
// 005742e0  8b542404             mov edx, dword ptr [esp + 4]
// 005742e4  33c9                 xor ecx, ecx
// 005742e6  3bd1                 cmp edx, ecx
// 005742e8  744d                 je 0x574337
// 005742ea  8b421c               mov eax, dword ptr [edx + 0x1c]
// 005742ed  3bc1                 cmp eax, ecx
// 005742ef  7446                 je 0x574337
// 005742f1  89481c               mov dword ptr [eax + 0x1c], ecx
// 005742f4  894a14               mov dword ptr [edx + 0x14], ecx
// 005742f7  894a08               mov dword ptr [edx + 8], ecx
// 005742fa  894a18               mov dword ptr [edx + 0x18], ecx
// 005742fd  c7423001000000       mov dword ptr [edx + 0x30], 1
// 00574304  8908                 mov dword ptr [eax], ecx
// 00574306  894804               mov dword ptr [eax + 4], ecx
// 00574309  89480c               mov dword ptr [eax + 0xc], ecx
// 0057430c  894820               mov dword ptr [eax + 0x20], ecx
// 0057430f  894828               mov dword ptr [eax + 0x28], ecx
// 00574312  89482c               mov dword ptr [eax + 0x2c], ecx
// 00574315  894830               mov dword ptr [eax + 0x30], ecx
// 00574318  894838               mov dword ptr [eax + 0x38], ecx
// 0057431b  89483c               mov dword ptr [eax + 0x3c], ecx
// 0057431e  8d8830050000         lea ecx, [eax + 0x530]
// 00574324  c7401400800000       mov dword ptr [eax + 0x14], 0x8000
// 0057432b  89486c               mov dword ptr [eax + 0x6c], ecx
// 0057432e  894850               mov dword ptr [eax + 0x50], ecx
// 00574331  89484c               mov dword ptr [eax + 0x4c], ecx
// 00574334  33c0                 xor eax, eax
// 00574336  c3                   ret 
// 00574337  b8feffffff           mov eax, 0xfffffffe
// 0057433c  c3                   ret 
// library zlib-1.2.3/inflate.c (function _inflateReset)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 inflate.c
