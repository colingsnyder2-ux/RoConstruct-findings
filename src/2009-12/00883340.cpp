// roc 2009-12 00883340  unit: XTPPaintThemes::CXTPOffice2003Theme  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00883340
//
// 00883340  56                   push esi
// 00883341  8b742408             mov esi, dword ptr [esp + 8]
// 00883345  56                   push esi
// 00883346  e8e5acf7ff           call 0x7fe030
// 0088334b  85c0                 test eax, eax
// 0088334d  7512                 jne 0x883361
// 0088334f  f686ec0000000f       test byte ptr [esi + 0xec], 0xf
// 00883356  7409                 je 0x883361
// 00883358  b801000000           mov eax, 1
// 0088335d  5e                   pop esi
// 0088335e  c20400               ret 4
// 00883361  33c0                 xor eax, eax
// 00883363  5e                   pop esi
// 00883364  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPOffice2003Theme.cpp (function ?HasFloatingBarGradientEntry@CXTPOffice2003Theme@XTPPaintThemes@@MAEHPAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2003Theme.cpp
