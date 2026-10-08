// roc 2010-06 0054b440  unit: RBX::AggregateChunk  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0054b440
//
// 0054b440  56                   push esi
// 0054b441  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0054b445  57                   push edi
// 0054b446  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0054b44a  2bf7                 sub esi, edi
// 0054b44c  8bc6                 mov eax, esi
// 0054b44e  c1f802               sar eax, 2
// 0054b451  83f801               cmp eax, 1
// 0054b454  7e31                 jle 0x54b487
// 0054b456  53                   push ebx
// 0054b457  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0054b45b  8b4437fc             mov eax, dword ptr [edi + esi - 4]
// 0054b45f  8b0f                 mov ecx, dword ptr [edi]
// 0054b461  53                   push ebx
// 0054b462  50                   push eax
// 0054b463  8d56fc               lea edx, [esi - 4]
// 0054b466  c1fa02               sar edx, 2
// 0054b469  52                   push edx
// 0054b46a  6a00                 push 0
// 0054b46c  57                   push edi
// 0054b46d  894c37fc             mov dword ptr [edi + esi - 4], ecx
// 0054b471  e8dafbffff           call 0x54b050
// 0054b476  83ee04               sub esi, 4
// 0054b479  8bc6                 mov eax, esi
// 0054b47b  c1f802               sar eax, 2
// 0054b47e  83c414               add esp, 0x14
// 0054b481  83f801               cmp eax, 1
// 0054b484  7fd5                 jg 0x54b45b
// 0054b486  5b                   pop ebx
// 0054b487  5f                   pop edi
// 0054b488  5e                   pop esi
// 0054b489  c3                   ret 
// library rbxgs/v8world\Assembly.cpp (function ??$_Sort_heap@PAPAVMotorJoint@RBX@@P6A_NPBV12@0@Z@std@@YAXPAPAVMotorJoint@RBX@@0P6A_NPBV12@1@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Assembly.cpp
