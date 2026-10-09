// roc 2009-12 00798900  unit: lua_exception  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00798900
//
// 00798900  56                   push esi
// 00798901  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00798905  85f6                 test esi, esi
// 00798907  763c                 jbe 0x798945
// 00798909  8b542410             mov edx, dword ptr [esp + 0x10]
// 0079890d  8b442408             mov eax, dword ptr [esp + 8]
// 00798911  57                   push edi
// 00798912  85c0                 test eax, eax
// 00798914  7426                 je 0x79893c
// 00798916  8b0a                 mov ecx, dword ptr [edx]
// 00798918  8908                 mov dword ptr [eax], ecx
// 0079891a  8b4a04               mov ecx, dword ptr [edx + 4]
// 0079891d  894804               mov dword ptr [eax + 4], ecx
// 00798920  85c9                 test ecx, ecx
// 00798922  740c                 je 0x798930
// 00798924  83c104               add ecx, 4
// 00798927  bf01000000           mov edi, 1
// 0079892c  f00fc139             lock xadd dword ptr [ecx], edi
// 00798930  dd4208               fld qword ptr [edx + 8]
// 00798933  dd5808               fstp qword ptr [eax + 8]
// 00798936  dd4210               fld qword ptr [edx + 0x10]
// 00798939  dd5810               fstp qword ptr [eax + 0x10]
// 0079893c  4e                   dec esi
// 0079893d  83c018               add eax, 0x18
// 00798940  85f6                 test esi, esi
// 00798942  77ce                 ja 0x798912
// 00798944  5f                   pop edi
// 00798945  5e                   pop esi
// 00798946  c3                   ret 
// library openrbx-client/App\script\ScriptEvent.cpp (function ??$_Uninit_fill_n@PAUWaitingThread@YieldingThreads@Lua@RBX@@IU1234@V?$allocator@UWaitingThread@YieldingThreads@Lua@RBX@@@std@@@std@@YAXPAUWaitingThread@YieldingThreads@Lua@RBX@@IABU1234@AAV?$allocator@UWaitingThread@YieldingThreads@Lua@RBX@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/ScriptEvent.cpp
