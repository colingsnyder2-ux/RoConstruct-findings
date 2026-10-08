// roc 2009-06 00722fa0  unit: CXTPPaintManager  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00722fa0
//
// 00722fa0  837c241400           cmp dword ptr [esp + 0x14], 0
// 00722fa5  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00722fa9  8b8160010000         mov eax, dword ptr [ecx + 0x160]
// 00722faf  56                   push esi
// 00722fb0  7423                 je 0x722fd5
// 00722fb2  8bf0                 mov esi, eax
// 00722fb4  85c0                 test eax, eax
// 00722fb6  7f04                 jg 0x722fbc
// 00722fb8  8b742414             mov esi, dword ptr [esp + 0x14]
// 00722fbc  8b8164010000         mov eax, dword ptr [ecx + 0x164]
// 00722fc2  85c0                 test eax, eax
// 00722fc4  7e43                 jle 0x723009
// 00722fc6  8bd0                 mov edx, eax
// 00722fc8  8b442408             mov eax, dword ptr [esp + 8]
// 00722fcc  897004               mov dword ptr [eax + 4], esi
// 00722fcf  8910                 mov dword ptr [eax], edx
// 00722fd1  5e                   pop esi
// 00722fd2  c21400               ret 0x14
// 00722fd5  8bd0                 mov edx, eax
// 00722fd7  85c0                 test eax, eax
// 00722fd9  7f04                 jg 0x722fdf
// 00722fdb  8b542410             mov edx, dword ptr [esp + 0x10]
// 00722fdf  8b8164010000         mov eax, dword ptr [ecx + 0x164]
// 00722fe5  85c0                 test eax, eax
// 00722fe7  7e0f                 jle 0x722ff8
// 00722fe9  8bf0                 mov esi, eax
// 00722feb  8b442408             mov eax, dword ptr [esp + 8]
// 00722fef  897004               mov dword ptr [eax + 4], esi
// 00722ff2  8910                 mov dword ptr [eax], edx
// 00722ff4  5e                   pop esi
// 00722ff5  c21400               ret 0x14
// 00722ff8  8b742414             mov esi, dword ptr [esp + 0x14]
// 00722ffc  8b442408             mov eax, dword ptr [esp + 8]
// 00723000  897004               mov dword ptr [eax + 4], esi
// 00723003  8910                 mov dword ptr [eax], edx
// 00723005  5e                   pop esi
// 00723006  c21400               ret 0x14
// 00723009  8b442408             mov eax, dword ptr [esp + 8]
// 0072300d  8b542410             mov edx, dword ptr [esp + 0x10]
// 00723011  897004               mov dword ptr [eax + 4], esi
// 00723014  8910                 mov dword ptr [eax], edx
// 00723016  5e                   pop esi
// 00723017  c21400               ret 0x14
// library xtp-11.2.2/Source\CommandBars\XTPPaintManager.cpp (function ?GetControlSize@CXTPPaintManager@@IAE?AVCSize@@PAVCXTPControl@@V2@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPaintManager.cpp
