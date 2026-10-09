// roc 2008-06 00620dc0  unit: RBX::Lua::VThreadRef::?$sp_counted_impl_p  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00620dc0
//
// 00620dc0  56                   push esi
// 00620dc1  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00620dc5  85f6                 test esi, esi
// 00620dc7  763c                 jbe 0x620e05
// 00620dc9  8b542410             mov edx, dword ptr [esp + 0x10]
// 00620dcd  8b442408             mov eax, dword ptr [esp + 8]
// 00620dd1  57                   push edi
// 00620dd2  85c0                 test eax, eax
// 00620dd4  7426                 je 0x620dfc
// 00620dd6  8b0a                 mov ecx, dword ptr [edx]
// 00620dd8  8908                 mov dword ptr [eax], ecx
// 00620dda  8b4a04               mov ecx, dword ptr [edx + 4]
// 00620ddd  894804               mov dword ptr [eax + 4], ecx
// 00620de0  85c9                 test ecx, ecx
// 00620de2  740c                 je 0x620df0
// 00620de4  83c104               add ecx, 4
// 00620de7  bf01000000           mov edi, 1
// 00620dec  f00fc139             lock xadd dword ptr [ecx], edi
// 00620df0  dd4208               fld qword ptr [edx + 8]
// 00620df3  dd5808               fstp qword ptr [eax + 8]
// 00620df6  dd4210               fld qword ptr [edx + 0x10]
// 00620df9  dd5810               fstp qword ptr [eax + 0x10]
// 00620dfc  4e                   dec esi
// 00620dfd  83c018               add eax, 0x18
// 00620e00  85f6                 test esi, esi
// 00620e02  77ce                 ja 0x620dd2
// 00620e04  5f                   pop edi
// 00620e05  5e                   pop esi
// 00620e06  c3                   ret 
// library openrbx-client/App\script\ScriptEvent.cpp (function ??$_Uninit_fill_n@PAUWaitingThread@YieldingThreads@Lua@RBX@@IU1234@V?$allocator@UWaitingThread@YieldingThreads@Lua@RBX@@@std@@@std@@YAXPAUWaitingThread@YieldingThreads@Lua@RBX@@IABU1234@AAV?$allocator@UWaitingThread@YieldingThreads@Lua@RBX@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/ScriptEvent.cpp
