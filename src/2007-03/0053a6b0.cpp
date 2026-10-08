// roc 2007-03 0053a6b0  unit: seg_00530000  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0053a6b0
//
// 0053a6b0  53                   push ebx
// 0053a6b1  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0053a6b5  57                   push edi
// 0053a6b6  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0053a6ba  3bfb                 cmp edi, ebx
// 0053a6bc  743b                 je 0x53a6f9
// 0053a6be  56                   push esi
// 0053a6bf  90                   nop 
// 0053a6c0  8b7704               mov esi, dword ptr [edi + 4]
// 0053a6c3  85f6                 test esi, esi
// 0053a6c5  742a                 je 0x53a6f1
// 0053a6c7  8d4604               lea eax, [esi + 4]
// 0053a6ca  83c9ff               or ecx, 0xffffffff
// 0053a6cd  f00fc108             lock xadd dword ptr [eax], ecx
// 0053a6d1  751e                 jne 0x53a6f1
// 0053a6d3  8b16                 mov edx, dword ptr [esi]
// 0053a6d5  8b4204               mov eax, dword ptr [edx + 4]
// 0053a6d8  8bce                 mov ecx, esi
// 0053a6da  ffd0                 call eax
// 0053a6dc  8d4e08               lea ecx, [esi + 8]
// 0053a6df  83caff               or edx, 0xffffffff
// 0053a6e2  f00fc111             lock xadd dword ptr [ecx], edx
// 0053a6e6  7509                 jne 0x53a6f1
// 0053a6e8  8b06                 mov eax, dword ptr [esi]
// 0053a6ea  8b5008               mov edx, dword ptr [eax + 8]
// 0053a6ed  8bce                 mov ecx, esi
// 0053a6ef  ffd2                 call edx
// 0053a6f1  83c710               add edi, 0x10
// 0053a6f4  3bfb                 cmp edi, ebx
// 0053a6f6  75c8                 jne 0x53a6c0
// 0053a6f8  5e                   pop esi
// 0053a6f9  5f                   pop edi
// 0053a6fa  5b                   pop ebx
// 0053a6fb  c3                   ret 
// library rbxgs/script\ScriptEvent.cpp (function ??$_Destroy_range@V?$allocator@UWaitingThread@YieldingThreads@Lua@RBX@@@std@@@std@@YAXPAUWaitingThread@YieldingThreads@Lua@RBX@@0AAV?$allocator@UWaitingThread@YieldingThreads@Lua@RBX@@@0@U_Nonscalar_ptr_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptEvent.cpp
