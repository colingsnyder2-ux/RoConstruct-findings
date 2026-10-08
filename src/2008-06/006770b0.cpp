// roc 2008-06 006770b0  unit: RBX::AdornG3D  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006770b0
//
// 006770b0  53                   push ebx
// 006770b1  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 006770b5  55                   push ebp
// 006770b6  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 006770ba  56                   push esi
// 006770bb  57                   push edi
// 006770bc  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 006770c0  33f6                 xor esi, esi
// 006770c2  83c720               add edi, 0x20
// 006770c5  8b07                 mov eax, dword ptr [edi]
// 006770c7  83c0fa               add eax, -6
// 006770ca  83f802               cmp eax, 2
// 006770cd  7710                 ja 0x6770df
// 006770cf  8b442414             mov eax, dword ptr [esp + 0x14]
// 006770d3  53                   push ebx
// 006770d4  56                   push esi
// 006770d5  55                   push ebp
// 006770d6  50                   push eax
// 006770d7  e8b4fbffff           call 0x676c90
// 006770dc  83c410               add esp, 0x10
// 006770df  46                   inc esi
// 006770e0  83c704               add edi, 4
// 006770e3  83fe06               cmp esi, 6
// 006770e6  7cdd                 jl 0x6770c5
// 006770e8  5f                   pop edi
// 006770e9  5e                   pop esi
// 006770ea  5d                   pop ebp
// 006770eb  5b                   pop ebx
// 006770ec  c3                   ret 
// library rbxgs-appdraw/Draw.cpp (function ?adornSurfaces@Draw@RBX@@CAXABVPart@2@PAVAdorn@2@ABVColor3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Draw.cpp
