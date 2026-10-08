// roc 2011-06 006a2070  unit: RBX::Assembly  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006a2070
//
// 006a2070  53                   push ebx
// 006a2071  8b5c2408             mov ebx, dword ptr [esp + 8]
// 006a2075  56                   push esi
// 006a2076  57                   push edi
// 006a2077  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 006a207b  2bfb                 sub edi, ebx
// 006a207d  c1ff02               sar edi, 2
// 006a2080  8bc7                 mov eax, edi
// 006a2082  99                   cdq 
// 006a2083  2bc2                 sub eax, edx
// 006a2085  8bf0                 mov esi, eax
// 006a2087  d1fe                 sar esi, 1
// 006a2089  85f6                 test esi, esi
// 006a208b  7e1c                 jle 0x6a20a9
// 006a208d  55                   push ebp
// 006a208e  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 006a2092  8b44b3fc             mov eax, dword ptr [ebx + esi*4 - 4]
// 006a2096  4e                   dec esi
// 006a2097  55                   push ebp
// 006a2098  50                   push eax
// 006a2099  57                   push edi
// 006a209a  56                   push esi
// 006a209b  53                   push ebx
// 006a209c  e89ffcffff           call 0x6a1d40
// 006a20a1  83c414               add esp, 0x14
// 006a20a4  85f6                 test esi, esi
// 006a20a6  7fea                 jg 0x6a2092
// 006a20a8  5d                   pop ebp
// 006a20a9  5f                   pop edi
// 006a20aa  5e                   pop esi
// 006a20ab  5b                   pop ebx
// 006a20ac  c3                   ret 
// library rbxgs/v8world\Assembly.cpp (function ??$_Make_heap@PAPAVMotorJoint@RBX@@HPAV12@P6A_NPBV12@0@Z@std@@YAXPAPAVMotorJoint@RBX@@0P6A_NPBV12@1@ZPAH0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Assembly.cpp
