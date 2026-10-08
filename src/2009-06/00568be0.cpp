// roc 2009-06 00568be0  unit: RBX::RbxG3D::RenderScene  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00568be0
//
// 00568be0  53                   push ebx
// 00568be1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00568be5  56                   push esi
// 00568be6  57                   push edi
// 00568be7  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00568beb  2bfb                 sub edi, ebx
// 00568bed  c1ff02               sar edi, 2
// 00568bf0  8bc7                 mov eax, edi
// 00568bf2  99                   cdq 
// 00568bf3  2bc2                 sub eax, edx
// 00568bf5  8bf0                 mov esi, eax
// 00568bf7  d1fe                 sar esi, 1
// 00568bf9  85f6                 test esi, esi
// 00568bfb  7e1c                 jle 0x568c19
// 00568bfd  55                   push ebp
// 00568bfe  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00568c02  8b44b3fc             mov eax, dword ptr [ebx + esi*4 - 4]
// 00568c06  4e                   dec esi
// 00568c07  55                   push ebp
// 00568c08  50                   push eax
// 00568c09  57                   push edi
// 00568c0a  56                   push esi
// 00568c0b  53                   push ebx
// 00568c0c  e8affeffff           call 0x568ac0
// 00568c11  83c414               add esp, 0x14
// 00568c14  85f6                 test esi, esi
// 00568c16  7fea                 jg 0x568c02
// 00568c18  5d                   pop ebp
// 00568c19  5f                   pop edi
// 00568c1a  5e                   pop esi
// 00568c1b  5b                   pop ebx
// 00568c1c  c3                   ret 
// library rbxgs/v8world\Assembly.cpp (function ??$_Make_heap@PAPAVMotorJoint@RBX@@HPAV12@P6A_NPBV12@0@Z@std@@YAXPAPAVMotorJoint@RBX@@0P6A_NPBV12@1@ZPAH0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Assembly.cpp
