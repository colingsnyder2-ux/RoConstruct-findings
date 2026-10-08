// roc 2012-06 007e3fd0  unit: RBX::Assembly  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007e3fd0
//
// 007e3fd0  53                   push ebx
// 007e3fd1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 007e3fd5  56                   push esi
// 007e3fd6  57                   push edi
// 007e3fd7  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 007e3fdb  2bfb                 sub edi, ebx
// 007e3fdd  c1ff02               sar edi, 2
// 007e3fe0  8bc7                 mov eax, edi
// 007e3fe2  99                   cdq 
// 007e3fe3  2bc2                 sub eax, edx
// 007e3fe5  8bf0                 mov esi, eax
// 007e3fe7  d1fe                 sar esi, 1
// 007e3fe9  85f6                 test esi, esi
// 007e3feb  7e1c                 jle 0x7e4009
// 007e3fed  55                   push ebp
// 007e3fee  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 007e3ff2  8b44b3fc             mov eax, dword ptr [ebx + esi*4 - 4]
// 007e3ff6  4e                   dec esi
// 007e3ff7  55                   push ebp
// 007e3ff8  50                   push eax
// 007e3ff9  57                   push edi
// 007e3ffa  56                   push esi
// 007e3ffb  53                   push ebx
// 007e3ffc  e89ffcffff           call 0x7e3ca0
// 007e4001  83c414               add esp, 0x14
// 007e4004  85f6                 test esi, esi
// 007e4006  7fea                 jg 0x7e3ff2
// 007e4008  5d                   pop ebp
// 007e4009  5f                   pop edi
// 007e400a  5e                   pop esi
// 007e400b  5b                   pop ebx
// 007e400c  c3                   ret 
// library rbxgs/v8world\Assembly.cpp (function ??$_Make_heap@PAPAVMotorJoint@RBX@@HPAV12@P6A_NPBV12@0@Z@std@@YAXPAPAVMotorJoint@RBX@@0P6A_NPBV12@1@ZPAH0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Assembly.cpp
