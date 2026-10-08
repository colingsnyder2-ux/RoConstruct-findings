// roc 2009-06 00704680  unit: RBX::AdornG3D  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00704680
//
// 00704680  53                   push ebx
// 00704681  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00704685  55                   push ebp
// 00704686  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0070468a  56                   push esi
// 0070468b  57                   push edi
// 0070468c  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00704690  33f6                 xor esi, esi
// 00704692  83c720               add edi, 0x20
// 00704695  8b07                 mov eax, dword ptr [edi]
// 00704697  83c0fa               add eax, -6
// 0070469a  83f802               cmp eax, 2
// 0070469d  7710                 ja 0x7046af
// 0070469f  8b442414             mov eax, dword ptr [esp + 0x14]
// 007046a3  53                   push ebx
// 007046a4  56                   push esi
// 007046a5  55                   push ebp
// 007046a6  50                   push eax
// 007046a7  e8b4fbffff           call 0x704260
// 007046ac  83c410               add esp, 0x10
// 007046af  46                   inc esi
// 007046b0  83c704               add edi, 4
// 007046b3  83fe06               cmp esi, 6
// 007046b6  7cdd                 jl 0x704695
// 007046b8  5f                   pop edi
// 007046b9  5e                   pop esi
// 007046ba  5d                   pop ebp
// 007046bb  5b                   pop ebx
// 007046bc  c3                   ret 
// library rbxgs-appdraw/Draw.cpp (function ?adornSurfaces@Draw@RBX@@CAXABVPart@2@PAVAdorn@2@ABVColor3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Draw.cpp
