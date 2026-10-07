// roc 2011-06 005e9e30  unit: boost::io::Vtoo_few_args::?$error_info_injector  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005e9e30
//
// 005e9e30  56                   push esi
// 005e9e31  8b742408             mov esi, dword ptr [esp + 8]
// 005e9e35  85f6                 test esi, esi
// 005e9e37  7418                 je 0x5e9e51
// 005e9e39  8d4e04               lea ecx, [esi + 4]
// 005e9e3c  e86faae1ff           call 0x4048b0
// 005e9e41  8bce                 mov ecx, esi
// 005e9e43  e868aae1ff           call 0x4048b0
// 005e9e48  56                   push esi
// 005e9e49  e80a022200           call 0x80a058
// 005e9e4e  83c404               add esp, 4
// 005e9e51  5e                   pop esi
// 005e9e52  c3                   ret 
// library rbx2016-raknet/FileListTransfer.cpp (function ??$OP_DELETE@UFileToPush@FileListTransfer@RakNet@@@RakNet@@YAXPAUFileToPush@FileListTransfer@0@PBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: rbx2016-raknet FileListTransfer.cpp
