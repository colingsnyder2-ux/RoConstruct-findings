// from server: 100% by auto
// roc 2011-06 008f23a0  unit: CXTCaptionButton  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f23a0
//
// 008f23a0  8b442404             mov eax, dword ptr [esp + 4]
// 008f23a4  56                   push esi
// 008f23a5  50                   push eax
// 008f23a6  8bf1                 mov esi, ecx
// 008f23a8  e8357df1ff           call 0x80a0e2
// 008f23ad  85c0                 test eax, eax
// 008f23af  7504                 jne 0x8f23b5
// 008f23b1  5e                   pop esi
// 008f23b2  c20400               ret 4
// 008f23b5  c6467400             mov byte ptr [esi + 0x74], 0
// 008f23b9  b801000000           mov eax, 1
// 008f23be  5e                   pop esi
// 008f23bf  c20400               ret 4
// library xtp-15.2.1/Source\Controls\Deprecated\XTButton.cpp (function ?PreCreateWindow@CXTButton@@MAEHAAUtagCREATESTRUCTA@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Deprecated/XTButton.cpp
