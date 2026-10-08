// roc 2009-06 005689f0  unit: RBX::RbxG3D::RenderScene  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005689f0
//
// 005689f0  56                   push esi
// 005689f1  57                   push edi
// 005689f2  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005689f6  8d47ff               lea eax, [edi - 1]
// 005689f9  99                   cdq 
// 005689fa  2bc2                 sub eax, edx
// 005689fc  8bf0                 mov esi, eax
// 005689fe  d1fe                 sar esi, 1
// 00568a00  397c2414             cmp dword ptr [esp + 0x14], edi
// 00568a04  7d44                 jge 0x568a4a
// 00568a06  55                   push ebp
// 00568a07  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00568a0b  53                   push ebx
// 00568a0c  8d642400             lea esp, [esp]
// 00568a10  8d442420             lea eax, [esp + 0x20]
// 00568a14  50                   push eax
// 00568a15  8d5cb500             lea ebx, [ebp + esi*4]
// 00568a19  53                   push ebx
// 00568a1a  ff54242c             call dword ptr [esp + 0x2c]
// 00568a1e  83c408               add esp, 8
// 00568a21  84c0                 test al, al
// 00568a23  7418                 je 0x568a3d
// 00568a25  8b0b                 mov ecx, dword ptr [ebx]
// 00568a27  8d46ff               lea eax, [esi - 1]
// 00568a2a  99                   cdq 
// 00568a2b  2bc2                 sub eax, edx
// 00568a2d  894cbd00             mov dword ptr [ebp + edi*4], ecx
// 00568a31  8bfe                 mov edi, esi
// 00568a33  d1f8                 sar eax, 1
// 00568a35  397c241c             cmp dword ptr [esp + 0x1c], edi
// 00568a39  8bf0                 mov esi, eax
// 00568a3b  7cd3                 jl 0x568a10
// 00568a3d  8b542420             mov edx, dword ptr [esp + 0x20]
// 00568a41  5b                   pop ebx
// 00568a42  8954bd00             mov dword ptr [ebp + edi*4], edx
// 00568a46  5d                   pop ebp
// 00568a47  5f                   pop edi
// 00568a48  5e                   pop esi
// 00568a49  c3                   ret 
// 00568a4a  8b442418             mov eax, dword ptr [esp + 0x18]
// 00568a4e  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00568a52  8904b9               mov dword ptr [ecx + edi*4], eax
// 00568a55  5f                   pop edi
// 00568a56  5e                   pop esi
// 00568a57  c3                   ret 
// library rbxgs-render/RenderSurface.cpp (function ??$_Push_heap@PAPAVRenderSurface@Render@RBX@@HPAV123@P6A_NABQAV123@0@Z@std@@YAXPAPAVRenderSurface@Render@RBX@@HHPAV123@P6A_NABQAV123@2@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render RenderSurface.cpp
