// roc 2007-03 0048c550  unit: seg_00480000  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0048c550
//
// 0048c550  51                   push ecx
// 0048c551  6a10                 push 0x10
// 0048c553  c744240400000000     mov dword ptr [esp + 4], 0
// 0048c55b  e8a81b1900           call 0x61e108
// 0048c560  83c404               add esp, 4
// 0048c563  85c0                 test eax, eax
// 0048c565  7416                 je 0x48c57d
// 0048c567  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0048c56b  8b542410             mov edx, dword ptr [esp + 0x10]
// 0048c56f  c70018a97900         mov dword ptr [eax], 0x79a918
// 0048c575  894808               mov dword ptr [eax + 8], ecx
// 0048c578  89500c               mov dword ptr [eax + 0xc], edx
// 0048c57b  eb02                 jmp 0x48c57f
// 0048c57d  33c0                 xor eax, eax
// 0048c57f  56                   push esi
// 0048c580  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0048c584  6a00                 push 0
// 0048c586  c744240800000000     mov dword ptr [esp + 8], 0
// 0048c58e  8906                 mov dword ptr [esi], eax
// 0048c590  e85b1b1900           call 0x61e0f0
// 0048c595  83c404               add esp, 4
// 0048c598  8bc6                 mov eax, esi
// 0048c59a  5e                   pop esi
// 0048c59b  59                   pop ecx
// 0048c59c  c3                   ret 
// library rbxgs/v8datamodel\DebugSettings.cpp (function ??$getset@P8DebugSettings@RBX@@BEMXZ@?$PropDescriptor@VDebugSettings@RBX@@M@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@M@Reflection@RBX@@@std@@P8DebugSettings@2@BEMXZH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
