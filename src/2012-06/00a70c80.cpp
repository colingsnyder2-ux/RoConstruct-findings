// roc 2012-06 00a70c80  unit: CXTPDialogBar  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a70c80
//
// 00a70c80  56                   push esi
// 00a70c81  8bf1                 mov esi, ecx
// 00a70c83  e8b87cf5ff           call 0x9c8940
// 00a70c88  c7062c68c200         mov dword ptr [esi], 0xc2682c
// 00a70c8e  c74620cc67c200       mov dword ptr [esi + 0x20], 0xc267cc
// 00a70c95  c786d40000001e000000 mov dword ptr [esi + 0xd4], 0x1e
// 00a70c9f  c7868401000000000000 mov dword ptr [esi + 0x184], 0
// 00a70ca9  8bc6                 mov eax, esi
// 00a70cab  5e                   pop esi
// 00a70cac  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPDialogBar.cpp (function ??0CControlCaptionPopup@CXTPDialogBar@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDialogBar.cpp
