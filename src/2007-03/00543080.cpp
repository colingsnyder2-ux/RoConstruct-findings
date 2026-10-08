// roc 2007-03 00543080  unit: seg_00540000  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00543080
//
// 00543080  51                   push ecx
// 00543081  6a10                 push 0x10
// 00543083  c744240400000000     mov dword ptr [esp + 4], 0
// 0054308b  e878b00d00           call 0x61e108
// 00543090  83c404               add esp, 4
// 00543093  85c0                 test eax, eax
// 00543095  7416                 je 0x5430ad
// 00543097  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0054309b  8b542410             mov edx, dword ptr [esp + 0x10]
// 0054309f  c7008c687a00         mov dword ptr [eax], 0x7a688c
// 005430a5  894808               mov dword ptr [eax + 8], ecx
// 005430a8  89500c               mov dword ptr [eax + 0xc], edx
// 005430ab  eb02                 jmp 0x5430af
// 005430ad  33c0                 xor eax, eax
// 005430af  56                   push esi
// 005430b0  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005430b4  6a00                 push 0
// 005430b6  c744240800000000     mov dword ptr [esp + 8], 0
// 005430be  8906                 mov dword ptr [esi], eax
// 005430c0  e82bb00d00           call 0x61e0f0
// 005430c5  83c404               add esp, 4
// 005430c8  8bc6                 mov eax, esi
// 005430ca  5e                   pop esi
// 005430cb  59                   pop ecx
// 005430cc  c3                   ret 
// library rbxgs/v8datamodel\DebugSettings.cpp (function ??$getset@P8DebugSettings@RBX@@BEMXZ@?$PropDescriptor@VDebugSettings@RBX@@M@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@M@Reflection@RBX@@@std@@P8DebugSettings@2@BEMXZH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
