// roc 2008-06 00556500  unit: RBX::VRunService::?$BoundFuncDesc  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00556500
//
// 00556500  d944240c             fld dword ptr [esp + 0xc]
// 00556504  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00556508  83ec08               sub esp, 8
// 0055650b  d95c2404             fstp dword ptr [esp + 4]
// 0055650f  d9442410             fld dword ptr [esp + 0x10]
// 00556513  d91c24               fstp dword ptr [esp]
// 00556516  e8e5fdffff           call 0x556300
// 0055651b  c3                   ret 
// library openrbx-client/App\util\RunStateOwner.cpp (function ?invoke@?$void_function_obj_invoker2@VGenericSlotAdapter@?$SignalDescImpl@$01$$A6AXMM@Z@Reflection@RBX@@XMM@function@detail@boost@@SAXAATfunction_buffer@234@MM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/RunStateOwner.cpp
