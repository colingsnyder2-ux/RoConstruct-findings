// roc 2010-06 00676fd0  unit: RBX::Assembly  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00676fd0
//
// 00676fd0  56                   push esi
// 00676fd1  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00676fd5  57                   push edi
// 00676fd6  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00676fda  2bf7                 sub esi, edi
// 00676fdc  8bc6                 mov eax, esi
// 00676fde  c1f802               sar eax, 2
// 00676fe1  83f801               cmp eax, 1
// 00676fe4  7e31                 jle 0x677017
// 00676fe6  53                   push ebx
// 00676fe7  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00676feb  8b4437fc             mov eax, dword ptr [edi + esi - 4]
// 00676fef  8b0f                 mov ecx, dword ptr [edi]
// 00676ff1  53                   push ebx
// 00676ff2  50                   push eax
// 00676ff3  8d56fc               lea edx, [esi - 4]
// 00676ff6  c1fa02               sar edx, 2
// 00676ff9  52                   push edx
// 00676ffa  6a00                 push 0
// 00676ffc  57                   push edi
// 00676ffd  894c37fc             mov dword ptr [edi + esi - 4], ecx
// 00677001  e87af6ffff           call 0x676680
// 00677006  83ee04               sub esi, 4
// 00677009  8bc6                 mov eax, esi
// 0067700b  c1f802               sar eax, 2
// 0067700e  83c414               add esp, 0x14
// 00677011  83f801               cmp eax, 1
// 00677014  7fd5                 jg 0x676feb
// 00677016  5b                   pop ebx
// 00677017  5f                   pop edi
// 00677018  5e                   pop esi
// 00677019  c3                   ret 
// library rbxgs/v8world\Assembly.cpp (function ??$_Sort_heap@PAPAVMotorJoint@RBX@@P6A_NPBV12@0@Z@std@@YAXPAPAVMotorJoint@RBX@@0P6A_NPBV12@1@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Assembly.cpp
