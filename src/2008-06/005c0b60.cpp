// roc 2008-06 005c0b60  unit: RBX::VGameSettings::?$GlobalSettingsItem  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c0b60
//
// 005c0b60  6aff                 push -1
// 005c0b62  683b467d00           push 0x7d463b
// 005c0b67  64a100000000         mov eax, dword ptr fs:[0]
// 005c0b6d  50                   push eax
// 005c0b6e  64892500000000       mov dword ptr fs:[0], esp
// 005c0b75  83ec08               sub esp, 8
// 005c0b78  c7042400000000       mov dword ptr [esp], 0
// 005c0b7f  684c010000           push 0x14c
// 005c0b84  c644240400           mov byte ptr [esp + 4], 0
// 005c0b89  ff15b0288000         call dword ptr [0x8028b0]
// 005c0b8f  83c404               add esp, 4
// 005c0b92  89442404             mov dword ptr [esp + 4], eax
// 005c0b96  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005c0b9e  85c0                 test eax, eax
// 005c0ba0  7409                 je 0x5c0bab
// 005c0ba2  8bc8                 mov ecx, eax
// 005c0ba4  e8378c0600           call 0x6297e0
// 005c0ba9  eb02                 jmp 0x5c0bad
// 005c0bab  33c0                 xor eax, eax
// 005c0bad  8b0c24               mov ecx, dword ptr [esp]
// 005c0bb0  56                   push esi
// 005c0bb1  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005c0bb5  51                   push ecx
// 005c0bb6  50                   push eax
// 005c0bb7  8bce                 mov ecx, esi
// 005c0bb9  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 005c0bc1  e8eafeffff           call 0x5c0ab0
// 005c0bc6  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005c0bca  8bc6                 mov eax, esi
// 005c0bcc  5e                   pop esi
// 005c0bcd  64890d00000000       mov dword ptr fs:[0], ecx
// 005c0bd4  83c414               add esp, 0x14
// 005c0bd7  c3                   ret 
// library openrbx-client/App\v8datamodel\DebrisService.cpp (function ??$create@VDebrisService@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VDebrisService@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8datamodel/DebrisService.cpp
