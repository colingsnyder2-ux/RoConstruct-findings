// roc 2009-06 005714d0  unit: seg_00570000  size: 235 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005714d0
//
// 005714d0  6aff                 push -1
// 005714d2  6807048600           push 0x860407
// 005714d7  64a100000000         mov eax, dword ptr fs:[0]
// 005714dd  50                   push eax
// 005714de  64892500000000       mov dword ptr fs:[0], esp
// 005714e5  81ecd8000000         sub esp, 0xd8
// 005714eb  56                   push esi
// 005714ec  8bb424ec000000       mov esi, dword ptr [esp + 0xec]
// 005714f3  6a00                 push 0
// 005714f5  6a01                 push 1
// 005714f7  56                   push esi
// 005714f8  8d4c243c             lea ecx, [esp + 0x3c]
// 005714fc  e87f340000           call 0x574980
// 00571501  8b442468             mov eax, dword ptr [esp + 0x68]
// 00571505  c78424e400000000000000 mov dword ptr [esp + 0xe4], 0
// 00571510  85c0                 test eax, eax
// 00571512  7f3b                 jg 0x57154f
// 00571514  6894b68c00           push 0x8cb694
// 00571519  8d4c2418             lea ecx, [esp + 0x18]
// 0057151d  ff15b4e48900         call dword ptr [0x89e4b4]
// 00571523  56                   push esi
// 00571524  8d442418             lea eax, [esp + 0x18]
// 00571528  50                   push eax
// 00571529  8d8c2484000000       lea ecx, [esp + 0x84]
// 00571530  c68424ec00000001     mov byte ptr [esp + 0xec], 1
// 00571538  e8638af2ff           call 0x499fa0
// 0057153d  68308a9800           push 0x988a30
// 00571542  8d8c2480000000       lea ecx, [esp + 0x80]
// 00571549  51                   push ecx
// 0057154a  e8fb841a00           call 0x719a4a
// 0057154f  837c246400           cmp dword ptr [esp + 0x64], 0
// 00571554  7626                 jbe 0x57157c
// 00571556  8d542404             lea edx, [esp + 4]
// 0057155a  52                   push edx
// 0057155b  8d4c240c             lea ecx, [esp + 0xc]
// 0057155f  c7442408083c8c00     mov dword ptr [esp + 8], 0x8c3c08
// 00571567  ff15c4e98900         call dword ptr [0x89e9c4]
// 0057156d  683c1b9800           push 0x981b3c
// 00571572  8d44240c             lea eax, [esp + 0xc]
// 00571576  50                   push eax
// 00571577  e8ce841a00           call 0x719a4a
// 0057157c  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 00571580  6a08                 push 8
// 00571582  50                   push eax
// 00571583  51                   push ecx
// 00571584  56                   push esi
// 00571585  e816f1ffff           call 0x5706a0
// 0057158a  83c410               add esp, 0x10
// 0057158d  8d4c2430             lea ecx, [esp + 0x30]
// 00571591  8bf0                 mov esi, eax
// 00571593  c78424e4000000ffffffff mov dword ptr [esp + 0xe4], 0xffffffff
// 0057159e  e8fd350000           call 0x574ba0
// 005715a3  8b8c24dc000000       mov ecx, dword ptr [esp + 0xdc]
// 005715aa  8bc6                 mov eax, esi
// 005715ac  5e                   pop esi
// 005715ad  64890d00000000       mov dword ptr fs:[0], ecx
// 005715b4  81c4e4000000         add esp, 0xe4
// 005715ba  c3                   ret 
// library g3d-6.09-rbx2008/G3Dcpp\GImage.cpp (function ?resolveFormat@GImage@G3D@@SA?AW4Format@12@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/GImage.cpp
