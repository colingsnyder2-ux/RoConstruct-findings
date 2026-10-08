// roc 2010-06 00694f30  unit: RBX::VLighting::?$BoundFuncDesc  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00694f30
//
// 00694f30  dd442404             fld qword ptr [esp + 4]
// 00694f34  56                   push esi
// 00694f35  dc0da0f7a000         fmul qword ptr [0xa0f7a0]
// 00694f3b  8bf1                 mov esi, ecx
// 00694f3d  e8ee3e1100           call 0x7a8e30
// 00694f42  85c0                 test eax, eax
// 00694f44  7c09                 jl 0x694f4f
// 00694f46  6a00                 push 0
// 00694f48  6840420f00           push 0xf4240
// 00694f4d  eb09                 jmp 0x694f58
// 00694f4f  6aff                 push -1
// 00694f51  f7d8                 neg eax
// 00694f53  68c0bdf0ff           push 0xfff0bdc0
// 00694f58  99                   cdq 
// 00694f59  52                   push edx
// 00694f5a  50                   push eax
// 00694f5b  e8503c1100           call 0x7a8bb0
// 00694f60  89442408             mov dword ptr [esp + 8], eax
// 00694f64  8d442408             lea eax, [esp + 8]
// 00694f68  50                   push eax
// 00694f69  8bce                 mov ecx, esi
// 00694f6b  89542410             mov dword ptr [esp + 0x10], edx
// 00694f6f  e87cfbffff           call 0x694af0
// 00694f74  5e                   pop esi
// 00694f75  c20800               ret 8
// library rbxgs/v8datamodel\Lighting.cpp (function ?setMinutesAfterMidnight@Lighting@RBX@@QAEXN@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
