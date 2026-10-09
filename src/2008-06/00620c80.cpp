// roc 2008-06 00620c80  unit: RBX::Lua::VThreadRef::?$sp_counted_impl_p  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00620c80
//
// 00620c80  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00620c84  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00620c88  56                   push esi
// 00620c89  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00620c8d  3bce                 cmp ecx, esi
// 00620c8f  7436                 je 0x620cc7
// 00620c91  57                   push edi
// 00620c92  85c0                 test eax, eax
// 00620c94  7426                 je 0x620cbc
// 00620c96  8b11                 mov edx, dword ptr [ecx]
// 00620c98  8910                 mov dword ptr [eax], edx
// 00620c9a  8b5104               mov edx, dword ptr [ecx + 4]
// 00620c9d  895004               mov dword ptr [eax + 4], edx
// 00620ca0  85d2                 test edx, edx
// 00620ca2  740c                 je 0x620cb0
// 00620ca4  83c204               add edx, 4
// 00620ca7  bf01000000           mov edi, 1
// 00620cac  f00fc13a             lock xadd dword ptr [edx], edi
// 00620cb0  dd4108               fld qword ptr [ecx + 8]
// 00620cb3  dd5808               fstp qword ptr [eax + 8]
// 00620cb6  dd4110               fld qword ptr [ecx + 0x10]
// 00620cb9  dd5810               fstp qword ptr [eax + 0x10]
// 00620cbc  83c118               add ecx, 0x18
// 00620cbf  83c018               add eax, 0x18
// 00620cc2  3bce                 cmp ecx, esi
// 00620cc4  75cc                 jne 0x620c92
// 00620cc6  5f                   pop edi
// 00620cc7  5e                   pop esi
// 00620cc8  c3                   ret 
// library openrbx-client/App\script\ScriptEvent.cpp (function ??$_Uninit_copy@PAUWaitingThread@YieldingThreads@Lua@RBX@@PAU1234@V?$allocator@UWaitingThread@YieldingThreads@Lua@RBX@@@std@@@std@@YAPAUWaitingThread@YieldingThreads@Lua@RBX@@PAU1234@00AAV?$allocator@UWaitingThread@YieldingThreads@Lua@RBX@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/ScriptEvent.cpp
