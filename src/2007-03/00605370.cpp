// roc 2007-03 00605370  unit: seg_00600000  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00605370
//
// 00605370  64a100000000         mov eax, dword ptr fs:[0]
// 00605376  6aff                 push -1
// 00605378  6880cb7500           push 0x75cb80
// 0060537d  50                   push eax
// 0060537e  64892500000000       mov dword ptr fs:[0], esp
// 00605385  8b442424             mov eax, dword ptr [esp + 0x24]
// 00605389  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0060538d  56                   push esi
// 0060538e  50                   push eax
// 0060538f  8b442420             mov eax, dword ptr [esp + 0x20]
// 00605393  8bf1                 mov esi, ecx
// 00605395  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00605399  51                   push ecx
// 0060539a  52                   push edx
// 0060539b  50                   push eax
// 0060539c  8d4c2438             lea ecx, [esp + 0x38]
// 006053a0  51                   push ecx
// 006053a1  e8dafeffff           call 0x605280
// 006053a6  8b10                 mov edx, dword ptr [eax]
// 006053a8  83c40c               add esp, 0xc
// 006053ab  8bcc                 mov ecx, esp
// 006053ad  c70000000000         mov dword ptr [eax], 0
// 006053b3  c744241400000000     mov dword ptr [esp + 0x14], 0
// 006053bb  8964242c             mov dword ptr [esp + 0x2c], esp
// 006053bf  8911                 mov dword ptr [ecx], edx
// 006053c1  8b442420             mov eax, dword ptr [esp + 0x20]
// 006053c5  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006053c9  50                   push eax
// 006053ca  51                   push ecx
// 006053cb  c644241c01           mov byte ptr [esp + 0x1c], 1
// 006053d0  e85bc7fcff           call 0x5d1b30
// 006053d5  50                   push eax
// 006053d6  8bce                 mov ecx, esi
// 006053d8  c644242000           mov byte ptr [esp + 0x20], 0
// 006053dd  e80ef8f2ff           call 0x534bf0
// 006053e2  8b542428             mov edx, dword ptr [esp + 0x28]
// 006053e6  52                   push edx
// 006053e7  e8048d0100           call 0x61e0f0
// 006053ec  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006053f0  83c404               add esp, 4
// 006053f3  c706c40f7c00         mov dword ptr [esi], 0x7c0fc4
// 006053f9  8bc6                 mov eax, esi
// 006053fb  64890d00000000       mov dword ptr fs:[0], ecx
// 00605402  5e                   pop esi
// 00605403  83c40c               add esp, 0xc
// 00605406  c21800               ret 0x18
// library rbxgs/v8datamodel\DebugSettings.cpp (function ??$?0P8DebugSettings@RBX@@BEMXZH@?$PropDescriptor@VDebugSettings@RBX@@M@Reflection@RBX@@QAE@PBD0P8DebugSettings@2@BEMXZHW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
