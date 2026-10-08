// roc 2007-03 00605320  unit: seg_00600000  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00605320
//
// 00605320  51                   push ecx
// 00605321  6a10                 push 0x10
// 00605323  c744240400000000     mov dword ptr [esp + 4], 0
// 0060532b  e8d88d0100           call 0x61e108
// 00605330  83c404               add esp, 4
// 00605333  85c0                 test eax, eax
// 00605335  7416                 je 0x60534d
// 00605337  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0060533b  8b542410             mov edx, dword ptr [esp + 0x10]
// 0060533f  c700b40f7c00         mov dword ptr [eax], 0x7c0fb4
// 00605345  894808               mov dword ptr [eax + 8], ecx
// 00605348  89500c               mov dword ptr [eax + 0xc], edx
// 0060534b  eb02                 jmp 0x60534f
// 0060534d  33c0                 xor eax, eax
// 0060534f  56                   push esi
// 00605350  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00605354  6a00                 push 0
// 00605356  c744240800000000     mov dword ptr [esp + 8], 0
// 0060535e  8906                 mov dword ptr [esi], eax
// 00605360  e88b8d0100           call 0x61e0f0
// 00605365  83c404               add esp, 4
// 00605368  8bc6                 mov eax, esi
// 0060536a  5e                   pop esi
// 0060536b  59                   pop ecx
// 0060536c  c3                   ret 
// library rbxgs/v8datamodel\DebugSettings.cpp (function ??$getset@P8DebugSettings@RBX@@BEMXZ@?$PropDescriptor@VDebugSettings@RBX@@M@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@M@Reflection@RBX@@@std@@P8DebugSettings@2@BEMXZH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
