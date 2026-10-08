// roc 2012-06 0042a950  unit: CEnabledCmdUI  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0042a950
//
// 0042a950  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0042a954  8b542408             mov edx, dword ptr [esp + 8]
// 0042a958  50                   push eax
// 0042a959  52                   push edx
// 0042a95a  e861feffff           call 0x42a7c0
// 0042a95f  c20c00               ret 0xc
// library rbxgs-raknet/FileListTransfer.cpp (function ?OnCloseConnection@FileListTransfer@@UAEXPAVRakPeerInterface@@USystemAddress@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet FileListTransfer.cpp
