// roc 2009-12 00715140  unit: RBX::VLighting::?$BoundFuncDesc  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00715140
//
// 00715140  dd442404             fld qword ptr [esp + 4]
// 00715144  56                   push esi
// 00715145  dc0da8e89a00         fmul qword ptr [0x9ae8a8]
// 0071514b  8bf1                 mov esi, ecx
// 0071514d  e89efb0d00           call 0x7f4cf0
// 00715152  85c0                 test eax, eax
// 00715154  7c09                 jl 0x71515f
// 00715156  6a00                 push 0
// 00715158  6840420f00           push 0xf4240
// 0071515d  eb09                 jmp 0x715168
// 0071515f  6aff                 push -1
// 00715161  f7d8                 neg eax
// 00715163  68c0bdf0ff           push 0xfff0bdc0
// 00715168  99                   cdq 
// 00715169  52                   push edx
// 0071516a  50                   push eax
// 0071516b  e800f90d00           call 0x7f4a70
// 00715170  89442408             mov dword ptr [esp + 8], eax
// 00715174  8d442408             lea eax, [esp + 8]
// 00715178  50                   push eax
// 00715179  8bce                 mov ecx, esi
// 0071517b  89542410             mov dword ptr [esp + 0x10], edx
// 0071517f  e87cfbffff           call 0x714d00
// 00715184  5e                   pop esi
// 00715185  c20800               ret 8
// library rbxgs/v8datamodel\Lighting.cpp (function ?setMinutesAfterMidnight@Lighting@RBX@@QAEXN@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
