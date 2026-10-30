// from server: 100% by auto
// roc 2008-06 00621e40  unit: lua_exception  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00621e40
//
// 00621e40  8b4614               mov eax, dword ptr [esi + 0x14]
// 00621e43  53                   push ebx
// 00621e44  57                   push edi
// 00621e45  8b38                 mov edi, dword ptr [eax]
// 00621e47  8bc2                 mov eax, edx
// 00621e49  897e08               mov dword ptr [esi + 8], edi
// 00621e4c  8d5801               lea ebx, [eax + 1]
// 00621e4f  90                   nop 
// 00621e50  8a08                 mov cl, byte ptr [eax]
// 00621e52  40                   inc eax
// 00621e53  84c9                 test cl, cl
// 00621e55  75f9                 jne 0x621e50
// 00621e57  2bc3                 sub eax, ebx
// 00621e59  50                   push eax
// 00621e5a  52                   push edx
// 00621e5b  56                   push esi
// 00621e5c  e89fd40300           call 0x65f300
// 00621e61  8907                 mov dword ptr [edi], eax
// 00621e63  c7470804000000       mov dword ptr [edi + 8], 4
// 00621e6a  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 00621e6d  2b4e08               sub ecx, dword ptr [esi + 8]
// 00621e70  bf10000000           mov edi, 0x10
// 00621e75  83c40c               add esp, 0xc
// 00621e78  3bcf                 cmp ecx, edi
// 00621e7a  7f2b                 jg 0x621ea7
// 00621e7c  8b462c               mov eax, dword ptr [esi + 0x2c]
// 00621e7f  83f801               cmp eax, 1
// 00621e82  7c18                 jl 0x621e9c
// 00621e84  8d1400               lea edx, [eax + eax]
// 00621e87  52                   push edx
// 00621e88  56                   push esi
// 00621e89  e8e2fbffff           call 0x621a70
// 00621e8e  83c408               add esp, 8
// 00621e91  017e08               add dword ptr [esi + 8], edi
// 00621e94  5f                   pop edi
// 00621e95  b802000000           mov eax, 2
// 00621e9a  5b                   pop ebx
// 00621e9b  c3                   ret 
// 00621e9c  40                   inc eax
// 00621e9d  50                   push eax
// 00621e9e  56                   push esi
// 00621e9f  e8ccfbffff           call 0x621a70
// 00621ea4  83c408               add esp, 8
// 00621ea7  017e08               add dword ptr [esi + 8], edi
// 00621eaa  5f                   pop edi
// 00621eab  b802000000           mov eax, 2
// 00621eb0  5b                   pop ebx
// 00621eb1  c3                   ret 
// library lua-5.1.4/ldo.c (function _resume_error)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldo.c
