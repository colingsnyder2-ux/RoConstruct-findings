// roc 2008-06 0050edb0  unit: seg_00500000  size: 235 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0050edb0
//
// 0050edb0  6aff                 push -1
// 0050edb2  6867c27c00           push 0x7cc267
// 0050edb7  64a100000000         mov eax, dword ptr fs:[0]
// 0050edbd  50                   push eax
// 0050edbe  64892500000000       mov dword ptr fs:[0], esp
// 0050edc5  81ecd8000000         sub esp, 0xd8
// 0050edcb  56                   push esi
// 0050edcc  8bb424ec000000       mov esi, dword ptr [esp + 0xec]
// 0050edd3  6a00                 push 0
// 0050edd5  6a01                 push 1
// 0050edd7  56                   push esi
// 0050edd8  8d4c243c             lea ecx, [esp + 0x3c]
// 0050eddc  e81f6c0000           call 0x515a00
// 0050ede1  8b442468             mov eax, dword ptr [esp + 0x68]
// 0050ede5  c78424e400000000000000 mov dword ptr [esp + 0xe4], 0
// 0050edf0  85c0                 test eax, eax
// 0050edf2  7f3b                 jg 0x50ee2f
// 0050edf4  683c828200           push 0x82823c
// 0050edf9  8d4c2418             lea ecx, [esp + 0x18]
// 0050edfd  ff1558248000         call dword ptr [0x802458]
// 0050ee03  56                   push esi
// 0050ee04  8d442418             lea eax, [esp + 0x18]
// 0050ee08  50                   push eax
// 0050ee09  8d8c2484000000       lea ecx, [esp + 0x84]
// 0050ee10  c68424ec00000001     mov byte ptr [esp + 0xec], 1
// 0050ee18  e8933af6ff           call 0x4728b0
// 0050ee1d  6878c48d00           push 0x8dc478
// 0050ee22  8d8c2480000000       lea ecx, [esp + 0x80]
// 0050ee29  51                   push ecx
// 0050ee2a  e85d271900           call 0x6a158c
// 0050ee2f  837c246400           cmp dword ptr [esp + 0x64], 0
// 0050ee34  7626                 jbe 0x50ee5c
// 0050ee36  8d542404             lea edx, [esp + 4]
// 0050ee3a  52                   push edx
// 0050ee3b  8d4c240c             lea ecx, [esp + 0xc]
// 0050ee3f  c7442408680c8200     mov dword ptr [esp + 8], 0x820c68
// 0050ee47  ff15a4288000         call dword ptr [0x8028a4]
// 0050ee4d  687c998d00           push 0x8d997c
// 0050ee52  8d44240c             lea eax, [esp + 0xc]
// 0050ee56  50                   push eax
// 0050ee57  e830271900           call 0x6a158c
// 0050ee5c  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 0050ee60  6a08                 push 8
// 0050ee62  50                   push eax
// 0050ee63  51                   push ecx
// 0050ee64  56                   push esi
// 0050ee65  e856efffff           call 0x50ddc0
// 0050ee6a  83c410               add esp, 0x10
// 0050ee6d  8d4c2430             lea ecx, [esp + 0x30]
// 0050ee71  8bf0                 mov esi, eax
// 0050ee73  c78424e4000000ffffffff mov dword ptr [esp + 0xe4], 0xffffffff
// 0050ee7e  e89d6d0000           call 0x515c20
// 0050ee83  8b8c24dc000000       mov ecx, dword ptr [esp + 0xdc]
// 0050ee8a  8bc6                 mov eax, esi
// 0050ee8c  5e                   pop esi
// 0050ee8d  64890d00000000       mov dword ptr fs:[0], ecx
// 0050ee94  81c4e4000000         add esp, 0xe4
// 0050ee9a  c3                   ret 
// library g3d-6.09-rbx2008/G3Dcpp\roc_line_0dec62d7bd4d609a.cpp (function ?resolveFormat@GImage@G3D@@SA?AW4Format@12@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/roc_line_0dec62d7bd4d609a.cpp
