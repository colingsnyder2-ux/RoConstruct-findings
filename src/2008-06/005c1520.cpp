// roc 2008-06 005c1520  unit: RBX::VFlagStandService::?$FactoryProduct::Creator  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c1520
//
// 005c1520  6aff                 push -1
// 005c1522  683b467d00           push 0x7d463b
// 005c1527  64a100000000         mov eax, dword ptr fs:[0]
// 005c152d  50                   push eax
// 005c152e  64892500000000       mov dword ptr fs:[0], esp
// 005c1535  83ec08               sub esp, 8
// 005c1538  c7042400000000       mov dword ptr [esp], 0
// 005c153f  6848010000           push 0x148
// 005c1544  c644240400           mov byte ptr [esp + 4], 0
// 005c1549  ff15b0288000         call dword ptr [0x8028b0]
// 005c154f  83c404               add esp, 4
// 005c1552  89442404             mov dword ptr [esp + 4], eax
// 005c1556  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005c155e  85c0                 test eax, eax
// 005c1560  7409                 je 0x5c156b
// 005c1562  8bc8                 mov ecx, eax
// 005c1564  e847c10600           call 0x62d6b0
// 005c1569  eb02                 jmp 0x5c156d
// 005c156b  33c0                 xor eax, eax
// 005c156d  8b0c24               mov ecx, dword ptr [esp]
// 005c1570  56                   push esi
// 005c1571  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005c1575  51                   push ecx
// 005c1576  50                   push eax
// 005c1577  8bce                 mov ecx, esi
// 005c1579  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 005c1581  e8eafeffff           call 0x5c1470
// 005c1586  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005c158a  8bc6                 mov eax, esi
// 005c158c  5e                   pop esi
// 005c158d  64890d00000000       mov dword ptr fs:[0], ecx
// 005c1594  83c414               add esp, 0x14
// 005c1597  c3                   ret 
// library openrbx-client/App\v8datamodel\CharacterAppearance.cpp (function ??$create@VBodyColors@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VBodyColors@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8datamodel/CharacterAppearance.cpp
