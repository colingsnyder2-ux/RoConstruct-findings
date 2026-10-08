// roc 2007-08 005c4da0  unit: RBX::Lua::VThreadRef::?$sp_counted_impl_p  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c4da0
//
// 005c4da0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005c4da4  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005c4da8  56                   push esi
// 005c4da9  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005c4dad  3bce                 cmp ecx, esi
// 005c4daf  7436                 je 0x5c4de7
// 005c4db1  57                   push edi
// 005c4db2  85c0                 test eax, eax
// 005c4db4  7426                 je 0x5c4ddc
// 005c4db6  8b11                 mov edx, dword ptr [ecx]
// 005c4db8  8910                 mov dword ptr [eax], edx
// 005c4dba  8b5104               mov edx, dword ptr [ecx + 4]
// 005c4dbd  85d2                 test edx, edx
// 005c4dbf  895004               mov dword ptr [eax + 4], edx
// 005c4dc2  740c                 je 0x5c4dd0
// 005c4dc4  83c204               add edx, 4
// 005c4dc7  bf01000000           mov edi, 1
// 005c4dcc  f00fc13a             lock xadd dword ptr [edx], edi
// 005c4dd0  d94108               fld dword ptr [ecx + 8]
// 005c4dd3  d95808               fstp dword ptr [eax + 8]
// 005c4dd6  d9410c               fld dword ptr [ecx + 0xc]
// 005c4dd9  d9580c               fstp dword ptr [eax + 0xc]
// 005c4ddc  83c110               add ecx, 0x10
// 005c4ddf  83c010               add eax, 0x10
// 005c4de2  3bce                 cmp ecx, esi
// 005c4de4  75cc                 jne 0x5c4db2
// 005c4de6  5f                   pop edi
// 005c4de7  5e                   pop esi
// 005c4de8  c3                   ret 
// library rbxgs/script\ScriptEvent.cpp (function ??$_Uninit_copy@PBUWaitingThread@YieldingThreads@Lua@RBX@@PAU1234@V?$allocator@UWaitingThread@YieldingThreads@Lua@RBX@@@std@@@std@@YAPAUWaitingThread@YieldingThreads@Lua@RBX@@PBU1234@0PAU1234@AAV?$allocator@UWaitingThread@YieldingThreads@Lua@RBX@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptEvent.cpp
