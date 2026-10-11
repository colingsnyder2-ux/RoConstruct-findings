// roc 2008-06 00494250  unit: RBX::Network::Player  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00494250
//
// 00494250  6aff                 push -1
// 00494252  683b467d00           push 0x7d463b
// 00494257  64a100000000         mov eax, dword ptr fs:[0]
// 0049425d  50                   push eax
// 0049425e  64892500000000       mov dword ptr fs:[0], esp
// 00494265  83ec08               sub esp, 8
// 00494268  c7042400000000       mov dword ptr [esp], 0
// 0049426f  6874010000           push 0x174
// 00494274  c644240400           mov byte ptr [esp + 4], 0
// 00494279  ff15b0288000         call dword ptr [0x8028b0]
// 0049427f  83c404               add esp, 4
// 00494282  89442404             mov dword ptr [esp + 4], eax
// 00494286  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0049428e  85c0                 test eax, eax
// 00494290  7409                 je 0x49429b
// 00494292  8bc8                 mov ecx, eax
// 00494294  e817f7ffff           call 0x4939b0
// 00494299  eb02                 jmp 0x49429d
// 0049429b  33c0                 xor eax, eax
// 0049429d  8b0c24               mov ecx, dword ptr [esp]
// 004942a0  56                   push esi
// 004942a1  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 004942a5  51                   push ecx
// 004942a6  50                   push eax
// 004942a7  8bce                 mov ecx, esi
// 004942a9  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 004942b1  e8dab9ffff           call 0x48fc90
// 004942b6  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004942ba  8bc6                 mov eax, esi
// 004942bc  5e                   pop esi
// 004942bd  64890d00000000       mov dword ptr fs:[0], ecx
// 004942c4  83c414               add esp, 0x14
// 004942c7  c3                   ret 
// library openrbx-client/App\v8datamodel\Selection.cpp (function ??$create@VSelection@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VSelection@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Selection.cpp
