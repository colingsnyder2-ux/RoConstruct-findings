// roc 2008-06 005e6ca0  unit: RBX::Clump  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e6ca0
//
// 005e6ca0  56                   push esi
// 005e6ca1  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005e6ca5  57                   push edi
// 005e6ca6  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005e6caa  2bf7                 sub esi, edi
// 005e6cac  8bc6                 mov eax, esi
// 005e6cae  c1f802               sar eax, 2
// 005e6cb1  83f801               cmp eax, 1
// 005e6cb4  7e31                 jle 0x5e6ce7
// 005e6cb6  53                   push ebx
// 005e6cb7  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 005e6cbb  8b4437fc             mov eax, dword ptr [edi + esi - 4]
// 005e6cbf  8b0f                 mov ecx, dword ptr [edi]
// 005e6cc1  53                   push ebx
// 005e6cc2  50                   push eax
// 005e6cc3  8d56fc               lea edx, [esi - 4]
// 005e6cc6  c1fa02               sar edx, 2
// 005e6cc9  52                   push edx
// 005e6cca  6a00                 push 0
// 005e6ccc  57                   push edi
// 005e6ccd  894c37fc             mov dword ptr [edi + esi - 4], ecx
// 005e6cd1  e84afaffff           call 0x5e6720
// 005e6cd6  83ee04               sub esi, 4
// 005e6cd9  8bc6                 mov eax, esi
// 005e6cdb  c1f802               sar eax, 2
// 005e6cde  83c414               add esp, 0x14
// 005e6ce1  83f801               cmp eax, 1
// 005e6ce4  7fd5                 jg 0x5e6cbb
// 005e6ce6  5b                   pop ebx
// 005e6ce7  5f                   pop edi
// 005e6ce8  5e                   pop esi
// 005e6ce9  c3                   ret 
// library rbxgs/v8world\Assembly.cpp (function ??$_Sort_heap@PAPAVMotorJoint@RBX@@P6A_NPBV12@0@Z@std@@YAXPAPAVMotorJoint@RBX@@0P6A_NPBV12@1@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Assembly.cpp
