// roc 2011-06 00864380  unit: CXTPControlTabWorkspace  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00864380
//
// 00864380  8b8108020000         mov eax, dword ptr [ecx + 0x208]
// 00864386  85c0                 test eax, eax
// 00864388  7517                 jne 0x8643a1
// 0086438a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0086438e  8b542408             mov edx, dword ptr [esp + 8]
// 00864392  50                   push eax
// 00864393  8b442408             mov eax, dword ptr [esp + 8]
// 00864397  52                   push edx
// 00864398  50                   push eax
// 00864399  e822d30300           call 0x8a16c0
// 0086439e  c20c00               ret 0xc
// 008643a1  837c240400           cmp dword ptr [esp + 4], 0
// 008643a6  7532                 jne 0x8643da
// 008643a8  ba01000000           mov edx, 1
// 008643ad  89505c               mov dword ptr [eax + 0x5c], edx
// 008643b0  8b8108020000         mov eax, dword ptr [ecx + 0x208]
// 008643b6  895058               mov dword ptr [eax + 0x58], edx
// 008643b9  8b54240c             mov edx, dword ptr [esp + 0xc]
// 008643bd  8b442408             mov eax, dword ptr [esp + 8]
// 008643c1  6a00                 push 0
// 008643c3  52                   push edx
// 008643c4  8b9100010000         mov edx, dword ptr [ecx + 0x100]
// 008643ca  50                   push eax
// 008643cb  8b4220               mov eax, dword ptr [edx + 0x20]
// 008643ce  50                   push eax
// 008643cf  81c178010000         add ecx, 0x178
// 008643d5  e816130700           call 0x8d56f0
// 008643da  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?OnClick@CXTPControlTabWorkspace@@MAEXHVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
