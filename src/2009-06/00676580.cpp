// roc 2009-06 00676580  unit: RBX::Assembly  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00676580
//
// 00676580  53                   push ebx
// 00676581  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00676585  56                   push esi
// 00676586  57                   push edi
// 00676587  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0067658b  2bfb                 sub edi, ebx
// 0067658d  c1ff02               sar edi, 2
// 00676590  8bc7                 mov eax, edi
// 00676592  99                   cdq 
// 00676593  2bc2                 sub eax, edx
// 00676595  8bf0                 mov esi, eax
// 00676597  d1fe                 sar esi, 1
// 00676599  85f6                 test esi, esi
// 0067659b  7e1c                 jle 0x6765b9
// 0067659d  55                   push ebp
// 0067659e  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 006765a2  8b44b3fc             mov eax, dword ptr [ebx + esi*4 - 4]
// 006765a6  4e                   dec esi
// 006765a7  55                   push ebp
// 006765a8  50                   push eax
// 006765a9  57                   push edi
// 006765aa  56                   push esi
// 006765ab  53                   push ebx
// 006765ac  e82ffcffff           call 0x6761e0
// 006765b1  83c414               add esp, 0x14
// 006765b4  85f6                 test esi, esi
// 006765b6  7fea                 jg 0x6765a2
// 006765b8  5d                   pop ebp
// 006765b9  5f                   pop edi
// 006765ba  5e                   pop esi
// 006765bb  5b                   pop ebx
// 006765bc  c3                   ret 
// library rbxgs/v8world\Assembly.cpp (function ??$_Make_heap@PAPAVMotorJoint@RBX@@HPAV12@P6A_NPBV12@0@Z@std@@YAXPAPAVMotorJoint@RBX@@0P6A_NPBV12@1@ZPAH0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Assembly.cpp
