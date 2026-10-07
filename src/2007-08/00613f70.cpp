// roc 2007-08 00613f70  unit: seg_00610000  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00613f70
//
// 00613f70  56                   push esi
// 00613f71  8bf0                 mov esi, eax
// 00613f73  817e101d010000       cmp dword ptr [esi + 0x10], 0x11d
// 00613f7a  57                   push edi
// 00613f7b  7424                 je 0x613fa1
// 00613f7d  681d010000           push 0x11d
// 00613f82  56                   push esi
// 00613f83  e838350000           call 0x6174c0
// 00613f88  50                   push eax
// 00613f89  8b4634               mov eax, dword ptr [esi + 0x34]
// 00613f8c  6870337c00           push 0x7c3370
// 00613f91  50                   push eax
// 00613f92  e8f9aeffff           call 0x60ee90
// 00613f97  50                   push eax
// 00613f98  56                   push esi
// 00613f99  e822360000           call 0x6175c0
// 00613f9e  83c41c               add esp, 0x1c
// 00613fa1  8b7e18               mov edi, dword ptr [esi + 0x18]
// 00613fa4  56                   push esi
// 00613fa5  e8464a0000           call 0x6189f0
// 00613faa  8b7630               mov esi, dword ptr [esi + 0x30]
// 00613fad  6a01                 push 1
// 00613faf  53                   push ebx
// 00613fb0  57                   push edi
// 00613fb1  56                   push esi
// 00613fb2  e8d9feffff           call 0x613e90
// 00613fb7  83c414               add esp, 0x14
// 00613fba  83f808               cmp eax, 8
// 00613fbd  750d                 jne 0x613fcc
// 00613fbf  57                   push edi
// 00613fc0  56                   push esi
// 00613fc1  e82a4a0100           call 0x6289f0
// 00613fc6  83c408               add esp, 8
// 00613fc9  894308               mov dword ptr [ebx + 8], eax
// 00613fcc  5f                   pop edi
// 00613fcd  5e                   pop esi
// 00613fce  c3                   ret 
// library lua-5.1.4/lparser.c (function _singlevar)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
