// roc 2007-03 00605540  unit: seg_00600000  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00605540
//
// 00605540  64a100000000         mov eax, dword ptr fs:[0]
// 00605546  6aff                 push -1
// 00605548  6880cb7500           push 0x75cb80
// 0060554d  50                   push eax
// 0060554e  64892500000000       mov dword ptr fs:[0], esp
// 00605555  8b442424             mov eax, dword ptr [esp + 0x24]
// 00605559  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0060555d  56                   push esi
// 0060555e  50                   push eax
// 0060555f  8b442420             mov eax, dword ptr [esp + 0x20]
// 00605563  8bf1                 mov esi, ecx
// 00605565  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00605569  51                   push ecx
// 0060556a  52                   push edx
// 0060556b  50                   push eax
// 0060556c  8d4c2438             lea ecx, [esp + 0x38]
// 00605570  51                   push ecx
// 00605571  e8aafdffff           call 0x605320
// 00605576  8b10                 mov edx, dword ptr [eax]
// 00605578  83c40c               add esp, 0xc
// 0060557b  8bcc                 mov ecx, esp
// 0060557d  c70000000000         mov dword ptr [eax], 0
// 00605583  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0060558b  8964242c             mov dword ptr [esp + 0x2c], esp
// 0060558f  8911                 mov dword ptr [ecx], edx
// 00605591  8b442420             mov eax, dword ptr [esp + 0x20]
// 00605595  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00605599  50                   push eax
// 0060559a  51                   push ecx
// 0060559b  c644241c01           mov byte ptr [esp + 0x1c], 1
// 006055a0  e88bc5fcff           call 0x5d1b30
// 006055a5  50                   push eax
// 006055a6  8bce                 mov ecx, esi
// 006055a8  c644242000           mov byte ptr [esp + 0x20], 0
// 006055ad  e8eed3e3ff           call 0x4429a0
// 006055b2  8b542428             mov edx, dword ptr [esp + 0x28]
// 006055b6  52                   push edx
// 006055b7  e8348b0100           call 0x61e0f0
// 006055bc  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006055c0  83c404               add esp, 4
// 006055c3  c70624107c00         mov dword ptr [esi], 0x7c1024
// 006055c9  8bc6                 mov eax, esi
// 006055cb  64890d00000000       mov dword ptr fs:[0], ecx
// 006055d2  5e                   pop esi
// 006055d3  83c40c               add esp, 0xc
// 006055d6  c21800               ret 0x18
// library rbxgs/v8datamodel\DebugSettings.cpp (function ??$?0P8DebugSettings@RBX@@BEMXZH@?$PropDescriptor@VDebugSettings@RBX@@M@Reflection@RBX@@QAE@PBD0P8DebugSettings@2@BEMXZHW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
