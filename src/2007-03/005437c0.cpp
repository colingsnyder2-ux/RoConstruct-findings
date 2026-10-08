// roc 2007-03 005437c0  unit: seg_00540000  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005437c0
//
// 005437c0  64a100000000         mov eax, dword ptr fs:[0]
// 005437c6  6aff                 push -1
// 005437c8  6880cb7500           push 0x75cb80
// 005437cd  50                   push eax
// 005437ce  64892500000000       mov dword ptr fs:[0], esp
// 005437d5  8b442424             mov eax, dword ptr [esp + 0x24]
// 005437d9  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005437dd  56                   push esi
// 005437de  50                   push eax
// 005437df  8b442420             mov eax, dword ptr [esp + 0x20]
// 005437e3  8bf1                 mov esi, ecx
// 005437e5  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005437e9  51                   push ecx
// 005437ea  52                   push edx
// 005437eb  50                   push eax
// 005437ec  8d4c2438             lea ecx, [esp + 0x38]
// 005437f0  51                   push ecx
// 005437f1  e88af8ffff           call 0x543080
// 005437f6  8b10                 mov edx, dword ptr [eax]
// 005437f8  83c40c               add esp, 0xc
// 005437fb  8bcc                 mov ecx, esp
// 005437fd  c70000000000         mov dword ptr [eax], 0
// 00543803  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0054380b  8964242c             mov dword ptr [esp + 0x2c], esp
// 0054380f  8911                 mov dword ptr [ecx], edx
// 00543811  8b442420             mov eax, dword ptr [esp + 0x20]
// 00543815  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00543819  50                   push eax
// 0054381a  51                   push ecx
// 0054381b  c644241c01           mov byte ptr [esp + 0x1c], 1
// 00543820  e82bffffff           call 0x543750
// 00543825  50                   push eax
// 00543826  8bce                 mov ecx, esi
// 00543828  c644242000           mov byte ptr [esp + 0x20], 0
// 0054382d  e88e10f0ff           call 0x4448c0
// 00543832  8b542428             mov edx, dword ptr [esp + 0x28]
// 00543836  52                   push edx
// 00543837  e8b4a80d00           call 0x61e0f0
// 0054383c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00543840  83c404               add esp, 4
// 00543843  c7067c6a7a00         mov dword ptr [esi], 0x7a6a7c
// 00543849  8bc6                 mov eax, esi
// 0054384b  64890d00000000       mov dword ptr fs:[0], ecx
// 00543852  5e                   pop esi
// 00543853  83c40c               add esp, 0xc
// 00543856  c21800               ret 0x18
// library rbxgs/v8datamodel\DebugSettings.cpp (function ??$?0P8DebugSettings@RBX@@BEMXZH@?$PropDescriptor@VDebugSettings@RBX@@M@Reflection@RBX@@QAE@PBD0P8DebugSettings@2@BEMXZHW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
