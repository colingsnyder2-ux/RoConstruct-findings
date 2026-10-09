// roc 2008-06 0048e290  unit: RBX::Network::VPlayer::?$SignalDesc  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048e290
//
// 0048e290  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0048e294  83f803               cmp eax, 3
// 0048e297  741e                 je 0x48e2b7
// 0048e299  8b542408             mov edx, dword ptr [esp + 8]
// 0048e29d  c644240c00           mov byte ptr [esp + 0xc], 0
// 0048e2a2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0048e2a6  51                   push ecx
// 0048e2a7  50                   push eax
// 0048e2a8  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0048e2ac  52                   push edx
// 0048e2ad  50                   push eax
// 0048e2ae  e8cdfdffff           call 0x48e080
// 0048e2b3  83c410               add esp, 0x10
// 0048e2b6  c3                   ret 
// 0048e2b7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0048e2bb  c701d05c9300         mov dword ptr [ecx], 0x935cd0
// 0048e2c1  c3                   ret 
// library openrbx-client/App\util\RunStateOwner.cpp (function ?manage@?$functor_manager@VGenericSlotAdapter@?$SignalDescImpl@$00$$A6AXM@Z@Reflection@RBX@@V?$allocator@X@std@@@function@detail@boost@@SAXABTfunction_buffer@234@AAT5234@W4functor_manager_operation_type@234@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/RunStateOwner.cpp
