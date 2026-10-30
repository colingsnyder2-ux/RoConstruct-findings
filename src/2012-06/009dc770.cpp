// roc 2012-06 009dc770  unit: CXTPControlTabWorkspace  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009dc770
//
// 009dc770  8b8108020000         mov eax, dword ptr [ecx + 0x208]
// 009dc776  85c0                 test eax, eax
// 009dc778  7517                 jne 0x9dc791
// 009dc77a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 009dc77e  8b542408             mov edx, dword ptr [esp + 8]
// 009dc782  50                   push eax
// 009dc783  8b442408             mov eax, dword ptr [esp + 8]
// 009dc787  52                   push edx
// 009dc788  50                   push eax
// 009dc789  e882d30300           call 0xa19b10
// 009dc78e  c20c00               ret 0xc
// 009dc791  837c240400           cmp dword ptr [esp + 4], 0
// 009dc796  7532                 jne 0x9dc7ca
// 009dc798  ba01000000           mov edx, 1
// 009dc79d  89505c               mov dword ptr [eax + 0x5c], edx
// 009dc7a0  8b8108020000         mov eax, dword ptr [ecx + 0x208]
// 009dc7a6  895058               mov dword ptr [eax + 0x58], edx
// 009dc7a9  8b54240c             mov edx, dword ptr [esp + 0xc]
// 009dc7ad  8b442408             mov eax, dword ptr [esp + 8]
// 009dc7b1  6a00                 push 0
// 009dc7b3  52                   push edx
// 009dc7b4  8b9100010000         mov edx, dword ptr [ecx + 0x100]
// 009dc7ba  50                   push eax
// 009dc7bb  8b4220               mov eax, dword ptr [edx + 0x20]
// 009dc7be  50                   push eax
// 009dc7bf  81c178010000         add ecx, 0x178
// 009dc7c5  e876120700           call 0xa4da40
// 009dc7ca  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?OnClick@CXTPControlTabWorkspace@@MAEXHVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
