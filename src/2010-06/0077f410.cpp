// roc 2010-06 0077f410  unit: seg_00770000  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0077f410
//
// 0077f410  56                   push esi
// 0077f411  e86a450000           call 0x783980
// 0077f416  6a00                 push 0
// 0077f418  57                   push edi
// 0077f419  56                   push esi
// 0077f41a  e8e10e0000           call 0x780300
// 0077f41f  8b4630               mov eax, dword ptr [esi + 0x30]
// 0077f422  57                   push edi
// 0077f423  50                   push eax
// 0077f424  e8170e0100           call 0x790240
// 0077f429  83c418               add esp, 0x18
// 0077f42c  837e105d             cmp dword ptr [esi + 0x10], 0x5d
// 0077f430  7421                 je 0x77f453
// 0077f432  6a5d                 push 0x5d
// 0077f434  56                   push esi
// 0077f435  e856300000           call 0x782490
// 0077f43a  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0077f43d  50                   push eax
// 0077f43e  683830a500           push 0xa53038
// 0077f443  51                   push ecx
// 0077f444  e89739fbff           call 0x732de0
// 0077f449  50                   push eax
// 0077f44a  56                   push esi
// 0077f44b  e840310000           call 0x782590
// 0077f450  83c41c               add esp, 0x1c
// 0077f453  56                   push esi
// 0077f454  e827450000           call 0x783980
// 0077f459  59                   pop ecx
// 0077f45a  c3                   ret 
// library lua-5.1.4/lparser.c (function _yindex)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
