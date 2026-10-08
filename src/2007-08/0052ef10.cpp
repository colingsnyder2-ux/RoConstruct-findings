// roc 2007-08 0052ef10  unit: RBX::VRunService::?$FactoryProduct  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0052ef10
//
// 0052ef10  d944240c             fld dword ptr [esp + 0xc]
// 0052ef14  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0052ef18  83ec08               sub esp, 8
// 0052ef1b  d95c2404             fstp dword ptr [esp + 4]
// 0052ef1f  d9442410             fld dword ptr [esp + 0x10]
// 0052ef23  d91c24               fstp dword ptr [esp]
// 0052ef26  e835fbffff           call 0x52ea60
// 0052ef2b  c3                   ret 
// library openrbx-client/App\util\RunStateOwner.cpp (function ?invoke@?$void_function_obj_invoker2@VGenericSlotAdapter@?$SignalDescImpl@$01$$A6AXMM@Z@Reflection@RBX@@XMM@function@detail@boost@@SAXAATfunction_buffer@234@MM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/RunStateOwner.cpp
