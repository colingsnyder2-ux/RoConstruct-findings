// roc 2008-06 005c3da0  unit: RBX::ObjectValue  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c3da0
//
// 005c3da0  6aff                 push -1
// 005c3da2  683b467d00           push 0x7d463b
// 005c3da7  64a100000000         mov eax, dword ptr fs:[0]
// 005c3dad  50                   push eax
// 005c3dae  64892500000000       mov dword ptr fs:[0], esp
// 005c3db5  83ec08               sub esp, 8
// 005c3db8  c7042400000000       mov dword ptr [esp], 0
// 005c3dbf  6838010000           push 0x138
// 005c3dc4  c644240400           mov byte ptr [esp + 4], 0
// 005c3dc9  ff15b0288000         call dword ptr [0x8028b0]
// 005c3dcf  83c404               add esp, 4
// 005c3dd2  89442404             mov dword ptr [esp + 4], eax
// 005c3dd6  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005c3dde  85c0                 test eax, eax
// 005c3de0  7409                 je 0x5c3deb
// 005c3de2  8bc8                 mov ecx, eax
// 005c3de4  e8c7fcffff           call 0x5c3ab0
// 005c3de9  eb02                 jmp 0x5c3ded
// 005c3deb  33c0                 xor eax, eax
// 005c3ded  8b0c24               mov ecx, dword ptr [esp]
// 005c3df0  56                   push esi
// 005c3df1  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005c3df5  51                   push ecx
// 005c3df6  50                   push eax
// 005c3df7  8bce                 mov ecx, esi
// 005c3df9  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 005c3e01  e88aedffff           call 0x5c2b90
// 005c3e06  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005c3e0a  8bc6                 mov eax, esi
// 005c3e0c  5e                   pop esi
// 005c3e0d  64890d00000000       mov dword ptr fs:[0], ecx
// 005c3e14  83c414               add esp, 0x14
// 005c3e17  c3                   ret 
// library openrbx-client/App\v8datamodel\Teams.cpp (function ??$create@VTeams@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VTeams@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8datamodel/Teams.cpp
