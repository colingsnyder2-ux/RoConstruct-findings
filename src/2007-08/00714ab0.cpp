// roc 2007-08 00714ab0  unit: CXTCaptionButton  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00714ab0
//
// 00714ab0  8b442404             mov eax, dword ptr [esp + 4]
// 00714ab4  56                   push esi
// 00714ab5  50                   push eax
// 00714ab6  8bf1                 mov esi, ecx
// 00714ab8  e835b2f1ff           call 0x62fcf2
// 00714abd  85c0                 test eax, eax
// 00714abf  7504                 jne 0x714ac5
// 00714ac1  5e                   pop esi
// 00714ac2  c20400               ret 4
// 00714ac5  c6467400             mov byte ptr [esi + 0x74], 0
// 00714ac9  b801000000           mov eax, 1
// 00714ace  5e                   pop esi
// 00714acf  c20400               ret 4
// library xtp-11.2.2-vc8/Source\Controls\XTButton.cpp (function ?PreCreateWindow@CXTButton@@MAEHAAUtagCREATESTRUCTA@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTButton.cpp
