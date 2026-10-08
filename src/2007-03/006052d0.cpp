// roc 2007-03 006052d0  unit: seg_00600000  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006052d0
//
// 006052d0  51                   push ecx
// 006052d1  6a10                 push 0x10
// 006052d3  c744240400000000     mov dword ptr [esp + 4], 0
// 006052db  e8288e0100           call 0x61e108
// 006052e0  83c404               add esp, 4
// 006052e3  85c0                 test eax, eax
// 006052e5  7416                 je 0x6052fd
// 006052e7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006052eb  8b542410             mov edx, dword ptr [esp + 0x10]
// 006052ef  c700a40f7c00         mov dword ptr [eax], 0x7c0fa4
// 006052f5  894808               mov dword ptr [eax + 8], ecx
// 006052f8  89500c               mov dword ptr [eax + 0xc], edx
// 006052fb  eb02                 jmp 0x6052ff
// 006052fd  33c0                 xor eax, eax
// 006052ff  56                   push esi
// 00605300  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00605304  6a00                 push 0
// 00605306  c744240800000000     mov dword ptr [esp + 8], 0
// 0060530e  8906                 mov dword ptr [esi], eax
// 00605310  e8db8d0100           call 0x61e0f0
// 00605315  83c404               add esp, 4
// 00605318  8bc6                 mov eax, esi
// 0060531a  5e                   pop esi
// 0060531b  59                   pop ecx
// 0060531c  c3                   ret 
// library rbxgs/v8datamodel\DebugSettings.cpp (function ??$getset@P8DebugSettings@RBX@@BEMXZ@?$PropDescriptor@VDebugSettings@RBX@@M@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@M@Reflection@RBX@@@std@@P8DebugSettings@2@BEMXZH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
