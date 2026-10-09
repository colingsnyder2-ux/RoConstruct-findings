// roc 2009-06 00637140  unit: RBX::VScriptContext::?$FactoryProduct  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00637140
//
// 00637140  53                   push ebx
// 00637141  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00637145  57                   push edi
// 00637146  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0063714a  3bfb                 cmp edi, ebx
// 0063714c  743b                 je 0x637189
// 0063714e  56                   push esi
// 0063714f  90                   nop 
// 00637150  8b7704               mov esi, dword ptr [edi + 4]
// 00637153  85f6                 test esi, esi
// 00637155  742a                 je 0x637181
// 00637157  8d4604               lea eax, [esi + 4]
// 0063715a  83c9ff               or ecx, 0xffffffff
// 0063715d  f00fc108             lock xadd dword ptr [eax], ecx
// 00637161  751e                 jne 0x637181
// 00637163  8b16                 mov edx, dword ptr [esi]
// 00637165  8b4204               mov eax, dword ptr [edx + 4]
// 00637168  8bce                 mov ecx, esi
// 0063716a  ffd0                 call eax
// 0063716c  8d4e08               lea ecx, [esi + 8]
// 0063716f  83caff               or edx, 0xffffffff
// 00637172  f00fc111             lock xadd dword ptr [ecx], edx
// 00637176  7509                 jne 0x637181
// 00637178  8b06                 mov eax, dword ptr [esi]
// 0063717a  8b5008               mov edx, dword ptr [eax + 8]
// 0063717d  8bce                 mov ecx, esi
// 0063717f  ffd2                 call edx
// 00637181  83c718               add edi, 0x18
// 00637184  3bfb                 cmp edi, ebx
// 00637186  75c8                 jne 0x637150
// 00637188  5e                   pop esi
// 00637189  5f                   pop edi
// 0063718a  5b                   pop ebx
// 0063718b  c3                   ret 
// library openrbx-client/App\script\ScriptEvent.cpp (function ??$_Destroy_range@V?$allocator@UWaitingThread@YieldingThreads@Lua@RBX@@@std@@@std@@YAXPAUWaitingThread@YieldingThreads@Lua@RBX@@0AAV?$allocator@UWaitingThread@YieldingThreads@Lua@RBX@@@0@U_Nonscalar_ptr_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/ScriptEvent.cpp
