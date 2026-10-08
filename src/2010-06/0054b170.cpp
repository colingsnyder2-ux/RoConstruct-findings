// roc 2010-06 0054b170  unit: RBX::AggregateChunk  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0054b170
//
// 0054b170  53                   push ebx
// 0054b171  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0054b175  56                   push esi
// 0054b176  57                   push edi
// 0054b177  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0054b17b  2bfb                 sub edi, ebx
// 0054b17d  c1ff02               sar edi, 2
// 0054b180  8bc7                 mov eax, edi
// 0054b182  99                   cdq 
// 0054b183  2bc2                 sub eax, edx
// 0054b185  8bf0                 mov esi, eax
// 0054b187  d1fe                 sar esi, 1
// 0054b189  85f6                 test esi, esi
// 0054b18b  7e1c                 jle 0x54b1a9
// 0054b18d  55                   push ebp
// 0054b18e  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0054b192  8b44b3fc             mov eax, dword ptr [ebx + esi*4 - 4]
// 0054b196  4e                   dec esi
// 0054b197  55                   push ebp
// 0054b198  50                   push eax
// 0054b199  57                   push edi
// 0054b19a  56                   push esi
// 0054b19b  53                   push ebx
// 0054b19c  e8affeffff           call 0x54b050
// 0054b1a1  83c414               add esp, 0x14
// 0054b1a4  85f6                 test esi, esi
// 0054b1a6  7fea                 jg 0x54b192
// 0054b1a8  5d                   pop ebp
// 0054b1a9  5f                   pop edi
// 0054b1aa  5e                   pop esi
// 0054b1ab  5b                   pop ebx
// 0054b1ac  c3                   ret 
// library rbxgs/v8world\Assembly.cpp (function ??$_Make_heap@PAPAVMotorJoint@RBX@@HPAV12@P6A_NPBV12@0@Z@std@@YAXPAPAVMotorJoint@RBX@@0P6A_NPBV12@1@ZPAH0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Assembly.cpp
