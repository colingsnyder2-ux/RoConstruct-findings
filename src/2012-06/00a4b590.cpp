// roc 2012-06 00a4b590  unit: CXTPTabClientWnd::CNavigateButtonActiveFiles  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a4b590
//
// 00a4b590  56                   push esi
// 00a4b591  8bf1                 mov esi, ecx
// 00a4b593  8b06                 mov eax, dword ptr [esi]
// 00a4b595  85c0                 test eax, eax
// 00a4b597  740f                 je 0xa4b5a8
// 00a4b599  50                   push eax
// 00a4b59a  e81b6ef3ff           call 0x9823ba
// 00a4b59f  83c404               add esp, 4
// 00a4b5a2  c70600000000         mov dword ptr [esi], 0
// 00a4b5a8  5e                   pop esi
// 00a4b5a9  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPScrollBase.cpp (function ??1SLIDERTICKS@CXTPScrollBase@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPScrollBase.cpp
