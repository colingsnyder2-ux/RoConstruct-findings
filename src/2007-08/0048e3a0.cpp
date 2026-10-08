// roc 2007-08 0048e3a0  unit: RBX::Network::VPlayer::?$RefPropDescriptor  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0048e3a0
//
// 0048e3a0  d9442408             fld dword ptr [esp + 8]
// 0048e3a4  51                   push ecx
// 0048e3a5  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0048e3a9  d91c24               fstp dword ptr [esp]
// 0048e3ac  e8dff0ffff           call 0x48d490
// 0048e3b1  c3                   ret 
// library openrbx-client/App\util\RunStateOwner.cpp (function ?invoke@?$void_function_obj_invoker1@VGenericSlotAdapter@?$SignalDescImpl@$00$$A6AXM@Z@Reflection@RBX@@XM@function@detail@boost@@SAXAATfunction_buffer@234@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/RunStateOwner.cpp
