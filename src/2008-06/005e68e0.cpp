// roc 2008-06 005e68e0  unit: RBX::Clump  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e68e0
//
// 005e68e0  53                   push ebx
// 005e68e1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 005e68e5  56                   push esi
// 005e68e6  57                   push edi
// 005e68e7  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 005e68eb  2bfb                 sub edi, ebx
// 005e68ed  c1ff02               sar edi, 2
// 005e68f0  8bc7                 mov eax, edi
// 005e68f2  99                   cdq 
// 005e68f3  2bc2                 sub eax, edx
// 005e68f5  8bf0                 mov esi, eax
// 005e68f7  d1fe                 sar esi, 1
// 005e68f9  85f6                 test esi, esi
// 005e68fb  7e1c                 jle 0x5e6919
// 005e68fd  55                   push ebp
// 005e68fe  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 005e6902  8b44b3fc             mov eax, dword ptr [ebx + esi*4 - 4]
// 005e6906  4e                   dec esi
// 005e6907  55                   push ebp
// 005e6908  50                   push eax
// 005e6909  57                   push edi
// 005e690a  56                   push esi
// 005e690b  53                   push ebx
// 005e690c  e80ffeffff           call 0x5e6720
// 005e6911  83c414               add esp, 0x14
// 005e6914  85f6                 test esi, esi
// 005e6916  7fea                 jg 0x5e6902
// 005e6918  5d                   pop ebp
// 005e6919  5f                   pop edi
// 005e691a  5e                   pop esi
// 005e691b  5b                   pop ebx
// 005e691c  c3                   ret 
// library rbxgs/v8world\Assembly.cpp (function ??$_Make_heap@PAPAVMotorJoint@RBX@@HPAV12@P6A_NPBV12@0@Z@std@@YAXPAPAVMotorJoint@RBX@@0P6A_NPBV12@1@ZPAH0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Assembly.cpp
