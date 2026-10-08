// roc 2009-12 007e1890  unit: RBX::CircleRadialNormal  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007e1890
//
// 007e1890  53                   push ebx
// 007e1891  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 007e1895  55                   push ebp
// 007e1896  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 007e189a  56                   push esi
// 007e189b  57                   push edi
// 007e189c  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 007e18a0  33f6                 xor esi, esi
// 007e18a2  83c720               add edi, 0x20
// 007e18a5  8b07                 mov eax, dword ptr [edi]
// 007e18a7  83c0fa               add eax, -6
// 007e18aa  83f802               cmp eax, 2
// 007e18ad  7710                 ja 0x7e18bf
// 007e18af  8b442414             mov eax, dword ptr [esp + 0x14]
// 007e18b3  53                   push ebx
// 007e18b4  56                   push esi
// 007e18b5  55                   push ebp
// 007e18b6  50                   push eax
// 007e18b7  e8e4faffff           call 0x7e13a0
// 007e18bc  83c410               add esp, 0x10
// 007e18bf  46                   inc esi
// 007e18c0  83c704               add edi, 4
// 007e18c3  83fe06               cmp esi, 6
// 007e18c6  7cdd                 jl 0x7e18a5
// 007e18c8  5f                   pop edi
// 007e18c9  5e                   pop esi
// 007e18ca  5d                   pop ebp
// 007e18cb  5b                   pop ebx
// 007e18cc  c3                   ret 
// library rbxgs-appdraw/Draw.cpp (function ?adornSurfaces@Draw@RBX@@CAXABVPart@2@PAVAdorn@2@ABVColor3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Draw.cpp
