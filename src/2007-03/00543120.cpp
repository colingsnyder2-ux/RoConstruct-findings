// roc 2007-03 00543120  unit: seg_00540000  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00543120
//
// 00543120  51                   push ecx
// 00543121  6a10                 push 0x10
// 00543123  c744240400000000     mov dword ptr [esp + 4], 0
// 0054312b  e8d8af0d00           call 0x61e108
// 00543130  83c404               add esp, 4
// 00543133  85c0                 test eax, eax
// 00543135  7416                 je 0x54314d
// 00543137  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0054313b  8b542410             mov edx, dword ptr [esp + 0x10]
// 0054313f  c700ac687a00         mov dword ptr [eax], 0x7a68ac
// 00543145  894808               mov dword ptr [eax + 8], ecx
// 00543148  89500c               mov dword ptr [eax + 0xc], edx
// 0054314b  eb02                 jmp 0x54314f
// 0054314d  33c0                 xor eax, eax
// 0054314f  56                   push esi
// 00543150  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00543154  6a00                 push 0
// 00543156  c744240800000000     mov dword ptr [esp + 8], 0
// 0054315e  8906                 mov dword ptr [esi], eax
// 00543160  e88baf0d00           call 0x61e0f0
// 00543165  83c404               add esp, 4
// 00543168  8bc6                 mov eax, esi
// 0054316a  5e                   pop esi
// 0054316b  59                   pop ecx
// 0054316c  c3                   ret 
// library rbxgs/v8datamodel\DebugSettings.cpp (function ??$getset@P8DebugSettings@RBX@@BEMXZ@?$PropDescriptor@VDebugSettings@RBX@@M@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@M@Reflection@RBX@@@std@@P8DebugSettings@2@BEMXZH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
