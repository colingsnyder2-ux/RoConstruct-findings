// roc 2009-06 006761e0  unit: RBX::Assembly  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006761e0
//
// 006761e0  53                   push ebx
// 006761e1  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 006761e5  55                   push ebp
// 006761e6  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 006761ea  56                   push esi
// 006761eb  8d741b02             lea esi, [ebx + ebx + 2]
// 006761ef  3bf5                 cmp esi, ebp
// 006761f1  57                   push edi
// 006761f2  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 006761f6  895c2418             mov dword ptr [esp + 0x18], ebx
// 006761fa  7d29                 jge 0x676225
// 006761fc  8d642400             lea esp, [esp]
// 00676200  8b44b7fc             mov eax, dword ptr [edi + esi*4 - 4]
// 00676204  8b0cb7               mov ecx, dword ptr [edi + esi*4]
// 00676207  50                   push eax
// 00676208  51                   push ecx
// 00676209  ff54242c             call dword ptr [esp + 0x2c]
// 0067620d  83c408               add esp, 8
// 00676210  84c0                 test al, al
// 00676212  7401                 je 0x676215
// 00676214  4e                   dec esi
// 00676215  8b14b7               mov edx, dword ptr [edi + esi*4]
// 00676218  89149f               mov dword ptr [edi + ebx*4], edx
// 0067621b  8bde                 mov ebx, esi
// 0067621d  8d743602             lea esi, [esi + esi + 2]
// 00676221  3bf5                 cmp esi, ebp
// 00676223  7cdb                 jl 0x676200
// 00676225  750a                 jne 0x676231
// 00676227  8b44affc             mov eax, dword ptr [edi + ebp*4 - 4]
// 0067622b  89049f               mov dword ptr [edi + ebx*4], eax
// 0067622e  8d5dff               lea ebx, [ebp - 1]
// 00676231  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00676235  8b542420             mov edx, dword ptr [esp + 0x20]
// 00676239  8b442418             mov eax, dword ptr [esp + 0x18]
// 0067623d  51                   push ecx
// 0067623e  52                   push edx
// 0067623f  50                   push eax
// 00676240  53                   push ebx
// 00676241  57                   push edi
// 00676242  e8a9fbffff           call 0x675df0
// 00676247  83c414               add esp, 0x14
// 0067624a  5f                   pop edi
// 0067624b  5e                   pop esi
// 0067624c  5d                   pop ebp
// 0067624d  5b                   pop ebx
// 0067624e  c3                   ret 
// library rbxgs/v8world\Assembly.cpp (function ??$_Adjust_heap@PAPAVMotorJoint@RBX@@HPAV12@P6A_NPBV12@0@Z@std@@YAXPAPAVMotorJoint@RBX@@HHPAV12@P6A_NPBV12@2@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Assembly.cpp
