// roc 2007-03 005316b0  unit: seg_00530000  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005316b0
//
// 005316b0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005316b4  8b5110               mov edx, dword ptr [ecx + 0x10]
// 005316b7  56                   push esi
// 005316b8  83ec08               sub esp, 8
// 005316bb  8d4108               lea eax, [ecx + 8]
// 005316be  8bf4                 mov esi, esp
// 005316c0  8916                 mov dword ptr [esi], edx
// 005316c2  8b500c               mov edx, dword ptr [eax + 0xc]
// 005316c5  85d2                 test edx, edx
// 005316c7  89642410             mov dword ptr [esp + 0x10], esp
// 005316cb  895604               mov dword ptr [esi + 4], edx
// 005316ce  740c                 je 0x5316dc
// 005316d0  83c204               add edx, 4
// 005316d3  be01000000           mov esi, 1
// 005316d8  f00fc132             lock xadd dword ptr [edx], esi
// 005316dc  50                   push eax
// 005316dd  e8eef0ffff           call 0x5307d0
// 005316e2  5e                   pop esi
// 005316e3  c3                   ret 
// library rbxgs/util\RunStateOwner.cpp (function ?invoke@?$void_function_obj_invoker0@V?$bind_t@XV?$mf1@XVRunService@RBX@@V?$shared_ptr@VDataModel@RBX@@@boost@@@_mfi@boost@@V?$list2@V?$value@V?$shared_ptr@VRunService@RBX@@@boost@@@_bi@boost@@V?$value@V?$shared_ptr@VDataModel@RBX@@@boost@@@23@@_bi@3@@_bi@boost@@X@function@detail@boost@@SAXAATfunction_buffer@234@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
