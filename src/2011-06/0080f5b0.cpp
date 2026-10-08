// from server: 100% by auto
// roc 2011-06 0080f5b0  unit: CRobloxControlColorSelector  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0080f5b0
//
// 0080f5b0  8b442404             mov eax, dword ptr [esp + 4]
// 0080f5b4  83f83e               cmp eax, 0x3e
// 0080f5b7  771a                 ja 0x80f5d3
// 0080f5b9  8d0440               lea eax, [eax + eax*2]
// 0080f5bc  8d848164010000       lea eax, [ecx + eax*4 + 0x164]
// 0080f5c3  8b4808               mov ecx, dword ptr [eax + 8]
// 0080f5c6  83f9ff               cmp ecx, -1
// 0080f5c9  7506                 jne 0x80f5d1
// 0080f5cb  8b4004               mov eax, dword ptr [eax + 4]
// 0080f5ce  c20400               ret 4
// 0080f5d1  8bc1                 mov eax, ecx
// 0080f5d3  c20400               ret 4
// library xtp-15.2.1/Source\CommandBars\XTPPaintManager.cpp (function ?GetXtremeColor@CXTPPaintManager@@QAEKI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPPaintManager.cpp
