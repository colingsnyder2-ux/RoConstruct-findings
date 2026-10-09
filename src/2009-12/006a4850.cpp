// roc 2009-12 006a4850  unit: RBX::VScriptContext::?$FactoryProduct  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006a4850
//
// 006a4850  53                   push ebx
// 006a4851  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 006a4855  57                   push edi
// 006a4856  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006a485a  3bfb                 cmp edi, ebx
// 006a485c  743b                 je 0x6a4899
// 006a485e  56                   push esi
// 006a485f  90                   nop 
// 006a4860  8b7704               mov esi, dword ptr [edi + 4]
// 006a4863  85f6                 test esi, esi
// 006a4865  742a                 je 0x6a4891
// 006a4867  8d4604               lea eax, [esi + 4]
// 006a486a  83c9ff               or ecx, 0xffffffff
// 006a486d  f00fc108             lock xadd dword ptr [eax], ecx
// 006a4871  751e                 jne 0x6a4891
// 006a4873  8b16                 mov edx, dword ptr [esi]
// 006a4875  8b4204               mov eax, dword ptr [edx + 4]
// 006a4878  8bce                 mov ecx, esi
// 006a487a  ffd0                 call eax
// 006a487c  8d4e08               lea ecx, [esi + 8]
// 006a487f  83caff               or edx, 0xffffffff
// 006a4882  f00fc111             lock xadd dword ptr [ecx], edx
// 006a4886  7509                 jne 0x6a4891
// 006a4888  8b06                 mov eax, dword ptr [esi]
// 006a488a  8b5008               mov edx, dword ptr [eax + 8]
// 006a488d  8bce                 mov ecx, esi
// 006a488f  ffd2                 call edx
// 006a4891  83c718               add edi, 0x18
// 006a4894  3bfb                 cmp edi, ebx
// 006a4896  75c8                 jne 0x6a4860
// 006a4898  5e                   pop esi
// 006a4899  5f                   pop edi
// 006a489a  5b                   pop ebx
// 006a489b  c3                   ret 
// library openrbx-client/App\script\ScriptEvent.cpp (function ??$_Destroy_range@V?$allocator@UWaitingThread@YieldingThreads@Lua@RBX@@@std@@@std@@YAXPAUWaitingThread@YieldingThreads@Lua@RBX@@0AAV?$allocator@UWaitingThread@YieldingThreads@Lua@RBX@@@0@U_Nonscalar_ptr_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/ScriptEvent.cpp
