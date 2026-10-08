// roc 2007-08 00538ee0  unit: RBX::VScriptContext::?$FactoryProduct  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00538ee0
//
// 00538ee0  53                   push ebx
// 00538ee1  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00538ee5  57                   push edi
// 00538ee6  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00538eea  3bfb                 cmp edi, ebx
// 00538eec  743b                 je 0x538f29
// 00538eee  56                   push esi
// 00538eef  90                   nop 
// 00538ef0  8b7704               mov esi, dword ptr [edi + 4]
// 00538ef3  85f6                 test esi, esi
// 00538ef5  742a                 je 0x538f21
// 00538ef7  8d4604               lea eax, [esi + 4]
// 00538efa  83c9ff               or ecx, 0xffffffff
// 00538efd  f00fc108             lock xadd dword ptr [eax], ecx
// 00538f01  751e                 jne 0x538f21
// 00538f03  8b16                 mov edx, dword ptr [esi]
// 00538f05  8b4204               mov eax, dword ptr [edx + 4]
// 00538f08  8bce                 mov ecx, esi
// 00538f0a  ffd0                 call eax
// 00538f0c  8d4e08               lea ecx, [esi + 8]
// 00538f0f  83caff               or edx, 0xffffffff
// 00538f12  f00fc111             lock xadd dword ptr [ecx], edx
// 00538f16  7509                 jne 0x538f21
// 00538f18  8b06                 mov eax, dword ptr [esi]
// 00538f1a  8b5008               mov edx, dword ptr [eax + 8]
// 00538f1d  8bce                 mov ecx, esi
// 00538f1f  ffd2                 call edx
// 00538f21  83c710               add edi, 0x10
// 00538f24  3bfb                 cmp edi, ebx
// 00538f26  75c8                 jne 0x538ef0
// 00538f28  5e                   pop esi
// 00538f29  5f                   pop edi
// 00538f2a  5b                   pop ebx
// 00538f2b  c3                   ret 
// library rbxgs/script\ScriptEvent.cpp (function ??$_Destroy_range@V?$allocator@UWaitingThread@YieldingThreads@Lua@RBX@@@std@@@std@@YAXPAUWaitingThread@YieldingThreads@Lua@RBX@@0AAV?$allocator@UWaitingThread@YieldingThreads@Lua@RBX@@@0@U_Nonscalar_ptr_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptEvent.cpp
