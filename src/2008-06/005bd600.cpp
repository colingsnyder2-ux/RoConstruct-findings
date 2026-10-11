// roc 2008-06 005bd600  unit: VStockSound::?$FactoryProduct  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005bd600
//
// 005bd600  6aff                 push -1
// 005bd602  683b467d00           push 0x7d463b
// 005bd607  64a100000000         mov eax, dword ptr fs:[0]
// 005bd60d  50                   push eax
// 005bd60e  64892500000000       mov dword ptr fs:[0], esp
// 005bd615  83ec08               sub esp, 8
// 005bd618  c7042400000000       mov dword ptr [esp], 0
// 005bd61f  6870010000           push 0x170
// 005bd624  c644240400           mov byte ptr [esp + 4], 0
// 005bd629  ff15b0288000         call dword ptr [0x8028b0]
// 005bd62f  83c404               add esp, 4
// 005bd632  89442404             mov dword ptr [esp + 4], eax
// 005bd636  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005bd63e  85c0                 test eax, eax
// 005bd640  7409                 je 0x5bd64b
// 005bd642  8bc8                 mov ecx, eax
// 005bd644  e807fcffff           call 0x5bd250
// 005bd649  eb02                 jmp 0x5bd64d
// 005bd64b  33c0                 xor eax, eax
// 005bd64d  8b0c24               mov ecx, dword ptr [esp]
// 005bd650  56                   push esi
// 005bd651  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005bd655  51                   push ecx
// 005bd656  50                   push eax
// 005bd657  8bce                 mov ecx, esi
// 005bd659  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 005bd661  e8eaa5ffff           call 0x5b7c50
// 005bd666  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005bd66a  8bc6                 mov eax, esi
// 005bd66c  5e                   pop esi
// 005bd66d  64890d00000000       mov dword ptr fs:[0], ecx
// 005bd674  83c414               add esp, 0x14
// 005bd677  c3                   ret 
// library openrbx-client/App\v8datamodel\Gyro.cpp (function ??$create@VBodyPosition@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VBodyPosition@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Gyro.cpp
