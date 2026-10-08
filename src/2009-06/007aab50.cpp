// roc 2009-06 007aab50  unit: XTPPaintThemes::CXTPOffice2003Theme  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007aab50
//
// 007aab50  8b542408             mov edx, dword ptr [esp + 8]
// 007aab54  8b8200010000         mov eax, dword ptr [edx + 0x100]
// 007aab5a  85c0                 test eax, eax
// 007aab5c  7417                 je 0x7aab75
// 007aab5e  83f801               cmp eax, 1
// 007aab61  7412                 je 0x7aab75
// 007aab63  56                   push esi
// 007aab64  8b742408             mov esi, dword ptr [esp + 8]
// 007aab68  52                   push edx
// 007aab69  56                   push esi
// 007aab6a  e881d0f7ff           call 0x727bf0
// 007aab6f  8bc6                 mov eax, esi
// 007aab71  5e                   pop esi
// 007aab72  c20800               ret 8
// 007aab75  8b442404             mov eax, dword ptr [esp + 4]
// 007aab79  b902000000           mov ecx, 2
// 007aab7e  c70004000000         mov dword ptr [eax], 4
// 007aab84  894804               mov dword ptr [eax + 4], ecx
// 007aab87  894808               mov dword ptr [eax + 8], ecx
// 007aab8a  89480c               mov dword ptr [eax + 0xc], ecx
// 007aab8d  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPOffice2003Theme.cpp (function ?GetCommandBarBorders@CXTPOffice2003Theme@XTPPaintThemes@@MAE?AVCRect@@PAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2003Theme.cpp
