// roc 2009-06 006c1e70  unit: RBX::Lua::VThreadRef::?$sp_counted_impl_p  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c1e70
//
// 006c1e70  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006c1e74  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006c1e78  56                   push esi
// 006c1e79  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006c1e7d  3bce                 cmp ecx, esi
// 006c1e7f  7436                 je 0x6c1eb7
// 006c1e81  57                   push edi
// 006c1e82  85c0                 test eax, eax
// 006c1e84  7426                 je 0x6c1eac
// 006c1e86  8b11                 mov edx, dword ptr [ecx]
// 006c1e88  8910                 mov dword ptr [eax], edx
// 006c1e8a  8b5104               mov edx, dword ptr [ecx + 4]
// 006c1e8d  895004               mov dword ptr [eax + 4], edx
// 006c1e90  85d2                 test edx, edx
// 006c1e92  740c                 je 0x6c1ea0
// 006c1e94  83c204               add edx, 4
// 006c1e97  bf01000000           mov edi, 1
// 006c1e9c  f00fc13a             lock xadd dword ptr [edx], edi
// 006c1ea0  dd4108               fld qword ptr [ecx + 8]
// 006c1ea3  dd5808               fstp qword ptr [eax + 8]
// 006c1ea6  dd4110               fld qword ptr [ecx + 0x10]
// 006c1ea9  dd5810               fstp qword ptr [eax + 0x10]
// 006c1eac  83c118               add ecx, 0x18
// 006c1eaf  83c018               add eax, 0x18
// 006c1eb2  3bce                 cmp ecx, esi
// 006c1eb4  75cc                 jne 0x6c1e82
// 006c1eb6  5f                   pop edi
// 006c1eb7  5e                   pop esi
// 006c1eb8  c3                   ret 
// library openrbx-client/App\script\ScriptEvent.cpp (function ??$_Uninit_copy@PAUWaitingThread@YieldingThreads@Lua@RBX@@PAU1234@V?$allocator@UWaitingThread@YieldingThreads@Lua@RBX@@@std@@@std@@YAPAUWaitingThread@YieldingThreads@Lua@RBX@@PAU1234@00AAV?$allocator@UWaitingThread@YieldingThreads@Lua@RBX@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/ScriptEvent.cpp
