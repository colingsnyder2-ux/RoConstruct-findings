// roc 2011-06 00516920  unit: RBX::Network::NetworkOwnerJob  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00516920
//
// 00516920  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00516924  56                   push esi
// 00516925  8b742408             mov esi, dword ptr [esp + 8]
// 00516929  8d442410             lea eax, [esp + 0x10]
// 0051692d  50                   push eax
// 0051692e  51                   push ecx
// 0051692f  8bce                 mov ecx, esi
// 00516931  e82afeffff           call 0x516760
// 00516936  8bc6                 mov eax, esi
// 00516938  5e                   pop esi
// 00516939  c3                   ret 
// library rbx2016-raknet/RakString.cpp (function ??0RakString@RakNet@@QAA@PBEZZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RakString.cpp
