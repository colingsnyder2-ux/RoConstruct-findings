// roc 2007-08 005b33d0  unit: RBX::Assembly  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b33d0
//
// 005b33d0  53                   push ebx
// 005b33d1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 005b33d5  56                   push esi
// 005b33d6  57                   push edi
// 005b33d7  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 005b33db  2bfb                 sub edi, ebx
// 005b33dd  c1ff02               sar edi, 2
// 005b33e0  8bc7                 mov eax, edi
// 005b33e2  99                   cdq 
// 005b33e3  2bc2                 sub eax, edx
// 005b33e5  8bf0                 mov esi, eax
// 005b33e7  d1fe                 sar esi, 1
// 005b33e9  85f6                 test esi, esi
// 005b33eb  7e1e                 jle 0x5b340b
// 005b33ed  55                   push ebp
// 005b33ee  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 005b33f2  8b44b3fc             mov eax, dword ptr [ebx + esi*4 - 4]
// 005b33f6  83ee01               sub esi, 1
// 005b33f9  55                   push ebp
// 005b33fa  50                   push eax
// 005b33fb  57                   push edi
// 005b33fc  56                   push esi
// 005b33fd  53                   push ebx
// 005b33fe  e85dfeffff           call 0x5b3260
// 005b3403  83c414               add esp, 0x14
// 005b3406  85f6                 test esi, esi
// 005b3408  7fe8                 jg 0x5b33f2
// 005b340a  5d                   pop ebp
// 005b340b  5f                   pop edi
// 005b340c  5e                   pop esi
// 005b340d  5b                   pop ebx
// 005b340e  c3                   ret 
// library rbxgs/v8world\Assembly.cpp (function ??$_Make_heap@PAPAVMotorJoint@RBX@@HPAV12@P6A_NPBV12@0@Z@std@@YAXPAPAVMotorJoint@RBX@@0P6A_NPBV12@1@ZPAH0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Assembly.cpp
