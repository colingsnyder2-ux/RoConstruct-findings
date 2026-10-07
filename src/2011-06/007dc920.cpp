// roc 2011-06 007dc920  unit: seg_007d0000  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007dc920
//
// 007dc920  56                   push esi
// 007dc921  8b7130               mov esi, dword ptr [ecx + 0x30]
// 007dc924  8b5624               mov edx, dword ptr [esi + 0x24]
// 007dc927  33c9                 xor ecx, ecx
// 007dc929  85c0                 test eax, eax
// 007dc92b  7450                 je 0x7dc97d
// 007dc92d  55                   push ebp
// 007dc92e  8bff                 mov edi, edi
// 007dc930  83780809             cmp dword ptr [eax + 8], 9
// 007dc934  7520                 jne 0x7dc956
// 007dc936  8b6810               mov ebp, dword ptr [eax + 0x10]
// 007dc939  3b6f08               cmp ebp, dword ptr [edi + 8]
// 007dc93c  7508                 jne 0x7dc946
// 007dc93e  b901000000           mov ecx, 1
// 007dc943  895010               mov dword ptr [eax + 0x10], edx
// 007dc946  8b6814               mov ebp, dword ptr [eax + 0x14]
// 007dc949  3b6f08               cmp ebp, dword ptr [edi + 8]
// 007dc94c  7508                 jne 0x7dc956
// 007dc94e  b901000000           mov ecx, 1
// 007dc953  895014               mov dword ptr [eax + 0x14], edx
// 007dc956  8b00                 mov eax, dword ptr [eax]
// 007dc958  85c0                 test eax, eax
// 007dc95a  75d4                 jne 0x7dc930
// 007dc95c  5d                   pop ebp
// 007dc95d  85c9                 test ecx, ecx
// 007dc95f  741c                 je 0x7dc97d
// 007dc961  8b5708               mov edx, dword ptr [edi + 8]
// 007dc964  50                   push eax
// 007dc965  8b4624               mov eax, dword ptr [esi + 0x24]
// 007dc968  52                   push edx
// 007dc969  50                   push eax
// 007dc96a  6a00                 push 0
// 007dc96c  56                   push esi
// 007dc96d  e83e5e0100           call 0x7f27b0
// 007dc972  6a01                 push 1
// 007dc974  56                   push esi
// 007dc975  e866590100           call 0x7f22e0
// 007dc97a  83c41c               add esp, 0x1c
// 007dc97d  5e                   pop esi
// 007dc97e  c3                   ret 
// library lua-5.1.4/lparser.c (function _check_conflict)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
