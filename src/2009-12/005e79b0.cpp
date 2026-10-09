// roc 2009-12 005e79b0  unit: RBX::VBeveledBlockMesh::?$CustomizableMesh  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005e79b0
//
// 005e79b0  56                   push esi
// 005e79b1  57                   push edi
// 005e79b2  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005e79b6  8d47ff               lea eax, [edi - 1]
// 005e79b9  99                   cdq 
// 005e79ba  2bc2                 sub eax, edx
// 005e79bc  8bf0                 mov esi, eax
// 005e79be  d1fe                 sar esi, 1
// 005e79c0  397c2414             cmp dword ptr [esp + 0x14], edi
// 005e79c4  7d44                 jge 0x5e7a0a
// 005e79c6  55                   push ebp
// 005e79c7  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 005e79cb  53                   push ebx
// 005e79cc  8d642400             lea esp, [esp]
// 005e79d0  8d442420             lea eax, [esp + 0x20]
// 005e79d4  50                   push eax
// 005e79d5  8d5cb500             lea ebx, [ebp + esi*4]
// 005e79d9  53                   push ebx
// 005e79da  ff54242c             call dword ptr [esp + 0x2c]
// 005e79de  83c408               add esp, 8
// 005e79e1  84c0                 test al, al
// 005e79e3  7418                 je 0x5e79fd
// 005e79e5  8b0b                 mov ecx, dword ptr [ebx]
// 005e79e7  8d46ff               lea eax, [esi - 1]
// 005e79ea  99                   cdq 
// 005e79eb  2bc2                 sub eax, edx
// 005e79ed  894cbd00             mov dword ptr [ebp + edi*4], ecx
// 005e79f1  8bfe                 mov edi, esi
// 005e79f3  d1f8                 sar eax, 1
// 005e79f5  397c241c             cmp dword ptr [esp + 0x1c], edi
// 005e79f9  8bf0                 mov esi, eax
// 005e79fb  7cd3                 jl 0x5e79d0
// 005e79fd  8b542420             mov edx, dword ptr [esp + 0x20]
// 005e7a01  5b                   pop ebx
// 005e7a02  8954bd00             mov dword ptr [ebp + edi*4], edx
// 005e7a06  5d                   pop ebp
// 005e7a07  5f                   pop edi
// 005e7a08  5e                   pop esi
// 005e7a09  c3                   ret 
// 005e7a0a  8b442418             mov eax, dword ptr [esp + 0x18]
// 005e7a0e  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005e7a12  8904b9               mov dword ptr [ecx + edi*4], eax
// 005e7a15  5f                   pop edi
// 005e7a16  5e                   pop esi
// 005e7a17  c3                   ret 
// library rbxgs-render/RenderSurface.cpp (function ??$_Push_heap@PAPAVRenderSurface@Render@RBX@@HPAV123@P6A_NABQAV123@0@Z@std@@YAXPAPAVRenderSurface@Render@RBX@@HHPAV123@P6A_NABQAV123@2@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render RenderSurface.cpp
