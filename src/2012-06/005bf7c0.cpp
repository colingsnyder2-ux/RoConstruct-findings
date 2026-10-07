// roc 2012-06 005bf7c0  unit: RakNet::RakPeer  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005bf7c0
//
// 005bf7c0  8b542404             mov edx, dword ptr [esp + 4]
// 005bf7c4  6a00                 push 0
// 005bf7c6  6a00                 push 0
// 005bf7c8  83ec14               sub esp, 0x14
// 005bf7cb  8bc4                 mov eax, esp
// 005bf7cd  8910                 mov dword ptr [eax], edx
// 005bf7cf  8b542424             mov edx, dword ptr [esp + 0x24]
// 005bf7d3  895004               mov dword ptr [eax + 4], edx
// 005bf7d6  8b542428             mov edx, dword ptr [esp + 0x28]
// 005bf7da  895008               mov dword ptr [eax + 8], edx
// 005bf7dd  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 005bf7e1  89500c               mov dword ptr [eax + 0xc], edx
// 005bf7e4  8b542430             mov edx, dword ptr [esp + 0x30]
// 005bf7e8  895010               mov dword ptr [eax + 0x10], edx
// 005bf7eb  e880f4ffff           call 0x5bec70
// 005bf7f0  c21400               ret 0x14
// library rbx2016-raknet/RakPeer.cpp (function ?Ping@RakPeer@RakNet@@UAEXUSystemAddress@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RakPeer.cpp
