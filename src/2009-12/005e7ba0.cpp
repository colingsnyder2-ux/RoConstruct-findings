// roc 2009-12 005e7ba0  unit: RBX::VBeveledBlockMesh::?$CustomizableMesh  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005e7ba0
//
// 005e7ba0  53                   push ebx
// 005e7ba1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 005e7ba5  56                   push esi
// 005e7ba6  57                   push edi
// 005e7ba7  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 005e7bab  2bfb                 sub edi, ebx
// 005e7bad  c1ff02               sar edi, 2
// 005e7bb0  8bc7                 mov eax, edi
// 005e7bb2  99                   cdq 
// 005e7bb3  2bc2                 sub eax, edx
// 005e7bb5  8bf0                 mov esi, eax
// 005e7bb7  d1fe                 sar esi, 1
// 005e7bb9  85f6                 test esi, esi
// 005e7bbb  7e1c                 jle 0x5e7bd9
// 005e7bbd  55                   push ebp
// 005e7bbe  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 005e7bc2  8b44b3fc             mov eax, dword ptr [ebx + esi*4 - 4]
// 005e7bc6  4e                   dec esi
// 005e7bc7  55                   push ebp
// 005e7bc8  50                   push eax
// 005e7bc9  57                   push edi
// 005e7bca  56                   push esi
// 005e7bcb  53                   push ebx
// 005e7bcc  e8affeffff           call 0x5e7a80
// 005e7bd1  83c414               add esp, 0x14
// 005e7bd4  85f6                 test esi, esi
// 005e7bd6  7fea                 jg 0x5e7bc2
// 005e7bd8  5d                   pop ebp
// 005e7bd9  5f                   pop edi
// 005e7bda  5e                   pop esi
// 005e7bdb  5b                   pop ebx
// 005e7bdc  c3                   ret 
// library rbxgs/v8world\Assembly.cpp (function ??$_Make_heap@PAPAVMotorJoint@RBX@@HPAV12@P6A_NPBV12@0@Z@std@@YAXPAPAVMotorJoint@RBX@@0P6A_NPBV12@1@ZPAH0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Assembly.cpp
