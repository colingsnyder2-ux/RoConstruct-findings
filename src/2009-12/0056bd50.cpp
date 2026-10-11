// roc 2009-12 0056bd50  unit: RakPeer  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0056bd50
//
// 0056bd50  8b442408             mov eax, dword ptr [esp + 8]
// 0056bd54  8b542404             mov edx, dword ptr [esp + 4]
// 0056bd58  6a00                 push 0
// 0056bd5a  6a00                 push 0
// 0056bd5c  50                   push eax
// 0056bd5d  52                   push edx
// 0056bd5e  e82ddcffff           call 0x569990
// 0056bd63  c20800               ret 8
// library openrbx-raknet/RakPeer.cpp (function ?Ping@RakPeer@@UAEXUSystemAddress@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /EHsc /MD
// roc-lib: openrbx-raknet RakPeer.cpp
