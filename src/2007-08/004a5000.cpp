// roc 2007-08 004a5000  unit: RBX::Network::Server::ClientProxy  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a5000
//
// 004a5000  56                   push esi
// 004a5001  57                   push edi
// 004a5002  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004a5006  8bf1                 mov esi, ecx
// 004a5008  39be28010000         cmp dword ptr [esi + 0x128], edi
// 004a500e  740b                 je 0x4a501b
// 004a5010  e8ebfeffff           call 0x4a4f00
// 004a5015  89be28010000         mov dword ptr [esi + 0x128], edi
// 004a501b  5f                   pop edi
// 004a501c  5e                   pop esi
// 004a501d  c20400               ret 4
// library rbxgs-net/Replicator.cpp (function ?setPacketPriority@JobSender@Replicator@Network@RBX@@QAEXW4PacketPriority@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Replicator.cpp
