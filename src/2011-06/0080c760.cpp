// roc 2011-06 0080c760  unit: CRobloxControlColorSelector  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0080c760
//
// 0080c760  8bc1                 mov eax, ecx
// 0080c762  8b8800010000         mov ecx, dword ptr [eax + 0x100]
// 0080c768  85c9                 test ecx, ecx
// 0080c76a  7405                 je 0x80c771
// 0080c76c  e9dfe30000           jmp 0x81ab50
// 0080c771  8b88f8000000         mov ecx, dword ptr [eax + 0xf8]
// 0080c777  85c9                 test ecx, ecx
// 0080c779  7410                 je 0x80c78b
// 0080c77b  e850a30400           call 0x856ad0
// 0080c780  85c0                 test eax, eax
// 0080c782  7407                 je 0x80c78b
// 0080c784  8bc8                 mov ecx, eax
// 0080c786  e9a5da0100           jmp 0x82a230
// 0080c78b  833d9881d10000       cmp dword ptr [0xd18198], 0
// 0080c792  750a                 jne 0x80c79e
// 0080c794  6a00                 push 0
// 0080c796  e8e53d0000           call 0x810580
// 0080c79b  83c404               add esp, 4
// 0080c79e  a19881d100           mov eax, dword ptr [0xd18198]
// 0080c7a3  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?GetPaintManager@CXTPControl@@QBEPAVCXTPPaintManager@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp
