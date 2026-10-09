// roc 2008-06 00499bc0  unit: RBX::Network::VPlayers::?$SignalDesc  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00499bc0
//
// 00499bc0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00499bc4  83f803               cmp eax, 3
// 00499bc7  741e                 je 0x499be7
// 00499bc9  8b542408             mov edx, dword ptr [esp + 8]
// 00499bcd  c644240c00           mov byte ptr [esp + 0xc], 0
// 00499bd2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00499bd6  51                   push ecx
// 00499bd7  50                   push eax
// 00499bd8  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00499bdc  52                   push edx
// 00499bdd  50                   push eax
// 00499bde  e8cdfdffff           call 0x4999b0
// 00499be3  83c410               add esp, 0x10
// 00499be6  c3                   ret 
// 00499be7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00499beb  c701b87f9300         mov dword ptr [ecx], 0x937fb8
// 00499bf1  c3                   ret 
// library openrbx-client/App\v8tree\Instance.cpp (function ?manage@?$functor_manager@VGenericSlotAdapter@?$SignalDescImpl@$00$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@Z@Reflection@RBX@@V?$allocator@X@std@@@function@detail@boost@@SAXABTfunction_buffer@234@AAT5234@W4functor_manager_operation_type@234@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Instance.cpp
