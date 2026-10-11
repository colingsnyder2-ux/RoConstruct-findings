// roc 2008-06 005804a0  unit: RBX::VHole::?$FactoryProduct::Creator  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005804a0
//
// 005804a0  6aff                 push -1
// 005804a2  683b467d00           push 0x7d463b
// 005804a7  64a100000000         mov eax, dword ptr fs:[0]
// 005804ad  50                   push eax
// 005804ae  64892500000000       mov dword ptr fs:[0], esp
// 005804b5  83ec08               sub esp, 8
// 005804b8  c7042400000000       mov dword ptr [esp], 0
// 005804bf  6870010000           push 0x170
// 005804c4  c644240400           mov byte ptr [esp + 4], 0
// 005804c9  ff15b0288000         call dword ptr [0x8028b0]
// 005804cf  83c404               add esp, 4
// 005804d2  89442404             mov dword ptr [esp + 4], eax
// 005804d6  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005804de  85c0                 test eax, eax
// 005804e0  7409                 je 0x5804eb
// 005804e2  8bc8                 mov ecx, eax
// 005804e4  e8c7b60800           call 0x60bbb0
// 005804e9  eb02                 jmp 0x5804ed
// 005804eb  33c0                 xor eax, eax
// 005804ed  8b0c24               mov ecx, dword ptr [esp]
// 005804f0  56                   push esi
// 005804f1  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005804f5  51                   push ecx
// 005804f6  50                   push eax
// 005804f7  8bce                 mov ecx, esi
// 005804f9  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 00580501  e8eafeffff           call 0x5803f0
// 00580506  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0058050a  8bc6                 mov eax, esi
// 0058050c  5e                   pop esi
// 0058050d  64890d00000000       mov dword ptr fs:[0], ecx
// 00580514  83c414               add esp, 0x14
// 00580517  c3                   ret 
// library openrbx-client/App\v8datamodel\Gyro.cpp (function ??$create@VBodyPosition@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VBodyPosition@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Gyro.cpp
