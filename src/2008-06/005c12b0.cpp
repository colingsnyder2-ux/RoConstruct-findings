// roc 2008-06 005c12b0  unit: RBX::VFlagStand::?$FactoryProduct::Creator  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c12b0
//
// 005c12b0  6aff                 push -1
// 005c12b2  683b467d00           push 0x7d463b
// 005c12b7  64a100000000         mov eax, dword ptr fs:[0]
// 005c12bd  50                   push eax
// 005c12be  64892500000000       mov dword ptr fs:[0], esp
// 005c12c5  83ec08               sub esp, 8
// 005c12c8  c7042400000000       mov dword ptr [esp], 0
// 005c12cf  684c010000           push 0x14c
// 005c12d4  c644240400           mov byte ptr [esp + 4], 0
// 005c12d9  ff15b0288000         call dword ptr [0x8028b0]
// 005c12df  83c404               add esp, 4
// 005c12e2  89442404             mov dword ptr [esp + 4], eax
// 005c12e6  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005c12ee  85c0                 test eax, eax
// 005c12f0  7409                 je 0x5c12fb
// 005c12f2  8bc8                 mov ecx, eax
// 005c12f4  e8d7b90600           call 0x62ccd0
// 005c12f9  eb02                 jmp 0x5c12fd
// 005c12fb  33c0                 xor eax, eax
// 005c12fd  8b0c24               mov ecx, dword ptr [esp]
// 005c1300  56                   push esi
// 005c1301  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005c1305  51                   push ecx
// 005c1306  50                   push eax
// 005c1307  8bce                 mov ecx, esi
// 005c1309  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 005c1311  e8eafeffff           call 0x5c1200
// 005c1316  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005c131a  8bc6                 mov eax, esi
// 005c131c  5e                   pop esi
// 005c131d  64890d00000000       mov dword ptr fs:[0], ecx
// 005c1324  83c414               add esp, 0x14
// 005c1327  c3                   ret 
// library openrbx-client/App\v8datamodel\DebrisService.cpp (function ??$create@VDebrisService@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VDebrisService@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8datamodel/DebrisService.cpp
