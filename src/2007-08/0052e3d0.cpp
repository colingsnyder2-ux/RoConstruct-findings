// roc 2007-08 0052e3d0  unit: RBX::RunService  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0052e3d0
//
// 0052e3d0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0052e3d4  8b5110               mov edx, dword ptr [ecx + 0x10]
// 0052e3d7  56                   push esi
// 0052e3d8  83ec08               sub esp, 8
// 0052e3db  8d4108               lea eax, [ecx + 8]
// 0052e3de  8bf4                 mov esi, esp
// 0052e3e0  8916                 mov dword ptr [esi], edx
// 0052e3e2  8b500c               mov edx, dword ptr [eax + 0xc]
// 0052e3e5  85d2                 test edx, edx
// 0052e3e7  89642410             mov dword ptr [esp + 0x10], esp
// 0052e3eb  895604               mov dword ptr [esi + 4], edx
// 0052e3ee  740c                 je 0x52e3fc
// 0052e3f0  83c204               add edx, 4
// 0052e3f3  be01000000           mov esi, 1
// 0052e3f8  f00fc132             lock xadd dword ptr [edx], esi
// 0052e3fc  50                   push eax
// 0052e3fd  e8def2ffff           call 0x52d6e0
// 0052e402  5e                   pop esi
// 0052e403  c3                   ret 
// library rbxgs/util\RunStateOwner.cpp (function ?invoke@?$void_function_obj_invoker0@V?$bind_t@XV?$mf1@XVRunService@RBX@@V?$shared_ptr@VDataModel@RBX@@@boost@@@_mfi@boost@@V?$list2@V?$value@V?$shared_ptr@VRunService@RBX@@@boost@@@_bi@boost@@V?$value@V?$shared_ptr@VDataModel@RBX@@@boost@@@23@@_bi@3@@_bi@boost@@X@function@detail@boost@@SAXAATfunction_buffer@234@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
