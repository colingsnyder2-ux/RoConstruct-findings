// from server: 100% by tester
// roc 2008-06 006c4950  unit: CXTPToolBar  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c4950
//
// 006c4950  8b442404             mov eax, dword ptr [esp + 4]
// 006c4954  85c0                 test eax, eax
// 006c4956  7403                 je 0x6c495b
// 006c4958  8b4004               mov eax, dword ptr [eax + 4]
// 006c495b  8b542414             mov edx, dword ptr [esp + 0x14]
// 006c495f  8b4904               mov ecx, dword ptr [ecx + 4]
// 006c4962  52                   push edx
// 006c4963  8b542414             mov edx, dword ptr [esp + 0x14]
// 006c4967  52                   push edx
// 006c4968  8b542414             mov edx, dword ptr [esp + 0x14]
// 006c496c  52                   push edx
// 006c496d  50                   push eax
// 006c496e  8b442418             mov eax, dword ptr [esp + 0x18]
// 006c4972  50                   push eax
// 006c4973  51                   push ecx
// 006c4974  e8adbffdff           call 0x6a0926
// 006c4979  8b8894000000         mov ecx, dword ptr [eax + 0x94]
// 006c497f  8b09                 mov ecx, dword ptr [ecx]
// 006c4981  e88afeffff           call 0x6c4810
// 006c4986  c21400               ret 0x14
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPOffice2003Theme.cpp (function ?Draw@CImageList@@QAEHPAVCDC@@HUtagPOINT@@I@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPOffice2003Theme.cpp
