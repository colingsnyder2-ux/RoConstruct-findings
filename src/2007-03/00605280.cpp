// roc 2007-03 00605280  unit: seg_00600000  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00605280
//
// 00605280  51                   push ecx
// 00605281  6a10                 push 0x10
// 00605283  c744240400000000     mov dword ptr [esp + 4], 0
// 0060528b  e8788e0100           call 0x61e108
// 00605290  83c404               add esp, 4
// 00605293  85c0                 test eax, eax
// 00605295  7416                 je 0x6052ad
// 00605297  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0060529b  8b542410             mov edx, dword ptr [esp + 0x10]
// 0060529f  c700940f7c00         mov dword ptr [eax], 0x7c0f94
// 006052a5  894808               mov dword ptr [eax + 8], ecx
// 006052a8  89500c               mov dword ptr [eax + 0xc], edx
// 006052ab  eb02                 jmp 0x6052af
// 006052ad  33c0                 xor eax, eax
// 006052af  56                   push esi
// 006052b0  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006052b4  6a00                 push 0
// 006052b6  c744240800000000     mov dword ptr [esp + 8], 0
// 006052be  8906                 mov dword ptr [esi], eax
// 006052c0  e82b8e0100           call 0x61e0f0
// 006052c5  83c404               add esp, 4
// 006052c8  8bc6                 mov eax, esi
// 006052ca  5e                   pop esi
// 006052cb  59                   pop ecx
// 006052cc  c3                   ret 
// library rbxgs/v8datamodel\DebugSettings.cpp (function ??$getset@P8DebugSettings@RBX@@BEMXZ@?$PropDescriptor@VDebugSettings@RBX@@M@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@M@Reflection@RBX@@@std@@P8DebugSettings@2@BEMXZH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
