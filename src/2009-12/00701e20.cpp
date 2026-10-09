// roc 2009-12 00701e20  unit: RBX::Assembly  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00701e20
//
// 00701e20  56                   push esi
// 00701e21  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00701e25  57                   push edi
// 00701e26  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00701e2a  2bf7                 sub esi, edi
// 00701e2c  8bc6                 mov eax, esi
// 00701e2e  c1f802               sar eax, 2
// 00701e31  83f801               cmp eax, 1
// 00701e34  7e31                 jle 0x701e67
// 00701e36  53                   push ebx
// 00701e37  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00701e3b  8b4437fc             mov eax, dword ptr [edi + esi - 4]
// 00701e3f  8b0f                 mov ecx, dword ptr [edi]
// 00701e41  53                   push ebx
// 00701e42  50                   push eax
// 00701e43  8d56fc               lea edx, [esi - 4]
// 00701e46  c1fa02               sar edx, 2
// 00701e49  52                   push edx
// 00701e4a  6a00                 push 0
// 00701e4c  57                   push edi
// 00701e4d  894c37fc             mov dword ptr [edi + esi - 4], ecx
// 00701e51  e8eaf6ffff           call 0x701540
// 00701e56  83ee04               sub esi, 4
// 00701e59  8bc6                 mov eax, esi
// 00701e5b  c1f802               sar eax, 2
// 00701e5e  83c414               add esp, 0x14
// 00701e61  83f801               cmp eax, 1
// 00701e64  7fd5                 jg 0x701e3b
// 00701e66  5b                   pop ebx
// 00701e67  5f                   pop edi
// 00701e68  5e                   pop esi
// 00701e69  c3                   ret 
// library rbxgs/v8world\Assembly.cpp (function ??$_Sort_heap@PAPAVMotorJoint@RBX@@P6A_NPBV12@0@Z@std@@YAXPAPAVMotorJoint@RBX@@0P6A_NPBV12@1@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Assembly.cpp
