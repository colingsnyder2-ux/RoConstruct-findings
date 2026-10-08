// roc 2007-03 004f0d30  unit: seg_004f0000  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f0d30
//
// 004f0d30  56                   push esi
// 004f0d31  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004f0d35  57                   push edi
// 004f0d36  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004f0d3a  2bf7                 sub esi, edi
// 004f0d3c  8bc6                 mov eax, esi
// 004f0d3e  c1f802               sar eax, 2
// 004f0d41  83f801               cmp eax, 1
// 004f0d44  7e31                 jle 0x4f0d77
// 004f0d46  53                   push ebx
// 004f0d47  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 004f0d4b  8b4437fc             mov eax, dword ptr [edi + esi - 4]
// 004f0d4f  8b0f                 mov ecx, dword ptr [edi]
// 004f0d51  53                   push ebx
// 004f0d52  50                   push eax
// 004f0d53  8d56fc               lea edx, [esi - 4]
// 004f0d56  c1fa02               sar edx, 2
// 004f0d59  52                   push edx
// 004f0d5a  6a00                 push 0
// 004f0d5c  57                   push edi
// 004f0d5d  894c37fc             mov dword ptr [edi + esi - 4], ecx
// 004f0d61  e82afcffff           call 0x4f0990
// 004f0d66  83ee04               sub esi, 4
// 004f0d69  8bc6                 mov eax, esi
// 004f0d6b  c1f802               sar eax, 2
// 004f0d6e  83c414               add esp, 0x14
// 004f0d71  83f801               cmp eax, 1
// 004f0d74  7fd5                 jg 0x4f0d4b
// 004f0d76  5b                   pop ebx
// 004f0d77  5f                   pop edi
// 004f0d78  5e                   pop esi
// 004f0d79  c3                   ret 
// library rbxgs/v8world\Assembly.cpp (function ??$_Sort_heap@PAPAVMotorJoint@RBX@@P6A_NPBV12@0@Z@std@@YAXPAPAVMotorJoint@RBX@@0P6A_NPBV12@1@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Assembly.cpp
