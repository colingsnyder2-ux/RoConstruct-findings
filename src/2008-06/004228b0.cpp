// roc 2008-06 004228b0  unit: CEnabledCmdUI  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004228b0
//
// 004228b0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004228b4  8b542408             mov edx, dword ptr [esp + 8]
// 004228b8  50                   push eax
// 004228b9  52                   push edx
// 004228ba  e861feffff           call 0x422720
// 004228bf  c20c00               ret 0xc
// library rbxgs-raknet/FileListTransfer.cpp (function ?OnCloseConnection@FileListTransfer@@UAEXPAVRakPeerInterface@@USystemAddress@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet FileListTransfer.cpp
