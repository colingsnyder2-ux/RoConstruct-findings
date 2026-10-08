// roc 2007-03 005ac4c0  unit: seg_005a0000  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005ac4c0
//
// 005ac4c0  56                   push esi
// 005ac4c1  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005ac4c5  57                   push edi
// 005ac4c6  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005ac4ca  2bf7                 sub esi, edi
// 005ac4cc  8bc6                 mov eax, esi
// 005ac4ce  c1f802               sar eax, 2
// 005ac4d1  83f801               cmp eax, 1
// 005ac4d4  7e31                 jle 0x5ac507
// 005ac4d6  53                   push ebx
// 005ac4d7  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 005ac4db  8b4437fc             mov eax, dword ptr [edi + esi - 4]
// 005ac4df  8b0f                 mov ecx, dword ptr [edi]
// 005ac4e1  53                   push ebx
// 005ac4e2  50                   push eax
// 005ac4e3  8d56fc               lea edx, [esi - 4]
// 005ac4e6  c1fa02               sar edx, 2
// 005ac4e9  52                   push edx
// 005ac4ea  6a00                 push 0
// 005ac4ec  57                   push edi
// 005ac4ed  894c37fc             mov dword ptr [edi + esi - 4], ecx
// 005ac4f1  e8cafaffff           call 0x5abfc0
// 005ac4f6  83ee04               sub esi, 4
// 005ac4f9  8bc6                 mov eax, esi
// 005ac4fb  c1f802               sar eax, 2
// 005ac4fe  83c414               add esp, 0x14
// 005ac501  83f801               cmp eax, 1
// 005ac504  7fd5                 jg 0x5ac4db
// 005ac506  5b                   pop ebx
// 005ac507  5f                   pop edi
// 005ac508  5e                   pop esi
// 005ac509  c3                   ret 
// library rbxgs/v8world\Assembly.cpp (function ??$_Sort_heap@PAPAVMotorJoint@RBX@@P6A_NPBV12@0@Z@std@@YAXPAPAVMotorJoint@RBX@@0P6A_NPBV12@1@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Assembly.cpp
