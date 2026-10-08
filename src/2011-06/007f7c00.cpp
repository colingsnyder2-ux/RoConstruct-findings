// roc 2011-06 007f7c00  unit: RBX::CircleRadialNormal  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007f7c00
//
// 007f7c00  53                   push ebx
// 007f7c01  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 007f7c05  55                   push ebp
// 007f7c06  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 007f7c0a  56                   push esi
// 007f7c0b  57                   push edi
// 007f7c0c  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 007f7c10  33f6                 xor esi, esi
// 007f7c12  83c720               add edi, 0x20
// 007f7c15  8b07                 mov eax, dword ptr [edi]
// 007f7c17  83c0fa               add eax, -6
// 007f7c1a  83f802               cmp eax, 2
// 007f7c1d  7710                 ja 0x7f7c2f
// 007f7c1f  8b442414             mov eax, dword ptr [esp + 0x14]
// 007f7c23  53                   push ebx
// 007f7c24  56                   push esi
// 007f7c25  55                   push ebp
// 007f7c26  50                   push eax
// 007f7c27  e8d4faffff           call 0x7f7700
// 007f7c2c  83c410               add esp, 0x10
// 007f7c2f  46                   inc esi
// 007f7c30  83c704               add edi, 4
// 007f7c33  83fe06               cmp esi, 6
// 007f7c36  7cdd                 jl 0x7f7c15
// 007f7c38  5f                   pop edi
// 007f7c39  5e                   pop esi
// 007f7c3a  5d                   pop ebp
// 007f7c3b  5b                   pop ebx
// 007f7c3c  c3                   ret 
// library rbxgs-appdraw/Draw.cpp (function ?adornSurfaces@Draw@RBX@@CAXABVPart@2@PAVAdorn@2@ABVColor3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Draw.cpp
