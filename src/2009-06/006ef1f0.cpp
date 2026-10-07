// roc 2009-06 006ef1f0  unit: seg_006e0000  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006ef1f0
//
// 006ef1f0  56                   push esi
// 006ef1f1  8b7130               mov esi, dword ptr [ecx + 0x30]
// 006ef1f4  8b5624               mov edx, dword ptr [esi + 0x24]
// 006ef1f7  33c9                 xor ecx, ecx
// 006ef1f9  85c0                 test eax, eax
// 006ef1fb  7450                 je 0x6ef24d
// 006ef1fd  55                   push ebp
// 006ef1fe  8bff                 mov edi, edi
// 006ef200  83780809             cmp dword ptr [eax + 8], 9
// 006ef204  7520                 jne 0x6ef226
// 006ef206  8b6810               mov ebp, dword ptr [eax + 0x10]
// 006ef209  3b6f08               cmp ebp, dword ptr [edi + 8]
// 006ef20c  7508                 jne 0x6ef216
// 006ef20e  b901000000           mov ecx, 1
// 006ef213  895010               mov dword ptr [eax + 0x10], edx
// 006ef216  8b6814               mov ebp, dword ptr [eax + 0x14]
// 006ef219  3b6f08               cmp ebp, dword ptr [edi + 8]
// 006ef21c  7508                 jne 0x6ef226
// 006ef21e  b901000000           mov ecx, 1
// 006ef223  895014               mov dword ptr [eax + 0x14], edx
// 006ef226  8b00                 mov eax, dword ptr [eax]
// 006ef228  85c0                 test eax, eax
// 006ef22a  75d4                 jne 0x6ef200
// 006ef22c  5d                   pop ebp
// 006ef22d  85c9                 test ecx, ecx
// 006ef22f  741c                 je 0x6ef24d
// 006ef231  8b5708               mov edx, dword ptr [edi + 8]
// 006ef234  50                   push eax
// 006ef235  8b4624               mov eax, dword ptr [esi + 0x24]
// 006ef238  52                   push edx
// 006ef239  50                   push eax
// 006ef23a  6a00                 push 0
// 006ef23c  56                   push esi
// 006ef23d  e88eaf0000           call 0x6fa1d0
// 006ef242  6a01                 push 1
// 006ef244  56                   push esi
// 006ef245  e8f6aa0000           call 0x6f9d40
// 006ef24a  83c41c               add esp, 0x1c
// 006ef24d  5e                   pop esi
// 006ef24e  c3                   ret 
// library lua-5.1.4/lparser.c (function _check_conflict)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
