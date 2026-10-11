// roc 2008-06 00407820  unit: VCApp::?$IObjectSafetyRobloxImpl  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00407820
//
// 00407820  6aff                 push -1
// 00407822  683b467d00           push 0x7d463b
// 00407827  64a100000000         mov eax, dword ptr fs:[0]
// 0040782d  50                   push eax
// 0040782e  64892500000000       mov dword ptr fs:[0], esp
// 00407835  83ec08               sub esp, 8
// 00407838  c7042400000000       mov dword ptr [esp], 0
// 0040783f  6838010000           push 0x138
// 00407844  c644240400           mov byte ptr [esp + 4], 0
// 00407849  ff15b0288000         call dword ptr [0x8028b0]
// 0040784f  83c404               add esp, 4
// 00407852  89442404             mov dword ptr [esp + 4], eax
// 00407856  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0040785e  85c0                 test eax, eax
// 00407860  7409                 je 0x40786b
// 00407862  8bc8                 mov ecx, eax
// 00407864  e857e21500           call 0x565ac0
// 00407869  eb02                 jmp 0x40786d
// 0040786b  33c0                 xor eax, eax
// 0040786d  8b0c24               mov ecx, dword ptr [esp]
// 00407870  56                   push esi
// 00407871  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00407875  51                   push ecx
// 00407876  50                   push eax
// 00407877  8bce                 mov ecx, esi
// 00407879  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 00407881  e8cafbffff           call 0x407450
// 00407886  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0040788a  8bc6                 mov eax, esi
// 0040788c  5e                   pop esi
// 0040788d  64890d00000000       mov dword ptr fs:[0], ecx
// 00407894  83c414               add esp, 0x14
// 00407897  c3                   ret 
// library openrbx-client/App\v8datamodel\Teams.cpp (function ??$create@VTeams@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VTeams@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8datamodel/Teams.cpp
