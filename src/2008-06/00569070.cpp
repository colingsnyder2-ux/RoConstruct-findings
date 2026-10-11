// roc 2008-06 00569070  unit: RBX::ServiceProvider  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00569070
//
// 00569070  6aff                 push -1
// 00569072  683b467d00           push 0x7d463b
// 00569077  64a100000000         mov eax, dword ptr fs:[0]
// 0056907d  50                   push eax
// 0056907e  64892500000000       mov dword ptr fs:[0], esp
// 00569085  83ec08               sub esp, 8
// 00569088  c7042400000000       mov dword ptr [esp], 0
// 0056908f  68c8010000           push 0x1c8
// 00569094  c644240400           mov byte ptr [esp + 4], 0
// 00569099  ff15b0288000         call dword ptr [0x8028b0]
// 0056909f  83c404               add esp, 4
// 005690a2  89442404             mov dword ptr [esp + 4], eax
// 005690a6  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005690ae  85c0                 test eax, eax
// 005690b0  7409                 je 0x5690bb
// 005690b2  8bc8                 mov ecx, eax
// 005690b4  e8c7feffff           call 0x568f80
// 005690b9  eb02                 jmp 0x5690bd
// 005690bb  33c0                 xor eax, eax
// 005690bd  8b0c24               mov ecx, dword ptr [esp]
// 005690c0  56                   push esi
// 005690c1  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005690c5  51                   push ecx
// 005690c6  50                   push eax
// 005690c7  8bce                 mov ecx, esi
// 005690c9  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 005690d1  e8baf5ffff           call 0x568690
// 005690d6  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005690da  8bc6                 mov eax, esi
// 005690dc  5e                   pop esi
// 005690dd  64890d00000000       mov dword ptr fs:[0], ecx
// 005690e4  83c414               add esp, 0x14
// 005690e7  c3                   ret 
// library openrbx-client/App\v8datamodel\GlobalSettings.cpp (function ??$create@VGlobalSettings@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VGlobalSettings@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/GlobalSettings.cpp
