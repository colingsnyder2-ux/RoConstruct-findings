// roc 2011-06 00426c30  unit: CEnabledCmdUI  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00426c30
//
// 00426c30  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00426c34  8b542408             mov edx, dword ptr [esp + 8]
// 00426c38  50                   push eax
// 00426c39  52                   push edx
// 00426c3a  e861feffff           call 0x426aa0
// 00426c3f  c20c00               ret 0xc
// library rbxgs-raknet/FileListTransfer.cpp (function ?OnCloseConnection@FileListTransfer@@UAEXPAVRakPeerInterface@@USystemAddress@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet FileListTransfer.cpp
