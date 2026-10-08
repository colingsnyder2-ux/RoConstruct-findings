// roc 2008-06 00555780  unit: RBX::Reflection::Z::$$A6AXMM::?$TSignalDesc::TSignalInstance  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00555780
//
// 00555780  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00555784  8b5110               mov edx, dword ptr [ecx + 0x10]
// 00555787  56                   push esi
// 00555788  83ec08               sub esp, 8
// 0055578b  8d4108               lea eax, [ecx + 8]
// 0055578e  8bf4                 mov esi, esp
// 00555790  8916                 mov dword ptr [esi], edx
// 00555792  8b500c               mov edx, dword ptr [eax + 0xc]
// 00555795  89642410             mov dword ptr [esp + 0x10], esp
// 00555799  895604               mov dword ptr [esi + 4], edx
// 0055579c  85d2                 test edx, edx
// 0055579e  740c                 je 0x5557ac
// 005557a0  83c204               add edx, 4
// 005557a3  be01000000           mov esi, 1
// 005557a8  f00fc132             lock xadd dword ptr [edx], esi
// 005557ac  50                   push eax
// 005557ad  e87e32eeff           call 0x438a30
// 005557b2  5e                   pop esi
// 005557b3  c3                   ret 
// library rbxgs/util\RunStateOwner.cpp (function ?invoke@?$void_function_obj_invoker0@V?$bind_t@XV?$mf1@XVRunService@RBX@@V?$shared_ptr@VDataModel@RBX@@@boost@@@_mfi@boost@@V?$list2@V?$value@V?$shared_ptr@VRunService@RBX@@@boost@@@_bi@boost@@V?$value@V?$shared_ptr@VDataModel@RBX@@@boost@@@23@@_bi@3@@_bi@boost@@X@function@detail@boost@@SAXAATfunction_buffer@234@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
