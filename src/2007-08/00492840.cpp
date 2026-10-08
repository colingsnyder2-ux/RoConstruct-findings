// roc 2007-08 00492840  unit: RBX::Network::Players  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00492840
//
// 00492840  51                   push ecx
// 00492841  6a10                 push 0x10
// 00492843  c744240400000000     mov dword ptr [esp + 4], 0
// 0049284b  e8a6d61900           call 0x62fef6
// 00492850  83c404               add esp, 4
// 00492853  85c0                 test eax, eax
// 00492855  7416                 je 0x49286d
// 00492857  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0049285b  8b542410             mov edx, dword ptr [esp + 0x10]
// 0049285f  c7004cb87900         mov dword ptr [eax], 0x79b84c
// 00492865  894808               mov dword ptr [eax + 8], ecx
// 00492868  89500c               mov dword ptr [eax + 0xc], edx
// 0049286b  eb02                 jmp 0x49286f
// 0049286d  33c0                 xor eax, eax
// 0049286f  56                   push esi
// 00492870  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00492874  6a00                 push 0
// 00492876  c744240800000000     mov dword ptr [esp + 8], 0
// 0049287e  8906                 mov dword ptr [esi], eax
// 00492880  e8ddd31900           call 0x62fc62
// 00492885  83c404               add esp, 4
// 00492888  8bc6                 mov eax, esi
// 0049288a  5e                   pop esi
// 0049288b  59                   pop ecx
// 0049288c  c3                   ret 
// library rbxgs/v8datamodel\DebugSettings.cpp (function ??$getset@P8DebugSettings@RBX@@BEMXZ@?$PropDescriptor@VDebugSettings@RBX@@M@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@M@Reflection@RBX@@@std@@P8DebugSettings@2@BEMXZH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
