// roc 2009-06 006c1fb0  unit: RBX::Lua::VThreadRef::?$sp_counted_impl_p  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c1fb0
//
// 006c1fb0  56                   push esi
// 006c1fb1  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006c1fb5  85f6                 test esi, esi
// 006c1fb7  763c                 jbe 0x6c1ff5
// 006c1fb9  8b542410             mov edx, dword ptr [esp + 0x10]
// 006c1fbd  8b442408             mov eax, dword ptr [esp + 8]
// 006c1fc1  57                   push edi
// 006c1fc2  85c0                 test eax, eax
// 006c1fc4  7426                 je 0x6c1fec
// 006c1fc6  8b0a                 mov ecx, dword ptr [edx]
// 006c1fc8  8908                 mov dword ptr [eax], ecx
// 006c1fca  8b4a04               mov ecx, dword ptr [edx + 4]
// 006c1fcd  894804               mov dword ptr [eax + 4], ecx
// 006c1fd0  85c9                 test ecx, ecx
// 006c1fd2  740c                 je 0x6c1fe0
// 006c1fd4  83c104               add ecx, 4
// 006c1fd7  bf01000000           mov edi, 1
// 006c1fdc  f00fc139             lock xadd dword ptr [ecx], edi
// 006c1fe0  dd4208               fld qword ptr [edx + 8]
// 006c1fe3  dd5808               fstp qword ptr [eax + 8]
// 006c1fe6  dd4210               fld qword ptr [edx + 0x10]
// 006c1fe9  dd5810               fstp qword ptr [eax + 0x10]
// 006c1fec  4e                   dec esi
// 006c1fed  83c018               add eax, 0x18
// 006c1ff0  85f6                 test esi, esi
// 006c1ff2  77ce                 ja 0x6c1fc2
// 006c1ff4  5f                   pop edi
// 006c1ff5  5e                   pop esi
// 006c1ff6  c3                   ret 
// library openrbx-client/App\script\ScriptEvent.cpp (function ??$_Uninit_fill_n@PAUWaitingThread@YieldingThreads@Lua@RBX@@IU1234@V?$allocator@UWaitingThread@YieldingThreads@Lua@RBX@@@std@@@std@@YAXPAUWaitingThread@YieldingThreads@Lua@RBX@@IABU1234@AAV?$allocator@UWaitingThread@YieldingThreads@Lua@RBX@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/ScriptEvent.cpp
