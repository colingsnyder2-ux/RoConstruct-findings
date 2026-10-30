// roc 2010-06 00808e90  unit: CXTPControlTabWorkspace  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00808e90
//
// 00808e90  8b8108020000         mov eax, dword ptr [ecx + 0x208]
// 00808e96  85c0                 test eax, eax
// 00808e98  7517                 jne 0x808eb1
// 00808e9a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00808e9e  8b542408             mov edx, dword ptr [esp + 8]
// 00808ea2  50                   push eax
// 00808ea3  8b442408             mov eax, dword ptr [esp + 8]
// 00808ea7  52                   push edx
// 00808ea8  50                   push eax
// 00808ea9  e842b60300           call 0x8444f0
// 00808eae  c20c00               ret 0xc
// 00808eb1  837c240400           cmp dword ptr [esp + 4], 0
// 00808eb6  7532                 jne 0x808eea
// 00808eb8  ba01000000           mov edx, 1
// 00808ebd  89505c               mov dword ptr [eax + 0x5c], edx
// 00808ec0  8b8108020000         mov eax, dword ptr [ecx + 0x208]
// 00808ec6  895058               mov dword ptr [eax + 0x58], edx
// 00808ec9  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00808ecd  8b442408             mov eax, dword ptr [esp + 8]
// 00808ed1  6a00                 push 0
// 00808ed3  52                   push edx
// 00808ed4  8b9100010000         mov edx, dword ptr [ecx + 0x100]
// 00808eda  50                   push eax
// 00808edb  8b4220               mov eax, dword ptr [edx + 0x20]
// 00808ede  50                   push eax
// 00808edf  81c178010000         add ecx, 0x178
// 00808ee5  e8f6b80700           call 0x8847e0
// 00808eea  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?OnClick@CXTPControlTabWorkspace@@MAEXHVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
