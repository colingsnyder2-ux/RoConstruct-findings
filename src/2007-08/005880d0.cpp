// roc 2007-08 005880d0  unit: RBX::SoundChannel  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005880d0
//
// 005880d0  51                   push ecx
// 005880d1  6a10                 push 0x10
// 005880d3  c744240400000000     mov dword ptr [esp + 4], 0
// 005880db  e8167e0a00           call 0x62fef6
// 005880e0  83c404               add esp, 4
// 005880e3  85c0                 test eax, eax
// 005880e5  7416                 je 0x5880fd
// 005880e7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005880eb  8b542410             mov edx, dword ptr [esp + 0x10]
// 005880ef  c700dce97a00         mov dword ptr [eax], 0x7ae9dc
// 005880f5  894808               mov dword ptr [eax + 8], ecx
// 005880f8  89500c               mov dword ptr [eax + 0xc], edx
// 005880fb  eb02                 jmp 0x5880ff
// 005880fd  33c0                 xor eax, eax
// 005880ff  56                   push esi
// 00588100  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00588104  6a00                 push 0
// 00588106  c744240800000000     mov dword ptr [esp + 8], 0
// 0058810e  8906                 mov dword ptr [esi], eax
// 00588110  e84d7b0a00           call 0x62fc62
// 00588115  83c404               add esp, 4
// 00588118  8bc6                 mov eax, esi
// 0058811a  5e                   pop esi
// 0058811b  59                   pop ecx
// 0058811c  c3                   ret 
// library rbxgs/v8datamodel\DebugSettings.cpp (function ??$getset@P8DebugSettings@RBX@@BEMXZ@?$PropDescriptor@VDebugSettings@RBX@@M@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@M@Reflection@RBX@@@std@@P8DebugSettings@2@BEMXZH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
