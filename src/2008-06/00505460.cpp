// roc 2008-06 00505460  unit: RBX::Render::RenderScene  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00505460
//
// 00505460  53                   push ebx
// 00505461  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00505465  56                   push esi
// 00505466  57                   push edi
// 00505467  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0050546b  2bfb                 sub edi, ebx
// 0050546d  c1ff02               sar edi, 2
// 00505470  8bc7                 mov eax, edi
// 00505472  99                   cdq 
// 00505473  2bc2                 sub eax, edx
// 00505475  8bf0                 mov esi, eax
// 00505477  d1fe                 sar esi, 1
// 00505479  85f6                 test esi, esi
// 0050547b  7e1c                 jle 0x505499
// 0050547d  55                   push ebp
// 0050547e  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00505482  8b44b3fc             mov eax, dword ptr [ebx + esi*4 - 4]
// 00505486  4e                   dec esi
// 00505487  55                   push ebp
// 00505488  50                   push eax
// 00505489  57                   push edi
// 0050548a  56                   push esi
// 0050548b  53                   push ebx
// 0050548c  e8affeffff           call 0x505340
// 00505491  83c414               add esp, 0x14
// 00505494  85f6                 test esi, esi
// 00505496  7fea                 jg 0x505482
// 00505498  5d                   pop ebp
// 00505499  5f                   pop edi
// 0050549a  5e                   pop esi
// 0050549b  5b                   pop ebx
// 0050549c  c3                   ret 
// library rbxgs/v8world\Assembly.cpp (function ??$_Make_heap@PAPAVMotorJoint@RBX@@HPAV12@P6A_NPBV12@0@Z@std@@YAXPAPAVMotorJoint@RBX@@0P6A_NPBV12@1@ZPAH0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Assembly.cpp
