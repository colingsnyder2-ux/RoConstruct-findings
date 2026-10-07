// roc 2012-06 005bd840  unit: RakNet::RakPeer  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005bd840
//
// 005bd840  8b542404             mov edx, dword ptr [esp + 4]
// 005bd844  6a00                 push 0
// 005bd846  83ec14               sub esp, 0x14
// 005bd849  8bc4                 mov eax, esp
// 005bd84b  8910                 mov dword ptr [eax], edx
// 005bd84d  8b542420             mov edx, dword ptr [esp + 0x20]
// 005bd851  895004               mov dword ptr [eax + 4], edx
// 005bd854  8b542424             mov edx, dword ptr [esp + 0x24]
// 005bd858  895008               mov dword ptr [eax + 8], edx
// 005bd85b  8b542428             mov edx, dword ptr [esp + 0x28]
// 005bd85f  89500c               mov dword ptr [eax + 0xc], edx
// 005bd862  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 005bd866  895010               mov dword ptr [eax + 0x10], edx
// 005bd869  e872e5ffff           call 0x5bbde0
// 005bd86e  c21400               ret 0x14
// library rbx2016-raknet/RakPeer.cpp (function ?GetIndexFromSystemAddress@RakPeer@RakNet@@UBEHUSystemAddress@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RakPeer.cpp
