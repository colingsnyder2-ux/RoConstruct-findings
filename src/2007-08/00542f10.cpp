// roc 2007-08 00542f10  unit: RBX::VDebugSettings::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00542f10
//
// 00542f10  51                   push ecx
// 00542f11  6a10                 push 0x10
// 00542f13  c744240400000000     mov dword ptr [esp + 4], 0
// 00542f1b  e8d6cf0e00           call 0x62fef6
// 00542f20  83c404               add esp, 4
// 00542f23  85c0                 test eax, eax
// 00542f25  7416                 je 0x542f3d
// 00542f27  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00542f2b  8b542410             mov edx, dword ptr [esp + 0x10]
// 00542f2f  c7000c687a00         mov dword ptr [eax], 0x7a680c
// 00542f35  894808               mov dword ptr [eax + 8], ecx
// 00542f38  89500c               mov dword ptr [eax + 0xc], edx
// 00542f3b  eb02                 jmp 0x542f3f
// 00542f3d  33c0                 xor eax, eax
// 00542f3f  56                   push esi
// 00542f40  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00542f44  6a00                 push 0
// 00542f46  c744240800000000     mov dword ptr [esp + 8], 0
// 00542f4e  8906                 mov dword ptr [esi], eax
// 00542f50  e80dcd0e00           call 0x62fc62
// 00542f55  83c404               add esp, 4
// 00542f58  8bc6                 mov eax, esi
// 00542f5a  5e                   pop esi
// 00542f5b  59                   pop ecx
// 00542f5c  c3                   ret 
// library rbxgs/v8datamodel\DebugSettings.cpp (function ??$getset@P8DebugSettings@RBX@@BEMXZ@?$PropDescriptor@VDebugSettings@RBX@@M@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@M@Reflection@RBX@@@std@@P8DebugSettings@2@BEMXZH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
