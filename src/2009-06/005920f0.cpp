// roc 2009-06 005920f0  unit: seg_00590000  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005920f0
//
// 005920f0  56                   push esi
// 005920f1  8b742408             mov esi, dword ptr [esp + 8]
// 005920f5  85f6                 test esi, esi
// 005920f7  743a                 je 0x592133
// 005920f9  8b461c               mov eax, dword ptr [esi + 0x1c]
// 005920fc  85c0                 test eax, eax
// 005920fe  7433                 je 0x592133
// 00592100  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 00592103  85c9                 test ecx, ecx
// 00592105  742c                 je 0x592133
// 00592107  8b4034               mov eax, dword ptr [eax + 0x34]
// 0059210a  85c0                 test eax, eax
// 0059210c  740a                 je 0x592118
// 0059210e  50                   push eax
// 0059210f  8b4628               mov eax, dword ptr [esi + 0x28]
// 00592112  50                   push eax
// 00592113  ffd1                 call ecx
// 00592115  83c408               add esp, 8
// 00592118  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 0059211b  8b5628               mov edx, dword ptr [esi + 0x28]
// 0059211e  8b4624               mov eax, dword ptr [esi + 0x24]
// 00592121  51                   push ecx
// 00592122  52                   push edx
// 00592123  ffd0                 call eax
// 00592125  83c408               add esp, 8
// 00592128  c7461c00000000       mov dword ptr [esi + 0x1c], 0
// 0059212f  33c0                 xor eax, eax
// 00592131  5e                   pop esi
// 00592132  c3                   ret 
// 00592133  b8feffffff           mov eax, 0xfffffffe
// 00592138  5e                   pop esi
// 00592139  c3                   ret 
// library zlib-1.2.3/inflate.c (function _inflateEnd)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 inflate.c
