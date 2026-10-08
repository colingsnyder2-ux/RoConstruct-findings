// roc 2010-06 00676a10  unit: RBX::Assembly  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00676a10
//
// 00676a10  53                   push ebx
// 00676a11  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00676a15  56                   push esi
// 00676a16  57                   push edi
// 00676a17  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00676a1b  2bfb                 sub edi, ebx
// 00676a1d  c1ff02               sar edi, 2
// 00676a20  8bc7                 mov eax, edi
// 00676a22  99                   cdq 
// 00676a23  2bc2                 sub eax, edx
// 00676a25  8bf0                 mov esi, eax
// 00676a27  d1fe                 sar esi, 1
// 00676a29  85f6                 test esi, esi
// 00676a2b  7e1c                 jle 0x676a49
// 00676a2d  55                   push ebp
// 00676a2e  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00676a32  8b44b3fc             mov eax, dword ptr [ebx + esi*4 - 4]
// 00676a36  4e                   dec esi
// 00676a37  55                   push ebp
// 00676a38  50                   push eax
// 00676a39  57                   push edi
// 00676a3a  56                   push esi
// 00676a3b  53                   push ebx
// 00676a3c  e83ffcffff           call 0x676680
// 00676a41  83c414               add esp, 0x14
// 00676a44  85f6                 test esi, esi
// 00676a46  7fea                 jg 0x676a32
// 00676a48  5d                   pop ebp
// 00676a49  5f                   pop edi
// 00676a4a  5e                   pop esi
// 00676a4b  5b                   pop ebx
// 00676a4c  c3                   ret 
// library rbxgs/v8world\Assembly.cpp (function ??$_Make_heap@PAPAVMotorJoint@RBX@@HPAV12@P6A_NPBV12@0@Z@std@@YAXPAPAVMotorJoint@RBX@@0P6A_NPBV12@1@ZPAH0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Assembly.cpp
