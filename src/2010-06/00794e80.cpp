// roc 2010-06 00794e80  unit: RBX::IndexBox  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00794e80
//
// 00794e80  53                   push ebx
// 00794e81  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00794e85  55                   push ebp
// 00794e86  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00794e8a  56                   push esi
// 00794e8b  57                   push edi
// 00794e8c  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00794e90  33f6                 xor esi, esi
// 00794e92  83c720               add edi, 0x20
// 00794e95  8b07                 mov eax, dword ptr [edi]
// 00794e97  83c0fa               add eax, -6
// 00794e9a  83f802               cmp eax, 2
// 00794e9d  7710                 ja 0x794eaf
// 00794e9f  8b442414             mov eax, dword ptr [esp + 0x14]
// 00794ea3  53                   push ebx
// 00794ea4  56                   push esi
// 00794ea5  55                   push ebp
// 00794ea6  50                   push eax
// 00794ea7  e8e4faffff           call 0x794990
// 00794eac  83c410               add esp, 0x10
// 00794eaf  46                   inc esi
// 00794eb0  83c704               add edi, 4
// 00794eb3  83fe06               cmp esi, 6
// 00794eb6  7cdd                 jl 0x794e95
// 00794eb8  5f                   pop edi
// 00794eb9  5e                   pop esi
// 00794eba  5d                   pop ebp
// 00794ebb  5b                   pop ebx
// 00794ebc  c3                   ret 
// library rbxgs-appdraw/Draw.cpp (function ?adornSurfaces@Draw@RBX@@CAXABVPart@2@PAVAdorn@2@ABVColor3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Draw.cpp
