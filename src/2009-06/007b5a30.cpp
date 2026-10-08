// roc 2009-06 007b5a30  unit: CXTPShortcutManager  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007b5a30
//
// 007b5a30  56                   push esi
// 007b5a31  8bf1                 mov esi, ecx
// 007b5a33  e8688f0000           call 0x7be9a0
// 007b5a38  838ed40000001b       or dword ptr [esi + 0xd4], 0x1b
// 007b5a3f  c70624379000         mov dword ptr [esi], 0x903724
// 007b5a45  c74620c4369000       mov dword ptr [esi + 0x20], 0x9036c4
// 007b5a4c  8bc6                 mov eax, esi
// 007b5a4e  5e                   pop esi
// 007b5a4f  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPMenuBar.cpp (function ??0CControlMDIButton@CXTPMenuBar@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPMenuBar.cpp
