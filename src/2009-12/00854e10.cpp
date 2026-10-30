// roc 2009-12 00854e10  unit: CXTPControlTabWorkspace  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00854e10
//
// 00854e10  8b8108020000         mov eax, dword ptr [ecx + 0x208]
// 00854e16  85c0                 test eax, eax
// 00854e18  7517                 jne 0x854e31
// 00854e1a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00854e1e  8b542408             mov edx, dword ptr [esp + 8]
// 00854e22  50                   push eax
// 00854e23  8b442408             mov eax, dword ptr [esp + 8]
// 00854e27  52                   push edx
// 00854e28  50                   push eax
// 00854e29  e8c2b40300           call 0x8902f0
// 00854e2e  c20c00               ret 0xc
// 00854e31  837c240400           cmp dword ptr [esp + 4], 0
// 00854e36  7532                 jne 0x854e6a
// 00854e38  ba01000000           mov edx, 1
// 00854e3d  89505c               mov dword ptr [eax + 0x5c], edx
// 00854e40  8b8108020000         mov eax, dword ptr [ecx + 0x208]
// 00854e46  895058               mov dword ptr [eax + 0x58], edx
// 00854e49  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00854e4d  8b442408             mov eax, dword ptr [esp + 8]
// 00854e51  6a00                 push 0
// 00854e53  52                   push edx
// 00854e54  8b9100010000         mov edx, dword ptr [ecx + 0x100]
// 00854e5a  50                   push eax
// 00854e5b  8b4220               mov eax, dword ptr [edx + 0x20]
// 00854e5e  50                   push eax
// 00854e5f  81c178010000         add ecx, 0x178
// 00854e65  e8b6b70700           call 0x8d0620
// 00854e6a  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?OnClick@CXTPControlTabWorkspace@@MAEXHVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
