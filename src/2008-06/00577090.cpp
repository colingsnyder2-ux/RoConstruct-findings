// roc 2008-06 00577090  unit: RBX::DataModel  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00577090
//
// 00577090  6aff                 push -1
// 00577092  683b467d00           push 0x7d463b
// 00577097  64a100000000         mov eax, dword ptr fs:[0]
// 0057709d  50                   push eax
// 0057709e  64892500000000       mov dword ptr fs:[0], esp
// 005770a5  83ec08               sub esp, 8
// 005770a8  c7042400000000       mov dword ptr [esp], 0
// 005770af  6844010000           push 0x144
// 005770b4  c644240400           mov byte ptr [esp + 4], 0
// 005770b9  ff15b0288000         call dword ptr [0x8028b0]
// 005770bf  83c404               add esp, 4
// 005770c2  89442404             mov dword ptr [esp + 4], eax
// 005770c6  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005770ce  85c0                 test eax, eax
// 005770d0  7409                 je 0x5770db
// 005770d2  8bc8                 mov ecx, eax
// 005770d4  e837caffff           call 0x573b10
// 005770d9  eb02                 jmp 0x5770dd
// 005770db  33c0                 xor eax, eax
// 005770dd  8b0c24               mov ecx, dword ptr [esp]
// 005770e0  56                   push esi
// 005770e1  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005770e5  51                   push ecx
// 005770e6  50                   push eax
// 005770e7  8bce                 mov ecx, esi
// 005770e9  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 005770f1  e8dafaffff           call 0x576bd0
// 005770f6  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005770fa  8bc6                 mov eax, esi
// 005770fc  5e                   pop esi
// 005770fd  64890d00000000       mov dword ptr fs:[0], ecx
// 00577104  83c414               add esp, 0x14
// 00577107  c3                   ret 
// library openrbx-client/App\v8datamodel\ForceField.cpp (function ??$create@VForceField@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VForceField@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8datamodel/ForceField.cpp
