// roc 2007-08 005b3b30  unit: RBX::Assembly  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b3b30
//
// 005b3b30  56                   push esi
// 005b3b31  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005b3b35  57                   push edi
// 005b3b36  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005b3b3a  2bf7                 sub esi, edi
// 005b3b3c  8bc6                 mov eax, esi
// 005b3b3e  c1f802               sar eax, 2
// 005b3b41  83f801               cmp eax, 1
// 005b3b44  7e31                 jle 0x5b3b77
// 005b3b46  53                   push ebx
// 005b3b47  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 005b3b4b  8b4437fc             mov eax, dword ptr [edi + esi - 4]
// 005b3b4f  8b0f                 mov ecx, dword ptr [edi]
// 005b3b51  53                   push ebx
// 005b3b52  50                   push eax
// 005b3b53  8d56fc               lea edx, [esi - 4]
// 005b3b56  c1fa02               sar edx, 2
// 005b3b59  52                   push edx
// 005b3b5a  6a00                 push 0
// 005b3b5c  57                   push edi
// 005b3b5d  894c37fc             mov dword ptr [edi + esi - 4], ecx
// 005b3b61  e8faf6ffff           call 0x5b3260
// 005b3b66  83ee04               sub esi, 4
// 005b3b69  8bc6                 mov eax, esi
// 005b3b6b  c1f802               sar eax, 2
// 005b3b6e  83c414               add esp, 0x14
// 005b3b71  83f801               cmp eax, 1
// 005b3b74  7fd5                 jg 0x5b3b4b
// 005b3b76  5b                   pop ebx
// 005b3b77  5f                   pop edi
// 005b3b78  5e                   pop esi
// 005b3b79  c3                   ret 
// library rbxgs/v8world\Assembly.cpp (function ??$_Sort_heap@PAPAVMotorJoint@RBX@@P6A_NPBV12@0@Z@std@@YAXPAPAVMotorJoint@RBX@@0P6A_NPBV12@1@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Assembly.cpp
