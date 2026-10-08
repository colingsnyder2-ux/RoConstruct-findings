// roc 2010-06 005bccf0  unit: RBX::VHandles::?$FactoryProduct::Creator  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005bccf0
//
// 005bccf0  6aff                 push -1
// 005bccf2  689bbf9800           push 0x98bf9b
// 005bccf7  64a100000000         mov eax, dword ptr fs:[0]
// 005bccfd  50                   push eax
// 005bccfe  64892500000000       mov dword ptr fs:[0], esp
// 005bcd05  83ec08               sub esp, 8
// 005bcd08  c7042400000000       mov dword ptr [esp], 0
// 005bcd0f  68c0010000           push 0x1c0
// 005bcd14  c644240400           mov byte ptr [esp + 4], 0
// 005bcd19  e882ac1e00           call 0x7a79a0
// 005bcd1e  83c404               add esp, 4
// 005bcd21  89442404             mov dword ptr [esp + 4], eax
// 005bcd25  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005bcd2d  85c0                 test eax, eax
// 005bcd2f  7409                 je 0x5bcd3a
// 005bcd31  8bc8                 mov ecx, eax
// 005bcd33  e8681c1100           call 0x6ce9a0
// 005bcd38  eb02                 jmp 0x5bcd3c
// 005bcd3a  33c0                 xor eax, eax
// 005bcd3c  8b0c24               mov ecx, dword ptr [esp]
// 005bcd3f  56                   push esi
// 005bcd40  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005bcd44  51                   push ecx
// 005bcd45  50                   push eax
// 005bcd46  8bce                 mov ecx, esi
// 005bcd48  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 005bcd50  e8ebfeffff           call 0x5bcc40
// 005bcd55  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005bcd59  8bc6                 mov eax, esi
// 005bcd5b  5e                   pop esi
// 005bcd5c  64890d00000000       mov dword ptr fs:[0], ecx
// 005bcd63  83c414               add esp, 0x14
// 005bcd66  c3                   ret 
// library rbxgs/v8datamodel\GlobalSettings.cpp (function ??$create@VGlobalSettings@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VGlobalSettings@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/GlobalSettings.cpp
