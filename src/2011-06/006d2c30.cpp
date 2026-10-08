// roc 2011-06 006d2c30  unit: RBX::VLighting::?$EventDesc  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006d2c30
//
// 006d2c30  dd442404             fld qword ptr [esp + 4]
// 006d2c34  56                   push esi
// 006d2c35  dc0db8f1a600         fmul qword ptr [0xa6f1b8]
// 006d2c3b  8bf1                 mov esi, ecx
// 006d2c3d  e8ee881300           call 0x80b530
// 006d2c42  85c0                 test eax, eax
// 006d2c44  7c09                 jl 0x6d2c4f
// 006d2c46  6a00                 push 0
// 006d2c48  6840420f00           push 0xf4240
// 006d2c4d  eb09                 jmp 0x6d2c58
// 006d2c4f  6aff                 push -1
// 006d2c51  f7d8                 neg eax
// 006d2c53  68c0bdf0ff           push 0xfff0bdc0
// 006d2c58  99                   cdq 
// 006d2c59  52                   push edx
// 006d2c5a  50                   push eax
// 006d2c5b  e850861300           call 0x80b2b0
// 006d2c60  89442408             mov dword ptr [esp + 8], eax
// 006d2c64  8d442408             lea eax, [esp + 8]
// 006d2c68  50                   push eax
// 006d2c69  8bce                 mov ecx, esi
// 006d2c6b  89542410             mov dword ptr [esp + 0x10], edx
// 006d2c6f  e88cfdffff           call 0x6d2a00
// 006d2c74  5e                   pop esi
// 006d2c75  c20800               ret 8
// library rbxgs/v8datamodel\Lighting.cpp (function ?setMinutesAfterMidnight@Lighting@RBX@@QAEXN@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
