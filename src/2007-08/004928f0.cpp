// roc 2007-08 004928f0  unit: RBX::Network::Players  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004928f0
//
// 004928f0  51                   push ecx
// 004928f1  6a10                 push 0x10
// 004928f3  c744240400000000     mov dword ptr [esp + 4], 0
// 004928fb  e8f6d51900           call 0x62fef6
// 00492900  83c404               add esp, 4
// 00492903  85c0                 test eax, eax
// 00492905  7416                 je 0x49291d
// 00492907  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0049290b  8b542410             mov edx, dword ptr [esp + 0x10]
// 0049290f  c7007cb87900         mov dword ptr [eax], 0x79b87c
// 00492915  894808               mov dword ptr [eax + 8], ecx
// 00492918  89500c               mov dword ptr [eax + 0xc], edx
// 0049291b  eb02                 jmp 0x49291f
// 0049291d  33c0                 xor eax, eax
// 0049291f  56                   push esi
// 00492920  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00492924  6a00                 push 0
// 00492926  c744240800000000     mov dword ptr [esp + 8], 0
// 0049292e  8906                 mov dword ptr [esi], eax
// 00492930  e82dd31900           call 0x62fc62
// 00492935  83c404               add esp, 4
// 00492938  8bc6                 mov eax, esi
// 0049293a  5e                   pop esi
// 0049293b  59                   pop ecx
// 0049293c  c3                   ret 
// library rbxgs/v8datamodel\DebugSettings.cpp (function ??$getset@P8DebugSettings@RBX@@BEMXZ@?$PropDescriptor@VDebugSettings@RBX@@M@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@M@Reflection@RBX@@@std@@P8DebugSettings@2@BEMXZH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
