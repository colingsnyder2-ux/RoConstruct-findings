// roc 2011-06 00895fa0  unit: XTPPaintThemes::CXTPOffice2003Theme  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00895fa0
//
// 00895fa0  8b542408             mov edx, dword ptr [esp + 8]
// 00895fa4  8b8200010000         mov eax, dword ptr [edx + 0x100]
// 00895faa  85c0                 test eax, eax
// 00895fac  7417                 je 0x895fc5
// 00895fae  83f801               cmp eax, 1
// 00895fb1  7412                 je 0x895fc5
// 00895fb3  56                   push esi
// 00895fb4  8b742408             mov esi, dword ptr [esp + 8]
// 00895fb8  52                   push edx
// 00895fb9  56                   push esi
// 00895fba  e8c1eaf7ff           call 0x814a80
// 00895fbf  8bc6                 mov eax, esi
// 00895fc1  5e                   pop esi
// 00895fc2  c20800               ret 8
// 00895fc5  8b442404             mov eax, dword ptr [esp + 4]
// 00895fc9  b902000000           mov ecx, 2
// 00895fce  c70004000000         mov dword ptr [eax], 4
// 00895fd4  894804               mov dword ptr [eax + 4], ecx
// 00895fd7  894808               mov dword ptr [eax + 8], ecx
// 00895fda  89480c               mov dword ptr [eax + 0xc], ecx
// 00895fdd  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPOffice2003Theme.cpp (function ?GetCommandBarBorders@CXTPOffice2003Theme@XTPPaintThemes@@MAE?AVCRect@@PAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2003Theme.cpp
