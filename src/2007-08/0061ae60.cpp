// roc 2007-08 0061ae60  unit: RBX::P8Camera::?$GetSetImpl  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0061ae60
//
// 0061ae60  51                   push ecx
// 0061ae61  6a10                 push 0x10
// 0061ae63  c744240400000000     mov dword ptr [esp + 4], 0
// 0061ae6b  e886500100           call 0x62fef6
// 0061ae70  83c404               add esp, 4
// 0061ae73  85c0                 test eax, eax
// 0061ae75  7416                 je 0x61ae8d
// 0061ae77  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0061ae7b  8b542410             mov edx, dword ptr [esp + 0x10]
// 0061ae7f  c700bc3a7c00         mov dword ptr [eax], 0x7c3abc
// 0061ae85  894808               mov dword ptr [eax + 8], ecx
// 0061ae88  89500c               mov dword ptr [eax + 0xc], edx
// 0061ae8b  eb02                 jmp 0x61ae8f
// 0061ae8d  33c0                 xor eax, eax
// 0061ae8f  56                   push esi
// 0061ae90  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0061ae94  6a00                 push 0
// 0061ae96  c744240800000000     mov dword ptr [esp + 8], 0
// 0061ae9e  8906                 mov dword ptr [esi], eax
// 0061aea0  e8bd4d0100           call 0x62fc62
// 0061aea5  83c404               add esp, 4
// 0061aea8  8bc6                 mov eax, esi
// 0061aeaa  5e                   pop esi
// 0061aeab  59                   pop ecx
// 0061aeac  c3                   ret 
// library rbxgs/v8datamodel\DebugSettings.cpp (function ??$getset@P8DebugSettings@RBX@@BEMXZ@?$PropDescriptor@VDebugSettings@RBX@@M@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@M@Reflection@RBX@@@std@@P8DebugSettings@2@BEMXZH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
