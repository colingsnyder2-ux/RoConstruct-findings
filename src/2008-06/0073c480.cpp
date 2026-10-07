// roc 2008-06 0073c480  unit: XTPPaintThemes::CXTPOffice2003Theme  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0073c480
//
// 0073c480  8b542408             mov edx, dword ptr [esp + 8]
// 0073c484  8b8200010000         mov eax, dword ptr [edx + 0x100]
// 0073c48a  85c0                 test eax, eax
// 0073c48c  7417                 je 0x73c4a5
// 0073c48e  83f801               cmp eax, 1
// 0073c491  7412                 je 0x73c4a5
// 0073c493  56                   push esi
// 0073c494  8b742408             mov esi, dword ptr [esp + 8]
// 0073c498  52                   push edx
// 0073c499  56                   push esi
// 0073c49a  e83170f7ff           call 0x6b34d0
// 0073c49f  8bc6                 mov eax, esi
// 0073c4a1  5e                   pop esi
// 0073c4a2  c20800               ret 8
// 0073c4a5  8b442404             mov eax, dword ptr [esp + 4]
// 0073c4a9  b902000000           mov ecx, 2
// 0073c4ae  c70004000000         mov dword ptr [eax], 4
// 0073c4b4  894804               mov dword ptr [eax + 4], ecx
// 0073c4b7  894808               mov dword ptr [eax + 8], ecx
// 0073c4ba  89480c               mov dword ptr [eax + 0xc], ecx
// 0073c4bd  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPOffice2003Theme.cpp (function ?GetCommandBarBorders@CXTPOffice2003Theme@XTPPaintThemes@@MAE?AVCRect@@PAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2003Theme.cpp
