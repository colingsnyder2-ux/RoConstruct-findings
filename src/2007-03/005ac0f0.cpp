// roc 2007-03 005ac0f0  unit: seg_005a0000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005ac0f0
//
// 005ac0f0  53                   push ebx
// 005ac0f1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 005ac0f5  56                   push esi
// 005ac0f6  57                   push edi
// 005ac0f7  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 005ac0fb  2bfb                 sub edi, ebx
// 005ac0fd  c1ff02               sar edi, 2
// 005ac100  8bc7                 mov eax, edi
// 005ac102  99                   cdq 
// 005ac103  2bc2                 sub eax, edx
// 005ac105  8bf0                 mov esi, eax
// 005ac107  d1fe                 sar esi, 1
// 005ac109  85f6                 test esi, esi
// 005ac10b  7e1e                 jle 0x5ac12b
// 005ac10d  55                   push ebp
// 005ac10e  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 005ac112  8b44b3fc             mov eax, dword ptr [ebx + esi*4 - 4]
// 005ac116  83ee01               sub esi, 1
// 005ac119  55                   push ebp
// 005ac11a  50                   push eax
// 005ac11b  57                   push edi
// 005ac11c  56                   push esi
// 005ac11d  53                   push ebx
// 005ac11e  e89dfeffff           call 0x5abfc0
// 005ac123  83c414               add esp, 0x14
// 005ac126  85f6                 test esi, esi
// 005ac128  7fe8                 jg 0x5ac112
// 005ac12a  5d                   pop ebp
// 005ac12b  5f                   pop edi
// 005ac12c  5e                   pop esi
// 005ac12d  5b                   pop ebx
// 005ac12e  c3                   ret 
// library rbxgs/v8world\Assembly.cpp (function ??$_Make_heap@PAPAVMotorJoint@RBX@@HPAV12@P6A_NPBV12@0@Z@std@@YAXPAPAVMotorJoint@RBX@@0P6A_NPBV12@1@ZPAH0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Assembly.cpp
