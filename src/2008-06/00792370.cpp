// roc 2008-06 00792370  unit: CXTCaptionButton  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00792370
//
// 00792370  8b442404             mov eax, dword ptr [esp + 4]
// 00792374  56                   push esi
// 00792375  50                   push eax
// 00792376  8bf1                 mov esi, ecx
// 00792378  e88de3f0ff           call 0x6a070a
// 0079237d  85c0                 test eax, eax
// 0079237f  7504                 jne 0x792385
// 00792381  5e                   pop esi
// 00792382  c20400               ret 4
// 00792385  c6467400             mov byte ptr [esi + 0x74], 0
// 00792389  b801000000           mov eax, 1
// 0079238e  5e                   pop esi
// 0079238f  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTButton.cpp (function ?PreCreateWindow@CXTButton@@MAEHAAUtagCREATESTRUCTA@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTButton.cpp
