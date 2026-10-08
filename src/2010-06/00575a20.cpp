// from server: 100% by auto
// roc 2010-06 00575a20  unit: seg_00570000  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00575a20
//
// 00575a20  56                   push esi
// 00575a21  8b742408             mov esi, dword ptr [esp + 8]
// 00575a25  85f6                 test esi, esi
// 00575a27  743a                 je 0x575a63
// 00575a29  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00575a2c  85c0                 test eax, eax
// 00575a2e  7433                 je 0x575a63
// 00575a30  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 00575a33  85c9                 test ecx, ecx
// 00575a35  742c                 je 0x575a63
// 00575a37  8b4034               mov eax, dword ptr [eax + 0x34]
// 00575a3a  85c0                 test eax, eax
// 00575a3c  740a                 je 0x575a48
// 00575a3e  50                   push eax
// 00575a3f  8b4628               mov eax, dword ptr [esi + 0x28]
// 00575a42  50                   push eax
// 00575a43  ffd1                 call ecx
// 00575a45  83c408               add esp, 8
// 00575a48  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 00575a4b  8b5628               mov edx, dword ptr [esi + 0x28]
// 00575a4e  8b4624               mov eax, dword ptr [esi + 0x24]
// 00575a51  51                   push ecx
// 00575a52  52                   push edx
// 00575a53  ffd0                 call eax
// 00575a55  83c408               add esp, 8
// 00575a58  c7461c00000000       mov dword ptr [esi + 0x1c], 0
// 00575a5f  33c0                 xor eax, eax
// 00575a61  5e                   pop esi
// 00575a62  c3                   ret 
// 00575a63  b8feffffff           mov eax, 0xfffffffe
// 00575a68  5e                   pop esi
// 00575a69  c3                   ret 
// library zlib-1.2.3/inflate.c (function _inflateEnd)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 inflate.c
