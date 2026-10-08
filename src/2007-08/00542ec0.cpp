// roc 2007-08 00542ec0  unit: RBX::VDebugSettings::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00542ec0
//
// 00542ec0  51                   push ecx
// 00542ec1  6a10                 push 0x10
// 00542ec3  c744240400000000     mov dword ptr [esp + 4], 0
// 00542ecb  e826d00e00           call 0x62fef6
// 00542ed0  83c404               add esp, 4
// 00542ed3  85c0                 test eax, eax
// 00542ed5  7416                 je 0x542eed
// 00542ed7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00542edb  8b542410             mov edx, dword ptr [esp + 0x10]
// 00542edf  c700fc677a00         mov dword ptr [eax], 0x7a67fc
// 00542ee5  894808               mov dword ptr [eax + 8], ecx
// 00542ee8  89500c               mov dword ptr [eax + 0xc], edx
// 00542eeb  eb02                 jmp 0x542eef
// 00542eed  33c0                 xor eax, eax
// 00542eef  56                   push esi
// 00542ef0  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00542ef4  6a00                 push 0
// 00542ef6  c744240800000000     mov dword ptr [esp + 8], 0
// 00542efe  8906                 mov dword ptr [esi], eax
// 00542f00  e85dcd0e00           call 0x62fc62
// 00542f05  83c404               add esp, 4
// 00542f08  8bc6                 mov eax, esi
// 00542f0a  5e                   pop esi
// 00542f0b  59                   pop ecx
// 00542f0c  c3                   ret 
// library rbxgs/v8datamodel\DebugSettings.cpp (function ??$getset@P8DebugSettings@RBX@@BEMXZ@?$PropDescriptor@VDebugSettings@RBX@@M@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@M@Reflection@RBX@@@std@@P8DebugSettings@2@BEMXZH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
