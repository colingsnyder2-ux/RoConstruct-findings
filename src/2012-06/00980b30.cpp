// roc 2012-06 00980b30  unit: RBX::CircleRadialNormal  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00980b30
//
// 00980b30  53                   push ebx
// 00980b31  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00980b35  55                   push ebp
// 00980b36  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00980b3a  56                   push esi
// 00980b3b  57                   push edi
// 00980b3c  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00980b40  33f6                 xor esi, esi
// 00980b42  83c720               add edi, 0x20
// 00980b45  8b07                 mov eax, dword ptr [edi]
// 00980b47  83c0fa               add eax, -6
// 00980b4a  83f802               cmp eax, 2
// 00980b4d  7710                 ja 0x980b5f
// 00980b4f  8b442414             mov eax, dword ptr [esp + 0x14]
// 00980b53  53                   push ebx
// 00980b54  56                   push esi
// 00980b55  55                   push ebp
// 00980b56  50                   push eax
// 00980b57  e814fbffff           call 0x980670
// 00980b5c  83c410               add esp, 0x10
// 00980b5f  46                   inc esi
// 00980b60  83c704               add edi, 4
// 00980b63  83fe06               cmp esi, 6
// 00980b66  7cdd                 jl 0x980b45
// 00980b68  5f                   pop edi
// 00980b69  5e                   pop esi
// 00980b6a  5d                   pop ebp
// 00980b6b  5b                   pop ebx
// 00980b6c  c3                   ret 
// library rbxgs-appdraw/Draw.cpp (function ?adornSurfaces@Draw@RBX@@CAXABVPart@2@PAVAdorn@2@ABVColor3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Draw.cpp
