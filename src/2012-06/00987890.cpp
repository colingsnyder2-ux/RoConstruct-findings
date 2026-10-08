// from server: 100% by auto
// roc 2012-06 00987890  unit: CRobloxControlColorSelector  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00987890
//
// 00987890  8b442404             mov eax, dword ptr [esp + 4]
// 00987894  83f83e               cmp eax, 0x3e
// 00987897  771a                 ja 0x9878b3
// 00987899  8d0440               lea eax, [eax + eax*2]
// 0098789c  8d848164010000       lea eax, [ecx + eax*4 + 0x164]
// 009878a3  8b4808               mov ecx, dword ptr [eax + 8]
// 009878a6  83f9ff               cmp ecx, -1
// 009878a9  7506                 jne 0x9878b1
// 009878ab  8b4004               mov eax, dword ptr [eax + 4]
// 009878ae  c20400               ret 4
// 009878b1  8bc1                 mov eax, ecx
// 009878b3  c20400               ret 4
// library xtp-15.2.1/Source\CommandBars\XTPPaintManager.cpp (function ?GetXtremeColor@CXTPPaintManager@@QAEKI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPPaintManager.cpp
