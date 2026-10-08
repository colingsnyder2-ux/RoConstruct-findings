// roc 2007-08 004a4f50  unit: RBX::Network::Server::ClientProxy  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a4f50
//
// 004a4f50  8b442404             mov eax, dword ptr [esp + 4]
// 004a4f54  56                   push esi
// 004a4f55  8bf1                 mov esi, ecx
// 004a4f57  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004a4f5b  894e0c               mov dword ptr [esi + 0xc], ecx
// 004a4f5e  6854050000           push 0x554
// 004a4f63  8d4e14               lea ecx, [esi + 0x14]
// 004a4f66  c70600000000         mov dword ptr [esi], 0
// 004a4f6c  c7460400000000       mov dword ptr [esi + 4], 0
// 004a4f73  894608               mov dword ptr [esi + 8], eax
// 004a4f76  c6461000             mov byte ptr [esi + 0x10], 0
// 004a4f7a  e8d1a8ffff           call 0x49f850
// 004a4f7f  c7862801000002000000 mov dword ptr [esi + 0x128], 2
// 004a4f89  c6862c01000000       mov byte ptr [esi + 0x12c], 0
// 004a4f90  8bc6                 mov eax, esi
// 004a4f92  5e                   pop esi
// 004a4f93  c20800               ret 8
// library rbxgs-net/Replicator.cpp (function ??0JobSender@Replicator@Network@RBX@@QAE@AAV123@PAVRakPeerInterface@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Replicator.cpp
