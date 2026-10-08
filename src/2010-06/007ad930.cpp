// roc 2010-06 007ad930  unit: CXTPPaintManager  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007ad930
//
// 007ad930  837c241400           cmp dword ptr [esp + 0x14], 0
// 007ad935  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007ad939  8b8160010000         mov eax, dword ptr [ecx + 0x160]
// 007ad93f  56                   push esi
// 007ad940  7423                 je 0x7ad965
// 007ad942  8bf0                 mov esi, eax
// 007ad944  85c0                 test eax, eax
// 007ad946  7f04                 jg 0x7ad94c
// 007ad948  8b742414             mov esi, dword ptr [esp + 0x14]
// 007ad94c  8b8164010000         mov eax, dword ptr [ecx + 0x164]
// 007ad952  85c0                 test eax, eax
// 007ad954  7e43                 jle 0x7ad999
// 007ad956  8bd0                 mov edx, eax
// 007ad958  8b442408             mov eax, dword ptr [esp + 8]
// 007ad95c  897004               mov dword ptr [eax + 4], esi
// 007ad95f  8910                 mov dword ptr [eax], edx
// 007ad961  5e                   pop esi
// 007ad962  c21400               ret 0x14
// 007ad965  8bd0                 mov edx, eax
// 007ad967  85c0                 test eax, eax
// 007ad969  7f04                 jg 0x7ad96f
// 007ad96b  8b542410             mov edx, dword ptr [esp + 0x10]
// 007ad96f  8b8164010000         mov eax, dword ptr [ecx + 0x164]
// 007ad975  85c0                 test eax, eax
// 007ad977  7e0f                 jle 0x7ad988
// 007ad979  8bf0                 mov esi, eax
// 007ad97b  8b442408             mov eax, dword ptr [esp + 8]
// 007ad97f  897004               mov dword ptr [eax + 4], esi
// 007ad982  8910                 mov dword ptr [eax], edx
// 007ad984  5e                   pop esi
// 007ad985  c21400               ret 0x14
// 007ad988  8b742414             mov esi, dword ptr [esp + 0x14]
// 007ad98c  8b442408             mov eax, dword ptr [esp + 8]
// 007ad990  897004               mov dword ptr [eax + 4], esi
// 007ad993  8910                 mov dword ptr [eax], edx
// 007ad995  5e                   pop esi
// 007ad996  c21400               ret 0x14
// 007ad999  8b442408             mov eax, dword ptr [esp + 8]
// 007ad99d  8b542410             mov edx, dword ptr [esp + 0x10]
// 007ad9a1  897004               mov dword ptr [eax + 4], esi
// 007ad9a4  8910                 mov dword ptr [eax], edx
// 007ad9a6  5e                   pop esi
// 007ad9a7  c21400               ret 0x14
// library xtp-11.2.2/Source\CommandBars\XTPPaintManager.cpp (function ?GetControlSize@CXTPPaintManager@@IAE?AVCSize@@PAVCXTPControl@@V2@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPaintManager.cpp
