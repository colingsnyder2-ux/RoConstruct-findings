// from server: 100% by auto
// roc 2012-06 00a6a710  unit: CXTCaptionButton  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a6a710
//
// 00a6a710  8b442404             mov eax, dword ptr [esp + 4]
// 00a6a714  56                   push esi
// 00a6a715  50                   push eax
// 00a6a716  8bf1                 mov esi, ecx
// 00a6a718  e8817af1ff           call 0x98219e
// 00a6a71d  85c0                 test eax, eax
// 00a6a71f  7504                 jne 0xa6a725
// 00a6a721  5e                   pop esi
// 00a6a722  c20400               ret 4
// 00a6a725  c6467400             mov byte ptr [esi + 0x74], 0
// 00a6a729  b801000000           mov eax, 1
// 00a6a72e  5e                   pop esi
// 00a6a72f  c20400               ret 4
// library xtp-15.2.1/Source\Controls\Deprecated\XTButton.cpp (function ?PreCreateWindow@CXTButton@@MAEHAAUtagCREATESTRUCTA@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Deprecated/XTButton.cpp
