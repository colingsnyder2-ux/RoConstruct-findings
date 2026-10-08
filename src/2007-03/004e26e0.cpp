// roc 2007-03 004e26e0  unit: seg_004e0000  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004e26e0
//
// 004e26e0  56                   push esi
// 004e26e1  57                   push edi
// 004e26e2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004e26e6  8bf1                 mov esi, ecx
// 004e26e8  8b06                 mov eax, dword ptr [esi]
// 004e26ea  8b5004               mov edx, dword ptr [eax + 4]
// 004e26ed  57                   push edi
// 004e26ee  ffd2                 call edx
// 004e26f0  8b06                 mov eax, dword ptr [esi]
// 004e26f2  8b5008               mov edx, dword ptr [eax + 8]
// 004e26f5  57                   push edi
// 004e26f6  8bce                 mov ecx, esi
// 004e26f8  ffd2                 call edx
// 004e26fa  8b06                 mov eax, dword ptr [esi]
// 004e26fc  8b500c               mov edx, dword ptr [eax + 0xc]
// 004e26ff  57                   push edi
// 004e2700  8bce                 mov ecx, esi
// 004e2702  ffd2                 call edx
// 004e2704  8b06                 mov eax, dword ptr [esi]
// 004e2706  8b5010               mov edx, dword ptr [eax + 0x10]
// 004e2709  57                   push edi
// 004e270a  8bce                 mov ecx, esi
// 004e270c  ffd2                 call edx
// 004e270e  8b06                 mov eax, dword ptr [esi]
// 004e2710  8b5014               mov edx, dword ptr [eax + 0x14]
// 004e2713  57                   push edi
// 004e2714  8bce                 mov ecx, esi
// 004e2716  ffd2                 call edx
// 004e2718  8b06                 mov eax, dword ptr [esi]
// 004e271a  8b5018               mov edx, dword ptr [eax + 0x18]
// 004e271d  57                   push edi
// 004e271e  8bce                 mov ecx, esi
// 004e2720  ffd2                 call edx
// 004e2722  5f                   pop edi
// 004e2723  5e                   pop esi
// 004e2724  c20400               ret 4
// library rbxgs-view/QuadVolume.cpp (function ?build@LevelBuilder@View@RBX@@UAEXW4Purpose@123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view QuadVolume.cpp
