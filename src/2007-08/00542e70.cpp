// roc 2007-08 00542e70  unit: RBX::VDebugSettings::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00542e70
//
// 00542e70  51                   push ecx
// 00542e71  6a10                 push 0x10
// 00542e73  c744240400000000     mov dword ptr [esp + 4], 0
// 00542e7b  e876d00e00           call 0x62fef6
// 00542e80  83c404               add esp, 4
// 00542e83  85c0                 test eax, eax
// 00542e85  7416                 je 0x542e9d
// 00542e87  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00542e8b  8b542410             mov edx, dword ptr [esp + 0x10]
// 00542e8f  c700ec677a00         mov dword ptr [eax], 0x7a67ec
// 00542e95  894808               mov dword ptr [eax + 8], ecx
// 00542e98  89500c               mov dword ptr [eax + 0xc], edx
// 00542e9b  eb02                 jmp 0x542e9f
// 00542e9d  33c0                 xor eax, eax
// 00542e9f  56                   push esi
// 00542ea0  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00542ea4  6a00                 push 0
// 00542ea6  c744240800000000     mov dword ptr [esp + 8], 0
// 00542eae  8906                 mov dword ptr [esi], eax
// 00542eb0  e8adcd0e00           call 0x62fc62
// 00542eb5  83c404               add esp, 4
// 00542eb8  8bc6                 mov eax, esi
// 00542eba  5e                   pop esi
// 00542ebb  59                   pop ecx
// 00542ebc  c3                   ret 
// library rbxgs/v8datamodel\DebugSettings.cpp (function ??$getset@P8DebugSettings@RBX@@BEMXZ@?$PropDescriptor@VDebugSettings@RBX@@M@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@M@Reflection@RBX@@@std@@P8DebugSettings@2@BEMXZH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
