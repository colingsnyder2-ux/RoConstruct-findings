// roc 2012-06 00a0e580  unit: XTPPaintThemes::CXTPOffice2003Theme  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a0e580
//
// 00a0e580  8b542408             mov edx, dword ptr [esp + 8]
// 00a0e584  8b8200010000         mov eax, dword ptr [edx + 0x100]
// 00a0e58a  85c0                 test eax, eax
// 00a0e58c  7417                 je 0xa0e5a5
// 00a0e58e  83f801               cmp eax, 1
// 00a0e591  7412                 je 0xa0e5a5
// 00a0e593  56                   push esi
// 00a0e594  8b742408             mov esi, dword ptr [esp + 8]
// 00a0e598  52                   push edx
// 00a0e599  56                   push esi
// 00a0e59a  e8d1e7f7ff           call 0x98cd70
// 00a0e59f  8bc6                 mov eax, esi
// 00a0e5a1  5e                   pop esi
// 00a0e5a2  c20800               ret 8
// 00a0e5a5  8b442404             mov eax, dword ptr [esp + 4]
// 00a0e5a9  b902000000           mov ecx, 2
// 00a0e5ae  c70004000000         mov dword ptr [eax], 4
// 00a0e5b4  894804               mov dword ptr [eax + 4], ecx
// 00a0e5b7  894808               mov dword ptr [eax + 8], ecx
// 00a0e5ba  89480c               mov dword ptr [eax + 0xc], ecx
// 00a0e5bd  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPOffice2003Theme.cpp (function ?GetCommandBarBorders@CXTPOffice2003Theme@XTPPaintThemes@@MAE?AVCRect@@PAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2003Theme.cpp
