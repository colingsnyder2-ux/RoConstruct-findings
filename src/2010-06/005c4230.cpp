// roc 2010-06 005c4230  unit: RBX::CharacterMesh::W4BodyPart::?$EnumDesc  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005c4230
//
// 005c4230  6aff                 push -1
// 005c4232  689bbf9800           push 0x98bf9b
// 005c4237  64a100000000         mov eax, dword ptr fs:[0]
// 005c423d  50                   push eax
// 005c423e  64892500000000       mov dword ptr fs:[0], esp
// 005c4245  83ec08               sub esp, 8
// 005c4248  c7042400000000       mov dword ptr [esp], 0
// 005c424f  6838010000           push 0x138
// 005c4254  c644240400           mov byte ptr [esp + 4], 0
// 005c4259  e842371e00           call 0x7a79a0
// 005c425e  83c404               add esp, 4
// 005c4261  89442404             mov dword ptr [esp + 4], eax
// 005c4265  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005c426d  85c0                 test eax, eax
// 005c426f  7409                 je 0x5c427a
// 005c4271  8bc8                 mov ecx, eax
// 005c4273  e888f0ffff           call 0x5c3300
// 005c4278  eb02                 jmp 0x5c427c
// 005c427a  33c0                 xor eax, eax
// 005c427c  8b0c24               mov ecx, dword ptr [esp]
// 005c427f  56                   push esi
// 005c4280  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005c4284  51                   push ecx
// 005c4285  50                   push eax
// 005c4286  8bce                 mov ecx, esi
// 005c4288  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 005c4290  e81b8fffff           call 0x5bd1b0
// 005c4295  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005c4299  8bc6                 mov eax, esi
// 005c429b  5e                   pop esi
// 005c429c  64890d00000000       mov dword ptr fs:[0], ecx
// 005c42a3  83c414               add esp, 0x14
// 005c42a6  c3                   ret 
// library openrbx-client/App\v8datamodel\Teams.cpp (function ??$create@VTeams@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VTeams@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Teams.cpp
