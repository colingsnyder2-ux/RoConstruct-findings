// roc 2008-06 005aca00  unit: RBX::VScriptContext::?$FactoryProduct  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005aca00
//
// 005aca00  53                   push ebx
// 005aca01  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 005aca05  57                   push edi
// 005aca06  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005aca0a  3bfb                 cmp edi, ebx
// 005aca0c  743b                 je 0x5aca49
// 005aca0e  56                   push esi
// 005aca0f  90                   nop 
// 005aca10  8b7704               mov esi, dword ptr [edi + 4]
// 005aca13  85f6                 test esi, esi
// 005aca15  742a                 je 0x5aca41
// 005aca17  8d4604               lea eax, [esi + 4]
// 005aca1a  83c9ff               or ecx, 0xffffffff
// 005aca1d  f00fc108             lock xadd dword ptr [eax], ecx
// 005aca21  751e                 jne 0x5aca41
// 005aca23  8b16                 mov edx, dword ptr [esi]
// 005aca25  8b4204               mov eax, dword ptr [edx + 4]
// 005aca28  8bce                 mov ecx, esi
// 005aca2a  ffd0                 call eax
// 005aca2c  8d4e08               lea ecx, [esi + 8]
// 005aca2f  83caff               or edx, 0xffffffff
// 005aca32  f00fc111             lock xadd dword ptr [ecx], edx
// 005aca36  7509                 jne 0x5aca41
// 005aca38  8b06                 mov eax, dword ptr [esi]
// 005aca3a  8b5008               mov edx, dword ptr [eax + 8]
// 005aca3d  8bce                 mov ecx, esi
// 005aca3f  ffd2                 call edx
// 005aca41  83c718               add edi, 0x18
// 005aca44  3bfb                 cmp edi, ebx
// 005aca46  75c8                 jne 0x5aca10
// 005aca48  5e                   pop esi
// 005aca49  5f                   pop edi
// 005aca4a  5b                   pop ebx
// 005aca4b  c3                   ret 
// library openrbx-client/App\script\ScriptEvent.cpp (function ??$_Destroy_range@V?$allocator@UWaitingThread@YieldingThreads@Lua@RBX@@@std@@@std@@YAXPAUWaitingThread@YieldingThreads@Lua@RBX@@0AAV?$allocator@UWaitingThread@YieldingThreads@Lua@RBX@@@0@U_Nonscalar_ptr_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/ScriptEvent.cpp
