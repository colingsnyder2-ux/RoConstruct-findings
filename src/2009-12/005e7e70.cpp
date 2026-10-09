// roc 2009-12 005e7e70  unit: RBX::VBeveledBlockMesh::?$CustomizableMesh  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005e7e70
//
// 005e7e70  56                   push esi
// 005e7e71  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005e7e75  57                   push edi
// 005e7e76  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005e7e7a  2bf7                 sub esi, edi
// 005e7e7c  8bc6                 mov eax, esi
// 005e7e7e  c1f802               sar eax, 2
// 005e7e81  83f801               cmp eax, 1
// 005e7e84  7e31                 jle 0x5e7eb7
// 005e7e86  53                   push ebx
// 005e7e87  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 005e7e8b  8b4437fc             mov eax, dword ptr [edi + esi - 4]
// 005e7e8f  8b0f                 mov ecx, dword ptr [edi]
// 005e7e91  53                   push ebx
// 005e7e92  50                   push eax
// 005e7e93  8d56fc               lea edx, [esi - 4]
// 005e7e96  c1fa02               sar edx, 2
// 005e7e99  52                   push edx
// 005e7e9a  6a00                 push 0
// 005e7e9c  57                   push edi
// 005e7e9d  894c37fc             mov dword ptr [edi + esi - 4], ecx
// 005e7ea1  e8dafbffff           call 0x5e7a80
// 005e7ea6  83ee04               sub esi, 4
// 005e7ea9  8bc6                 mov eax, esi
// 005e7eab  c1f802               sar eax, 2
// 005e7eae  83c414               add esp, 0x14
// 005e7eb1  83f801               cmp eax, 1
// 005e7eb4  7fd5                 jg 0x5e7e8b
// 005e7eb6  5b                   pop ebx
// 005e7eb7  5f                   pop edi
// 005e7eb8  5e                   pop esi
// 005e7eb9  c3                   ret 
// library rbxgs/v8world\Assembly.cpp (function ??$_Sort_heap@PAPAVMotorJoint@RBX@@P6A_NPBV12@0@Z@std@@YAXPAPAVMotorJoint@RBX@@0P6A_NPBV12@1@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Assembly.cpp
