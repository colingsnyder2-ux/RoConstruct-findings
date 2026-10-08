// roc 2007-08 0053ee60  unit: RBX::VInstance::?$AbstractFactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0053ee60
//
// 0053ee60  51                   push ecx
// 0053ee61  6a10                 push 0x10
// 0053ee63  c744240400000000     mov dword ptr [esp + 4], 0
// 0053ee6b  e886100f00           call 0x62fef6
// 0053ee70  83c404               add esp, 4
// 0053ee73  85c0                 test eax, eax
// 0053ee75  7416                 je 0x53ee8d
// 0053ee77  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0053ee7b  8b542410             mov edx, dword ptr [esp + 0x10]
// 0053ee7f  c70088647a00         mov dword ptr [eax], 0x7a6488
// 0053ee85  894808               mov dword ptr [eax + 8], ecx
// 0053ee88  89500c               mov dword ptr [eax + 0xc], edx
// 0053ee8b  eb02                 jmp 0x53ee8f
// 0053ee8d  33c0                 xor eax, eax
// 0053ee8f  56                   push esi
// 0053ee90  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0053ee94  6a00                 push 0
// 0053ee96  c744240800000000     mov dword ptr [esp + 8], 0
// 0053ee9e  8906                 mov dword ptr [esi], eax
// 0053eea0  e8bd0d0f00           call 0x62fc62
// 0053eea5  83c404               add esp, 4
// 0053eea8  8bc6                 mov eax, esi
// 0053eeaa  5e                   pop esi
// 0053eeab  59                   pop ecx
// 0053eeac  c3                   ret 
// library rbxgs/v8datamodel\DebugSettings.cpp (function ??$getset@P8DebugSettings@RBX@@BEMXZ@?$PropDescriptor@VDebugSettings@RBX@@M@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@M@Reflection@RBX@@@std@@P8DebugSettings@2@BEMXZH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
