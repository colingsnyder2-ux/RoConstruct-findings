// roc 2010-06 0054af80  unit: RBX::AggregateChunk  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0054af80
//
// 0054af80  56                   push esi
// 0054af81  57                   push edi
// 0054af82  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0054af86  8d47ff               lea eax, [edi - 1]
// 0054af89  99                   cdq 
// 0054af8a  2bc2                 sub eax, edx
// 0054af8c  8bf0                 mov esi, eax
// 0054af8e  d1fe                 sar esi, 1
// 0054af90  397c2414             cmp dword ptr [esp + 0x14], edi
// 0054af94  7d44                 jge 0x54afda
// 0054af96  55                   push ebp
// 0054af97  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0054af9b  53                   push ebx
// 0054af9c  8d642400             lea esp, [esp]
// 0054afa0  8d442420             lea eax, [esp + 0x20]
// 0054afa4  50                   push eax
// 0054afa5  8d5cb500             lea ebx, [ebp + esi*4]
// 0054afa9  53                   push ebx
// 0054afaa  ff54242c             call dword ptr [esp + 0x2c]
// 0054afae  83c408               add esp, 8
// 0054afb1  84c0                 test al, al
// 0054afb3  7418                 je 0x54afcd
// 0054afb5  8b0b                 mov ecx, dword ptr [ebx]
// 0054afb7  8d46ff               lea eax, [esi - 1]
// 0054afba  99                   cdq 
// 0054afbb  2bc2                 sub eax, edx
// 0054afbd  894cbd00             mov dword ptr [ebp + edi*4], ecx
// 0054afc1  8bfe                 mov edi, esi
// 0054afc3  d1f8                 sar eax, 1
// 0054afc5  397c241c             cmp dword ptr [esp + 0x1c], edi
// 0054afc9  8bf0                 mov esi, eax
// 0054afcb  7cd3                 jl 0x54afa0
// 0054afcd  8b542420             mov edx, dword ptr [esp + 0x20]
// 0054afd1  5b                   pop ebx
// 0054afd2  8954bd00             mov dword ptr [ebp + edi*4], edx
// 0054afd6  5d                   pop ebp
// 0054afd7  5f                   pop edi
// 0054afd8  5e                   pop esi
// 0054afd9  c3                   ret 
// 0054afda  8b442418             mov eax, dword ptr [esp + 0x18]
// 0054afde  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0054afe2  8904b9               mov dword ptr [ecx + edi*4], eax
// 0054afe5  5f                   pop edi
// 0054afe6  5e                   pop esi
// 0054afe7  c3                   ret 
// library rbxgs-render/RenderSurface.cpp (function ??$_Push_heap@PAPAVRenderSurface@Render@RBX@@HPAV123@P6A_NABQAV123@0@Z@std@@YAXPAPAVRenderSurface@Render@RBX@@HHPAV123@P6A_NABQAV123@2@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render RenderSurface.cpp
