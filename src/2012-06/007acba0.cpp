// roc 2012-06 007acba0  unit: RBX::Lighting  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007acba0
//
// 007acba0  dd442404             fld qword ptr [esp + 4]
// 007acba4  56                   push esi
// 007acba5  dc0d30efb500         fmul qword ptr [0xb5ef30]
// 007acbab  8bf1                 mov esi, ecx
// 007acbad  e8fe691d00           call 0x9835b0
// 007acbb2  85c0                 test eax, eax
// 007acbb4  7c09                 jl 0x7acbbf
// 007acbb6  6a00                 push 0
// 007acbb8  6840420f00           push 0xf4240
// 007acbbd  eb09                 jmp 0x7acbc8
// 007acbbf  6aff                 push -1
// 007acbc1  f7d8                 neg eax
// 007acbc3  68c0bdf0ff           push 0xfff0bdc0
// 007acbc8  99                   cdq 
// 007acbc9  52                   push edx
// 007acbca  50                   push eax
// 007acbcb  e870671d00           call 0x983340
// 007acbd0  89442408             mov dword ptr [esp + 8], eax
// 007acbd4  8d442408             lea eax, [esp + 8]
// 007acbd8  50                   push eax
// 007acbd9  8bce                 mov ecx, esi
// 007acbdb  89542410             mov dword ptr [esp + 0x10], edx
// 007acbdf  e83cfaffff           call 0x7ac620
// 007acbe4  5e                   pop esi
// 007acbe5  c20800               ret 8
// library rbxgs/v8datamodel\Lighting.cpp (function ?setMinutesAfterMidnight@Lighting@RBX@@QAEXN@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
