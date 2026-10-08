// roc 2007-08 004fccb0  unit: RBX::Render::AggregateChunk  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004fccb0
//
// 004fccb0  56                   push esi
// 004fccb1  57                   push edi
// 004fccb2  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004fccb6  8d47ff               lea eax, [edi - 1]
// 004fccb9  99                   cdq 
// 004fccba  2bc2                 sub eax, edx
// 004fccbc  8bf0                 mov esi, eax
// 004fccbe  d1fe                 sar esi, 1
// 004fccc0  397c2414             cmp dword ptr [esp + 0x14], edi
// 004fccc4  7d44                 jge 0x4fcd0a
// 004fccc6  55                   push ebp
// 004fccc7  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 004fcccb  53                   push ebx
// 004fcccc  8d642400             lea esp, [esp]
// 004fccd0  8d442420             lea eax, [esp + 0x20]
// 004fccd4  50                   push eax
// 004fccd5  8d5cb500             lea ebx, [ebp + esi*4]
// 004fccd9  53                   push ebx
// 004fccda  ff54242c             call dword ptr [esp + 0x2c]
// 004fccde  83c408               add esp, 8
// 004fcce1  84c0                 test al, al
// 004fcce3  7418                 je 0x4fccfd
// 004fcce5  8b0b                 mov ecx, dword ptr [ebx]
// 004fcce7  8d46ff               lea eax, [esi - 1]
// 004fccea  99                   cdq 
// 004fcceb  2bc2                 sub eax, edx
// 004fcced  894cbd00             mov dword ptr [ebp + edi*4], ecx
// 004fccf1  8bfe                 mov edi, esi
// 004fccf3  d1f8                 sar eax, 1
// 004fccf5  397c241c             cmp dword ptr [esp + 0x1c], edi
// 004fccf9  8bf0                 mov esi, eax
// 004fccfb  7cd3                 jl 0x4fccd0
// 004fccfd  8b542420             mov edx, dword ptr [esp + 0x20]
// 004fcd01  5b                   pop ebx
// 004fcd02  8954bd00             mov dword ptr [ebp + edi*4], edx
// 004fcd06  5d                   pop ebp
// 004fcd07  5f                   pop edi
// 004fcd08  5e                   pop esi
// 004fcd09  c3                   ret 
// 004fcd0a  8b442418             mov eax, dword ptr [esp + 0x18]
// 004fcd0e  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004fcd12  8904b9               mov dword ptr [ecx + edi*4], eax
// 004fcd15  5f                   pop edi
// 004fcd16  5e                   pop esi
// 004fcd17  c3                   ret 
// library rbxgs-render/RenderSurface.cpp (function ??$_Push_heap@PAPAVRenderSurface@Render@RBX@@HPAV123@P6A_NABQAV123@0@Z@std@@YAXPAPAVRenderSurface@Render@RBX@@HHPAV123@P6A_NABQAV123@2@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render RenderSurface.cpp
