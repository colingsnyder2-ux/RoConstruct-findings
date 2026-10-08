// from server: 100% by auto
// roc 2008-06 00701780  unit: CXTPControlTabWorkspace  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00701780
//
// 00701780  8b8108020000         mov eax, dword ptr [ecx + 0x208]
// 00701786  85c0                 test eax, eax
// 00701788  7517                 jne 0x7017a1
// 0070178a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0070178e  8b542408             mov edx, dword ptr [esp + 8]
// 00701792  50                   push eax
// 00701793  8b442408             mov eax, dword ptr [esp + 8]
// 00701797  52                   push edx
// 00701798  50                   push eax
// 00701799  e862400400           call 0x745800
// 0070179e  c20c00               ret 0xc
// 007017a1  837c240400           cmp dword ptr [esp + 4], 0
// 007017a6  7532                 jne 0x7017da
// 007017a8  ba01000000           mov edx, 1
// 007017ad  89505c               mov dword ptr [eax + 0x5c], edx
// 007017b0  8b8108020000         mov eax, dword ptr [ecx + 0x208]
// 007017b6  895058               mov dword ptr [eax + 0x58], edx
// 007017b9  8b54240c             mov edx, dword ptr [esp + 0xc]
// 007017bd  8b442408             mov eax, dword ptr [esp + 8]
// 007017c1  6a00                 push 0
// 007017c3  52                   push edx
// 007017c4  8b9100010000         mov edx, dword ptr [ecx + 0x100]
// 007017ca  50                   push eax
// 007017cb  8b4220               mov eax, dword ptr [edx + 0x20]
// 007017ce  50                   push eax
// 007017cf  81c178010000         add ecx, 0x178
// 007017d5  e8d6bb0700           call 0x77d3b0
// 007017da  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?OnClick@CXTPControlTabWorkspace@@MAEXHVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
