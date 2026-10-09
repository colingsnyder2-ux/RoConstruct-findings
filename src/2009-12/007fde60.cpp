// roc 2009-12 007fde60  unit: CXTPPaintManager  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007fde60
//
// 007fde60  837c241400           cmp dword ptr [esp + 0x14], 0
// 007fde65  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007fde69  8b8160010000         mov eax, dword ptr [ecx + 0x160]
// 007fde6f  56                   push esi
// 007fde70  7423                 je 0x7fde95
// 007fde72  8bf0                 mov esi, eax
// 007fde74  85c0                 test eax, eax
// 007fde76  7f04                 jg 0x7fde7c
// 007fde78  8b742414             mov esi, dword ptr [esp + 0x14]
// 007fde7c  8b8164010000         mov eax, dword ptr [ecx + 0x164]
// 007fde82  85c0                 test eax, eax
// 007fde84  7e43                 jle 0x7fdec9
// 007fde86  8bd0                 mov edx, eax
// 007fde88  8b442408             mov eax, dword ptr [esp + 8]
// 007fde8c  897004               mov dword ptr [eax + 4], esi
// 007fde8f  8910                 mov dword ptr [eax], edx
// 007fde91  5e                   pop esi
// 007fde92  c21400               ret 0x14
// 007fde95  8bd0                 mov edx, eax
// 007fde97  85c0                 test eax, eax
// 007fde99  7f04                 jg 0x7fde9f
// 007fde9b  8b542410             mov edx, dword ptr [esp + 0x10]
// 007fde9f  8b8164010000         mov eax, dword ptr [ecx + 0x164]
// 007fdea5  85c0                 test eax, eax
// 007fdea7  7e0f                 jle 0x7fdeb8
// 007fdea9  8bf0                 mov esi, eax
// 007fdeab  8b442408             mov eax, dword ptr [esp + 8]
// 007fdeaf  897004               mov dword ptr [eax + 4], esi
// 007fdeb2  8910                 mov dword ptr [eax], edx
// 007fdeb4  5e                   pop esi
// 007fdeb5  c21400               ret 0x14
// 007fdeb8  8b742414             mov esi, dword ptr [esp + 0x14]
// 007fdebc  8b442408             mov eax, dword ptr [esp + 8]
// 007fdec0  897004               mov dword ptr [eax + 4], esi
// 007fdec3  8910                 mov dword ptr [eax], edx
// 007fdec5  5e                   pop esi
// 007fdec6  c21400               ret 0x14
// 007fdec9  8b442408             mov eax, dword ptr [esp + 8]
// 007fdecd  8b542410             mov edx, dword ptr [esp + 0x10]
// 007fded1  897004               mov dword ptr [eax + 4], esi
// 007fded4  8910                 mov dword ptr [eax], edx
// 007fded6  5e                   pop esi
// 007fded7  c21400               ret 0x14
// library xtp-11.2.2/Source\CommandBars\XTPPaintManager.cpp (function ?GetControlSize@CXTPPaintManager@@IAE?AVCSize@@PAVCXTPControl@@V2@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPaintManager.cpp
