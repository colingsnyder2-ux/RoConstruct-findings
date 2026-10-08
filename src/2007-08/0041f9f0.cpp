// roc 2007-08 0041f9f0  unit: CEnabledCmdUI  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0041f9f0
//
// 0041f9f0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0041f9f4  8b542408             mov edx, dword ptr [esp + 8]
// 0041f9f8  50                   push eax
// 0041f9f9  52                   push edx
// 0041f9fa  e861feffff           call 0x41f860
// 0041f9ff  c20c00               ret 0xc
// library rbxgs-raknet/FileListTransfer.cpp (function ?OnCloseConnection@FileListTransfer@@UAEXPAVRakPeerInterface@@USystemAddress@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet FileListTransfer.cpp
