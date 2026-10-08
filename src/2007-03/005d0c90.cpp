// roc 2007-03 005d0c90  unit: seg_005d0000  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005d0c90
//
// 005d0c90  6aff                 push -1
// 005d0c92  6808ad7500           push 0x75ad08
// 005d0c97  64a100000000         mov eax, dword ptr fs:[0]
// 005d0c9d  50                   push eax
// 005d0c9e  64892500000000       mov dword ptr fs:[0], esp
// 005d0ca5  51                   push ecx
// 005d0ca6  8b442414             mov eax, dword ptr [esp + 0x14]
// 005d0caa  56                   push esi
// 005d0cab  8bf1                 mov esi, ecx
// 005d0cad  50                   push eax
// 005d0cae  89742408             mov dword ptr [esp + 8], esi
// 005d0cb2  e8d9830100           call 0x5e9090
// 005d0cb7  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005d0cbb  51                   push ecx
// 005d0cbc  8d5628               lea edx, [esi + 0x28]
// 005d0cbf  52                   push edx
// 005d0cc0  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005d0cc8  c706a4b57b00         mov dword ptr [esi], 0x7bb5a4
// 005d0cce  c746048cb57b00       mov dword ptr [esi + 4], 0x7bb58c
// 005d0cd5  e8d6c1fbff           call 0x58ceb0
// 005d0cda  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005d0cde  83c408               add esp, 8
// 005d0ce1  8bc6                 mov eax, esi
// 005d0ce3  5e                   pop esi
// 005d0ce4  64890d00000000       mov dword ptr fs:[0], ecx
// 005d0ceb  83c410               add esp, 0x10
// 005d0cee  c20800               ret 8
// library rbxgs/v8datamodel\ToolMouseCommand.cpp (function ??0ToolMouseCommand@RBX@@QAE@PAVWorkspace@1@PAVTool@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ToolMouseCommand.cpp
