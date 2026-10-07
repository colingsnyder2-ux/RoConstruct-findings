// roc 2008-06 006ae070  unit: CRobloxControlColorSelector  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ae070
//
// 006ae070  8b442404             mov eax, dword ptr [esp + 4]
// 006ae074  83f83e               cmp eax, 0x3e
// 006ae077  771a                 ja 0x6ae093
// 006ae079  8d0440               lea eax, [eax + eax*2]
// 006ae07c  8d848164010000       lea eax, [ecx + eax*4 + 0x164]
// 006ae083  8b4808               mov ecx, dword ptr [eax + 8]
// 006ae086  83f9ff               cmp ecx, -1
// 006ae089  7506                 jne 0x6ae091
// 006ae08b  8b4004               mov eax, dword ptr [eax + 4]
// 006ae08e  c20400               ret 4
// 006ae091  8bc1                 mov eax, ecx
// 006ae093  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPPaintManager.cpp (function ?GetXtremeColor@CXTPPaintManager@@QAEKI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPaintManager.cpp
