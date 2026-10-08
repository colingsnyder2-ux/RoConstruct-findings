// roc 2007-03 005430d0  unit: seg_00540000  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005430d0
//
// 005430d0  51                   push ecx
// 005430d1  6a10                 push 0x10
// 005430d3  c744240400000000     mov dword ptr [esp + 4], 0
// 005430db  e828b00d00           call 0x61e108
// 005430e0  83c404               add esp, 4
// 005430e3  85c0                 test eax, eax
// 005430e5  7416                 je 0x5430fd
// 005430e7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005430eb  8b542410             mov edx, dword ptr [esp + 0x10]
// 005430ef  c7009c687a00         mov dword ptr [eax], 0x7a689c
// 005430f5  894808               mov dword ptr [eax + 8], ecx
// 005430f8  89500c               mov dword ptr [eax + 0xc], edx
// 005430fb  eb02                 jmp 0x5430ff
// 005430fd  33c0                 xor eax, eax
// 005430ff  56                   push esi
// 00543100  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00543104  6a00                 push 0
// 00543106  c744240800000000     mov dword ptr [esp + 8], 0
// 0054310e  8906                 mov dword ptr [esi], eax
// 00543110  e8dbaf0d00           call 0x61e0f0
// 00543115  83c404               add esp, 4
// 00543118  8bc6                 mov eax, esi
// 0054311a  5e                   pop esi
// 0054311b  59                   pop ecx
// 0054311c  c3                   ret 
// library rbxgs/v8datamodel\DebugSettings.cpp (function ??$getset@P8DebugSettings@RBX@@BEMXZ@?$PropDescriptor@VDebugSettings@RBX@@M@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@M@Reflection@RBX@@@std@@P8DebugSettings@2@BEMXZH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
