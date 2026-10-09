// roc 2007-03 00532970  unit: seg_00530000  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00532970
//
// 00532970  d944240c             fld dword ptr [esp + 0xc]
// 00532974  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00532978  83ec08               sub esp, 8
// 0053297b  d95c2404             fstp dword ptr [esp + 4]
// 0053297f  d9442410             fld dword ptr [esp + 0x10]
// 00532983  d91c24               fstp dword ptr [esp]
// 00532986  e875f8ffff           call 0x532200
// 0053298b  c3                   ret 
// library openrbx-client/App\util\RunStateOwner.cpp (function ?invoke@?$void_function_obj_invoker2@VGenericSlotAdapter@?$SignalDescImpl@$01$$A6AXMM@Z@Reflection@RBX@@XMM@function@detail@boost@@SAXAATfunction_buffer@234@MM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/RunStateOwner.cpp
