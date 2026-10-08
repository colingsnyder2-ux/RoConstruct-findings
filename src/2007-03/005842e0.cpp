// roc 2007-03 005842e0  unit: seg_00580000  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005842e0
//
// 005842e0  51                   push ecx
// 005842e1  6a10                 push 0x10
// 005842e3  c744240400000000     mov dword ptr [esp + 4], 0
// 005842eb  e8189e0900           call 0x61e108
// 005842f0  83c404               add esp, 4
// 005842f3  85c0                 test eax, eax
// 005842f5  7416                 je 0x58430d
// 005842f7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005842fb  8b542410             mov edx, dword ptr [esp + 0x10]
// 005842ff  c700d0fa7a00         mov dword ptr [eax], 0x7afad0
// 00584305  894808               mov dword ptr [eax + 8], ecx
// 00584308  89500c               mov dword ptr [eax + 0xc], edx
// 0058430b  eb02                 jmp 0x58430f
// 0058430d  33c0                 xor eax, eax
// 0058430f  56                   push esi
// 00584310  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00584314  6a00                 push 0
// 00584316  c744240800000000     mov dword ptr [esp + 8], 0
// 0058431e  8906                 mov dword ptr [esi], eax
// 00584320  e8cb9d0900           call 0x61e0f0
// 00584325  83c404               add esp, 4
// 00584328  8bc6                 mov eax, esi
// 0058432a  5e                   pop esi
// 0058432b  59                   pop ecx
// 0058432c  c3                   ret 
// library rbxgs/v8datamodel\DebugSettings.cpp (function ??$getset@P8DebugSettings@RBX@@BEMXZ@?$PropDescriptor@VDebugSettings@RBX@@M@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@M@Reflection@RBX@@@std@@P8DebugSettings@2@BEMXZH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
