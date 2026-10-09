// roc 2009-12 00655060  unit: RBX::VVelocityMotor::?$FactoryProduct::Creator  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00655060
//
// 00655060  6aff                 push -1
// 00655062  684bad9300           push 0x93ad4b
// 00655067  64a100000000         mov eax, dword ptr fs:[0]
// 0065506d  50                   push eax
// 0065506e  64892500000000       mov dword ptr fs:[0], esp
// 00655075  83ec08               sub esp, 8
// 00655078  c7042400000000       mov dword ptr [esp], 0
// 0065507f  68c0010000           push 0x1c0
// 00655084  c644240400           mov byte ptr [esp + 4], 0
// 00655089  e8d2e71900           call 0x7f3860
// 0065508e  83c404               add esp, 4
// 00655091  89442404             mov dword ptr [esp + 4], eax
// 00655095  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0065509d  85c0                 test eax, eax
// 0065509f  7409                 je 0x6550aa
// 006550a1  8bc8                 mov ecx, eax
// 006550a3  e858f90e00           call 0x744a00
// 006550a8  eb02                 jmp 0x6550ac
// 006550aa  33c0                 xor eax, eax
// 006550ac  8b0c24               mov ecx, dword ptr [esp]
// 006550af  56                   push esi
// 006550b0  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 006550b4  51                   push ecx
// 006550b5  50                   push eax
// 006550b6  8bce                 mov ecx, esi
// 006550b8  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 006550c0  e8ebfeffff           call 0x654fb0
// 006550c5  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006550c9  8bc6                 mov eax, esi
// 006550cb  5e                   pop esi
// 006550cc  64890d00000000       mov dword ptr fs:[0], ecx
// 006550d3  83c414               add esp, 0x14
// 006550d6  c3                   ret 
// library rbxgs/v8datamodel\GlobalSettings.cpp (function ??$create@VGlobalSettings@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VGlobalSettings@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/GlobalSettings.cpp
