// roc 2007-08 005d29a0  unit: RBX::ScriptMouseCommand  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005d29a0
//
// 005d29a0  6aff                 push -1
// 005d29a2  68d89c7500           push 0x759cd8
// 005d29a7  64a100000000         mov eax, dword ptr fs:[0]
// 005d29ad  50                   push eax
// 005d29ae  64892500000000       mov dword ptr fs:[0], esp
// 005d29b5  51                   push ecx
// 005d29b6  8b442414             mov eax, dword ptr [esp + 0x14]
// 005d29ba  56                   push esi
// 005d29bb  8bf1                 mov esi, ecx
// 005d29bd  50                   push eax
// 005d29be  89742408             mov dword ptr [esp + 8], esi
// 005d29c2  e899eb0200           call 0x601560
// 005d29c7  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005d29cb  51                   push ecx
// 005d29cc  8d5628               lea edx, [esi + 0x28]
// 005d29cf  52                   push edx
// 005d29d0  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005d29d8  c706bcaf7b00         mov dword ptr [esi], 0x7bafbc
// 005d29de  c74604a0af7b00       mov dword ptr [esi + 4], 0x7bafa0
// 005d29e5  e8f61f0100           call 0x5e49e0
// 005d29ea  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005d29ee  83c408               add esp, 8
// 005d29f1  8bc6                 mov eax, esi
// 005d29f3  5e                   pop esi
// 005d29f4  64890d00000000       mov dword ptr fs:[0], ecx
// 005d29fb  83c410               add esp, 0x10
// 005d29fe  c20800               ret 8
// library rbxgs/v8datamodel\ToolMouseCommand.cpp (function ??0ToolMouseCommand@RBX@@QAE@PAVWorkspace@1@PAVTool@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ToolMouseCommand.cpp
