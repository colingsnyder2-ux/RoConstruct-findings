// roc 2007-08 005c4ed0  unit: RBX::Lua::VThreadRef::?$sp_counted_impl_p  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c4ed0
//
// 005c4ed0  56                   push esi
// 005c4ed1  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005c4ed5  85f6                 test esi, esi
// 005c4ed7  763e                 jbe 0x5c4f17
// 005c4ed9  8b542410             mov edx, dword ptr [esp + 0x10]
// 005c4edd  8b442408             mov eax, dword ptr [esp + 8]
// 005c4ee1  57                   push edi
// 005c4ee2  85c0                 test eax, eax
// 005c4ee4  7426                 je 0x5c4f0c
// 005c4ee6  8b0a                 mov ecx, dword ptr [edx]
// 005c4ee8  8908                 mov dword ptr [eax], ecx
// 005c4eea  8b4a04               mov ecx, dword ptr [edx + 4]
// 005c4eed  85c9                 test ecx, ecx
// 005c4eef  894804               mov dword ptr [eax + 4], ecx
// 005c4ef2  740c                 je 0x5c4f00
// 005c4ef4  83c104               add ecx, 4
// 005c4ef7  bf01000000           mov edi, 1
// 005c4efc  f00fc139             lock xadd dword ptr [ecx], edi
// 005c4f00  d94208               fld dword ptr [edx + 8]
// 005c4f03  d95808               fstp dword ptr [eax + 8]
// 005c4f06  d9420c               fld dword ptr [edx + 0xc]
// 005c4f09  d9580c               fstp dword ptr [eax + 0xc]
// 005c4f0c  83ee01               sub esi, 1
// 005c4f0f  83c010               add eax, 0x10
// 005c4f12  85f6                 test esi, esi
// 005c4f14  77cc                 ja 0x5c4ee2
// 005c4f16  5f                   pop edi
// 005c4f17  5e                   pop esi
// 005c4f18  c3                   ret 
// library rbxgs/script\ScriptEvent.cpp (function ??$_Uninit_fill_n@PAUWaitingThread@YieldingThreads@Lua@RBX@@IU1234@V?$allocator@UWaitingThread@YieldingThreads@Lua@RBX@@@std@@@std@@YAXPAUWaitingThread@YieldingThreads@Lua@RBX@@IABU1234@AAV?$allocator@UWaitingThread@YieldingThreads@Lua@RBX@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptEvent.cpp
