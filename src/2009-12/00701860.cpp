// roc 2009-12 00701860  unit: RBX::Assembly  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00701860
//
// 00701860  53                   push ebx
// 00701861  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00701865  56                   push esi
// 00701866  57                   push edi
// 00701867  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0070186b  2bfb                 sub edi, ebx
// 0070186d  c1ff02               sar edi, 2
// 00701870  8bc7                 mov eax, edi
// 00701872  99                   cdq 
// 00701873  2bc2                 sub eax, edx
// 00701875  8bf0                 mov esi, eax
// 00701877  d1fe                 sar esi, 1
// 00701879  85f6                 test esi, esi
// 0070187b  7e1c                 jle 0x701899
// 0070187d  55                   push ebp
// 0070187e  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00701882  8b44b3fc             mov eax, dword ptr [ebx + esi*4 - 4]
// 00701886  4e                   dec esi
// 00701887  55                   push ebp
// 00701888  50                   push eax
// 00701889  57                   push edi
// 0070188a  56                   push esi
// 0070188b  53                   push ebx
// 0070188c  e8affcffff           call 0x701540
// 00701891  83c414               add esp, 0x14
// 00701894  85f6                 test esi, esi
// 00701896  7fea                 jg 0x701882
// 00701898  5d                   pop ebp
// 00701899  5f                   pop edi
// 0070189a  5e                   pop esi
// 0070189b  5b                   pop ebx
// 0070189c  c3                   ret 
// library rbxgs/v8world\Assembly.cpp (function ??$_Make_heap@PAPAVMotorJoint@RBX@@HPAV12@P6A_NPBV12@0@Z@std@@YAXPAPAVMotorJoint@RBX@@0P6A_NPBV12@1@ZPAH0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Assembly.cpp
