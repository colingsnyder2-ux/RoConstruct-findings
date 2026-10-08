// roc 2010-06 00676680  unit: RBX::Assembly  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00676680
//
// 00676680  53                   push ebx
// 00676681  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00676685  55                   push ebp
// 00676686  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0067668a  56                   push esi
// 0067668b  8d741b02             lea esi, [ebx + ebx + 2]
// 0067668f  3bf5                 cmp esi, ebp
// 00676691  57                   push edi
// 00676692  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00676696  895c2418             mov dword ptr [esp + 0x18], ebx
// 0067669a  7d29                 jge 0x6766c5
// 0067669c  8d642400             lea esp, [esp]
// 006766a0  8b44b7fc             mov eax, dword ptr [edi + esi*4 - 4]
// 006766a4  8b0cb7               mov ecx, dword ptr [edi + esi*4]
// 006766a7  50                   push eax
// 006766a8  51                   push ecx
// 006766a9  ff54242c             call dword ptr [esp + 0x2c]
// 006766ad  83c408               add esp, 8
// 006766b0  84c0                 test al, al
// 006766b2  7401                 je 0x6766b5
// 006766b4  4e                   dec esi
// 006766b5  8b14b7               mov edx, dword ptr [edi + esi*4]
// 006766b8  89149f               mov dword ptr [edi + ebx*4], edx
// 006766bb  8bde                 mov ebx, esi
// 006766bd  8d743602             lea esi, [esi + esi + 2]
// 006766c1  3bf5                 cmp esi, ebp
// 006766c3  7cdb                 jl 0x6766a0
// 006766c5  750a                 jne 0x6766d1
// 006766c7  8b44affc             mov eax, dword ptr [edi + ebp*4 - 4]
// 006766cb  89049f               mov dword ptr [edi + ebx*4], eax
// 006766ce  8d5dff               lea ebx, [ebp - 1]
// 006766d1  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006766d5  8b542420             mov edx, dword ptr [esp + 0x20]
// 006766d9  8b442418             mov eax, dword ptr [esp + 0x18]
// 006766dd  51                   push ecx
// 006766de  52                   push edx
// 006766df  50                   push eax
// 006766e0  53                   push ebx
// 006766e1  57                   push edi
// 006766e2  e8e9faffff           call 0x6761d0
// 006766e7  83c414               add esp, 0x14
// 006766ea  5f                   pop edi
// 006766eb  5e                   pop esi
// 006766ec  5d                   pop ebp
// 006766ed  5b                   pop ebx
// 006766ee  c3                   ret 
// library rbxgs/v8world\Assembly.cpp (function ??$_Adjust_heap@PAPAVMotorJoint@RBX@@HPAV12@P6A_NPBV12@0@Z@std@@YAXPAPAVMotorJoint@RBX@@HHPAV12@P6A_NPBV12@2@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Assembly.cpp
