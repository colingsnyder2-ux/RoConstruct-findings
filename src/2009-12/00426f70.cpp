// roc 2009-12 00426f70  unit: boost::any::H::?$holder  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00426f70
//
// 00426f70  6aff                 push -1
// 00426f72  684bad9300           push 0x93ad4b
// 00426f77  64a100000000         mov eax, dword ptr fs:[0]
// 00426f7d  50                   push eax
// 00426f7e  64892500000000       mov dword ptr fs:[0], esp
// 00426f85  83ec08               sub esp, 8
// 00426f88  c7042400000000       mov dword ptr [esp], 0
// 00426f8f  6860010000           push 0x160
// 00426f94  c644240400           mov byte ptr [esp + 4], 0
// 00426f99  e8c2c83c00           call 0x7f3860
// 00426f9e  83c404               add esp, 4
// 00426fa1  89442404             mov dword ptr [esp + 4], eax
// 00426fa5  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00426fad  85c0                 test eax, eax
// 00426faf  7409                 je 0x426fba
// 00426fb1  8bc8                 mov ecx, eax
// 00426fb3  e898082800           call 0x6a7850
// 00426fb8  eb02                 jmp 0x426fbc
// 00426fba  33c0                 xor eax, eax
// 00426fbc  8b0c24               mov ecx, dword ptr [esp]
// 00426fbf  56                   push esi
// 00426fc0  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00426fc4  51                   push ecx
// 00426fc5  50                   push eax
// 00426fc6  8bce                 mov ecx, esi
// 00426fc8  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 00426fd0  e8bbfcffff           call 0x426c90
// 00426fd5  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00426fd9  8bc6                 mov eax, esi
// 00426fdb  5e                   pop esi
// 00426fdc  64890d00000000       mov dword ptr fs:[0], ecx
// 00426fe3  83c414               add esp, 0x14
// 00426fe6  c3                   ret 
// library rbxgs/v8datamodel\ScriptMouseCommand.cpp (function ??$create@VMouse@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VMouse@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ScriptMouseCommand.cpp
