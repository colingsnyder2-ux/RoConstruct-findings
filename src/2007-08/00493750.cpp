// from server: 100% by auto
// roc 2007-08 00493750  unit: RBX::Network::VPlayers::?$Notifier  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00493750
//
// 00493750  56                   push esi
// 00493751  57                   push edi
// 00493752  8bf9                 mov edi, ecx
// 00493754  8b4704               mov eax, dword ptr [edi + 4]
// 00493757  8b30                 mov esi, dword ptr [eax]
// 00493759  8900                 mov dword ptr [eax], eax
// 0049375b  8b4704               mov eax, dword ptr [edi + 4]
// 0049375e  894004               mov dword ptr [eax + 4], eax
// 00493761  3b7704               cmp esi, dword ptr [edi + 4]
// 00493764  c7470800000000       mov dword ptr [edi + 8], 0
// 0049376b  741e                 je 0x49378b
// 0049376d  53                   push ebx
// 0049376e  8bff                 mov edi, edi
// 00493770  8b1e                 mov ebx, dword ptr [esi]
// 00493772  8d4e08               lea ecx, [esi + 8]
// 00493775  e836e2ffff           call 0x4919b0
// 0049377a  56                   push esi
// 0049377b  e8e2c41900           call 0x62fc62
// 00493780  83c404               add esp, 4
// 00493783  3b5f04               cmp ebx, dword ptr [edi + 4]
// 00493786  8bf3                 mov esi, ebx
// 00493788  75e6                 jne 0x493770
// 0049378a  5b                   pop ebx
// 0049378b  5f                   pop edi
// 0049378c  5e                   pop esi
// 0049378d  c3                   ret 
// library boost-1.34.1/libs\signals\src\trackable.cpp (function ?clear@?$list@Vconnection@signals@boost@@V?$allocator@Vconnection@signals@boost@@@std@@@std@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/trackable.cpp
