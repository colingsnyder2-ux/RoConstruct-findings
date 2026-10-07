// roc 2012-06 00939e30  unit: seg_00930000  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00939e30
//
// 00939e30  56                   push esi
// 00939e31  8b7130               mov esi, dword ptr [ecx + 0x30]
// 00939e34  8b5624               mov edx, dword ptr [esi + 0x24]
// 00939e37  33c9                 xor ecx, ecx
// 00939e39  85c0                 test eax, eax
// 00939e3b  7450                 je 0x939e8d
// 00939e3d  55                   push ebp
// 00939e3e  8bff                 mov edi, edi
// 00939e40  83780809             cmp dword ptr [eax + 8], 9
// 00939e44  7520                 jne 0x939e66
// 00939e46  8b6810               mov ebp, dword ptr [eax + 0x10]
// 00939e49  3b6f08               cmp ebp, dword ptr [edi + 8]
// 00939e4c  7508                 jne 0x939e56
// 00939e4e  b901000000           mov ecx, 1
// 00939e53  895010               mov dword ptr [eax + 0x10], edx
// 00939e56  8b6814               mov ebp, dword ptr [eax + 0x14]
// 00939e59  3b6f08               cmp ebp, dword ptr [edi + 8]
// 00939e5c  7508                 jne 0x939e66
// 00939e5e  b901000000           mov ecx, 1
// 00939e63  895014               mov dword ptr [eax + 0x14], edx
// 00939e66  8b00                 mov eax, dword ptr [eax]
// 00939e68  85c0                 test eax, eax
// 00939e6a  75d4                 jne 0x939e40
// 00939e6c  5d                   pop ebp
// 00939e6d  85c9                 test ecx, ecx
// 00939e6f  741c                 je 0x939e8d
// 00939e71  8b5708               mov edx, dword ptr [edi + 8]
// 00939e74  50                   push eax
// 00939e75  8b4624               mov eax, dword ptr [esi + 0x24]
// 00939e78  52                   push edx
// 00939e79  50                   push eax
// 00939e7a  6a00                 push 0
// 00939e7c  56                   push esi
// 00939e7d  e8ced80200           call 0x967750
// 00939e82  6a01                 push 1
// 00939e84  56                   push esi
// 00939e85  e8f6d30200           call 0x967280
// 00939e8a  83c41c               add esp, 0x1c
// 00939e8d  5e                   pop esi
// 00939e8e  c3                   ret 
// library lua-5.1.4/lparser.c (function _check_conflict)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
