// roc 2007-03 004ab6e0  unit: seg_004a0000  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004ab6e0
//
// 004ab6e0  56                   push esi
// 004ab6e1  8bf1                 mov esi, ecx
// 004ab6e3  8d4e0c               lea ecx, [esi + 0xc]
// 004ab6e6  e8c5c0feff           call 0x4977b0
// 004ab6eb  8bc6                 mov eax, esi
// 004ab6ed  5e                   pop esi
// 004ab6ee  c3                   ret 
// library rbxgs-raknet/FileListTransfer.cpp (function ??0FileListReceiver@FileListTransfer@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet FileListTransfer.cpp
