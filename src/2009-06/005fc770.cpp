// roc 2009-06 005fc770  unit: RBX::VInstance::$$A6AXV?$shared_ptr::?$signal::Vslot::?$sp_counted_impl_p  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005fc770
//
// 005fc770  56                   push esi
// 005fc771  8b742408             mov esi, dword ptr [esp + 8]
// 005fc775  85f6                 test esi, esi
// 005fc777  7418                 je 0x5fc791
// 005fc779  8d4e04               lea ecx, [esi + 4]
// 005fc77c  e84f161100           call 0x70ddd0
// 005fc781  8bce                 mov ecx, esi
// 005fc783  e848161100           call 0x70ddd0
// 005fc788  56                   push esi
// 005fc789  e8a4c21100           call 0x718a32
// 005fc78e  83c404               add esp, 4
// 005fc791  5e                   pop esi
// 005fc792  c3                   ret 
// library rbx2016-raknet/FileListTransfer.cpp (function ??$OP_DELETE@UFileToPush@FileListTransfer@RakNet@@@RakNet@@YAXPAUFileToPush@FileListTransfer@0@PBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: rbx2016-raknet FileListTransfer.cpp
