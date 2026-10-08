// roc 2009-12 00614100  unit: seg_00610000  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00614100
//
// 00614100  56                   push esi
// 00614101  8b742408             mov esi, dword ptr [esp + 8]
// 00614105  85f6                 test esi, esi
// 00614107  743a                 je 0x614143
// 00614109  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0061410c  85c0                 test eax, eax
// 0061410e  7433                 je 0x614143
// 00614110  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 00614113  85c9                 test ecx, ecx
// 00614115  742c                 je 0x614143
// 00614117  8b4034               mov eax, dword ptr [eax + 0x34]
// 0061411a  85c0                 test eax, eax
// 0061411c  740a                 je 0x614128
// 0061411e  50                   push eax
// 0061411f  8b4628               mov eax, dword ptr [esi + 0x28]
// 00614122  50                   push eax
// 00614123  ffd1                 call ecx
// 00614125  83c408               add esp, 8
// 00614128  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 0061412b  8b5628               mov edx, dword ptr [esi + 0x28]
// 0061412e  8b4624               mov eax, dword ptr [esi + 0x24]
// 00614131  51                   push ecx
// 00614132  52                   push edx
// 00614133  ffd0                 call eax
// 00614135  83c408               add esp, 8
// 00614138  c7461c00000000       mov dword ptr [esi + 0x1c], 0
// 0061413f  33c0                 xor eax, eax
// 00614141  5e                   pop esi
// 00614142  c3                   ret 
// 00614143  b8feffffff           mov eax, 0xfffffffe
// 00614148  5e                   pop esi
// 00614149  c3                   ret 
// library zlib-1.2.3/inflate.c (function _inflateEnd)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 inflate.c
