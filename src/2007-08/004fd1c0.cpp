// roc 2007-08 004fd1c0  unit: RBX::Render::AggregateChunk  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004fd1c0
//
// 004fd1c0  56                   push esi
// 004fd1c1  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004fd1c5  57                   push edi
// 004fd1c6  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004fd1ca  2bf7                 sub esi, edi
// 004fd1cc  8bc6                 mov eax, esi
// 004fd1ce  c1f802               sar eax, 2
// 004fd1d1  83f801               cmp eax, 1
// 004fd1d4  7e31                 jle 0x4fd207
// 004fd1d6  53                   push ebx
// 004fd1d7  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 004fd1db  8b4437fc             mov eax, dword ptr [edi + esi - 4]
// 004fd1df  8b0f                 mov ecx, dword ptr [edi]
// 004fd1e1  53                   push ebx
// 004fd1e2  50                   push eax
// 004fd1e3  8d56fc               lea edx, [esi - 4]
// 004fd1e6  c1fa02               sar edx, 2
// 004fd1e9  52                   push edx
// 004fd1ea  6a00                 push 0
// 004fd1ec  57                   push edi
// 004fd1ed  894c37fc             mov dword ptr [edi + esi - 4], ecx
// 004fd1f1  e82afcffff           call 0x4fce20
// 004fd1f6  83ee04               sub esi, 4
// 004fd1f9  8bc6                 mov eax, esi
// 004fd1fb  c1f802               sar eax, 2
// 004fd1fe  83c414               add esp, 0x14
// 004fd201  83f801               cmp eax, 1
// 004fd204  7fd5                 jg 0x4fd1db
// 004fd206  5b                   pop ebx
// 004fd207  5f                   pop edi
// 004fd208  5e                   pop esi
// 004fd209  c3                   ret 
// library rbxgs/v8world\Assembly.cpp (function ??$_Sort_heap@PAPAVMotorJoint@RBX@@P6A_NPBV12@0@Z@std@@YAXPAPAVMotorJoint@RBX@@0P6A_NPBV12@1@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Assembly.cpp
