// roc 2011-06 0080fdd0  unit: CXTPPaintManager  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0080fdd0
//
// 0080fdd0  837c241400           cmp dword ptr [esp + 0x14], 0
// 0080fdd5  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0080fdd9  8b8160010000         mov eax, dword ptr [ecx + 0x160]
// 0080fddf  56                   push esi
// 0080fde0  7423                 je 0x80fe05
// 0080fde2  8bf0                 mov esi, eax
// 0080fde4  85c0                 test eax, eax
// 0080fde6  7f04                 jg 0x80fdec
// 0080fde8  8b742414             mov esi, dword ptr [esp + 0x14]
// 0080fdec  8b8164010000         mov eax, dword ptr [ecx + 0x164]
// 0080fdf2  85c0                 test eax, eax
// 0080fdf4  7e43                 jle 0x80fe39
// 0080fdf6  8bd0                 mov edx, eax
// 0080fdf8  8b442408             mov eax, dword ptr [esp + 8]
// 0080fdfc  897004               mov dword ptr [eax + 4], esi
// 0080fdff  8910                 mov dword ptr [eax], edx
// 0080fe01  5e                   pop esi
// 0080fe02  c21400               ret 0x14
// 0080fe05  8bd0                 mov edx, eax
// 0080fe07  85c0                 test eax, eax
// 0080fe09  7f04                 jg 0x80fe0f
// 0080fe0b  8b542410             mov edx, dword ptr [esp + 0x10]
// 0080fe0f  8b8164010000         mov eax, dword ptr [ecx + 0x164]
// 0080fe15  85c0                 test eax, eax
// 0080fe17  7e0f                 jle 0x80fe28
// 0080fe19  8bf0                 mov esi, eax
// 0080fe1b  8b442408             mov eax, dword ptr [esp + 8]
// 0080fe1f  897004               mov dword ptr [eax + 4], esi
// 0080fe22  8910                 mov dword ptr [eax], edx
// 0080fe24  5e                   pop esi
// 0080fe25  c21400               ret 0x14
// 0080fe28  8b742414             mov esi, dword ptr [esp + 0x14]
// 0080fe2c  8b442408             mov eax, dword ptr [esp + 8]
// 0080fe30  897004               mov dword ptr [eax + 4], esi
// 0080fe33  8910                 mov dword ptr [eax], edx
// 0080fe35  5e                   pop esi
// 0080fe36  c21400               ret 0x14
// 0080fe39  8b442408             mov eax, dword ptr [esp + 8]
// 0080fe3d  8b542410             mov edx, dword ptr [esp + 0x10]
// 0080fe41  897004               mov dword ptr [eax + 4], esi
// 0080fe44  8910                 mov dword ptr [eax], edx
// 0080fe46  5e                   pop esi
// 0080fe47  c21400               ret 0x14
// library xtp-11.2.2/Source\CommandBars\XTPPaintManager.cpp (function ?GetControlSize@CXTPPaintManager@@IAE?AVCSize@@PAVCXTPControl@@V2@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPaintManager.cpp
