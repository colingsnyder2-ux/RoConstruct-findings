// roc 2012-06 004c2590  unit: RBX::AdornRbxGfx  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004c2590
//
// 004c2590  8b442404             mov eax, dword ptr [esp + 4]
// 004c2594  56                   push esi
// 004c2595  8bf1                 mov esi, ecx
// 004c2597  c706985cb600         mov dword ptr [esi], 0xb65c98
// 004c259d  894604               mov dword ptr [esi + 4], eax
// 004c25a0  85c0                 test eax, eax
// 004c25a2  742b                 je 0x4c25cf
// 004c25a4  6a00                 push 0
// 004c25a6  6a00                 push 0
// 004c25a8  6a00                 push 0
// 004c25aa  6a04                 push 4
// 004c25ac  ff153430b200         call dword ptr [0xb23034]
// 004c25b2  83c410               add esp, 0x10
// 004c25b5  85c0                 test eax, eax
// 004c25b7  7416                 je 0x4c25cf
// 004c25b9  c70001000000         mov dword ptr [eax], 1
// 004c25bf  894608               mov dword ptr [esi + 8], eax
// 004c25c2  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004c25c6  89460c               mov dword ptr [esi + 0xc], eax
// 004c25c9  8bc6                 mov eax, esi
// 004c25cb  5e                   pop esi
// 004c25cc  c20800               ret 8
// 004c25cf  33c0                 xor eax, eax
// 004c25d1  894608               mov dword ptr [esi + 8], eax
// 004c25d4  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004c25d8  89460c               mov dword ptr [esi + 0xc], eax
// 004c25db  8bc6                 mov eax, esi
// 004c25dd  5e                   pop esi
// 004c25de  c20800               ret 8
// library ogre-1.7.0/OgreConfigFile.cpp (function ??$?0VFileStreamDataStream@Ogre@@@?$SharedPtr@VDataStream@Ogre@@@Ogre@@QAE@PAVFileStreamDataStream@1@W4SharedPtrFreeMethod@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreConfigFile.cpp
