// roc 2012-06 009880b0  unit: CXTPPaintManager  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009880b0
//
// 009880b0  837c241400           cmp dword ptr [esp + 0x14], 0
// 009880b5  8b4c2408             mov ecx, dword ptr [esp + 8]
// 009880b9  8b8160010000         mov eax, dword ptr [ecx + 0x160]
// 009880bf  56                   push esi
// 009880c0  7423                 je 0x9880e5
// 009880c2  8bf0                 mov esi, eax
// 009880c4  85c0                 test eax, eax
// 009880c6  7f04                 jg 0x9880cc
// 009880c8  8b742414             mov esi, dword ptr [esp + 0x14]
// 009880cc  8b8164010000         mov eax, dword ptr [ecx + 0x164]
// 009880d2  85c0                 test eax, eax
// 009880d4  7e43                 jle 0x988119
// 009880d6  8bd0                 mov edx, eax
// 009880d8  8b442408             mov eax, dword ptr [esp + 8]
// 009880dc  897004               mov dword ptr [eax + 4], esi
// 009880df  8910                 mov dword ptr [eax], edx
// 009880e1  5e                   pop esi
// 009880e2  c21400               ret 0x14
// 009880e5  8bd0                 mov edx, eax
// 009880e7  85c0                 test eax, eax
// 009880e9  7f04                 jg 0x9880ef
// 009880eb  8b542410             mov edx, dword ptr [esp + 0x10]
// 009880ef  8b8164010000         mov eax, dword ptr [ecx + 0x164]
// 009880f5  85c0                 test eax, eax
// 009880f7  7e0f                 jle 0x988108
// 009880f9  8bf0                 mov esi, eax
// 009880fb  8b442408             mov eax, dword ptr [esp + 8]
// 009880ff  897004               mov dword ptr [eax + 4], esi
// 00988102  8910                 mov dword ptr [eax], edx
// 00988104  5e                   pop esi
// 00988105  c21400               ret 0x14
// 00988108  8b742414             mov esi, dword ptr [esp + 0x14]
// 0098810c  8b442408             mov eax, dword ptr [esp + 8]
// 00988110  897004               mov dword ptr [eax + 4], esi
// 00988113  8910                 mov dword ptr [eax], edx
// 00988115  5e                   pop esi
// 00988116  c21400               ret 0x14
// 00988119  8b442408             mov eax, dword ptr [esp + 8]
// 0098811d  8b542410             mov edx, dword ptr [esp + 0x10]
// 00988121  897004               mov dword ptr [eax + 4], esi
// 00988124  8910                 mov dword ptr [eax], edx
// 00988126  5e                   pop esi
// 00988127  c21400               ret 0x14
// library xtp-11.2.2/Source\CommandBars\XTPPaintManager.cpp (function ?GetControlSize@CXTPPaintManager@@IAE?AVCSize@@PAVCXTPControl@@V2@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPaintManager.cpp
