// roc 2007-08 006129b0  unit: seg_00610000  size: 285 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006129b0
//
// 006129b0  83ec7c               sub esp, 0x7c
// 006129b3  53                   push ebx
// 006129b4  8bd8                 mov ebx, eax
// 006129b6  33c0                 xor eax, eax
// 006129b8  89442414             mov dword ptr [esp + 0x14], eax
// 006129bc  89442418             mov dword ptr [esp + 0x18], eax
// 006129c0  8944241c             mov dword ptr [esp + 0x1c], eax
// 006129c4  89442420             mov dword ptr [esp + 0x20], eax
// 006129c8  89442424             mov dword ptr [esp + 0x24], eax
// 006129cc  89442428             mov dword ptr [esp + 0x28], eax
// 006129d0  8944242c             mov dword ptr [esp + 0x2c], eax
// 006129d4  89442430             mov dword ptr [esp + 0x30], eax
// 006129d8  89442434             mov dword ptr [esp + 0x34], eax
// 006129dc  89442438             mov dword ptr [esp + 0x38], eax
// 006129e0  8944243c             mov dword ptr [esp + 0x3c], eax
// 006129e4  89442440             mov dword ptr [esp + 0x40], eax
// 006129e8  89442444             mov dword ptr [esp + 0x44], eax
// 006129ec  89442448             mov dword ptr [esp + 0x48], eax
// 006129f0  8944244c             mov dword ptr [esp + 0x4c], eax
// 006129f4  89442450             mov dword ptr [esp + 0x50], eax
// 006129f8  89442454             mov dword ptr [esp + 0x54], eax
// 006129fc  89442458             mov dword ptr [esp + 0x58], eax
// 00612a00  8944245c             mov dword ptr [esp + 0x5c], eax
// 00612a04  89442460             mov dword ptr [esp + 0x60], eax
// 00612a08  89442464             mov dword ptr [esp + 0x64], eax
// 00612a0c  89442468             mov dword ptr [esp + 0x68], eax
// 00612a10  8944246c             mov dword ptr [esp + 0x6c], eax
// 00612a14  89442470             mov dword ptr [esp + 0x70], eax
// 00612a18  89442474             mov dword ptr [esp + 0x74], eax
// 00612a1c  89442478             mov dword ptr [esp + 0x78], eax
// 00612a20  8944247c             mov dword ptr [esp + 0x7c], eax
// 00612a24  56                   push esi
// 00612a25  8d442418             lea eax, [esp + 0x18]
// 00612a29  50                   push eax
// 00612a2a  53                   push ebx
// 00612a2b  e8e0f6ffff           call 0x612110
// 00612a30  8d4c2410             lea ecx, [esp + 0x10]
// 00612a34  51                   push ecx
// 00612a35  8d542424             lea edx, [esp + 0x24]
// 00612a39  52                   push edx
// 00612a3a  89442418             mov dword ptr [esp + 0x18], eax
// 00612a3e  8bf0                 mov esi, eax
// 00612a40  e84bf7ffff           call 0x612190
// 00612a45  83c410               add esp, 0x10
// 00612a48  03f0                 add esi, eax
// 00612a4a  837f0803             cmp dword ptr [edi + 8], 3
// 00612a4e  7546                 jne 0x612a96
// 00612a50  dd07                 fld qword ptr [edi]
// 00612a52  dd5c2410             fstp qword ptr [esp + 0x10]
// 00612a56  dd442410             fld qword ptr [esp + 0x10]
// 00612a5a  db5c240c             fistp dword ptr [esp + 0xc]
// 00612a5e  db44240c             fild dword ptr [esp + 0xc]
// 00612a62  dc5c2410             fcomp qword ptr [esp + 0x10]
// 00612a66  dfe0                 fnstsw ax
// 00612a68  f6c444               test ah, 0x44
// 00612a6b  7a29                 jp 0x612a96
// 00612a6d  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00612a71  85c0                 test eax, eax
// 00612a73  7e21                 jle 0x612a96
// 00612a75  3d00000004           cmp eax, 0x4000000
// 00612a7a  7f1a                 jg 0x612a96
// 00612a7c  83c0ff               add eax, -1
// 00612a7f  50                   push eax
// 00612a80  e8cbbfffff           call 0x60ea50
// 00612a85  8d448420             lea eax, [esp + eax*4 + 0x20]
// 00612a89  83c404               add esp, 4
// 00612a8c  830001               add dword ptr [eax], 1
// 00612a8f  b801000000           mov eax, 1
// 00612a94  eb02                 jmp 0x612a98
// 00612a96  33c0                 xor eax, eax
// 00612a98  01442408             add dword ptr [esp + 8], eax
// 00612a9c  8d442408             lea eax, [esp + 8]
// 00612aa0  50                   push eax
// 00612aa1  8d44241c             lea eax, [esp + 0x1c]
// 00612aa5  e806f6ffff           call 0x6120b0
// 00612aaa  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00612aae  8b94248c000000       mov edx, dword ptr [esp + 0x8c]
// 00612ab5  2bf0                 sub esi, eax
// 00612ab7  83c601               add esi, 1
// 00612aba  56                   push esi
// 00612abb  51                   push ecx
// 00612abc  52                   push edx
// 00612abd  8bc3                 mov eax, ebx
// 00612abf  e8bcfcffff           call 0x612780
// 00612ac4  83c410               add esp, 0x10
// 00612ac7  5e                   pop esi
// 00612ac8  5b                   pop ebx
// 00612ac9  83c47c               add esp, 0x7c
// 00612acc  c3                   ret 
// library lua-5.1.4/ltable.c (function _rehash)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ltable.c
