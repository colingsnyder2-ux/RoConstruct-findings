// roc 2008-06 005e26e0  unit: RBX::Lighting  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e26e0
//
// 005e26e0  dd442404             fld qword ptr [esp + 4]
// 005e26e4  56                   push esi
// 005e26e5  dc0d30df8300         fmul qword ptr [0x83df30]
// 005e26eb  8bf1                 mov esi, ecx
// 005e26ed  e8fef00b00           call 0x6a17f0
// 005e26f2  85c0                 test eax, eax
// 005e26f4  7c09                 jl 0x5e26ff
// 005e26f6  6a00                 push 0
// 005e26f8  6840420f00           push 0xf4240
// 005e26fd  eb09                 jmp 0x5e2708
// 005e26ff  6aff                 push -1
// 005e2701  f7d8                 neg eax
// 005e2703  68c0bdf0ff           push 0xfff0bdc0
// 005e2708  99                   cdq 
// 005e2709  52                   push edx
// 005e270a  50                   push eax
// 005e270b  e8c0ef0b00           call 0x6a16d0
// 005e2710  89442408             mov dword ptr [esp + 8], eax
// 005e2714  8d442408             lea eax, [esp + 8]
// 005e2718  50                   push eax
// 005e2719  8bce                 mov ecx, esi
// 005e271b  89542410             mov dword ptr [esp + 0x10], edx
// 005e271f  e84cfeffff           call 0x5e2570
// 005e2724  5e                   pop esi
// 005e2725  c20800               ret 8
// library rbxgs/v8datamodel\Lighting.cpp (function ?setMinutesAfterMidnight@Lighting@RBX@@QAEXN@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
