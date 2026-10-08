// roc 2007-03 005c0ba0  unit: seg_005c0000  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005c0ba0
//
// 005c0ba0  56                   push esi
// 005c0ba1  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005c0ba5  85f6                 test esi, esi
// 005c0ba7  763e                 jbe 0x5c0be7
// 005c0ba9  8b542410             mov edx, dword ptr [esp + 0x10]
// 005c0bad  8b442408             mov eax, dword ptr [esp + 8]
// 005c0bb1  57                   push edi
// 005c0bb2  85c0                 test eax, eax
// 005c0bb4  7426                 je 0x5c0bdc
// 005c0bb6  8b0a                 mov ecx, dword ptr [edx]
// 005c0bb8  8908                 mov dword ptr [eax], ecx
// 005c0bba  8b4a04               mov ecx, dword ptr [edx + 4]
// 005c0bbd  85c9                 test ecx, ecx
// 005c0bbf  894804               mov dword ptr [eax + 4], ecx
// 005c0bc2  740c                 je 0x5c0bd0
// 005c0bc4  83c104               add ecx, 4
// 005c0bc7  bf01000000           mov edi, 1
// 005c0bcc  f00fc139             lock xadd dword ptr [ecx], edi
// 005c0bd0  d94208               fld dword ptr [edx + 8]
// 005c0bd3  d95808               fstp dword ptr [eax + 8]
// 005c0bd6  d9420c               fld dword ptr [edx + 0xc]
// 005c0bd9  d9580c               fstp dword ptr [eax + 0xc]
// 005c0bdc  83ee01               sub esi, 1
// 005c0bdf  83c010               add eax, 0x10
// 005c0be2  85f6                 test esi, esi
// 005c0be4  77cc                 ja 0x5c0bb2
// 005c0be6  5f                   pop edi
// 005c0be7  5e                   pop esi
// 005c0be8  c3                   ret 
// library rbxgs/script\ScriptEvent.cpp (function ??$_Uninit_fill_n@PAUWaitingThread@YieldingThreads@Lua@RBX@@IU1234@V?$allocator@UWaitingThread@YieldingThreads@Lua@RBX@@@std@@@std@@YAXPAUWaitingThread@YieldingThreads@Lua@RBX@@IABU1234@AAV?$allocator@UWaitingThread@YieldingThreads@Lua@RBX@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptEvent.cpp
