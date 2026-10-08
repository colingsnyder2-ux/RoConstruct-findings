// roc 2008-06 00505270  unit: RBX::Render::RenderScene  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00505270
//
// 00505270  56                   push esi
// 00505271  57                   push edi
// 00505272  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00505276  8d47ff               lea eax, [edi - 1]
// 00505279  99                   cdq 
// 0050527a  2bc2                 sub eax, edx
// 0050527c  8bf0                 mov esi, eax
// 0050527e  d1fe                 sar esi, 1
// 00505280  397c2414             cmp dword ptr [esp + 0x14], edi
// 00505284  7d44                 jge 0x5052ca
// 00505286  55                   push ebp
// 00505287  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0050528b  53                   push ebx
// 0050528c  8d642400             lea esp, [esp]
// 00505290  8d442420             lea eax, [esp + 0x20]
// 00505294  50                   push eax
// 00505295  8d5cb500             lea ebx, [ebp + esi*4]
// 00505299  53                   push ebx
// 0050529a  ff54242c             call dword ptr [esp + 0x2c]
// 0050529e  83c408               add esp, 8
// 005052a1  84c0                 test al, al
// 005052a3  7418                 je 0x5052bd
// 005052a5  8b0b                 mov ecx, dword ptr [ebx]
// 005052a7  8d46ff               lea eax, [esi - 1]
// 005052aa  99                   cdq 
// 005052ab  2bc2                 sub eax, edx
// 005052ad  894cbd00             mov dword ptr [ebp + edi*4], ecx
// 005052b1  8bfe                 mov edi, esi
// 005052b3  d1f8                 sar eax, 1
// 005052b5  397c241c             cmp dword ptr [esp + 0x1c], edi
// 005052b9  8bf0                 mov esi, eax
// 005052bb  7cd3                 jl 0x505290
// 005052bd  8b542420             mov edx, dword ptr [esp + 0x20]
// 005052c1  5b                   pop ebx
// 005052c2  8954bd00             mov dword ptr [ebp + edi*4], edx
// 005052c6  5d                   pop ebp
// 005052c7  5f                   pop edi
// 005052c8  5e                   pop esi
// 005052c9  c3                   ret 
// 005052ca  8b442418             mov eax, dword ptr [esp + 0x18]
// 005052ce  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005052d2  8904b9               mov dword ptr [ecx + edi*4], eax
// 005052d5  5f                   pop edi
// 005052d6  5e                   pop esi
// 005052d7  c3                   ret 
// library rbxgs-render/RenderSurface.cpp (function ??$_Push_heap@PAPAVRenderSurface@Render@RBX@@HPAV123@P6A_NABQAV123@0@Z@std@@YAXPAPAVRenderSurface@Render@RBX@@HHPAV123@P6A_NABQAV123@2@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render RenderSurface.cpp
