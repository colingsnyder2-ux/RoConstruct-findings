// roc 2007-08 005afbe0  unit: RBX::Lighting  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005afbe0
//
// 005afbe0  dd442404             fld qword ptr [esp + 4]
// 005afbe4  56                   push esi
// 005afbe5  dc0d585d7b00         fmul qword ptr [0x7b5d58]
// 005afbeb  8bf1                 mov esi, ecx
// 005afbed  e86e110800           call 0x630d60
// 005afbf2  85c0                 test eax, eax
// 005afbf4  7c09                 jl 0x5afbff
// 005afbf6  6a00                 push 0
// 005afbf8  6840420f00           push 0xf4240
// 005afbfd  eb09                 jmp 0x5afc08
// 005afbff  6aff                 push -1
// 005afc01  f7d8                 neg eax
// 005afc03  68c0bdf0ff           push 0xfff0bdc0
// 005afc08  99                   cdq 
// 005afc09  52                   push edx
// 005afc0a  50                   push eax
// 005afc0b  e840100800           call 0x630c50
// 005afc10  89442408             mov dword ptr [esp + 8], eax
// 005afc14  8d442408             lea eax, [esp + 8]
// 005afc18  50                   push eax
// 005afc19  8bce                 mov ecx, esi
// 005afc1b  89542410             mov dword ptr [esp + 0x10], edx
// 005afc1f  e89cfdffff           call 0x5af9c0
// 005afc24  5e                   pop esi
// 005afc25  c20800               ret 8
// library rbxgs/v8datamodel\Lighting.cpp (function ?setMinutesAfterMidnight@Lighting@RBX@@QAEXN@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
