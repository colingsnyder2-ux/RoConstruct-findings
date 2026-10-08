// roc 2012-06 007e4850  unit: RBX::Assembly  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007e4850
//
// 007e4850  56                   push esi
// 007e4851  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007e4855  57                   push edi
// 007e4856  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007e485a  2bf7                 sub esi, edi
// 007e485c  8bc6                 mov eax, esi
// 007e485e  c1f802               sar eax, 2
// 007e4861  83f801               cmp eax, 1
// 007e4864  7e31                 jle 0x7e4897
// 007e4866  53                   push ebx
// 007e4867  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 007e486b  8b4437fc             mov eax, dword ptr [edi + esi - 4]
// 007e486f  8b0f                 mov ecx, dword ptr [edi]
// 007e4871  53                   push ebx
// 007e4872  50                   push eax
// 007e4873  8d56fc               lea edx, [esi - 4]
// 007e4876  c1fa02               sar edx, 2
// 007e4879  52                   push edx
// 007e487a  6a00                 push 0
// 007e487c  57                   push edi
// 007e487d  894c37fc             mov dword ptr [edi + esi - 4], ecx
// 007e4881  e81af4ffff           call 0x7e3ca0
// 007e4886  83ee04               sub esi, 4
// 007e4889  8bc6                 mov eax, esi
// 007e488b  c1f802               sar eax, 2
// 007e488e  83c414               add esp, 0x14
// 007e4891  83f801               cmp eax, 1
// 007e4894  7fd5                 jg 0x7e486b
// 007e4896  5b                   pop ebx
// 007e4897  5f                   pop edi
// 007e4898  5e                   pop esi
// 007e4899  c3                   ret 
// library rbxgs/v8world\Assembly.cpp (function ??$_Sort_heap@PAPAVMotorJoint@RBX@@P6A_NPBV12@0@Z@std@@YAXPAPAVMotorJoint@RBX@@0P6A_NPBV12@1@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Assembly.cpp
