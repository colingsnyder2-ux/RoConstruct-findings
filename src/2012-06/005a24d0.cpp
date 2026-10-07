// roc 2012-06 005a24d0  unit: RBX::Network::ClientReplicator  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005a24d0
//
// 005a24d0  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005a24d4  8b542404             mov edx, dword ptr [esp + 4]
// 005a24d8  6a04                 push 4
// 005a24da  8d44240c             lea eax, [esp + 0xc]
// 005a24de  50                   push eax
// 005a24df  6a0e                 push 0xe
// 005a24e1  51                   push ecx
// 005a24e2  52                   push edx
// 005a24e3  ff15283eb200         call dword ptr [0xb23e28]
// 005a24e9  c3                   ret 
// library rbx2016-raknet/SocketLayer.cpp (function ?SetDoNotFragment@SocketLayer@RakNet@@SAXIHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet SocketLayer.cpp
