// roc 2010-06 007ad110  unit: CRobloxControlColorSelector  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007ad110
//
// 007ad110  8b442404             mov eax, dword ptr [esp + 4]
// 007ad114  83f83e               cmp eax, 0x3e
// 007ad117  771a                 ja 0x7ad133
// 007ad119  8d0440               lea eax, [eax + eax*2]
// 007ad11c  8d848164010000       lea eax, [ecx + eax*4 + 0x164]
// 007ad123  8b4808               mov ecx, dword ptr [eax + 8]
// 007ad126  83f9ff               cmp ecx, -1
// 007ad129  7506                 jne 0x7ad131
// 007ad12b  8b4004               mov eax, dword ptr [eax + 4]
// 007ad12e  c20400               ret 4
// 007ad131  8bc1                 mov eax, ecx
// 007ad133  c20400               ret 4
// library xtp-15.2.1/Source\CommandBars\XTPPaintManager.cpp (function ?GetXtremeColor@CXTPPaintManager@@QAEKI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPPaintManager.cpp
