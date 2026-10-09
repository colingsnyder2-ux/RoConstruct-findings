// roc 2010-06 00730e80  unit: lua_exception  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00730e80
//
// 00730e80  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00730e84  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00730e88  56                   push esi
// 00730e89  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00730e8d  3bce                 cmp ecx, esi
// 00730e8f  7436                 je 0x730ec7
// 00730e91  57                   push edi
// 00730e92  85c0                 test eax, eax
// 00730e94  7426                 je 0x730ebc
// 00730e96  8b11                 mov edx, dword ptr [ecx]
// 00730e98  8910                 mov dword ptr [eax], edx
// 00730e9a  8b5104               mov edx, dword ptr [ecx + 4]
// 00730e9d  895004               mov dword ptr [eax + 4], edx
// 00730ea0  85d2                 test edx, edx
// 00730ea2  740c                 je 0x730eb0
// 00730ea4  83c204               add edx, 4
// 00730ea7  bf01000000           mov edi, 1
// 00730eac  f00fc13a             lock xadd dword ptr [edx], edi
// 00730eb0  dd4108               fld qword ptr [ecx + 8]
// 00730eb3  dd5808               fstp qword ptr [eax + 8]
// 00730eb6  dd4110               fld qword ptr [ecx + 0x10]
// 00730eb9  dd5810               fstp qword ptr [eax + 0x10]
// 00730ebc  83c118               add ecx, 0x18
// 00730ebf  83c018               add eax, 0x18
// 00730ec2  3bce                 cmp ecx, esi
// 00730ec4  75cc                 jne 0x730e92
// 00730ec6  5f                   pop edi
// 00730ec7  5e                   pop esi
// 00730ec8  c3                   ret 
// library openrbx-client/App\script\ScriptEvent.cpp (function ??$_Uninit_copy@PAUWaitingThread@YieldingThreads@Lua@RBX@@PAU1234@V?$allocator@UWaitingThread@YieldingThreads@Lua@RBX@@@std@@@std@@YAPAUWaitingThread@YieldingThreads@Lua@RBX@@PAU1234@00AAV?$allocator@UWaitingThread@YieldingThreads@Lua@RBX@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/ScriptEvent.cpp
