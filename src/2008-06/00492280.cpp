// roc 2008-06 00492280  unit: RBX::Network::VPlayer::?$SignalDesc  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00492280
//
// 00492280  d9442408             fld dword ptr [esp + 8]
// 00492284  51                   push ecx
// 00492285  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00492289  d91c24               fstp dword ptr [esp]
// 0049228c  e81fefffff           call 0x4911b0
// 00492291  c3                   ret 
// library openrbx-client/App\util\RunStateOwner.cpp (function ?invoke@?$void_function_obj_invoker1@VGenericSlotAdapter@?$SignalDescImpl@$00$$A6AXM@Z@Reflection@RBX@@XM@function@detail@boost@@SAXAATfunction_buffer@234@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/RunStateOwner.cpp
