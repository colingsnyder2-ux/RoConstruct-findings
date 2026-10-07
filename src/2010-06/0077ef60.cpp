// roc 2010-06 0077ef60  unit: seg_00770000  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0077ef60
//
// 0077ef60  56                   push esi
// 0077ef61  8bf0                 mov esi, eax
// 0077ef63  817e101d010000       cmp dword ptr [esi + 0x10], 0x11d
// 0077ef6a  57                   push edi
// 0077ef6b  7424                 je 0x77ef91
// 0077ef6d  681d010000           push 0x11d
// 0077ef72  56                   push esi
// 0077ef73  e818350000           call 0x782490
// 0077ef78  50                   push eax
// 0077ef79  8b4634               mov eax, dword ptr [esi + 0x34]
// 0077ef7c  683830a500           push 0xa53038
// 0077ef81  50                   push eax
// 0077ef82  e8593efbff           call 0x732de0
// 0077ef87  50                   push eax
// 0077ef88  56                   push esi
// 0077ef89  e802360000           call 0x782590
// 0077ef8e  83c41c               add esp, 0x1c
// 0077ef91  8b7e18               mov edi, dword ptr [esi + 0x18]
// 0077ef94  56                   push esi
// 0077ef95  e8e6490000           call 0x783980
// 0077ef9a  8b7630               mov esi, dword ptr [esi + 0x30]
// 0077ef9d  6a01                 push 1
// 0077ef9f  53                   push ebx
// 0077efa0  57                   push edi
// 0077efa1  56                   push esi
// 0077efa2  e8d9feffff           call 0x77ee80
// 0077efa7  83c414               add esp, 0x14
// 0077efaa  83f808               cmp eax, 8
// 0077efad  750d                 jne 0x77efbc
// 0077efaf  57                   push edi
// 0077efb0  56                   push esi
// 0077efb1  e84a080100           call 0x78f800
// 0077efb6  83c408               add esp, 8
// 0077efb9  894308               mov dword ptr [ebx + 8], eax
// 0077efbc  5f                   pop edi
// 0077efbd  5e                   pop esi
// 0077efbe  c3                   ret 
// library lua-5.1.4/lparser.c (function _singlevar)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
