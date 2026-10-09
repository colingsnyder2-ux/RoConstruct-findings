// roc 2007-03 00532990  unit: seg_00530000  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00532990
//
// 00532990  d9442408             fld dword ptr [esp + 8]
// 00532994  51                   push ecx
// 00532995  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00532999  d91c24               fstp dword ptr [esp]
// 0053299c  e8aff9ffff           call 0x532350
// 005329a1  c3                   ret 
// library openrbx-client/App\util\RunStateOwner.cpp (function ?invoke@?$void_function_obj_invoker1@VGenericSlotAdapter@?$SignalDescImpl@$00$$A6AXM@Z@Reflection@RBX@@XM@function@detail@boost@@SAXAATfunction_buffer@234@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/RunStateOwner.cpp
