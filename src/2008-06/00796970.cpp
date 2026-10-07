// roc 2008-06 00796970  unit: CXTPRibbonGroupPopupToolBar  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00796970
//
// 00796970  81c1a4fdffff         add ecx, 0xfffffda4
// 00796976  83ec10               sub esp, 0x10
// 00796979  51                   push ecx
// 0079697a  8d4c2404             lea ecx, [esp + 4]
// 0079697e  e8ad11f6ff           call 0x6f7b30
// 00796983  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00796987  8b10                 mov edx, dword ptr [eax]
// 00796989  8911                 mov dword ptr [ecx], edx
// 0079698b  8b5004               mov edx, dword ptr [eax + 4]
// 0079698e  895104               mov dword ptr [ecx + 4], edx
// 00796991  8b5008               mov edx, dword ptr [eax + 8]
// 00796994  8b400c               mov eax, dword ptr [eax + 0xc]
// 00796997  895108               mov dword ptr [ecx + 8], edx
// 0079699a  89410c               mov dword ptr [ecx + 0xc], eax
// 0079699d  8bc1                 mov eax, ecx
// 0079699f  83c410               add esp, 0x10
// 007969a2  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonPopups.cpp (function ?GetGroupsRect@CXTPRibbonGroupPopupToolBar@@UBE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonPopups.cpp
