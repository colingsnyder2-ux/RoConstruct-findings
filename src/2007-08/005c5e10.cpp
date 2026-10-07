// roc 2007-08 005c5e10  unit: lua_exception  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c5e10
//
// 005c5e10  8b4614               mov eax, dword ptr [esi + 0x14]
// 005c5e13  53                   push ebx
// 005c5e14  57                   push edi
// 005c5e15  8b38                 mov edi, dword ptr [eax]
// 005c5e17  8bc2                 mov eax, edx
// 005c5e19  897e08               mov dword ptr [esi + 8], edi
// 005c5e1c  8d5801               lea ebx, [eax + 1]
// 005c5e1f  90                   nop 
// 005c5e20  8a08                 mov cl, byte ptr [eax]
// 005c5e22  83c001               add eax, 1
// 005c5e25  84c9                 test cl, cl
// 005c5e27  75f7                 jne 0x5c5e20
// 005c5e29  2bc3                 sub eax, ebx
// 005c5e2b  50                   push eax
// 005c5e2c  52                   push edx
// 005c5e2d  56                   push esi
// 005c5e2e  e83dcf0400           call 0x612d70
// 005c5e33  8907                 mov dword ptr [edi], eax
// 005c5e35  c7470804000000       mov dword ptr [edi + 8], 4
// 005c5e3c  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 005c5e3f  2b4e08               sub ecx, dword ptr [esi + 8]
// 005c5e42  bf10000000           mov edi, 0x10
// 005c5e47  83c40c               add esp, 0xc
// 005c5e4a  3bcf                 cmp ecx, edi
// 005c5e4c  7f2d                 jg 0x5c5e7b
// 005c5e4e  8b462c               mov eax, dword ptr [esi + 0x2c]
// 005c5e51  83f801               cmp eax, 1
// 005c5e54  7c18                 jl 0x5c5e6e
// 005c5e56  8d1400               lea edx, [eax + eax]
// 005c5e59  52                   push edx
// 005c5e5a  56                   push esi
// 005c5e5b  e8d0fbffff           call 0x5c5a30
// 005c5e60  83c408               add esp, 8
// 005c5e63  017e08               add dword ptr [esi + 8], edi
// 005c5e66  5f                   pop edi
// 005c5e67  b802000000           mov eax, 2
// 005c5e6c  5b                   pop ebx
// 005c5e6d  c3                   ret 
// 005c5e6e  83c001               add eax, 1
// 005c5e71  50                   push eax
// 005c5e72  56                   push esi
// 005c5e73  e8b8fbffff           call 0x5c5a30
// 005c5e78  83c408               add esp, 8
// 005c5e7b  017e08               add dword ptr [esi + 8], edi
// 005c5e7e  5f                   pop edi
// 005c5e7f  b802000000           mov eax, 2
// 005c5e84  5b                   pop ebx
// 005c5e85  c3                   ret 
// library lua-5.1.4/ldo.c (function _resume_error)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldo.c
