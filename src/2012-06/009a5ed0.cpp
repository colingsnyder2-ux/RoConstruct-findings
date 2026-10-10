// roc 2012-06 009a5ed0  unit: CXTPCommandBarsOptions  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009a5ed0
//
// 009a5ed0  8b442404             mov eax, dword ptr [esp + 4]
// 009a5ed4  85c0                 test eax, eax
// 009a5ed6  7403                 je 0x9a5edb
// 009a5ed8  8b4004               mov eax, dword ptr [eax + 4]
// 009a5edb  8b542414             mov edx, dword ptr [esp + 0x14]
// 009a5edf  8b4904               mov ecx, dword ptr [ecx + 4]
// 009a5ee2  52                   push edx
// 009a5ee3  8b542414             mov edx, dword ptr [esp + 0x14]
// 009a5ee7  52                   push edx
// 009a5ee8  8b542414             mov edx, dword ptr [esp + 0x14]
// 009a5eec  52                   push edx
// 009a5eed  50                   push eax
// 009a5eee  8b442418             mov eax, dword ptr [esp + 0x18]
// 009a5ef2  50                   push eax
// 009a5ef3  51                   push ecx
// 009a5ef4  e8d9c4fdff           call 0x9823d2
// 009a5ef9  8b8894000000         mov ecx, dword ptr [eax + 0x94]
// 009a5eff  8b09                 mov ecx, dword ptr [ecx]
// 009a5f01  e8bafeffff           call 0x9a5dc0
// 009a5f06  c21400               ret 0x14
// library xtp-15.2.1-shared-mfc/Source\CommandBars\XTPOffice2003Theme.cpp (function ?Draw@CImageList@@QAEHPAVCDC@@HUtagPOINT@@I@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/CommandBars/XTPOffice2003Theme.cpp
