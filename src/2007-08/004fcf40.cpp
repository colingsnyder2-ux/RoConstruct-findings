// roc 2007-08 004fcf40  unit: RBX::Render::AggregateChunk  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004fcf40
//
// 004fcf40  53                   push ebx
// 004fcf41  8b5c2408             mov ebx, dword ptr [esp + 8]
// 004fcf45  56                   push esi
// 004fcf46  57                   push edi
// 004fcf47  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 004fcf4b  2bfb                 sub edi, ebx
// 004fcf4d  c1ff02               sar edi, 2
// 004fcf50  8bc7                 mov eax, edi
// 004fcf52  99                   cdq 
// 004fcf53  2bc2                 sub eax, edx
// 004fcf55  8bf0                 mov esi, eax
// 004fcf57  d1fe                 sar esi, 1
// 004fcf59  85f6                 test esi, esi
// 004fcf5b  7e1e                 jle 0x4fcf7b
// 004fcf5d  55                   push ebp
// 004fcf5e  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 004fcf62  8b44b3fc             mov eax, dword ptr [ebx + esi*4 - 4]
// 004fcf66  83ee01               sub esi, 1
// 004fcf69  55                   push ebp
// 004fcf6a  50                   push eax
// 004fcf6b  57                   push edi
// 004fcf6c  56                   push esi
// 004fcf6d  53                   push ebx
// 004fcf6e  e8adfeffff           call 0x4fce20
// 004fcf73  83c414               add esp, 0x14
// 004fcf76  85f6                 test esi, esi
// 004fcf78  7fe8                 jg 0x4fcf62
// 004fcf7a  5d                   pop ebp
// 004fcf7b  5f                   pop edi
// 004fcf7c  5e                   pop esi
// 004fcf7d  5b                   pop ebx
// 004fcf7e  c3                   ret 
// library rbxgs/v8world\Assembly.cpp (function ??$_Make_heap@PAPAVMotorJoint@RBX@@HPAV12@P6A_NPBV12@0@Z@std@@YAXPAPAVMotorJoint@RBX@@0P6A_NPBV12@1@ZPAH0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Assembly.cpp
