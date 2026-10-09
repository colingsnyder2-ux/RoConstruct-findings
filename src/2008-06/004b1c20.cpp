// roc 2008-06 004b1c20  unit: RBX::Network::VMarker::?$SignalDesc  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b1c20
//
// 004b1c20  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004b1c24  83f803               cmp eax, 3
// 004b1c27  741e                 je 0x4b1c47
// 004b1c29  8b542408             mov edx, dword ptr [esp + 8]
// 004b1c2d  c644240c00           mov byte ptr [esp + 0xc], 0
// 004b1c32  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004b1c36  51                   push ecx
// 004b1c37  50                   push eax
// 004b1c38  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004b1c3c  52                   push edx
// 004b1c3d  50                   push eax
// 004b1c3e  e8cdfdffff           call 0x4b1a10
// 004b1c43  83c410               add esp, 0x10
// 004b1c46  c3                   ret 
// 004b1c47  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004b1c4b  c70190b59300         mov dword ptr [ecx], 0x93b590
// 004b1c51  c3                   ret 
// library openrbx-client/App\humanoid\Humanoid.cpp (function ?manage@?$functor_manager@VGenericSlotAdapter@?$SignalDescImpl@$0A@$$A6AXXZ@Reflection@RBX@@V?$allocator@X@std@@@function@detail@boost@@SAXABTfunction_buffer@234@AAT5234@W4functor_manager_operation_type@234@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/humanoid/Humanoid.cpp
