// roc 2009-12 005e7a80  unit: RBX::VBeveledBlockMesh::?$CustomizableMesh  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005e7a80
//
// 005e7a80  53                   push ebx
// 005e7a81  8b5c2408             mov ebx, dword ptr [esp + 8]
// 005e7a85  55                   push ebp
// 005e7a86  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 005e7a8a  56                   push esi
// 005e7a8b  57                   push edi
// 005e7a8c  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 005e7a90  8d743f02             lea esi, [edi + edi + 2]
// 005e7a94  3bf5                 cmp esi, ebp
// 005e7a96  897c2418             mov dword ptr [esp + 0x18], edi
// 005e7a9a  7d28                 jge 0x5e7ac4
// 005e7a9c  8d642400             lea esp, [esp]
// 005e7aa0  8d04b3               lea eax, [ebx + esi*4]
// 005e7aa3  8d48fc               lea ecx, [eax - 4]
// 005e7aa6  51                   push ecx
// 005e7aa7  50                   push eax
// 005e7aa8  ff54242c             call dword ptr [esp + 0x2c]
// 005e7aac  83c408               add esp, 8
// 005e7aaf  84c0                 test al, al
// 005e7ab1  7401                 je 0x5e7ab4
// 005e7ab3  4e                   dec esi
// 005e7ab4  8b14b3               mov edx, dword ptr [ebx + esi*4]
// 005e7ab7  8914bb               mov dword ptr [ebx + edi*4], edx
// 005e7aba  8bfe                 mov edi, esi
// 005e7abc  8d743602             lea esi, [esi + esi + 2]
// 005e7ac0  3bf5                 cmp esi, ebp
// 005e7ac2  7cdc                 jl 0x5e7aa0
// 005e7ac4  750a                 jne 0x5e7ad0
// 005e7ac6  8b44abfc             mov eax, dword ptr [ebx + ebp*4 - 4]
// 005e7aca  8904bb               mov dword ptr [ebx + edi*4], eax
// 005e7acd  8d7dff               lea edi, [ebp - 1]
// 005e7ad0  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005e7ad4  8b542420             mov edx, dword ptr [esp + 0x20]
// 005e7ad8  8b442418             mov eax, dword ptr [esp + 0x18]
// 005e7adc  51                   push ecx
// 005e7add  52                   push edx
// 005e7ade  50                   push eax
// 005e7adf  57                   push edi
// 005e7ae0  53                   push ebx
// 005e7ae1  e8cafeffff           call 0x5e79b0
// 005e7ae6  83c414               add esp, 0x14
// 005e7ae9  5f                   pop edi
// 005e7aea  5e                   pop esi
// 005e7aeb  5d                   pop ebp
// 005e7aec  5b                   pop ebx
// 005e7aed  c3                   ret 
// library rbxgs-render/RenderSurface.cpp (function ??$_Adjust_heap@PAPAVRenderSurface@Render@RBX@@HPAV123@P6A_NABQAV123@0@Z@std@@YAXPAPAVRenderSurface@Render@RBX@@HHPAV123@P6A_NABQAV123@2@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render RenderSurface.cpp
