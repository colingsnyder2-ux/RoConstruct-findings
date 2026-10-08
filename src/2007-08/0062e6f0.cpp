// roc 2007-08 0062e6f0  unit: RBX::AdornG3D  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0062e6f0
//
// 0062e6f0  53                   push ebx
// 0062e6f1  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0062e6f5  55                   push ebp
// 0062e6f6  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0062e6fa  56                   push esi
// 0062e6fb  57                   push edi
// 0062e6fc  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0062e700  33f6                 xor esi, esi
// 0062e702  83c720               add edi, 0x20
// 0062e705  8b07                 mov eax, dword ptr [edi]
// 0062e707  83c0fa               add eax, -6
// 0062e70a  83f802               cmp eax, 2
// 0062e70d  7710                 ja 0x62e71f
// 0062e70f  8b442414             mov eax, dword ptr [esp + 0x14]
// 0062e713  53                   push ebx
// 0062e714  56                   push esi
// 0062e715  55                   push ebp
// 0062e716  50                   push eax
// 0062e717  e8b4fbffff           call 0x62e2d0
// 0062e71c  83c410               add esp, 0x10
// 0062e71f  83c601               add esi, 1
// 0062e722  83c704               add edi, 4
// 0062e725  83fe06               cmp esi, 6
// 0062e728  7cdb                 jl 0x62e705
// 0062e72a  5f                   pop edi
// 0062e72b  5e                   pop esi
// 0062e72c  5d                   pop ebp
// 0062e72d  5b                   pop ebx
// 0062e72e  c3                   ret 
// library rbxgs-appdraw/Draw.cpp (function ?adornSurfaces@Draw@RBX@@CAXABVPart@2@PAVAdorn@2@ABVColor3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Draw.cpp
