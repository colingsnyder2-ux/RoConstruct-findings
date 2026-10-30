// roc 2010-06 00838f70  unit: XTPPaintThemes::CXTPOffice2003Theme  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00838f70
//
// 00838f70  8b542408             mov edx, dword ptr [esp + 8]
// 00838f74  8b8200010000         mov eax, dword ptr [edx + 0x100]
// 00838f7a  85c0                 test eax, eax
// 00838f7c  7417                 je 0x838f95
// 00838f7e  83f801               cmp eax, 1
// 00838f81  7412                 je 0x838f95
// 00838f83  56                   push esi
// 00838f84  8b742408             mov esi, dword ptr [esp + 8]
// 00838f88  52                   push edx
// 00838f89  56                   push esi
// 00838f8a  e8e196f7ff           call 0x7b2670
// 00838f8f  8bc6                 mov eax, esi
// 00838f91  5e                   pop esi
// 00838f92  c20800               ret 8
// 00838f95  8b442404             mov eax, dword ptr [esp + 4]
// 00838f99  b902000000           mov ecx, 2
// 00838f9e  c70004000000         mov dword ptr [eax], 4
// 00838fa4  894804               mov dword ptr [eax + 4], ecx
// 00838fa7  894808               mov dword ptr [eax + 8], ecx
// 00838faa  89480c               mov dword ptr [eax + 0xc], ecx
// 00838fad  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPOffice2003Theme.cpp (function ?GetCommandBarBorders@CXTPOffice2003Theme@XTPPaintThemes@@MAE?AVCRect@@PAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2003Theme.cpp
