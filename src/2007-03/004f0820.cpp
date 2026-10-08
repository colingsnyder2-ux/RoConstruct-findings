// roc 2007-03 004f0820  unit: seg_004f0000  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f0820
//
// 004f0820  56                   push esi
// 004f0821  57                   push edi
// 004f0822  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004f0826  8d47ff               lea eax, [edi - 1]
// 004f0829  99                   cdq 
// 004f082a  2bc2                 sub eax, edx
// 004f082c  8bf0                 mov esi, eax
// 004f082e  d1fe                 sar esi, 1
// 004f0830  397c2414             cmp dword ptr [esp + 0x14], edi
// 004f0834  7d44                 jge 0x4f087a
// 004f0836  55                   push ebp
// 004f0837  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 004f083b  53                   push ebx
// 004f083c  8d642400             lea esp, [esp]
// 004f0840  8d442420             lea eax, [esp + 0x20]
// 004f0844  50                   push eax
// 004f0845  8d5cb500             lea ebx, [ebp + esi*4]
// 004f0849  53                   push ebx
// 004f084a  ff54242c             call dword ptr [esp + 0x2c]
// 004f084e  83c408               add esp, 8
// 004f0851  84c0                 test al, al
// 004f0853  7418                 je 0x4f086d
// 004f0855  8b0b                 mov ecx, dword ptr [ebx]
// 004f0857  8d46ff               lea eax, [esi - 1]
// 004f085a  99                   cdq 
// 004f085b  2bc2                 sub eax, edx
// 004f085d  894cbd00             mov dword ptr [ebp + edi*4], ecx
// 004f0861  8bfe                 mov edi, esi
// 004f0863  d1f8                 sar eax, 1
// 004f0865  397c241c             cmp dword ptr [esp + 0x1c], edi
// 004f0869  8bf0                 mov esi, eax
// 004f086b  7cd3                 jl 0x4f0840
// 004f086d  8b542420             mov edx, dword ptr [esp + 0x20]
// 004f0871  5b                   pop ebx
// 004f0872  8954bd00             mov dword ptr [ebp + edi*4], edx
// 004f0876  5d                   pop ebp
// 004f0877  5f                   pop edi
// 004f0878  5e                   pop esi
// 004f0879  c3                   ret 
// 004f087a  8b442418             mov eax, dword ptr [esp + 0x18]
// 004f087e  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004f0882  8904b9               mov dword ptr [ecx + edi*4], eax
// 004f0885  5f                   pop edi
// 004f0886  5e                   pop esi
// 004f0887  c3                   ret 
// library rbxgs-render/RenderSurface.cpp (function ??$_Push_heap@PAPAVRenderSurface@Render@RBX@@HPAV123@P6A_NABQAV123@0@Z@std@@YAXPAPAVRenderSurface@Render@RBX@@HHPAV123@P6A_NABQAV123@2@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render RenderSurface.cpp
