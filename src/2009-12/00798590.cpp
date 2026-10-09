// roc 2009-12 00798590  unit: lua_exception  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00798590
//
// 00798590  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00798594  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00798598  56                   push esi
// 00798599  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0079859d  3bce                 cmp ecx, esi
// 0079859f  7436                 je 0x7985d7
// 007985a1  57                   push edi
// 007985a2  85c0                 test eax, eax
// 007985a4  7426                 je 0x7985cc
// 007985a6  8b11                 mov edx, dword ptr [ecx]
// 007985a8  8910                 mov dword ptr [eax], edx
// 007985aa  8b5104               mov edx, dword ptr [ecx + 4]
// 007985ad  895004               mov dword ptr [eax + 4], edx
// 007985b0  85d2                 test edx, edx
// 007985b2  740c                 je 0x7985c0
// 007985b4  83c204               add edx, 4
// 007985b7  bf01000000           mov edi, 1
// 007985bc  f00fc13a             lock xadd dword ptr [edx], edi
// 007985c0  dd4108               fld qword ptr [ecx + 8]
// 007985c3  dd5808               fstp qword ptr [eax + 8]
// 007985c6  dd4110               fld qword ptr [ecx + 0x10]
// 007985c9  dd5810               fstp qword ptr [eax + 0x10]
// 007985cc  83c118               add ecx, 0x18
// 007985cf  83c018               add eax, 0x18
// 007985d2  3bce                 cmp ecx, esi
// 007985d4  75cc                 jne 0x7985a2
// 007985d6  5f                   pop edi
// 007985d7  5e                   pop esi
// 007985d8  c3                   ret 
// library openrbx-client/App\script\ScriptEvent.cpp (function ??$_Uninit_copy@PAUWaitingThread@YieldingThreads@Lua@RBX@@PAU1234@V?$allocator@UWaitingThread@YieldingThreads@Lua@RBX@@@std@@@std@@YAPAUWaitingThread@YieldingThreads@Lua@RBX@@PAU1234@00AAV?$allocator@UWaitingThread@YieldingThreads@Lua@RBX@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/ScriptEvent.cpp
