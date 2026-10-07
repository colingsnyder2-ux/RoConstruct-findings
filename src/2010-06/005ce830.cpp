// roc 2010-06 005ce830  unit: RBX::DataModel::PAVGenericJob::?$thread_specific_ptr::PAUdelete_data::?$sp_counted_impl_pd  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005ce830
//
// 005ce830  56                   push esi
// 005ce831  8b742408             mov esi, dword ptr [esp + 8]
// 005ce835  85f6                 test esi, esi
// 005ce837  7418                 je 0x5ce851
// 005ce839  8d4e04               lea ecx, [esi + 4]
// 005ce83c  e8cf6a1c00           call 0x795310
// 005ce841  8bce                 mov ecx, esi
// 005ce843  e8c86a1c00           call 0x795310
// 005ce848  56                   push esi
// 005ce849  e84c911d00           call 0x7a799a
// 005ce84e  83c404               add esp, 4
// 005ce851  5e                   pop esi
// 005ce852  c3                   ret 
// library rbx2016-raknet/FileListTransfer.cpp (function ??$OP_DELETE@UFileToPush@FileListTransfer@RakNet@@@RakNet@@YAXPAUFileToPush@FileListTransfer@0@PBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: rbx2016-raknet FileListTransfer.cpp
