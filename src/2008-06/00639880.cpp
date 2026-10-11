// roc 2008-06 00639880  unit: RBX::VBrickColor::V?$Value::?$FactoryProduct  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00639880
//
// 00639880  6aff                 push -1
// 00639882  683b467d00           push 0x7d463b
// 00639887  64a100000000         mov eax, dword ptr fs:[0]
// 0063988d  50                   push eax
// 0063988e  64892500000000       mov dword ptr fs:[0], esp
// 00639895  83ec08               sub esp, 8
// 00639898  c7042400000000       mov dword ptr [esp], 0
// 0063989f  684c010000           push 0x14c
// 006398a4  c644240400           mov byte ptr [esp + 4], 0
// 006398a9  ff15b0288000         call dword ptr [0x8028b0]
// 006398af  83c404               add esp, 4
// 006398b2  89442404             mov dword ptr [esp + 4], eax
// 006398b6  c744241000000000     mov dword ptr [esp + 0x10], 0
// 006398be  85c0                 test eax, eax
// 006398c0  7409                 je 0x6398cb
// 006398c2  8bc8                 mov ecx, eax
// 006398c4  e8c7ebffff           call 0x638490
// 006398c9  eb02                 jmp 0x6398cd
// 006398cb  33c0                 xor eax, eax
// 006398cd  8b0c24               mov ecx, dword ptr [esp]
// 006398d0  56                   push esi
// 006398d1  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 006398d5  51                   push ecx
// 006398d6  50                   push eax
// 006398d7  8bce                 mov ecx, esi
// 006398d9  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 006398e1  e84ac0ffff           call 0x635930
// 006398e6  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006398ea  8bc6                 mov eax, esi
// 006398ec  5e                   pop esi
// 006398ed  64890d00000000       mov dword ptr fs:[0], ecx
// 006398f4  83c414               add esp, 0x14
// 006398f7  c3                   ret 
// library openrbx-client/App\v8datamodel\DebrisService.cpp (function ??$create@VDebrisService@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VDebrisService@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8datamodel/DebrisService.cpp
