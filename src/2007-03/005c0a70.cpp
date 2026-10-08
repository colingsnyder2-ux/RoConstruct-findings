// roc 2007-03 005c0a70  unit: seg_005c0000  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005c0a70
//
// 005c0a70  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005c0a74  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005c0a78  56                   push esi
// 005c0a79  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005c0a7d  3bce                 cmp ecx, esi
// 005c0a7f  7436                 je 0x5c0ab7
// 005c0a81  57                   push edi
// 005c0a82  85c0                 test eax, eax
// 005c0a84  7426                 je 0x5c0aac
// 005c0a86  8b11                 mov edx, dword ptr [ecx]
// 005c0a88  8910                 mov dword ptr [eax], edx
// 005c0a8a  8b5104               mov edx, dword ptr [ecx + 4]
// 005c0a8d  85d2                 test edx, edx
// 005c0a8f  895004               mov dword ptr [eax + 4], edx
// 005c0a92  740c                 je 0x5c0aa0
// 005c0a94  83c204               add edx, 4
// 005c0a97  bf01000000           mov edi, 1
// 005c0a9c  f00fc13a             lock xadd dword ptr [edx], edi
// 005c0aa0  d94108               fld dword ptr [ecx + 8]
// 005c0aa3  d95808               fstp dword ptr [eax + 8]
// 005c0aa6  d9410c               fld dword ptr [ecx + 0xc]
// 005c0aa9  d9580c               fstp dword ptr [eax + 0xc]
// 005c0aac  83c110               add ecx, 0x10
// 005c0aaf  83c010               add eax, 0x10
// 005c0ab2  3bce                 cmp ecx, esi
// 005c0ab4  75cc                 jne 0x5c0a82
// 005c0ab6  5f                   pop edi
// 005c0ab7  5e                   pop esi
// 005c0ab8  c3                   ret 
// library rbxgs/script\ScriptEvent.cpp (function ??$_Uninit_copy@PBUWaitingThread@YieldingThreads@Lua@RBX@@PAU1234@V?$allocator@UWaitingThread@YieldingThreads@Lua@RBX@@@std@@@std@@YAPAUWaitingThread@YieldingThreads@Lua@RBX@@PBU1234@0PAU1234@AAV?$allocator@UWaitingThread@YieldingThreads@Lua@RBX@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptEvent.cpp
