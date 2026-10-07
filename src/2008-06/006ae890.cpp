// roc 2008-06 006ae890  unit: CXTPPaintManager  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ae890
//
// 006ae890  837c241400           cmp dword ptr [esp + 0x14], 0
// 006ae895  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006ae899  8b8160010000         mov eax, dword ptr [ecx + 0x160]
// 006ae89f  56                   push esi
// 006ae8a0  7423                 je 0x6ae8c5
// 006ae8a2  8bf0                 mov esi, eax
// 006ae8a4  85c0                 test eax, eax
// 006ae8a6  7f04                 jg 0x6ae8ac
// 006ae8a8  8b742414             mov esi, dword ptr [esp + 0x14]
// 006ae8ac  8b8164010000         mov eax, dword ptr [ecx + 0x164]
// 006ae8b2  85c0                 test eax, eax
// 006ae8b4  7e43                 jle 0x6ae8f9
// 006ae8b6  8bd0                 mov edx, eax
// 006ae8b8  8b442408             mov eax, dword ptr [esp + 8]
// 006ae8bc  897004               mov dword ptr [eax + 4], esi
// 006ae8bf  8910                 mov dword ptr [eax], edx
// 006ae8c1  5e                   pop esi
// 006ae8c2  c21400               ret 0x14
// 006ae8c5  8bd0                 mov edx, eax
// 006ae8c7  85c0                 test eax, eax
// 006ae8c9  7f04                 jg 0x6ae8cf
// 006ae8cb  8b542410             mov edx, dword ptr [esp + 0x10]
// 006ae8cf  8b8164010000         mov eax, dword ptr [ecx + 0x164]
// 006ae8d5  85c0                 test eax, eax
// 006ae8d7  7e0f                 jle 0x6ae8e8
// 006ae8d9  8bf0                 mov esi, eax
// 006ae8db  8b442408             mov eax, dword ptr [esp + 8]
// 006ae8df  897004               mov dword ptr [eax + 4], esi
// 006ae8e2  8910                 mov dword ptr [eax], edx
// 006ae8e4  5e                   pop esi
// 006ae8e5  c21400               ret 0x14
// 006ae8e8  8b742414             mov esi, dword ptr [esp + 0x14]
// 006ae8ec  8b442408             mov eax, dword ptr [esp + 8]
// 006ae8f0  897004               mov dword ptr [eax + 4], esi
// 006ae8f3  8910                 mov dword ptr [eax], edx
// 006ae8f5  5e                   pop esi
// 006ae8f6  c21400               ret 0x14
// 006ae8f9  8b442408             mov eax, dword ptr [esp + 8]
// 006ae8fd  8b542410             mov edx, dword ptr [esp + 0x10]
// 006ae901  897004               mov dword ptr [eax + 4], esi
// 006ae904  8910                 mov dword ptr [eax], edx
// 006ae906  5e                   pop esi
// 006ae907  c21400               ret 0x14
// library xtp-11.2.2/Source\CommandBars\XTPPaintManager.cpp (function ?GetControlSize@CXTPPaintManager@@IAE?AVCSize@@PAVCXTPControl@@V2@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPaintManager.cpp
