// from server: 100% by auto
// roc 2010-06 00780490  unit: seg_00780000  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00780490
//
// 00780490  56                   push esi
// 00780491  8b7130               mov esi, dword ptr [ecx + 0x30]
// 00780494  8b5624               mov edx, dword ptr [esi + 0x24]
// 00780497  33c9                 xor ecx, ecx
// 00780499  85c0                 test eax, eax
// 0078049b  7450                 je 0x7804ed
// 0078049d  55                   push ebp
// 0078049e  8bff                 mov edi, edi
// 007804a0  83780809             cmp dword ptr [eax + 8], 9
// 007804a4  7520                 jne 0x7804c6
// 007804a6  8b6810               mov ebp, dword ptr [eax + 0x10]
// 007804a9  3b6f08               cmp ebp, dword ptr [edi + 8]
// 007804ac  7508                 jne 0x7804b6
// 007804ae  b901000000           mov ecx, 1
// 007804b3  895010               mov dword ptr [eax + 0x10], edx
// 007804b6  8b6814               mov ebp, dword ptr [eax + 0x14]
// 007804b9  3b6f08               cmp ebp, dword ptr [edi + 8]
// 007804bc  7508                 jne 0x7804c6
// 007804be  b901000000           mov ecx, 1
// 007804c3  895014               mov dword ptr [eax + 0x14], edx
// 007804c6  8b00                 mov eax, dword ptr [eax]
// 007804c8  85c0                 test eax, eax
// 007804ca  75d4                 jne 0x7804a0
// 007804cc  5d                   pop ebp
// 007804cd  85c9                 test ecx, ecx
// 007804cf  741c                 je 0x7804ed
// 007804d1  8b5708               mov edx, dword ptr [edi + 8]
// 007804d4  50                   push eax
// 007804d5  8b4624               mov eax, dword ptr [esi + 0x24]
// 007804d8  52                   push edx
// 007804d9  50                   push eax
// 007804da  6a00                 push 0
// 007804dc  56                   push esi
// 007804dd  e87ef60000           call 0x78fb60
// 007804e2  6a01                 push 1
// 007804e4  56                   push esi
// 007804e5  e8d6f10000           call 0x78f6c0
// 007804ea  83c41c               add esp, 0x1c
// 007804ed  5e                   pop esi
// 007804ee  c3                   ret 
// library lua-5.1.4/lparser.c (function _check_conflict)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
