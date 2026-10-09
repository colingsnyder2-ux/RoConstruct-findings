// roc 2010-06 00731160  unit: lua_exception  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00731160
//
// 00731160  56                   push esi
// 00731161  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00731165  85f6                 test esi, esi
// 00731167  763c                 jbe 0x7311a5
// 00731169  8b542410             mov edx, dword ptr [esp + 0x10]
// 0073116d  8b442408             mov eax, dword ptr [esp + 8]
// 00731171  57                   push edi
// 00731172  85c0                 test eax, eax
// 00731174  7426                 je 0x73119c
// 00731176  8b0a                 mov ecx, dword ptr [edx]
// 00731178  8908                 mov dword ptr [eax], ecx
// 0073117a  8b4a04               mov ecx, dword ptr [edx + 4]
// 0073117d  894804               mov dword ptr [eax + 4], ecx
// 00731180  85c9                 test ecx, ecx
// 00731182  740c                 je 0x731190
// 00731184  83c104               add ecx, 4
// 00731187  bf01000000           mov edi, 1
// 0073118c  f00fc139             lock xadd dword ptr [ecx], edi
// 00731190  dd4208               fld qword ptr [edx + 8]
// 00731193  dd5808               fstp qword ptr [eax + 8]
// 00731196  dd4210               fld qword ptr [edx + 0x10]
// 00731199  dd5810               fstp qword ptr [eax + 0x10]
// 0073119c  4e                   dec esi
// 0073119d  83c018               add eax, 0x18
// 007311a0  85f6                 test esi, esi
// 007311a2  77ce                 ja 0x731172
// 007311a4  5f                   pop edi
// 007311a5  5e                   pop esi
// 007311a6  c3                   ret 
// library openrbx-client/App\script\ScriptEvent.cpp (function ??$_Uninit_fill_n@PAUWaitingThread@YieldingThreads@Lua@RBX@@IU1234@V?$allocator@UWaitingThread@YieldingThreads@Lua@RBX@@@std@@@std@@YAXPAUWaitingThread@YieldingThreads@Lua@RBX@@IABU1234@AAV?$allocator@UWaitingThread@YieldingThreads@Lua@RBX@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/ScriptEvent.cpp
