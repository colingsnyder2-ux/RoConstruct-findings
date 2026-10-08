// roc 2009-06 0041cf50  unit: CEnabledCmdUI  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0041cf50
//
// 0041cf50  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0041cf54  8b542408             mov edx, dword ptr [esp + 8]
// 0041cf58  50                   push eax
// 0041cf59  52                   push edx
// 0041cf5a  e861feffff           call 0x41cdc0
// 0041cf5f  c20c00               ret 0xc
// library rbxgs-raknet/FileListTransfer.cpp (function ?OnCloseConnection@FileListTransfer@@UAEXPAVRakPeerInterface@@USystemAddress@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet FileListTransfer.cpp
