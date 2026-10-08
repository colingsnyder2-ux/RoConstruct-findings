// roc 2007-03 0048c600  unit: seg_00480000  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0048c600
//
// 0048c600  51                   push ecx
// 0048c601  6a10                 push 0x10
// 0048c603  c744240400000000     mov dword ptr [esp + 4], 0
// 0048c60b  e8f81a1900           call 0x61e108
// 0048c610  83c404               add esp, 4
// 0048c613  85c0                 test eax, eax
// 0048c615  7416                 je 0x48c62d
// 0048c617  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0048c61b  8b542410             mov edx, dword ptr [esp + 0x10]
// 0048c61f  c70048a97900         mov dword ptr [eax], 0x79a948
// 0048c625  894808               mov dword ptr [eax + 8], ecx
// 0048c628  89500c               mov dword ptr [eax + 0xc], edx
// 0048c62b  eb02                 jmp 0x48c62f
// 0048c62d  33c0                 xor eax, eax
// 0048c62f  56                   push esi
// 0048c630  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0048c634  6a00                 push 0
// 0048c636  c744240800000000     mov dword ptr [esp + 8], 0
// 0048c63e  8906                 mov dword ptr [esi], eax
// 0048c640  e8ab1a1900           call 0x61e0f0
// 0048c645  83c404               add esp, 4
// 0048c648  8bc6                 mov eax, esi
// 0048c64a  5e                   pop esi
// 0048c64b  59                   pop ecx
// 0048c64c  c3                   ret 
// library rbxgs/v8datamodel\DebugSettings.cpp (function ??$getset@P8DebugSettings@RBX@@BEMXZ@?$PropDescriptor@VDebugSettings@RBX@@M@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@M@Reflection@RBX@@@std@@P8DebugSettings@2@BEMXZH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
