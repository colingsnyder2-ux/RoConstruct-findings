// roc 2010-06 006112a0  unit: RBX::VScriptContext::?$FactoryProduct  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006112a0
//
// 006112a0  53                   push ebx
// 006112a1  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 006112a5  57                   push edi
// 006112a6  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006112aa  3bfb                 cmp edi, ebx
// 006112ac  743b                 je 0x6112e9
// 006112ae  56                   push esi
// 006112af  90                   nop 
// 006112b0  8b7704               mov esi, dword ptr [edi + 4]
// 006112b3  85f6                 test esi, esi
// 006112b5  742a                 je 0x6112e1
// 006112b7  8d4604               lea eax, [esi + 4]
// 006112ba  83c9ff               or ecx, 0xffffffff
// 006112bd  f00fc108             lock xadd dword ptr [eax], ecx
// 006112c1  751e                 jne 0x6112e1
// 006112c3  8b16                 mov edx, dword ptr [esi]
// 006112c5  8b4204               mov eax, dword ptr [edx + 4]
// 006112c8  8bce                 mov ecx, esi
// 006112ca  ffd0                 call eax
// 006112cc  8d4e08               lea ecx, [esi + 8]
// 006112cf  83caff               or edx, 0xffffffff
// 006112d2  f00fc111             lock xadd dword ptr [ecx], edx
// 006112d6  7509                 jne 0x6112e1
// 006112d8  8b06                 mov eax, dword ptr [esi]
// 006112da  8b5008               mov edx, dword ptr [eax + 8]
// 006112dd  8bce                 mov ecx, esi
// 006112df  ffd2                 call edx
// 006112e1  83c718               add edi, 0x18
// 006112e4  3bfb                 cmp edi, ebx
// 006112e6  75c8                 jne 0x6112b0
// 006112e8  5e                   pop esi
// 006112e9  5f                   pop edi
// 006112ea  5b                   pop ebx
// 006112eb  c3                   ret 
// library openrbx-client/App\script\ScriptEvent.cpp (function ??$_Destroy_range@V?$allocator@UWaitingThread@YieldingThreads@Lua@RBX@@@std@@@std@@YAXPAUWaitingThread@YieldingThreads@Lua@RBX@@0AAV?$allocator@UWaitingThread@YieldingThreads@Lua@RBX@@@0@U_Nonscalar_ptr_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/ScriptEvent.cpp
