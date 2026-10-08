// from server: 100% by auto
// roc 2012-06 00878eb0  unit: RBX::VInstance::?$NonFactoryProduct  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00878eb0
//
// 00878eb0  53                   push ebx
// 00878eb1  56                   push esi
// 00878eb2  8bf1                 mov esi, ecx
// 00878eb4  8b4604               mov eax, dword ptr [esi + 4]
// 00878eb7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00878ebb  57                   push edi
// 00878ebc  8b38                 mov edi, dword ptr [eax]
// 00878ebe  8b5704               mov edx, dword ptr [edi + 4]
// 00878ec1  51                   push ecx
// 00878ec2  52                   push edx
// 00878ec3  57                   push edi
// 00878ec4  8bce                 mov ecx, esi
// 00878ec6  e8250afeff           call 0x8598f0
// 00878ecb  6a01                 push 1
// 00878ecd  8bce                 mov ecx, esi
// 00878ecf  8bd8                 mov ebx, eax
// 00878ed1  e85a0afeff           call 0x859930
// 00878ed6  895f04               mov dword ptr [edi + 4], ebx
// 00878ed9  8b4304               mov eax, dword ptr [ebx + 4]
// 00878edc  5f                   pop edi
// 00878edd  5e                   pop esi
// 00878ede  8918                 mov dword ptr [eax], ebx
// 00878ee0  5b                   pop ebx
// 00878ee1  c20400               ret 4
// library boost-1.34.1/libs\signals\src\named_slot_map.cpp (function ?push_front@?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@QAEXABUconnection_slot_pair@detail@signals@boost@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/named_slot_map.cpp
