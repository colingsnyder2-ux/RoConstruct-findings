// roc 2007-03 0053fd70  unit: seg_00530000  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0053fd70
//
// 0053fd70  51                   push ecx
// 0053fd71  6a10                 push 0x10
// 0053fd73  c744240400000000     mov dword ptr [esp + 4], 0
// 0053fd7b  e888e30d00           call 0x61e108
// 0053fd80  83c404               add esp, 4
// 0053fd83  85c0                 test eax, eax
// 0053fd85  7416                 je 0x53fd9d
// 0053fd87  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0053fd8b  8b542410             mov edx, dword ptr [esp + 0x10]
// 0053fd8f  c700a0657a00         mov dword ptr [eax], 0x7a65a0
// 0053fd95  894808               mov dword ptr [eax + 8], ecx
// 0053fd98  89500c               mov dword ptr [eax + 0xc], edx
// 0053fd9b  eb02                 jmp 0x53fd9f
// 0053fd9d  33c0                 xor eax, eax
// 0053fd9f  56                   push esi
// 0053fda0  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0053fda4  6a00                 push 0
// 0053fda6  c744240800000000     mov dword ptr [esp + 8], 0
// 0053fdae  8906                 mov dword ptr [esi], eax
// 0053fdb0  e83be30d00           call 0x61e0f0
// 0053fdb5  83c404               add esp, 4
// 0053fdb8  8bc6                 mov eax, esi
// 0053fdba  5e                   pop esi
// 0053fdbb  59                   pop ecx
// 0053fdbc  c3                   ret 
// library rbxgs/v8datamodel\DebugSettings.cpp (function ??$getset@P8DebugSettings@RBX@@BEMXZ@?$PropDescriptor@VDebugSettings@RBX@@M@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@M@Reflection@RBX@@@std@@P8DebugSettings@2@BEMXZH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
