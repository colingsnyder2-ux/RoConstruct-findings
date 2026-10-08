// roc 2007-08 0061ae10  unit: RBX::P8Camera::?$GetSetImpl  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0061ae10
//
// 0061ae10  51                   push ecx
// 0061ae11  6a10                 push 0x10
// 0061ae13  c744240400000000     mov dword ptr [esp + 4], 0
// 0061ae1b  e8d6500100           call 0x62fef6
// 0061ae20  83c404               add esp, 4
// 0061ae23  85c0                 test eax, eax
// 0061ae25  7416                 je 0x61ae3d
// 0061ae27  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0061ae2b  8b542410             mov edx, dword ptr [esp + 0x10]
// 0061ae2f  c700ac3a7c00         mov dword ptr [eax], 0x7c3aac
// 0061ae35  894808               mov dword ptr [eax + 8], ecx
// 0061ae38  89500c               mov dword ptr [eax + 0xc], edx
// 0061ae3b  eb02                 jmp 0x61ae3f
// 0061ae3d  33c0                 xor eax, eax
// 0061ae3f  56                   push esi
// 0061ae40  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0061ae44  6a00                 push 0
// 0061ae46  c744240800000000     mov dword ptr [esp + 8], 0
// 0061ae4e  8906                 mov dword ptr [esi], eax
// 0061ae50  e80d4e0100           call 0x62fc62
// 0061ae55  83c404               add esp, 4
// 0061ae58  8bc6                 mov eax, esi
// 0061ae5a  5e                   pop esi
// 0061ae5b  59                   pop ecx
// 0061ae5c  c3                   ret 
// library rbxgs/v8datamodel\DebugSettings.cpp (function ??$getset@P8DebugSettings@RBX@@BEMXZ@?$PropDescriptor@VDebugSettings@RBX@@M@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@M@Reflection@RBX@@@std@@P8DebugSettings@2@BEMXZH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
