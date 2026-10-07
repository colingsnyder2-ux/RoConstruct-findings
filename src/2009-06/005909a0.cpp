// roc 2009-06 005909a0  unit: seg_00590000  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005909a0
//
// 005909a0  8b542404             mov edx, dword ptr [esp + 4]
// 005909a4  33c9                 xor ecx, ecx
// 005909a6  3bd1                 cmp edx, ecx
// 005909a8  744d                 je 0x5909f7
// 005909aa  8b421c               mov eax, dword ptr [edx + 0x1c]
// 005909ad  3bc1                 cmp eax, ecx
// 005909af  7446                 je 0x5909f7
// 005909b1  89481c               mov dword ptr [eax + 0x1c], ecx
// 005909b4  894a14               mov dword ptr [edx + 0x14], ecx
// 005909b7  894a08               mov dword ptr [edx + 8], ecx
// 005909ba  894a18               mov dword ptr [edx + 0x18], ecx
// 005909bd  c7423001000000       mov dword ptr [edx + 0x30], 1
// 005909c4  8908                 mov dword ptr [eax], ecx
// 005909c6  894804               mov dword ptr [eax + 4], ecx
// 005909c9  89480c               mov dword ptr [eax + 0xc], ecx
// 005909cc  894820               mov dword ptr [eax + 0x20], ecx
// 005909cf  894828               mov dword ptr [eax + 0x28], ecx
// 005909d2  89482c               mov dword ptr [eax + 0x2c], ecx
// 005909d5  894830               mov dword ptr [eax + 0x30], ecx
// 005909d8  894838               mov dword ptr [eax + 0x38], ecx
// 005909db  89483c               mov dword ptr [eax + 0x3c], ecx
// 005909de  8d8830050000         lea ecx, [eax + 0x530]
// 005909e4  c7401400800000       mov dword ptr [eax + 0x14], 0x8000
// 005909eb  89486c               mov dword ptr [eax + 0x6c], ecx
// 005909ee  894850               mov dword ptr [eax + 0x50], ecx
// 005909f1  89484c               mov dword ptr [eax + 0x4c], ecx
// 005909f4  33c0                 xor eax, eax
// 005909f6  c3                   ret 
// 005909f7  b8feffffff           mov eax, 0xfffffffe
// 005909fc  c3                   ret 
// library zlib-1.2.3/inflate.c (function _inflateReset)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 inflate.c
