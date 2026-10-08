// roc 2009-06 0067ab50  unit: RBX::VLighting::?$BoundFuncDesc  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0067ab50
//
// 0067ab50  dd442404             fld qword ptr [esp + 4]
// 0067ab54  56                   push esi
// 0067ab55  dc0df0a28b00         fmul qword ptr [0x8ba2f0]
// 0067ab5b  8bf1                 mov esi, ecx
// 0067ab5d  e85ef30900           call 0x719ec0
// 0067ab62  85c0                 test eax, eax
// 0067ab64  7c09                 jl 0x67ab6f
// 0067ab66  6a00                 push 0
// 0067ab68  6840420f00           push 0xf4240
// 0067ab6d  eb09                 jmp 0x67ab78
// 0067ab6f  6aff                 push -1
// 0067ab71  f7d8                 neg eax
// 0067ab73  68c0bdf0ff           push 0xfff0bdc0
// 0067ab78  99                   cdq 
// 0067ab79  52                   push edx
// 0067ab7a  50                   push eax
// 0067ab7b  e8c0f00900           call 0x719c40
// 0067ab80  89442408             mov dword ptr [esp + 8], eax
// 0067ab84  8d442408             lea eax, [esp + 8]
// 0067ab88  50                   push eax
// 0067ab89  8bce                 mov ecx, esi
// 0067ab8b  89542410             mov dword ptr [esp + 0x10], edx
// 0067ab8f  e84cfbffff           call 0x67a6e0
// 0067ab94  5e                   pop esi
// 0067ab95  c20800               ret 8
// library rbxgs/v8datamodel\Lighting.cpp (function ?setMinutesAfterMidnight@Lighting@RBX@@QAEXN@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
